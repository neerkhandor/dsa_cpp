int precision;
  cout << "Enter the number of floating digits in precison "<<endl;
  cin >> precision;

  double step = 0.1;
  double finalAns = ans;
  for(int i=0; i<precision; i++) {

    for(double j=finalAns; j*j<=n; j = j + step) {
        finalAns = j;
    }
    step = step / 10;
  }
  cout << "Final ans is. "<< finalAns << endl;