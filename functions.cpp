void inputArray(int arr[], int size) {for (int i = 0; i < size; ++i) {cin >> arr[i];}}
void printArray(int arr[], int size) {for (int i = 0; i < size; ++i) {cout << arr[i] << " ";}cout << endl;}
void inputVector(vector<int>& vec) {for (int i = 0; i < vec.size(); ++i) {cin >> vec[i];}}
void printVector(const vector<int>& vec) {for (int i = 0; i < vec.size(); ++i) {cout << vec[i] << " ";}cout << endl;}
int findMaxA(const int arr[], int size) {int maxElement = arr[0];for (int i = 1; i < size; ++i) {if (arr[i] > maxElement) {maxElement = arr[i];}}return maxElement;}
int findMinA(const int arr[], int size) {int minElement = arr[0];for (int i = 1; i < size; ++i) {if (arr[i] < minElement) {minElement = arr[i];}}return minElement;}
int findMinV(const vector<int>& vec) {int minElement = vec[0];for (int i = 1; i < vec.size(); ++i) {if (vec[i] < minElement) {minElement = vec[i];}}return minElement;}
int findMaxV(const vector<int>& vec) {int maxElement = vec[0];for (int i = 1; i < vec.size(); ++i) {if (vec[i] > maxElement) {maxElement = vec[i];}}return maxElement;}

