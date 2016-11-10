#include "Carriage.h"
#include "Pumpkin.h"
#include "PumpkinPatch.h"
#include <iostream>
using namespace std;
/*
* Arrays are used thoughout this code as I kept
* having errors with vectors.
*/

//creates a PumpkinPatch from a vector of pumpkins
PumpkinPatch  PumpkinPatch::Create(size_t n, Pumpkin::Colour c){
  std::vector<Pumpkin*> Patch;  // local vector to store patch of pumpkins
  //puts pumpkins into the vector
  for (size_t j = 0; j<n; j++){
    Patch.push_back(Pumpkin::Create(c));
  }
  //creates a patch using the vector we just created
  return PumpkinPatch(Patch);
}

//patch constructor
PumpkinPatch::PumpkinPatch(std::vector<Pumpkin*> Patch)
//inserts size, creates a new array to hold the pumpkin pointers (it is empty right now), sets the patch to being fully lit or fully carved.
: size_(Patch.size()), pumpkinPatch_(new Pumpkin*[Patch.size()]), carved_(false), light_(false)
{
  //fill the array with the pointers from the vector.
  for (size_t i = 0; i<size_; i++){
    pumpkinPatch_[i] = Patch.at(i);
  }
  //find the beginning and the end for the iterator.
  patchBeginning_ = &(pumpkinPatch_[0]);
  patchEnd_ = &(pumpkinPatch_[size_]);
}

//copy constructor
PumpkinPatch::PumpkinPatch(const PumpkinPatch& pp)
//fills size, creates new empty array, full of lit or carved pumpkins
: size_(pp.size_), pumpkinPatch_(new Pumpkin*[size_]), carved_(pp.carved_), light_(pp.light_)
{
  //for loop to fill the array with new pumpkin pointers that are copies to the other patch
  for (int i = 0; i<size_; i++){
    pumpkinPatch_[i] = Pumpkin::Create(pp[i].colour());
      //if the pumpkin at that point is carved or lit
      if(pp[i].carved()){
        pumpkinPatch_[i]->carve();
      }
      if(pp[i].alight()){
        pumpkinPatch_[i]->light();
      }
  }
  // finds end and begginning of array for the iterator
  patchBeginning_ = &(pumpkinPatch_[0]);
  patchEnd_ = &(pumpkinPatch_[size_]);
}

//Destructor
PumpkinPatch::~PumpkinPatch()
{
  delete [] pumpkinPatch_;
}

// Assignment operator
PumpkinPatch& PumpkinPatch::operator = (const PumpkinPatch& pp){

  delete [] pumpkinPatch_;  //DEletes array
  size_ = pp.size();  //sets the new size
  pumpkinPatch_ = new Pumpkin*[size_];  //creates a new pumpkin array of the same size.
  //fills the array with the new heap-allocated pumpkins that are the same as those in the other array.
  for (size_t i = 0; i<size_; i++){
    pumpkinPatch_[i] = Pumpkin::Create(pp[i].colour());
    if(pp[i].carved()){
      pumpkinPatch_[i]->carve();
    }
    if(pp[i].alight()){
      pumpkinPatch_[i]->light();
    }
  }
  //fills the begginning and end for the iterators
  patchBeginning_ = &pumpkinPatch_[0];
  patchEnd_ = &pumpkinPatch_[size_];
  carved_ = pp.carved_;
  light_ = pp.light_;

  return *this;
}

size_t PumpkinPatch::size()const{
  return size_; // returns size of the patch
}

Pumpkin& PumpkinPatch::operator [] (size_t i){
  return  *pumpkinPatch_[i];  //returns a pointer to the pointer pumpkin in the array.
}

Pumpkin** PumpkinPatch::begin(){
  return patchBeginning_; // returns the double pointer to the beginning of the array.
}

Pumpkin** PumpkinPatch::end(){
  return patchEnd_; // returns the double pointer to the beginning of the array.
}

//lights the entire patch of pumpkins.
size_t PumpkinPatch::light(){
  size_t i = 0; // keep track of lit pumpkins
  for(Pumpkin* p : *this){
    try{
      p->Pumpkin::light(); //light pumpkin
    }catch(PumpkinException message){
      i--;
    }
    i++;
  }
  if (i == size_){
    light_ = true; // keep track if the entire patch is lit
  }
  return i;
}

//carves the entire patch of pumpkins
size_t PumpkinPatch::carve(){
  size_t i = 0;// keep track of carved pumpkins
  for(Pumpkin* p : *this){
    try{
      p->Pumpkin::carve(); // carved pumpkins
    }catch(PumpkinException message){
      i--;
    }
    i++;
  }
  if (i == size_){
    carved_ = true; // keep track if the entire patch is carved
  }
  return i;
}

// make a vector of carriages out of a patch
std::vector<Carriage> PumpkinPatch::makeCarriages(){
  std::vector<Carriage> carriages; // vector to return

  // for every element in vector
  for(Pumpkin* p : *this){
    Carriage c(p->colour()); // create carriage with same colour
    carriages.push_back(c); // put carriage in array
    delete p; // releave heap
  }
  return carriages; // return vector
}

// const version of accesssor operator to solve const / non const issues.
const Pumpkin& PumpkinPatch::operator[] (size_t i) const{
  return *pumpkinPatch_[i];
}
