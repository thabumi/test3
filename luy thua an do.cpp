long long Pow(long long a, long long b){
	if(b==0){
		return 1;
	}
	if(b>=1){
		long long t=Pow(a,b/2);
		t=(t*t)%MOD;
		if(b%2==1){
			t=(t*a)%MOD;
		}
		return t;
	}
}
