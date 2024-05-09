// 1 accumulate()
accumulate(v.begin(),v.end(),initialSum);

// 2 find()
auto it = find(v.begin(),v.end(),50);
if(it == v.end()){
    cout<<"Not Found"<<Endl;
}
else cout<<"Found at"<<it-v.begin()<<endl;

// 3 count()
cout<< count(v.begin(),v.end(),numToFindCountOf);

// 4 fill()
fill(v.begin(),v.end(),valueToBeFilledInEachElement);
fill(arr,arr+n,valueToBeFilledInEachElement);

// 5 islower()
// 6 isupper()
cout<<(islower(x) ? "YES" : "NO")<<endl;

// 7 tolower()
// 8 toupper()
str[i] = toupper(str[i]);

// 9 is_sorted()
cout<<(is_sorted(all(arr)));

// 10 is_permutation()
int arr[n]={1,2,3,4}
int brr[]={3,4,2,1}
cout<<is_permutation((arr,arr+n,brr));

// 11 floor()
cout<<floor(5.6);

// 12 ceil()
cout<<ceil(5.6);

// 13 setprecision()
cout<<setprecision(10)<<sqrt(24)<<endl;
