double average(const double data[], int length){
	
	if (length == 0){
		return 0;
	}
	double sum = 0;
	// For loop that takes every value from an array and finds the sum of them.
	for(int i = 0; i < length; i++){
		sum = sum + data[i];
	}
	
	//Returns the sum of the values in the array and divides them by the amount of values to find the average.
	return sum/length;

}
