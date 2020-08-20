int main() {
	//test cases
	int t;
	cin>>t;

	//floor from which lift is caled 
	int f;
	

	int liftA= 0;
	int liftB= 7;

	for(int i=0; i<t; i++){
		cin>>f;
		int diff1 = abs(liftB - f);
		int diff2 = abs(f - liftA);
	    if(diff2 > diff1){
			cout<<"B"<<endl;
			liftB = f;
		}
		else{
			cout<<"A"<<endl;
			liftA = f;
		}
	}

}