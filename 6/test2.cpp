#include "Pumpkin.h"
#include "Carriage.h"
#include "date.h"
#include "PumpkinPatch.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include <map>
std::ostream& operator<<(std::ostream& out, const Pumpkin::Colour c);
std::ostream& operator << (std::ostream& os, const Pumpkin& p);
std::ostream& operator << (std::ostream& os, const Carriage& c);

int main(int argc, char * argv[])
{
  unsigned int counter = 0;
  unsigned int catchCounterPass = 0;
  unsigned int catchCounterFail = 0;

  std::cout << " " << std::endl;
  std::cout << "If you don't get full marks, don't get mad.\n" << std::endl;


  std::cout << " " << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << "PUMPKIN CREATE AND CARVED TEST" << std::endl;
  std::cout << "******************************" << std::endl;
  std::cout << " " << std::endl;
  std::cout << " " << std::endl;

  Pumpkin pumpkin1 = *Pumpkin::Create(Pumpkin::Colour::Orange);
  Pumpkin pumpkin2 = *Pumpkin::Create(Pumpkin::Colour::White);
  Pumpkin pumpkin3 = *Pumpkin::Create(Pumpkin::Colour::Blue);
  Pumpkin pumpkin4 = *Pumpkin::Create(Pumpkin::Colour::Teal);

  std::cout << pumpkin1 << std::endl;

  if (pumpkin1.colour()==Pumpkin::Colour::Orange)
  {
    std::cout << " " << std::endl;
    std::cout << "ORANGE CREATE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "ORANGE CREATE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  if (pumpkin1.carved()==false)
  {
    std::cout << " " << std::endl;
    std::cout << "ORANGE CARVED TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "ORANGE CARVED TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }



  std::cout << pumpkin2 << std::endl;

  if (pumpkin2.colour()==Pumpkin::Colour::White)
  {
    std::cout << " " << std::endl;
    std::cout << "WHITE CREATE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "WHITE CREATE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  if (pumpkin2.carved()==false)
  {
    std::cout << " " << std::endl;
    std::cout << "WHITE CARVED TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "WHITE CARVED TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }



  std::cout << pumpkin3 << std::endl;

  if (pumpkin3.colour()==Pumpkin::Colour::Blue)
  {
    std::cout << " " << std::endl;
    std::cout << "BLUE CREATE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "BLUE CREATE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  if (pumpkin3.carved()==false)
  {
    std::cout << " " << std::endl;
    std::cout << "BLUE CARVED TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "BLUE CARVED TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }



  std::cout << pumpkin4 << std::endl;

  if (pumpkin4.colour()==Pumpkin::Colour::Teal)
  {
    std::cout << " " << std::endl;
    std::cout << "TEAL CREATE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "TEAL CREATE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  if (pumpkin4.carved()==false)
  {
    std::cout << " " << std::endl;
    std::cout << "TEAL CARVED TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "TEAL CARVED TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  std::cout << " " << std::endl;
  std::cout << " " << std::endl;
  std::cout << counter << std::endl;
  std::cout << "****************************" << std::endl;
  std::cout << "PUMPKIN CREATE TEST FINSIHED" << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;
  std::cout << " " << std::endl;

  std::cout << " " << std::endl;
  std::cout << " " << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << "CREATE PUMPKINS TEST" << std::endl;
  std::cout << "********************" << std::endl;
  std::cout << " " << std::endl;
    std::cout << " " << std::endl;

  std::vector<Pumpkin> pumpkinPatch1 = Pumpkin::CreatePumpkins(5,Pumpkin::Colour::Orange,false);
  std::vector<Pumpkin> pumpkinPatch2 = Pumpkin::CreatePumpkins(0,Pumpkin::Colour::White,false);
  std::vector<Pumpkin> pumpkinPatch3 = Pumpkin::CreatePumpkins(10,Pumpkin::Colour::Blue,true);
  std::vector<Pumpkin> pumpkinPatch4 = Pumpkin::CreatePumpkins(3,Pumpkin::Colour::Teal,false);

  std::cout << "********************" << std::endl;
  std::cout << "ORANGE PUMPKINS TEST" << std::endl;
  std::cout << "********************" << std::endl;

  for(size_t i = 0; i < pumpkinPatch1.size(); i++)
  {
     pumpkinPatch1[i].carve();
  }


  for(size_t i = 0; i < pumpkinPatch1.size(); i++)
  {
     std::cout << pumpkinPatch1[i] << std::endl;
  }

  if (pumpkinPatch1.size()==5)
  {
    std::cout << " " << std::endl;
    std::cout << "ORANGE PUMPKINS SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "ORANGE PUMPKINS SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  for(size_t i = 0; i < pumpkinPatch1.size(); i++)
  {
    if (pumpkinPatch1[i].carved()==true)
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "ORANGE PUMPKINS CARVED TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "ORANGE PUMPKINS CARVED TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }

  for(size_t i = 0; i < pumpkinPatch1.size(); i++)
  {
    if (pumpkinPatch1[i].alight()==false)
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "ORANGE PUMPKINS HAS NOT BEEN LIT TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "ORANGE PUMPKINS HAS NOT BEEN LIT TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }

  try
  {
    pumpkinPatch1[0].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "ORANGE PUMPKIN #1 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch1[1].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "ORANGE PUMPKIN #2 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch1[2].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "ORANGE PUMPKIN #3 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch1[3].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "ORANGE PUMPKIN #4 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
     pumpkinPatch1[4].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "ORANGE PUMPKIN #5 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }

  try
  {
    pumpkinPatch1[0].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "ORANGE PUMPKIN #1 IS NOT SUPPOSE TO BE ALREADY LIT.." << std::endl;
    std::cout << " " << std::endl;

    catchCounterFail++;
  }
  try
  {
    pumpkinPatch1[1].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "ORANGE PUMPKIN #2 IS NOT SUPPOSE TO BE ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterFail++;
  }
  try
  {
    pumpkinPatch1[2].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "ORANGE PUMPKIN #3 IS NOT SUPPOSE TO BE ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterFail++;
  }
  try
  {
    pumpkinPatch1[3].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "ORANGE PUMPKIN #4 IS NOT SUPPOSE TO BE ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterFail++;
  }
  try
  {
     pumpkinPatch1[4].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "ORANGE PUMPKIN #5 IS NOT SUPPOSE TO BE ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterFail++;
  }

  try
  {
    pumpkinPatch1[0].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "ORANGE PUMPKIN #1 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch1[1].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "ORANGE PUMPKIN #2 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch1[2].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "ORANGE PUMPKIN #3 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch1[3].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "ORANGE PUMPKIN #4 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
     pumpkinPatch1[4].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "ORANGE PUMPKIN #5 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }

  std::cout << "********************" << std::endl;
  std::cout << "********************" << std::endl;
  std::cout << " " << std::endl;
  std::cout << "********************" << std::endl;
  std::cout << "WHITE PUMPKINS TEST" << std::endl;
  std::cout << "********************" << std::endl;

  for(size_t i = 0; i < pumpkinPatch2.size(); i++)
  {
     std::cout << pumpkinPatch2[i] << std::endl;
  }

  if (pumpkinPatch2.size()==0)
  {
     std::cout << " " << std::endl;
     std::cout << "WHITE PUMPKINS SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
     std::cout << " " << std::endl;

     counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "WHITE PUMPKINS SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }
  std::cout << "********************" << std::endl;
  std::cout << "********************" << std::endl;
  std::cout << counter << std::endl;
  std::cout << " " << std::endl;
  std::cout << "******************" << std::endl;
  std::cout << "BLUE PUMPKINS TEST" << std::endl;
  std::cout << "******************" << std::endl;

  for(size_t i = 0; i < pumpkinPatch3.size(); i++)
  {
     std::cout << pumpkinPatch3[i] << std::endl;
  }

  if (pumpkinPatch3.size()==10)
  {
    std::cout << " " << std::endl;
    std::cout << "BLUE PUMPKINS SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "BLUE PUMPKINS SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  for(size_t i = 0; i < pumpkinPatch3.size(); i++)
  {
    if (pumpkinPatch3[i].carved()==true)
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "BLUE PUMPKINS CARVED TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "BLUE PUMPKINS CARVED TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }

  for(size_t i = 0; i < pumpkinPatch3.size(); i++)
  {
    if (pumpkinPatch3[i].alight()==false)
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "BLUE PUMPKINS HAS NOT BEEN LIT TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "BLUE PUMPKINS HAS NOT BEEN LIT TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }

  for(size_t i = 0; i < pumpkinPatch3.size(); i++)
  {
     pumpkinPatch3[i].light();
  }

  for(size_t i = 0; i < pumpkinPatch3.size(); i++)
  {
    if (pumpkinPatch3[i].alight()==true)
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "BLUE PUMPKINS HAS BEEN LIT TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "BLUE PUMPKINS HAS BEEN LIT TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }

  try
  {
    pumpkinPatch3[0].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #1 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch3[1].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #2 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch3[2].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #3 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch3[3].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #4 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
     pumpkinPatch3[4].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #5 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch3[5].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #6 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch3[6].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #7 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch3[7].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #8 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch3[8].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #9 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch3[9].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #10 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }

  try
  {
    pumpkinPatch3[0].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #1 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch3[1].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #2 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch3[2].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #3 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch3[3].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #4 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
     pumpkinPatch3[4].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #5 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch3[5].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #6 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch3[6].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #7 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch3[7].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #8 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch3[8].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #9 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch3[9].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "BLUE PUMPKIN #10 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  std::cout << "******************" << std::endl;
  std::cout << "******************" << std::endl;
  std::cout << counter << std::endl;
  std::cout << " " << std::endl;
  std::cout << "******************" << std::endl;
  std::cout << "TEAL PUMPKINS TEST" << std::endl;
  std::cout << "******************" << std::endl;

  for(size_t i = 0; i < pumpkinPatch4.size(); i+=2)
  {
     pumpkinPatch4[i].carve();
  }

  for(size_t i = 0; i < pumpkinPatch4.size(); i++)
  {
     std::cout << pumpkinPatch4[i] << std::endl;
  }

  if (pumpkinPatch4.size()==3)
  {
    std::cout << " " << std::endl;
    std::cout << "TEAL PUMPKINS SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "TEAL PUMPKINS SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  for(size_t i = 0; i < pumpkinPatch4.size(); i+=2)
  {
    if (pumpkinPatch4[i].carved()==true)
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "TEAL PUMPKINS CARVED TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "TEAL PUMPKINS CARVED TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }

  for(size_t i = 0; i < pumpkinPatch4.size(); i+=2)
  {
     pumpkinPatch4[i].light();
  }

  for(size_t i = 0; i < pumpkinPatch4.size(); i+=2)
  {
    if (pumpkinPatch4[i].alight()==true)
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "TEAL PUMPKINS HAVE BEEN LIT TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "TEAL PUMPKINS HAVE BEEN LIT TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }




  try
  {
    pumpkinPatch4[0].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "TEAL PUMPKIN #1 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }
  try
  {
    pumpkinPatch4[1].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "TEAL PUMPKIN #2 IS NOT SUPPOSE TO BE CARVED." << std::endl;
    std::cout << " " << std::endl;
    catchCounterFail++;
  }
  try
  {
    pumpkinPatch4[2].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "TEAL PUMPKIN #3 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }

  try
  {
    pumpkinPatch4[1].carve();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "TEAL PUMPKIN #2 HAS ALREADY BEEN CARVED." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }

  try
  {
    pumpkinPatch4[0].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "TEAL PUMPKIN #1 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;
    catchCounterPass++;
  }
  try
  {
    pumpkinPatch4[1].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "TEAL PUMPKIN #2 IS NOT SUPPOSE TO BE LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterFail++;
  }
  try
  {
    pumpkinPatch4[2].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "TEAL PUMPKIN #3 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }

  try
  {
    pumpkinPatch4[1].light();
  }
  catch(PumpkinException pe)
  {
    std::cout << pe.message();
    std::cout << "TEAL PUMPKIN #2 IS ALREADY LIT." << std::endl;
    std::cout << " " << std::endl;

    catchCounterPass++;
  }

  std::cout << "******************" << std::endl;
  std::cout << "******************" << std::endl;
  std::cout << counter << std::endl;
  std::cout << " " << std::endl;
  std::cout << " " << std::endl;
  std::cout << "************************" << std::endl;
  std::cout << "CREATE PUMPKINS FINSIHED" << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;
  std::cout << " " << std::endl;

  std::cout << " " << std::endl;
  std::cout << " " << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << "CARRIAGE TEST" << std::endl;
  std::cout << "******************************" << std::endl;
  std::cout << " " << std::endl;
  std::cout << " " << std::endl;

  Carriage pumpkinCarriage1(Pumpkin::Colour::Orange);
  Carriage pumpkinCarriage2(Pumpkin::Colour::White);
  Carriage pumpkinCarriage3(Pumpkin::Colour::Blue);
  Carriage pumpkinCarriage4(Pumpkin::Colour::Teal);

  std::cout << pumpkinCarriage1 << std::endl;

  if (pumpkinCarriage1.colour()==Pumpkin::Colour::Orange)
  {
    std::cout << " " << std::endl;
    std::cout << "OLD ORANGE CARRIAGE #1 TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "OLD ORANGE CARRIAGE #1 TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  std::cout << pumpkinCarriage2 << std::endl;

  if (pumpkinCarriage2.colour()==Pumpkin::Colour::White)
  {
    std::cout << " " << std::endl;
    std::cout << "OLD WHITE CARRIAGE #2 TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "OLD WHITE  CARRIAGE #2 TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  std::cout << pumpkinCarriage3 << std::endl;

  if (pumpkinCarriage3.colour()==Pumpkin::Colour::Blue)
  {
    std::cout << " " << std::endl;
    std::cout << "OLD BLUE CARRIAGE #3TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "OLD BLUE  CARRIAGE #3 TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  std::cout << pumpkinCarriage4 << std::endl;

  if (pumpkinCarriage4.colour()==Pumpkin::Colour::Teal)
  {
    std::cout << " " << std::endl;
    std::cout << "OLD TEAL CARRIAGE #4 TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "OLD TEAL CARRIAGE #4 TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  Carriage pumpkinCarriage_1(Pumpkin::Colour::Teal);
  Carriage pumpkinCarriage_2(Pumpkin::Colour::Orange);
  Carriage pumpkinCarriage_3(Pumpkin::Colour::White);
  Carriage pumpkinCarriage_4(Pumpkin::Colour::Blue);

  std::cout << pumpkinCarriage_1 << std::endl;

  if (pumpkinCarriage_1.colour()==Pumpkin::Colour::Teal)
  {
    std::cout << " " << std::endl;
    std::cout << "NEW TEAL CARRIAGE #1 TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "NEW TEAL CARRIAGE #1 TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }


  std::cout << pumpkinCarriage_2 << std::endl;

  if (pumpkinCarriage_2.colour()==Pumpkin::Colour::Orange)
  {
    std::cout << " " << std::endl;
    std::cout << "NEW ORANGE CARRIAGE #2 TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "NEW ORANGE CARRIAGE #2 TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }


  std::cout << pumpkinCarriage_3 << std::endl;

  if (pumpkinCarriage_3.colour()==Pumpkin::Colour::White)
  {
    std::cout << " " << std::endl;
    std::cout << "NEW WHITE CARRIAGE #3 TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "NEW WHITE  CARRIAGE #3 TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  std::cout << pumpkinCarriage_4 << std::endl;

  if (pumpkinCarriage_4.colour()==Pumpkin::Colour::Blue)
  {
    std::cout << " " << std::endl;
    std::cout << "NEW BLUE CARRIAGE #4 TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  else
  {
    std::cout << " " << std::endl;
    std::cout << "NEW BLUE  CARRIAGE #4 TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  Pumpkin* p_pumpkinCarriage1 = pumpkinCarriage1.change();
  Pumpkin* p_pumpkinCarriage2 = pumpkinCarriage2.change();
  Pumpkin* p_pumpkinCarriage3 = pumpkinCarriage3.change();
  Pumpkin* p_pumpkinCarriage4 = pumpkinCarriage4.change();

  if (p_pumpkinCarriage1 == nullptr)
  {
    delete p_pumpkinCarriage1;
  }
  else
  {
    std::cout << *p_pumpkinCarriage1 << std::endl;
    std::cout << "TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;

    delete p_pumpkinCarriage1;
  }

  if (p_pumpkinCarriage2 == nullptr)
  {
    delete p_pumpkinCarriage2;
  }
  else
  {
    std::cout << *p_pumpkinCarriage2 << std::endl;
    std::cout << "TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;

    delete p_pumpkinCarriage2;
  }

  if (p_pumpkinCarriage3 == nullptr)
  {
    delete p_pumpkinCarriage3;
  }
  else
  {
    std::cout << *p_pumpkinCarriage3 << std::endl;
    std::cout << "TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;

    delete p_pumpkinCarriage3;
  }

  if (p_pumpkinCarriage4 == nullptr)
  {
    delete p_pumpkinCarriage4;
  }
  else
  {
    std::cout << *p_pumpkinCarriage4 << std::endl;
    std::cout << "TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;

    delete p_pumpkinCarriage4;
  }

  Pumpkin* p_pumpkinCarriage_1 = pumpkinCarriage_1.change();
  Pumpkin* p_pumpkinCarriage_2 = pumpkinCarriage_2.change();
  Pumpkin* p_pumpkinCarriage_3 = pumpkinCarriage_3.change();
  Pumpkin* p_pumpkinCarriage_4 = pumpkinCarriage_4.change();

  if (p_pumpkinCarriage_1 == nullptr)
  {
    delete p_pumpkinCarriage_1;
  }
  else
  {
    std::cout << *p_pumpkinCarriage_1 << std::endl;
    std::cout << "TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  if (p_pumpkinCarriage_2 == nullptr)
  {
    delete p_pumpkinCarriage_2;
  }
  else
  {
    std::cout << *p_pumpkinCarriage_2 << std::endl;
    std::cout << "TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  if (p_pumpkinCarriage_3 == nullptr)
  {
    delete p_pumpkinCarriage_3;
  }
  else
  {
    std::cout << *p_pumpkinCarriage_3 << std::endl;
    std::cout << "TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  if (p_pumpkinCarriage_4 == nullptr)
  {
    delete p_pumpkinCarriage_4;
  }
  else
  {
    std::cout << *p_pumpkinCarriage_4 << std::endl;
    std::cout << "TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }
  std::cout << counter << std::endl;
  std::cout << " " << std::endl;
  std::cout << " " << std::endl;
  std::cout << "*****************" << std::endl;
  std::cout << "CARRIAGE FINSIHED" << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;
  std::cout << " " << std::endl;

  std::cout << " " << std::endl;
  std::cout << " " << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << "PUMPKIN PATCH TEST" << std::endl;
  std::cout << "******************" << std::endl;
  std::cout << " " << std::endl;
  std::cout << " " << std::endl;
  std::vector<Pumpkin*> smashPumpkins1;
  std::vector<Pumpkin*> smashPumpkins2;
  std::vector<Pumpkin*> smashPumpkins3;
  std::vector<Pumpkin*> smashPumpkins4;

  PumpkinPatch Patch1 = PumpkinPatch::Create(5,Pumpkin::Colour::Orange);
  PumpkinPatch Patch2 = PumpkinPatch::Create(0,Pumpkin::Colour::White);
  PumpkinPatch Patch3 = PumpkinPatch::Create(10,Pumpkin::Colour::Blue);
  PumpkinPatch Patch4 = PumpkinPatch::Create(3,Pumpkin::Colour::Teal);


  std::cout << "*************************" << std::endl;
  std::cout << "ORANGE PUMPKIN PATCH TEST" << std::endl;
  std::cout << "*************************" << std::endl;

  for(auto pumpkin : Patch1)
  {
     std::cout << *pumpkin;
  }
  std::cout << " " << std::endl;

  if (Patch1.size()==5)
  {
    std::cout << " " << std::endl;
    std::cout << "ORANGE PUMPKIN PATCH SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "ORANGE PUMPKIN PATCH SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  Patch1.carve();
  for(size_t i = 0; i < Patch1.size(); i++)
  {
    if (Patch1[i].carved()==true)
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "ORANGE PUMPKIN PATCH CARVED TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "ORANGE PUMPKIN PATCH CARVED TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }

  for(size_t i = 0; i < Patch1.size(); i++)
  {
    if (Patch1[i].alight()==false)
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "ORANGE PUMPKIN PATCH HAS NOT BEEN LIT TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "ORANGE PUMPKIN PATCH HAS NOT BEEN LIT TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }

  for(auto pumpkin : Patch1)
  {
     smashPumpkins1.push_back(pumpkin);
  }
  std::cout << "" << std::endl;

  PumpkinPatch deadPumpkins1(smashPumpkins1);

  for(auto pumpkin : deadPumpkins1)
  {
     std::cout << *pumpkin;
  }
  std::cout << "" << std::endl;
  if (deadPumpkins1.size()==5)
  {
    std::cout << " " << std::endl;
    std::cout << "VECTOR CONSTRUCTOR ORANGE PUMPKIN PATCH SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "VECTOR CONSTRUCTOR ORANGE PUMPKIN PATCH SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  PumpkinPatch burnAllPumpkins1(Patch1);
  for(size_t i = 0; i < burnAllPumpkins1.size(); i++)
  {
    burnAllPumpkins1[i].light();
    std::cout << burnAllPumpkins1[i];
  }
  std::cout << "" << std::endl;
  if (burnAllPumpkins1.size()==5)
  {
    std::cout << " " << std::endl;
    std::cout << "INDEX/SUBSCRIPT OPERATOR ORANGE PUMPKIN PATCH SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "INDEX/SUBSCRIPT OPERATOR ORANGE PUMPKIN PATCH SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  for(size_t i = 0; i < burnAllPumpkins1.size(); i++)
  {
    if(burnAllPumpkins1[i].alight() == true)
    {
      std::cout << " " << std::endl;
      std::cout << "INDEX/SUBSCRIPT OPERATOR ORANGE PUMPKIN PATCH LIGHT TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "INDEX/SUBSCRIPT OPERATOR ORANGE PUMPKIN PATCH LIGHT TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }

  PumpkinPatch fuckPumpkins1 = deadPumpkins1;

  for(auto pumpkin : fuckPumpkins1)
  {
     std::cout << *pumpkin;
  }
  std::cout << "" << std::endl;
  if (fuckPumpkins1.size()==5)
  {
    std::cout << " " << std::endl;
    std::cout << "ASSIGNMENT OPERATOR ORANGE PUMPKIN PATCH SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "ASSIGNMENT OPERATOR ORANGE PUMPKIN PATCH SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  std::vector<Carriage> fuckCarriages1 = Patch1.makeCarriages();
  for(auto carriage : fuckCarriages1)
  {
     std::cout << carriage;
  }
  if (fuckCarriages1.size()==5)
  {
    std::cout << " " << std::endl;
    std::cout << "ORANGE PUMPKIN PATCH CARRIAGE SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "ORANGE PUMPKIN PATCH CARRIAGE SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  for(size_t i = 0; i <  fuckCarriages1.size(); i++)
  {
    if( fuckCarriages1[i].colour() == Pumpkin::Colour::Orange)
    {
      std::cout << " " << std::endl;
      std::cout << "ORANGE PUMPKIN PATCH CARRIAGE COLOUR TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "ORANGE PUMPKIN PATCH CARRIAGE COLOUR TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }
  std::cout << "" << std::endl;
  std::cout << counter << std::endl;
  std::cout << "*****************************" << std::endl;
  std::cout << "ORANGE PUMPKIN PATCH FINSIHED" << std::endl;
  std::cout << "*****************************" << std::endl;
  std::cout << " " << std::endl;
  std::cout << "*************************" << std::endl;
  std::cout << "WHITE PUMPKIN PATCH TEST" << std::endl;
  std::cout << "*************************" << std::endl;

  for(auto pumpkin : Patch2)
  {
     std::cout << *pumpkin;
  }
  std::cout << " " << std::endl;

  if (Patch2.size()==0)
  {
    std::cout << " " << std::endl;
    std::cout << "WHITE PUMPKIN PATCH SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "WHITE PUMPKIN PATCH SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  Patch2.carve();




  for(auto pumpkin : Patch2)
  {
     smashPumpkins2.push_back(pumpkin);
  }
  std::cout << "" << std::endl;

  PumpkinPatch deadPumpkins2(smashPumpkins2);

  for(auto pumpkin : deadPumpkins2)
  {
     std::cout << *pumpkin;
  }
  std::cout << "" << std::endl;
  if (deadPumpkins2.size()==0)
  {
    std::cout << " " << std::endl;
    std::cout << "VECTOR CONSTRUCTOR WHITE PUMPKIN PATCH SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "VECTOR CONSTRUCTOR WHITE PUMPKIN PATCH SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  PumpkinPatch burnAllPumpkins2(Patch2);
  for(size_t i = 0; i < burnAllPumpkins2.size(); i++)
  {
    burnAllPumpkins2[i].light();
    std::cout << burnAllPumpkins2[i];
  }
  std::cout << "" << std::endl;
  if (burnAllPumpkins2.size()==0)
  {
    std::cout << " " << std::endl;
    std::cout << "INDEX/SUBSCRIPT OPERATOR WHITE PUMPKIN PATCH SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "INDEX/SUBSCRIPT OPERATOR WHITE PUMPKIN PATCH SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  PumpkinPatch fuckPumpkins2 = deadPumpkins2;

  for(auto pumpkin : fuckPumpkins2)
  {
     std::cout << *pumpkin;
  }
  std::cout << "" << std::endl;
  if (fuckPumpkins2.size()==0)
  {
    std::cout << " " << std::endl;
    std::cout << "ASSIGNMENT OPERATOR WHITE PUMPKIN PATCH SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "ASSIGNMENT OPERATOR WHITE PUMPKIN PATCH SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  std::vector<Carriage> fuckCarriages2 = Patch2.makeCarriages();
  for(auto carriage : fuckCarriages2)
  {
     std::cout << carriage;
  }
  if (fuckCarriages2.size()==0)
  {
    std::cout << " " << std::endl;
    std::cout << "WHITE PUMPKIN PATCH CARRIAGE SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "WHITE PUMPKIN PATCH CARRIAGE SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }
  std::cout << "" << std::endl;
  std::cout << counter << std::endl;
  std::cout << "****************************" << std::endl;
  std::cout << "WHITE PUMPKIN PATCH FINSIHED" << std::endl;
  std::cout << "****************************" << std::endl;
  std::cout << " " << std::endl;
  std::cout << "*************************" << std::endl;
  std::cout << "BLUE PUMPKIN PATCH TEST" << std::endl;
  std::cout << "*************************" << std::endl;

  for(auto pumpkin : Patch3)
  {
     std::cout << *pumpkin;
  }
  std::cout << " " << std::endl;

  if (Patch3.size()==10)
  {
    std::cout << " " << std::endl;
    std::cout << "BLUE PUMPKIN PATCH SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "BLUE PUMPKIN PATCH SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  Patch3.carve();
  for(size_t i = 0; i < Patch3.size(); i++)
  {
    if (Patch3[i].carved()==true)
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "BLUE PUMPKIN PATCH CARVED TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "BLUE PUMPKIN PATCH CARVED TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }

  for(size_t i = 0; i < Patch3.size(); i++)
  {
    if (Patch3[i].alight()==false)
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "BLUE PUMPKIN PATCH HAS NOT BEEN LIT TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "BLUE PUMPKIN PATCH HAS NOT BEEN LIT TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }

  for(auto pumpkin : Patch3)
  {
     smashPumpkins3.push_back(pumpkin);
  }
  std::cout << "" << std::endl;

  PumpkinPatch deadPumpkins3(smashPumpkins3);

  for(auto pumpkin : deadPumpkins3)
  {
     std::cout << *pumpkin;
  }
  std::cout << "" << std::endl;
  if (deadPumpkins3.size()==10)
  {
    std::cout << " " << std::endl;
    std::cout << "VECTOR CONSTRUCTOR BLUE PUMPKIN PATCH SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "VECTOR CONSTRUCTOR BLUE PUMPKIN PATCH SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  PumpkinPatch burnAllPumpkins3(Patch3);
  for(size_t i = 0; i < burnAllPumpkins3.size(); i++)
  {
    burnAllPumpkins3[i].light();
    std::cout << burnAllPumpkins3[i];
  }
  std::cout << "" << std::endl;
  if (burnAllPumpkins3.size()==10)
  {
    std::cout << " " << std::endl;
    std::cout << "INDEX/SUBSCRIPT OPERATOR BLUE PUMPKIN PATCH SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "INDEX/SUBSCRIPT OPERATOR BLUE PUMPKIN PATCH SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  for(size_t i = 0; i < burnAllPumpkins3.size(); i++)
  {
    if(burnAllPumpkins3[i].alight() == true)
    {
      std::cout << " " << std::endl;
      std::cout << "INDEX/SUBSCRIPT OPERATOR BLUE PUMPKIN PATCH LIGHT TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "INDEX/SUBSCRIPT OPERATOR BLUE PUMPKIN PATCH LIGHT TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }

  PumpkinPatch fuckPumpkins3 = deadPumpkins3;

  for(auto pumpkin : fuckPumpkins3)
  {
     std::cout << *pumpkin;
  }
  std::cout << "" << std::endl;
  if (fuckPumpkins3.size()==10)
  {
    std::cout << " " << std::endl;
    std::cout << "ASSIGNMENT OPERATOR BLUE PUMPKIN PATCH SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "ASSIGNMENT OPERATOR BLUE PUMPKIN PATCH SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  std::vector<Carriage> fuckCarriages3 = Patch3.makeCarriages();
  for(auto carriage : fuckCarriages3)
  {
     std::cout << carriage;
  }
  if (fuckCarriages3.size()==10)
  {
    std::cout << " " << std::endl;
    std::cout << "BLUE PUMPKIN PATCH CARRIAGE SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "BLUE PUMPKIN PATCH CARRIAGE SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  for(size_t i = 0; i <  fuckCarriages3.size(); i++)
  {
    if( fuckCarriages3[i].colour() == Pumpkin::Colour::Blue)
    {
      std::cout << " " << std::endl;
      std::cout << "BLUE PUMPKIN PATCH CARRIAGE COLOUR TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "BLUE PUMPKIN PATCH CARRIAGE COLOUR TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }
  std::cout << "" << std::endl;
  std::cout << counter << std::endl;
  std::cout << "*****************************" << std::endl;
  std::cout << "BLUE PUMPKIN PATCH FINSIHED" << std::endl;
  std::cout << "*****************************" << std::endl;
  std::cout << " " << std::endl;
  std::cout << "*************************" << std::endl;
  std::cout << "TEAL PUMPKIN PATCH TEST" << std::endl;
  std::cout << "*************************" << std::endl;

  for(auto pumpkin : Patch4)
  {
     std::cout << *pumpkin;
  }
  std::cout << " " << std::endl;

  if (Patch4.size()==3)
  {
    std::cout << " " << std::endl;
    std::cout << "TEAL PUMPKIN PATCH SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "TEAL PUMPKIN PATCH SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  Patch4.carve();
  for(size_t i = 0; i < Patch4.size(); i++)
  {
    if (Patch4[i].carved()==true)
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "TEAL PUMPKIN PATCH CARVED TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "TEAL PUMPKIN PATCH CARVED TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }

  for(size_t i = 0; i < Patch4.size(); i++)
  {
    if (Patch4[i].alight()==false)
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "TEAL PUMPKIN PATCH HAS NOT BEEN LIT TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "#" << (i+1) << " " << "TEAL PUMPKIN PATCH HAS NOT BEEN LIT TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }

  for(auto pumpkin : Patch4)
  {
     smashPumpkins4.push_back(pumpkin);
  }
  std::cout << "" << std::endl;

  PumpkinPatch deadPumpkins4(smashPumpkins4);

  for(auto pumpkin : deadPumpkins4)
  {
     std::cout << *pumpkin;
  }
  std::cout << "" << std::endl;
  if (deadPumpkins4.size()==3)
  {
    std::cout << " " << std::endl;
    std::cout << "VECTOR CONSTRUCTOR TEAL PUMPKIN PATCH SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "VECTOR CONSTRUCTOR TEAL PUMPKIN PATCH SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  PumpkinPatch burnAllPumpkins4(Patch4);
  for(size_t i = 0; i < burnAllPumpkins4.size(); i++)
  {
    burnAllPumpkins4[i].light();
    std::cout << burnAllPumpkins4[i];
  }
  std::cout << "" << std::endl;
  if (burnAllPumpkins4.size()==3)
  {
    std::cout << " " << std::endl;
    std::cout << "INDEX/SUBSCRIPT OPERATOR TEAL PUMPKIN PATCH SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "INDEX/SUBSCRIPT OPERATOR TEAL PUMPKIN PATCH SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  for(size_t i = 0; i < burnAllPumpkins4.size(); i++)
  {
    if(burnAllPumpkins4[i].alight() == true)
    {
      std::cout << " " << std::endl;
      std::cout << "INDEX/SUBSCRIPT OPERATOR TEAL PUMPKIN PATCH LIGHT TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "INDEX/SUBSCRIPT OPERATOR TEAL PUMPKIN PATCH LIGHT TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }

  PumpkinPatch fuckPumpkins4 = deadPumpkins4;

  for(auto pumpkin : fuckPumpkins4)
  {
     std::cout << *pumpkin;
  }
  std::cout << "" << std::endl;
  if (fuckPumpkins4.size()==3)
  {
    std::cout << " " << std::endl;
    std::cout << "ASSIGNMENT OPERATOR TEAL PUMPKIN PATCH SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "ASSIGNMENT OPERATOR TEAL PUMPKIN PATCH SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  std::vector<Carriage> fuckCarriages4 = Patch4.makeCarriages();
  for(auto carriage : fuckCarriages4)
  {
     std::cout << carriage;
  }
  if (fuckCarriages4.size()==3)
  {
    std::cout << " " << std::endl;
    std::cout << "TEAL PUMPKIN PATCH CARRIAGE SIZE TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << " " << std::endl;

    counter++;
  }

  else
  {
    std::cout << " " << std::endl;
    std::cout << "TEAL PUMPKIN PATCH CARRIAGE SIZE TEST FAILED?????????????????????????" << std::endl;
    std::cout << " " << std::endl;
  }

  for(size_t i = 0; i <  fuckCarriages4.size(); i++)
  {
    if( fuckCarriages4[i].colour() == Pumpkin::Colour::Teal)
    {
      std::cout << " " << std::endl;
      std::cout << "TEAL PUMPKIN PATCH CARRIAGE COLOUR TEST PASSED!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
      std::cout << " " << std::endl;

      counter++;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEAL PUMPKIN PATCH CARRIAGE COLOUR TEST FAILED?????????????????????????" << std::endl;
      std::cout << " " << std::endl;
    }
  }
  std::cout << "" << std::endl;

  std::cout << counter << std::endl;
  std::cout << "*****************************" << std::endl;
  std::cout << "TEAL PUMPKIN PATCH FINSIHED" << std::endl;
  std::cout << "*****************************" << std::endl;

  std::cout << " " << std::endl;
  std::cout << " " << std::endl;
  std::cout << "**********************" << std::endl;
  std::cout << "PUMPKIN PATCH FINSIHED" << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;
  std::cout << " " << std::endl;
/*
  std::cout << "************************************************************" << std::endl;
  std::cout << "CREATED ORANGE PUMPKIN " << std::endl;
  std::cout << "**********************" << std::endl;
  std::cout << pumpkin1 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "CREATED WHITE PUMPKIN " << std::endl;
  std::cout << "*********************" << std::endl;
  std::cout << pumpkin2 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "CREATED BLUE PUMPKIN " << std::endl;
  std::cout << "********************" << std::endl;
  std::cout << pumpkin3 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "CREATED TEAL PUMPKIN " << std::endl;
  std::cout << "********************" << std::endl;
  std::cout << pumpkin4 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "ORANGE PUMPKIN PATCH" << std::endl;
  std::cout << "********************" << std::endl;
  for(size_t i = 0; i < pumpkinPatch1.size(); i++)
  {
     std::cout << pumpkinPatch1[i] << std::endl;
  }
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "WHITE PUMPKIN PATCH" << std::endl;
  std::cout << "*******************" << std::endl;
  for(size_t i = 0; i < pumpkinPatch2.size(); i++)
  {
     std::cout << pumpkinPatch2[i] << std::endl;
  }
  std::cout << "CALM DOWN. NOTHING IS SUPPOSE TO BE HERE. JEZUZ" << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "BLUE PUMPKIN PATCH" << std::endl;
  std::cout << "******************" << std::endl;
  for(size_t i = 0; i < pumpkinPatch3.size(); i++)
  {
     std::cout << pumpkinPatch3[i] << std::endl;
  }
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "TEAL PUMPKIN PATCH" << std::endl;
  std::cout << "******************" << std::endl;
  for(size_t i = 0; i < pumpkinPatch4.size(); i++)
  {
     std::cout << pumpkinPatch4[i] << std::endl;
  }
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "OLD ORANGE CARRIAGE" << std::endl;
  std::cout << "******************" << std::endl;
  std::cout << pumpkinCarriage1 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "OLD WHITE CARRIAGE" << std::endl;
  std::cout << "******************" << std::endl;
  std::cout << pumpkinCarriage2 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "OLD BLUE CARRIAGE" << std::endl;
  std::cout << "******************" << std::endl;
  std::cout << pumpkinCarriage3 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "OLD TEAL CARRIAGE" << std::endl;
  std::cout << "******************" << std::endl;
  std::cout << pumpkinCarriage4 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "NEW ORANGE CARRIAGE" << std::endl;
  std::cout << "******************" << std::endl;
  std::cout << pumpkinCarriage_1 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "NEW WHITE CARRIAGE" << std::endl;
  std::cout << "******************" << std::endl;
  std::cout << pumpkinCarriage_2 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "NEW BLUE CARRIAGE" << std::endl;
  std::cout << "******************" << std::endl;
  std::cout << pumpkinCarriage_3 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "NEW TEAL CARRIAGE" << std::endl;
  std::cout << "******************" << std::endl;
  std::cout << pumpkinCarriage_4 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "OLD ORANGE CARRIAGE TO PUMPKIN" << std::endl;
  std::cout << "******************************" << std::endl;
  std::cout << *p_pumpkinCarriage1 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "OLD WHITE CARRIAGE TO PUMPKIN" << std::endl;
  std::cout << "*****************************" << std::endl;
  std::cout << *p_pumpkinCarriage2 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "OLD BLUE CARRIAGE TO PUMPKIN" << std::endl;
  std::cout << "****************************" << std::endl;
  std::cout << *p_pumpkinCarriage3 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "OLD TEAL CARRIAGE TO PUMPKIN" << std::endl;
  std::cout << "****************************" << std::endl;
  std::cout << *p_pumpkinCarriage4 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "NEW ORANGE CARRIAGE TO PUMPKIN" << std::endl;
  std::cout << "******************************" << std::endl;
  std::cout << *p_pumpkinCarriage_1 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "NEW WHITE CARRIAGE TO PUMPKIN" << std::endl;
  std::cout << "*****************************" << std::endl;
  std::cout << *p_pumpkinCarriage_2 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "NEW BLUE CARRIAGE TO PUMPKIN" << std::endl;
  std::cout << "****************************" << std::endl;
  std::cout << *p_pumpkinCarriage_3 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "************************************************************" << std::endl;
  std::cout << "NEW TEAL CARRIAGE TO PUMPKIN" << std::endl;
  std::cout << "****************************" << std::endl;
  std::cout << *p_pumpkinCarriage_4 << std::endl;
  std::cout << "************************************************************" << std::endl;
  std::cout << " " << std::endl;
*/

  int pumpkinTest = 72;
  int pumpkinPatchTest = 92;
  int totalTest = pumpkinTest + pumpkinPatchTest;

   std::cout << "YOU PASSED " << counter << " TEST OUT OF " << totalTest << " TEST!" << std::endl;

   std::cout << "YOU CAUGHT " << catchCounterPass << " THROWS OUT OF 36 THROWS! " << std::endl;
   std::cout << "YOU FAIL " << catchCounterFail << " THROWS WHEN NOTHING WAS SUPPOSE TO BE CAUGHT! " << std::endl;
   std::cout << "END OF PROGRAM." << std::endl;
   std::cout << " " << std::endl;

   std::cout << "Check your shit over." << std::endl;
   std::cout << "RIP. Lets get drunk." << std::endl;
   std::cout << "Shoutout to Sheena for getting me a brownie for my birthday!" << std::endl;
   std::cout << "KABOOM - JONATHAN ANDERSON, 2016. LECTURE 20." << std::endl;
  std::cout << " " << std::endl;
   std::cout << "I hate pumpkins so much now it's not even fit." << std::endl;
   std::cout << " " << std::endl;

   std::cout << "                          ooo" << std::endl;
   std::cout << "                         $ o$" << std::endl;
   std::cout << "                        o $$" << std::endl;
   std::cout << "              **$$$    o* $$ oo *" << std::endl;
   std::cout << "          * o$*$oo$$$*o$$o$$*$$$$$ o" << std::endl;
   std::cout << "         $* *o$$$$$$o$$$$$$$$$$$$$$o     o" << std::endl;
   std::cout << "      o$*    *$$$$$$$$$$$$$$$$$$$$$$o* *oo  o" << std::endl;
   std::cout << "     * *     o  *$$$o   o$$$$$$$$$$$oo$$" << std::endl;
   std::cout << "    * $     * *o$$$$$ $$$$$$$$$$$*$$$$$$$o" << std::endl;
   std::cout << "  o  $       o o$$$$$*$$$$$$$$$$$o$$***$$$$o * *" << "    ,-.______________,=========," << std::endl;
   std::cout << " o          o$$$$$*    *$$$$$$$$$$ ** oo $$   o $" << "    [|  )_____________)#######((_" << std::endl;
   std::cout << " $  $       $$$$$  $$$oo *$$$$$$$$o o $$$o$$oo o o" << "    /===============.-.___,--* _|" << std::endl;
   std::cout << "o        o $$$$$oo$$$$$$o$$$$ **$$oo$$$$$$$$*  * *o" << "   *-._,__,__[JW]____|########/" << std::endl;
   std::cout << "*   o    $ **$$$$$$$$$$$$$$  o  *$$$$$$$$$$$$   o *" << "              | (  )) )####O##("<< std::endl;
   std::cout << "*   $      *$$$$$$$$$$$$$$   *   $$$*$$$$$$$$o  o" << "               | |___/,.#######|" << std::endl;
   std::cout << "$   o      o$*****$$$$$$$$    oooo$$ $$$$$$$$*  *" << "                `====*  |#######|" << std::endl;
   std::cout << "$      o**o $$o    $$$$$$$$$$$$$$$$$ **  o$$$   $ o" << "                        |#######|" << std::endl;
   std::cout << " o     * *o *$$$$  $$$$$*********** $  o$$$$$** o o" << "                         )##O####|" << std::endl;
   std::cout << " *  * o  o$o* $$$$o   **           o  o$$$$$*   o" << "                           )####__,*" << std::endl;
   std::cout << "  $         o$$$$$$$oo            *oo$$$$$$$*    o" << "                          `--**" << std::endl;
   std::cout << "  *$   o o$o $o o$$$$$*$$$$oooo$$$$$$$$$$$$$$*o$o" << std::endl;
   std::cout << "    *o oo  $o$*oo$$$$$o$$$$$$$$$$$$*$$$$$$$$*o$*" << std::endl;
   std::cout << "     *$ooo $$o$   $$$$$$$$$$$$$$$$ $$$$$$$$o*" << std::endl;
   std::cout << "        ** $$$$$$$$$$$$$$$$$$$$$$* ****" << std::endl;
   std::cout << "                         ******" << std::endl;



   return 0;
}




/**
*
*   Will return the current date relative to the date of the start of the program.
*
*   Note: Due to lack of understanding of how to implement this function or calculate the date,
*         I will cheat by creating a global variable and I will implement the function so that
*         everytime the function is called, it increments date (as seen below) by one.
*
*   @returns the current date
*/
int date = 0;

int currentDate()
{
   return date++;
}



std::ostream& operator<<(std::ostream& out, const Pumpkin::Colour c)
{
   static std::map<Pumpkin::Colour, std::string> strings;
   if (strings.size() == 0){
   #define INSERT_ELEMENT(p) strings[p] = #p
        INSERT_ELEMENT(Pumpkin::Colour::Orange);
        INSERT_ELEMENT(Pumpkin::Colour::White);
        INSERT_ELEMENT(Pumpkin::Colour::Blue);
        INSERT_ELEMENT(Pumpkin::Colour::Teal);
   #undef INSERT_ELEMENT
   }
   return out << strings[c];
}



std::ostream& operator << (std::ostream& os, const Pumpkin& p)
{
   os << "Pumpkin Colour   : " << p.colour()
    << "\nPumpkin Carved?  : " << p.carved() << "\n";
    if(p.alight())
    {
      std::cout << "" << std::endl;
       os << "The pumpkin is lit up.\n";
    }
    return os;
}



std::ostream& operator << (std::ostream& os, const Carriage& c)
{
   os << "Colour of Carriage : " << c.colour() << "\n";
   return os;
}
