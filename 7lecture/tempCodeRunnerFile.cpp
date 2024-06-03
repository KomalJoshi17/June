for (int i=1;i<=n;i++){
        int stars=i*2-1;
        int spaces=n-i;
        for(int j=1;j<=spaces;j++){
            cout<<" ";
    }
        for (int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }