#include<iostream>
using namespace std;
#define MAX 100 // Maximum size of the stack
int stack[MAX];
int top = -1;
int queue[MAX];  // Array to store the queue elements
int front = -1;  // Front of the queue
int rear = -1;   // Rear of the queue
int queue3[MAX];
int priority[MAX];
int size = 0;
#define SIZE 5  // Define the maximum size of the circular queue
int deque[MAX];
#include <cstdlib>
#include <vector>
#define MAX_SIZE 100
#include <algorithm>
#include <climits>
#include <string>
#include <list>
#include <set>
#include <limits>
#include <cmath>

// Function prototypes
void calculateTriangle();
void calculateCircle();
void calculateSemiCircle();
void calculateSquare();
void calculateRectangle();
void calculateParallelogram();
void calculateRhombus();
void calculateTrapezium();
void calculateKite();
void calculatePolygon(int sides);
void calculatePentagon();
void calculateHexagon();
void calculateOctagon();
void calculateNonagon();
void calculateDecagon();
void calculateSphere();
void calculateCube();
void calculateCuboid();
void calculateCone();
void calculateCylinder();
void calculateOval();
void calculateHeptagon();

int geometrical() {
    int choice;
    while (true) {
        cout <<endl<<"Geometric Operations :-\n"<<endl;
        cout << "1. Triangle\n";
        cout << "2. Circle\n";
        cout << "3. Semi-Circle\n";
        cout << "4. Square\n";
        cout << "5. Rectangle\n";
        cout << "6. Parallelogram\n";
        cout << "7. Rhombus\n";
        cout << "8. Trapezium\n";
        cout << "9. Kite\n";
        cout << "10. Polygon\n";
        cout << "11. Pentagon\n";
        cout << "12. Hexagon\n";
        cout << "13. Octagon\n";
        cout << "14. Nonagon\n";
        cout << "15. Decagon\n";
        cout << "16. Sphere\n";
        cout << "17. Cube\n";
        cout << "18. Cuboid\n";
        cout << "19. Cone\n";
        cout << "20. Cylinder\n";
        cout << "21. Oval\n";
        cout << "22. Heptagon\n";
        cout << "0. Exit\n";
        cout <<endl<<"Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: calculateTriangle(); break;
            case 2: calculateCircle(); break;
            case 3: calculateSemiCircle(); break;
            case 4: calculateSquare(); break;
            case 5: calculateRectangle(); break;
            case 6: calculateParallelogram(); break;
            case 7: calculateRhombus(); break;
            case 8: calculateTrapezium(); break;
            case 9: calculateKite(); break;
            case 10: {
                int sides;
                cout << "Enter number of sides: ";
                cin >> sides;
                calculatePolygon(sides);
                break;
            }
            case 11: calculatePentagon(); break;
            case 12: calculateHexagon(); break;
            case 13: calculateOctagon(); break;
            case 14: calculateNonagon(); break;
            case 15: calculateDecagon(); break;
            case 16: calculateSphere(); break;
            case 17: calculateCube(); break;
            case 18: calculateCuboid(); break;
            case 19: calculateCone(); break;
            case 20: calculateCylinder(); break;
            case 21: calculateOval(); break;
            case 22: calculateHeptagon(); break;
            case 0: return 0;
            default: cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

// Function definitions
void calculateTriangle() {
    double a, b, c;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    double perimeter = a + b + c;

    cout << "Area of the triangle: " << area << endl;
    cout << "Perimeter of the triangle: " << perimeter << endl;
}

void calculateCircle() {
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    double area = M_PI * r * r;
    double circumference = 2 * M_PI * r;

    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;
}

void calculateSemiCircle() {
    double r;
    cout << "Enter the radius of the semicircle: ";
    cin >> r;

    double area = (M_PI * r * r) / 2;
    double circumference = (M_PI * r) + (2 * r);

    cout << "Area of the semicircle: " << area << endl;
    cout << "Circumference of the semicircle: " << circumference << endl;
}

void calculateSquare() {
    double side;
    cout << "Enter the side length of the square: ";
    cin >> side;

    double area = side * side;
    double perimeter = 4 * side;

    cout << "Area of the square: " << area << endl;
    cout << "Perimeter of the square: " << perimeter << endl;
}

void calculateRectangle() {
    double length, width;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    double area = length * width;
    double perimeter = 2 * (length + width);

    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;
}

void calculateParallelogram() {
    double base, height, side;
    cout << "Enter the base, height, and side length of the parallelogram: ";
    cin >> base >> height >> side;

    double area = base * height;
    double perimeter = 2 * (base + side);

    cout << "Area of the parallelogram: " << area << endl;
    cout << "Perimeter of the parallelogram: " << perimeter << endl;
}

void calculateRhombus() {
    double d1, d2, side;
    cout << "Enter the lengths of the diagonals and the side length of the rhombus: ";
    cin >> d1 >> d2 >> side;

    double area = (d1 * d2) / 2;
    double perimeter = 4 * side;

    cout << "Area of the rhombus: " << area << endl;
    cout << "Perimeter of the rhombus: " << perimeter << endl;
}

void calculateTrapezium() {
    double a, b, h;
    cout << "Enter the lengths of the two parallel sides and the height of the trapezium: ";
    cin >> a >> b >> h;

    double area = ((a + b) / 2) * h;
    double perimeter = a + b + 2 * sqrt(h * h + pow((b - a) / 2, 2));

    cout << "Area of the trapezium: " << area << endl;
    cout << "Perimeter of the trapezium: " << perimeter << endl;
}

void calculateKite() {
    double d1, d2, side;
    cout << "Enter the lengths of the diagonals and the side length of the kite: ";
    cin >> d1 >> d2 >> side;

    double area = (d1 * d2) / 2;
    double perimeter = 4 * side;

    cout << "Area of the kite: " << area << endl;
    cout << "Perimeter of the kite: " << perimeter << endl;
}

void calculatePolygon(int sides) {
    double side, apothem;
    cout << "Enter the side length and the apothem of the polygon: ";
    cin >> side >> apothem;

    double area = (sides * side * apothem) / 2;
    double perimeter = sides * side;

    cout << "Area of the polygon: " << area << endl;
    cout << "Perimeter of the polygon: " << perimeter << endl;
}

void calculatePentagon() {
    double side;
    cout << "Enter the side length of the pentagon: ";
    cin >> side;

    double area = (sqrt(5 * (5 + 2 * sqrt(5))) * side * side) / 4;
    double perimeter = 5 * side;

    cout << "Area of the pentagon: " << area << endl;
    cout << "Perimeter of the pentagon: " << perimeter << endl;
}

void calculateHexagon() {
    double side;
    cout << "Enter the side length of the hexagon: ";
    cin >> side;

    double area = ((3 * sqrt(3)) / 2) * side * side;
    double perimeter = 6 * side;

    cout << "Area of the hexagon: " << area << endl;
    cout << "Perimeter of the hexagon: " << perimeter << endl;
}

void calculateOctagon() {
    double side;
    cout << "Enter the side length of the octagon: ";
    cin >> side;

    double area = 2 * (1 + sqrt(2)) * side * side;
    double perimeter = 8 * side;

    cout << "Area of the octagon: " << area << endl;
    cout << "Perimeter of the octagon: " << perimeter << endl;
}

void calculateNonagon() {
    double side;
    cout << "Enter the side length of the nonagon: ";
    cin >> side;

    double area = (9 / 4) * side * side * (1 / tan(M_PI / 9));
    double perimeter = 9 * side;

    cout << "Area of the nonagon: " << area << endl;
    cout << "Perimeter of the nonagon: " << perimeter << endl;
}

void calculateDecagon() {
    double side;
    cout << "Enter the side length of the decagon: ";
    cin >> side;

    double area = (5 / 2) * side * side * (1 / tan(M_PI / 10));
    double perimeter = 10 * side;

    cout << "Area of the decagon: " << area << endl;
    cout << "Perimeter of the decagon: " << perimeter << endl;
}

void calculateSphere() {
    double radius;
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    double volume = (4.0 / 3) * M_PI * pow(radius, 3);
    double surfaceArea = 4 * M_PI * pow(radius, 2);

    cout << "Volume of the sphere: " << volume << endl;
    cout << "Surface area of the sphere: " << surfaceArea << endl;
}

void calculateCube() {
    double side;
    cout << "Enter the side length of the cube: ";
    cin >> side;

    double volume = pow(side, 3);
    double surfaceArea = 6 * pow(side, 2);

    cout << "Volume of the cube: " << volume << endl;
    cout << "Surface area of the cube: " << surfaceArea << endl;
}

void calculateCuboid() {
    double length, width, height;
    cout << "Enter the length, width, and height of the cuboid: ";
    cin >> length >> width >> height;

    double volume = length * width * height;
    double surfaceArea = 2 * (length * width + width * height + height * length);

    cout << "Volume of the cuboid: " << volume << endl;
    cout << "Surface area of the cuboid: " << surfaceArea << endl;
}

void calculateCone() {
    double radius, height;
    cout << "Enter the radius and height of the cone: ";
    cin >> radius >> height;

    double volume = (1.0 / 3) * M_PI * pow(radius, 2) * height;
    double slantHeight = sqrt(pow(radius, 2) + pow(height, 2));
    double surfaceArea = M_PI * radius * (radius + slantHeight);

    cout << "Volume of the cone: " << volume << endl;
    cout << "Surface area of the cone: " << surfaceArea << endl;
}

void calculateCylinder() {
    double radius, height;
    cout << "Enter the radius and height of the cylinder: ";
    cin >> radius >> height;

    double volume = M_PI * pow(radius, 2) * height;
    double surfaceArea = 2 * M_PI * radius * (radius + height);

    cout << "Volume of the cylinder: " << volume << endl;
    cout << "Surface area of the cylinder: " << surfaceArea << endl;
}

void calculateOval() {
    double a, b;
    cout << "Enter the semi-major and semi-minor axes of the oval: ";
    cin >> a >> b;

    double area = M_PI * a * b;
    // Perimeter approximation using Ramanujan's formula
    double perimeter = M_PI * (3 * (a + b) - sqrt((3 * a + b) * (a + 3 * b)));

    cout << "Area of the oval: " << area << endl;
    cout << "Perimeter of the oval: " << perimeter << endl;
}

void calculateHeptagon() {
    double side;
    cout << "Enter the side length of the heptagon: ";
    cin >> side;

    double area = (7 / 4) * side * side * (1 / tan(M_PI / 7));
    double perimeter = 7 * side;

    cout << "Area of the heptagon: " << area << endl;
    cout << "Perimeter of the heptagon: " << perimeter << endl;
}

// Helper function to calculate the upper bound (bounding function)
double calculateBound(int profit, int weight, int idx, int W, vector<int>& profits, vector<int>& weights, int n) {
    if (weight >= W) return 0.0;  // if weight exceeds capacity, no profit
    
    double bound = profit;
    double totalWeight = weight;
    
    for (int i = idx; i < n; i++) {
        if (totalWeight + weights[i] <= W) {
            totalWeight += weights[i];
            bound += profits[i];
        } else {
            bound += (W - totalWeight) * static_cast<double>(profits[i]) / weights[i];
            break;
        }
    }
    
    return bound;
}

// Branch and Bound algorithm for 0/1 Knapsack (without using queue header)
int branchAndBoundKnapsack(int W, vector<int>& profits, vector<int>& weights, int n) {
    // Sort items by profit/weight ratio in descending order
    vector<int> index(n);
    for (int i = 0; i < n; i++) index[i] = i;
    sort(index.begin(), index.end(), [&](int i, int j) {
        return (static_cast<double>(profits[i]) / weights[i]) > (static_cast<double>(profits[j]) / weights[j]);
    });

    // Create sorted profits and weights vectors
    vector<int> sortedProfits(n), sortedWeights(n);
    for (int i = 0; i < n; i++) {
        sortedProfits[i] = profits[index[i]];
        sortedWeights[i] = weights[index[i]];
    }

    // Manually managing nodes for Branch and Bound (instead of priority queue)
    vector<pair<double, pair<int, pair<int, int>>>> nodes;

    // Initial node (profit = 0, weight = 0, level = 0, bound is calculated)
    double initialBound = calculateBound(0, 0, 0, W, sortedProfits, sortedWeights, n);
    nodes.push_back({initialBound, {0, {0, 0}}});
    
    int maxProfit = 0;

    // While nodes remain to be processed
    while (!nodes.empty()) {
        // Find the node with the maximum bound (simulating a max-priority queue)
        int maxIdx = 0;
        for (int i = 1; i < nodes.size(); i++) {
            if (nodes[i].first > nodes[maxIdx].first) {
                maxIdx = i;
            }
        }

        // Get the node with the maximum bound
        auto node = nodes[maxIdx];
        nodes.erase(nodes.begin() + maxIdx);  // Remove the node after processing
        
        double bound = node.first;
        int profit = node.second.first;
        int weight = node.second.second.first;
        int level = node.second.second.second;

        // If the node's bound is less than the current max profit, skip it
        if (bound <= maxProfit) continue;
        
        // Update max profit
        if (weight <= W && profit > maxProfit) maxProfit = profit;

        // If at the last level, continue
        if (level == n) continue;

        // Left child (include the current item)
        int nextWeight = weight + sortedWeights[level];
        int nextProfit = profit + sortedProfits[level];
        if (nextWeight <= W) {
            double boundWithItem = calculateBound(nextProfit, nextWeight, level + 1, W, sortedProfits, sortedWeights, n);
            nodes.push_back({boundWithItem, {nextProfit, {nextWeight, level + 1}}});
        }

        // Right child (exclude the current item)
        double boundWithoutItem = calculateBound(profit, weight, level + 1, W, sortedProfits, sortedWeights, n);
        nodes.push_back({boundWithoutItem, {profit, {weight, level + 1}}});
    }

    return maxProfit;
}

int babal() {
    int n, W;
    
    // Input number of items and knapsack capacity
    cout << "\nEnter number of items: ";
    cin >> n;
    
    cout << "Enter the capacity of the knapsack: ";
    cin >> W;

    vector<int> profits(n), weights(n);
    
    // Input profits and weights of items
    cout << "Enter profits of the items:\n";
    for (int i = 0; i < n; i++) cin >> profits[i];

    cout << "Enter weights of the items:\n";
    for (int i = 0; i < n; i++) cin >> weights[i];

    // Solve the problem using Branch and Bound
    int maxProfit = branchAndBoundKnapsack(W, profits, weights, n);
    
    // Output the maximum profit
    cout << "Maximum profit: " << maxProfit << endl;
    cout<<"\nExiting from Branch And Bound Algorithm........"<<endl;
    return 0;
}
// Function to perform bitwise AND
int bitwiseAND(int a, int b) {
    return a & b;
}

// Function to perform bitwise OR
int bitwiseOR(int a, int b) {
    return a | b;
}

// Function to perform bitwise XOR
int bitwiseXOR(int a, int b) {
    return a ^ b;
}

// Function to perform bitwise NOT
int bitwiseNOT(int a) {
    return ~a;
}

// Function to perform left shift
int leftShift(int a, int shiftBy) {
    return a << shiftBy;
}

// Function to perform right shift
int rightShift(int a, int shiftBy) {
    return a >> shiftBy;
}

int bitwiseal() {
    int a, b, choice, shiftBy, numberChoice;

    cout << "\nEnter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    while (true) {
        cout << "\nBitwise Operations :-\n\n";
        cout << "1. AND\n";
        cout << "2. OR\n";
        cout << "3. XOR\n";
        cout << "4. NOT\n";
        cout << "5. Left Shift\n";
        cout << "6. Right Shift\n";
        cout << "7. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice >= 4 && choice <= 6) {
            // For NOT, Left Shift, and Right Shift, ask the user to select the number (a or b)
            cout << "Select number to operate on (1 for 'a' or 2 for 'b'): ";
            cin >> numberChoice;
        }

        switch (choice) {
            case 1:
                cout << "Result of " << a << " & " << b << " = " << bitwiseAND(a, b) << endl;
                break;
            case 2:
                cout << "Result of " << a << " | " << b << " = " << bitwiseOR(a, b) << endl;
                break;
            case 3:
                cout << "Result of " << a << " ^ " << b << " = " << bitwiseXOR(a, b) << endl;
                break;
            case 4:
                if (numberChoice == 1) {
                    cout << "Result of ~" << a << " = " << bitwiseNOT(a) << endl;
                } else if (numberChoice == 2) {
                    cout << "Result of ~" << b << " = " << bitwiseNOT(b) << endl;
                } else {
                    cout << "Invalid number choice.\n";
                }
                break;
            case 5:
                cout << "Enter number of positions to shift left: ";
                cin >> shiftBy;
                if (numberChoice == 1) {
                    cout << "Result of " << a << " << " << shiftBy << " = " << leftShift(a, shiftBy) << endl;
                } else if (numberChoice == 2) {
                    cout << "Result of " << b << " << " << shiftBy << " = " << leftShift(b, shiftBy) << endl;
                } else {
                    cout << "Invalid number choice.\n";
                }
                break;
            case 6:
                cout << "Enter number of positions to shift right: ";
                cin >> shiftBy;
                if (numberChoice == 1) {
                    cout << "Result of " << a << " >> " << shiftBy << " = " << rightShift(a, shiftBy) << endl;
                } else if (numberChoice == 2) {
                    cout << "Result of " << b << " >> " << shiftBy << " = " << rightShift(b, shiftBy) << endl;
                } else {
                    cout << "Invalid number choice.\n";
                }
                break;
            case 7:
                cout << "\nExiting from Bitwise Algorithm........\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

// Function to perform bucket sort
void bucketSort(float arr[], int n) {
    if (n <= 0) return;  // Handle edge case for empty array

    // Find the maximum value to determine the range of values
    float maxVal = arr[0];
    float minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    // Number of buckets
    int bucketCount = 10;
    vector<float> buckets[bucketCount];

    // Distribute input array elements into buckets
    for (int i = 0; i < n; i++) {
        int bucketIndex = static_cast<int>(bucketCount * (arr[i] - minVal) / (maxVal - minVal));
        if (bucketIndex == bucketCount) bucketIndex--; // Ensure index is within bounds
        buckets[bucketIndex].push_back(arr[i]);
    }

    // Sort individual buckets and collect the results
    int index = 0;
    for (int i = 0; i < bucketCount; i++) {
        sort(buckets[i].begin(), buckets[i].end());
        for (float num : buckets[i]) {
            arr[index++] = num;
        }
    }
}

// Function to print an array
void printArray5(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int buckets() {
    int n;
    cout << "\nEnter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }

    float* arr = new float[n];

    cout << "Enter " << n << " float values: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array before sorting: ";
    printArray5(arr, n);

    bucketSort(arr, n);

    cout << "Array after sorting: ";
    printArray5(arr, n);

    delete[] arr; // Free allocated memory
    cout<<"\nExiting from Bucket Sort......"<<endl;
    return 0;
}

// Function to get the maximum value in the array
int getmax50(const vector<int>& arr) {
    return *max_element(arr.begin(), arr.end());
}

// Function to perform Counting Sort based on a specific digit
void  countingSort50(vector<int>& arr, int exp) {
    int n = arr.size();
    vector<int> output(n);
    vector<int> count(10, 0);

    // Store count of occurrences of each digit
    for (int i = 0; i < n; ++i) {
        count[(arr[i] / exp) % 10]++;
    }

    // Change count[i] so that count[i] contains the position of this digit in output[]
    for (int i = 1; i < 10; ++i) {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (int i = n - 1; i >= 0; --i) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the output array to arr[]
    for (int i = 0; i < n; ++i) {
        arr[i] = output[i];
    }
}

// Function to perform Radix Sort
void radixSort(vector<int>& arr) {
    int max = getmax50(arr);

    for (int exp = 1; max / exp > 0; exp *= 10) {
         countingSort50(arr, exp);
    }
}

// Function to display the array
void displayArray5(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int radixs() {
    int n;
    cout << "\nEnter the number of elements: ";
    cin >> n;

    // Input validation
    if (cin.fail() || n <= 0) {
        cout << "Invalid input. Number of elements must be a positive integer." << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter the elements (non-negative integers only): ";

    // Input validation for array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (cin.fail() || arr[i] < 0) {
            cout << "Invalid input. Please enter non-negative integers only." << endl;
            return 1;
        }
    }

    cout << "Array before sorting: ";
    displayArray5(arr);

    radixSort(arr);

    cout << "Array after sorting: ";
    displayArray5(arr);
    cout<<"\nExiting from Radix Sort......"<<endl;
    return 0;
}
// Function to perform Counting Sort
void countingSort(vector<int>& arr) {
    if (arr.empty()) return;

    // Find the maximum value in the array
    int maxVal = *max_element(arr.begin(), arr.end());

    // If there are negative values, report an error
    if (maxVal < 0) {
        cout << "Counting Sort requires non-negative integers." << endl;
        return;
    }

    // Create a count array and initialize all elements to 0
    vector<int> count(maxVal + 1, 0);

    // Count the occurrences of each element in the input array
    for (int num : arr) {
        count[num]++;
    }

    // Modify the original array to be sorted
    int index = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}

// Function to display the array
void displayArray4(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int countings() {
    int n;
    cout << "\nEnter the number of elements: ";
    cin >> n;

    // Input validation
    if (cin.fail() || n <= 0) {
        cout << "Invalid input. Number of elements must be a positive integer." << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter the elements (non-negative integers only): ";

    // Input validation for array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (cin.fail() || arr[i] < 0) {
            cout << "Invalid input. Please enter non-negative integers only." << endl;
            return 1;
        }
    }

    cout << "Array before sorting: ";
    displayArray4(arr);

    countingSort(arr);

    cout << "Array after sorting: ";
    displayArray4(arr);
    cout<<"\nExiting from Counting Sort......"<<endl;
    return 0;
}
// Function to swap3 two elements
void swap3(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// Function to heapify30 a subtree rooted with node i
void heapify30(vector<int>& arr, int n, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // left = 2*i + 1
    int right = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    // If largest is not root
    if (largest != i) {
        swap3(arr[i], arr[largest]);

        // Recursively heapify30 the affected sub-tree
        heapify30(arr, n, largest);
    }
}

// Function to perform heap sort
void heapsort30(vector<int>& arr) {
    int n = arr.size();

    // Build a maxheap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify30(arr, n, i);
    }

    // Extract elements one by one from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap3(arr[0], arr[i]);

        // Call max heapify30 on the reduced heap
        heapify30(arr, i, 0);
    }
}

// Function to displayheap30 the array
void displayheap30(const vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}

int heaps() {
    int n;
    cout << "\nEnter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array before sorting: ";
    displayheap30(arr);

    heapsort30(arr);

    cout << "Array after sorting: ";
    displayheap30(arr);
    cout<<"\nExiting from Heap Sort......"<<endl;
    return 0;
}
// Function to swap2 two elements
void swap2(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Partition function to choose a pivot and arrange elements
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choosing the last element as the pivot
    int i = (low - 1); // Index of the smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap2(arr[i], arr[j]);
        }
    }
    swap2(arr[i + 1], arr[high]);
    return (i + 1);
}

// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print an array
void printArray4(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int quicks() {
    int n;
    // User input for number of elements
    cout << "\nEnter the number of elements: ";
    cin >> n;

    int arr[n];

    // User input for array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting the array using QuickSort
    quickSort(arr, 0, n - 1);

    // Displaying the sorted array
    cout << "Sorted array: ";
    printArray4(arr, n);
    cout<<"\nExiting from Quick Sort......"<<endl;
    return 0;
}
// Function to merge two subarrays of arr[]
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temp arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    // Merge the temp arrays back into arr[left..right]
    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Function to sort the array using Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

// Function to print an array
void printArray3(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int merges() {
    int n;
    // User input for array size
    cout << "\nEnter number of elements in the array: ";
    cin >> n;

    int arr[n];

    // User input for array elements
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display the unsorted array
    cout << "Unsorted array: ";
    printArray3(arr, n);

    // Call mergeSort
    mergeSort(arr, 0, n - 1);

    // Display the sorted array
    cout << "Sorted array: ";
    printArray3(arr, n);
    cout<<"\nExiting from Merge Sort......"<<endl;
    return 0;
}
// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to display the array
void displayArray3(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int insertions() {
    int n;
    // Taking the size of the array from the user
    cout << "\nEnter the number of elements: ";
    cin >> n;

    int arr[n];

    // Taking array input from the user
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Displaying the original array
    cout << "Original array: ";
    displayArray3(arr, n);

    // Sorting the array using insertion sort
    insertionSort(arr, n);

    // Displaying the sorted array
    cout << "Sorted array: ";
    displayArray3(arr, n);
    cout<<"\nExiting from Insertion Sort......"<<endl;
    return 0;
}

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        // Last i elements are already sorted
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        // If no elements were swapped, the array is already sorted
        if (!swapped)
            break;
    }
}

// Function to display the array
void printArray2(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int bubbles() {
    int n;
    // Get the number of elements from the user
    cout << "\nEnter the number of elements: ";
    cin >> n;
    
    int arr[n]; // Array to hold the elements
    
    // Get the elements from the user
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Perform bubble sort
    bubbleSort(arr, n);
    
    // Display the sorted array
    cout << "Sorted array: ";
    printArray2(arr, n);
    cout<<"\nExiting from Bubble Sort......"<<endl;
    return 0;
}

// Function to perform selection sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // Find the index of the minimum element in the remaining unsorted array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int selections() {
    int n;
    // Taking array size from user
    cout << "\nEnter number of elements: ";
    cin >> n;

    int arr[n];

    // Taking array elements input from user
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting the array using selection sort
    selectionSort(arr, n);

    // Printing the sorted array
    cout << "Sorted array: ";
    printArray(arr, n);
    cout<<"\nExiting from Selection Sort......"<<endl;
    return 0;
}
// Function to perform linear search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return index if element is found
        }
    }
    return -1; // Return -1 if element is not found
}

// Function to display the array
void displayArray2(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int ls() {
    int n;
    
    // Get the number of elements in the array
    cout << "\nEnter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    char choice;
    do {
        // Display the array before each search
        displayArray2(arr, n);

        int key;
        // Input the element to search
        cout << "Enter the element to search: ";
        cin >> key;

        // Perform linear search
        int result = linearSearch(arr, n, key);
        
        // Display the result
        if (result != -1) {
            cout << "Element found at index " << result << endl;
        } else {
            cout << "Element not found." << endl;
        }

        // Ask the user if they want to continue searching
        cout << "Do you want to search another element? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nExiting from Linear Search......." << endl;

    return 0;
}
// Function to display the array
void displayArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;  // Element found
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;  // Element not found
}

int binarys() {
    int size;

    // User input for array size
    cout << "\nEnter the size of the array: ";
    cin >> size;

    int arr[size];
    
    // User input for array elements
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Sorting the array for binary search
    sort(arr, arr + size);

    // Display the sorted array
    displayArray(arr, size);

    char choice;
    do {
        int target;
        // User input for the element to search
        cout << "Enter the element to search: ";
        cin >> target;

        // Perform binary search
        int result = binarySearch(arr, size, target);
        if (result != -1) {
            cout << "Element found at index: " << result << endl;
        } else {
            cout << "Element not found in the array." << endl;
        }

        // Ask the user if they want to search another element
        cout << "Do you want to search another element? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "\nExiting from Binary Search......" << endl;
    
    return 0;
}

// Max size of the map
const int MAX_SIZE3 = 100;

// Function to insert7 a key-value pair into the map
void insert7(string keys[], int values[], int &size, string key, int value) {
    // Check if the key already exists
    for (int i = 0; i < size; ++i) {
        if (keys[i] == key) {
            values[i] = value; // Update the value if key exists
            cout << "Key updated successfully.\n";
            return;
        }
    }

    // Insert7 new key-value pair
    if (size < MAX_SIZE3) {
        keys[size] = key;
        values[size] = value;
        size++;
        cout << "Key-Value pair insert7ed successfully.\n";
    } else {
        cout << "Map is full, cannot insert7 more elements.\n";
    }
}

// Function to search7 for a value by key
void search7(string keys[], int values[], int size, string key) {
    for (int i = 0; i < size; ++i) {
        if (keys[i] == key) {
            cout << "Value associated with key \"" << key << "\" is: " << values[i] << "\n";
            return;
        }
    }
    cout << "Key not found.\n";
}

// Function to delete a key-value pair from the map
void remove4(string keys[], int values[], int &size, string key) {
    for (int i = 0; i < size; ++i) {
        if (keys[i] == key) {
            // Shift elements to the left to delete the key-value pair
            for (int j = i; j < size - 1; ++j) {
                keys[j] = keys[j + 1];
                values[j] = values[j + 1];
            }
            size--;
            cout << "Key-Value pair deleted successfully.\n";
            return;
        }
    }
    cout << "Key not found.\n";
}

// Function to displaymap all key-value pairs in the map
void displaymap(string keys[], int values[], int size) {
    if (size == 0) {
        cout << "Map is empty.\n";
        return;
    }
    cout << "Map contents:\n";
    for (int i = 0; i < size; ++i) {
        cout << keys[i] << " : " << values[i] << "\n";
    }
}

int mp() {
    string keys[MAX_SIZE3];
    int values[MAX_SIZE3];
    int size = 0; // Current size of the map

    int choice;
    string key;
    int value;
    cout<<"\nNote :- Didn't use any capital letters as an input in the program of Map."<<endl;
    do {
        cout << "\nMap Operations :-\n\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Delete\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter key (string): ";
                cin >> key;
                cout << "Enter value (integer): ";
                cin >> value;
                insert7(keys, values, size, key, value);
                break;

            case 2:
                cout << "Enter key to search7: ";
                cin >> key;
                search7(keys, values, size, key);
                break;

            case 3:
                cout << "Enter key to delete: ";
                cin >> key;
                remove4(keys, values, size, key);
                break;

            case 4:
                displaymap(keys, values, size);
                break;

            case 5:
                cout << "\nExiting from Map...\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
int set100() {
    set<int> mySet;      // Declare a set of integers
    int choice, value;

    do {
        cout << "\nSet Operations :-\n\n";
        cout << "1. Insert a value\n";
        cout << "2. Delete a value\n";
        cout << "3. Search for a value\n";
        cout << "4. Display all elements\n";
        cout << "5. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Insert value
                cout << "Enter a value to insert: ";
                cin >> value;
                mySet.insert(value);
                cout << value << " has been inserted.\n";
                break;

            case 2: // Delete value
                cout << "Enter a value to delete: ";
                cin >> value;
                if (mySet.erase(value)) {
                    cout << value << " has been deleted.\n";
                } else {
                    cout << value << " not found in the set.\n";
                }
                break;

            case 3: // Search for value
                cout << "Enter a value to search: ";
                cin >> value;
                if (mySet.find(value) != mySet.end()) {
                    cout << value << " exists in the set.\n";
                } else {
                    cout << value << " does not exist in the set.\n";
                }
                break;

            case 4: // Display all elements
                if (mySet.empty()) {
                    cout << "The set is empty.\n";
                } else {
                    cout << "Elements in the set: ";
                    for (int element : mySet) {
                        cout << element << " ";
                    }
                    cout << "\n";
                }
                break;

            case 5: // Exit
                cout << "\nExiting from Set......\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
                break;
        }

    } while (choice != 5);

    return 0;
}

const int TABLE_SIZE = 10;
string hashTable[TABLE_SIZE];
const int MAX5 = 100;
vector<list<int>> adjList(MAX5);  // adjacency list
int vertices = 0;                // number of vertices

int graph7[MAX5][MAX5];  // adjacency matrix

void initializeGraph72() {
    for (int i = 0; i < MAX5; i++)
        for (int j = 0; j < MAX5; j++)
            graph7[i][j] = 0;
}

void insertEdge2(int u, int v) {
    if (u < vertices && v < vertices) {
        graph7[u][v] = 1;  // directed graph7, set to 1
        graph7[v][u] = 1;  // if undirected, comment this line
        cout << "Edge inserted between " << u << " and " << v << "." << endl;
    } else {
        cout << "Error: Vertex out of bounds!" << endl;
    }
}

void deleteEdge2(int u, int v) {
    if (u < vertices && v < vertices) {
        graph7[u][v] = 0;
        graph7[v][u] = 0;  // if undirected, comment this line
        cout << "Edge deleted between " << u << " and " << v << "." << endl;
    } else {
        cout << "Error: Vertex out of bounds!" << endl;
    }
}

bool searchEdge2(int u, int v) {
    if (u < vertices && v < vertices) {
        return graph7[u][v] == 1;
    }
    cout << "Error: Vertex out of bounds!" << endl;
    return false;
}

void displayGraph72() {
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cout << graph7[i][j] << " ";
        }
        cout << endl;
    }
}

// Manual queue implementation using an array
void bfs2(int start) {
    if (start >= vertices) {
        cout << "Error: Starting vertex out of bounds!" << endl;
        return;
    }

    vector<bool> visited(vertices, false);
    int queue[MAX5];  // Array to act as a queue
    int front = 0, rear = 0;

    visited[start] = true;
    queue[rear++] = start;  // Enqueue

    cout << "BFS Traversal starting from vertex " << start << ": ";

    while (front < rear) {
        int vertex = queue[front++];  // Dequeue
        cout << vertex << " ";

        for (int i = 0; i < vertices; i++) {
            if (graph7[vertex][i] == 1 && !visited[i]) {
                visited[i] = true;
                queue[rear++] = i;  // Enqueue
            }
        }
    }
    cout << endl;
}

void dfs2Util2(int vertex, vector<bool>& visited) {
    visited[vertex] = true;
    cout << vertex << " ";

    for (int i = 0; i < vertices; i++) {
        if (graph7[vertex][i] == 1 && !visited[i]) {
            dfs2Util2(i, visited);
        }
    }
}

void dfs2(int start) {
    if (start >= vertices) {
        cout << "Error: Starting vertex out of bounds!" << endl;
        return;
    }

    vector<bool> visited(vertices, false);
    cout << "DFS Traversal starting from vertex " << start << ": ";
    dfs2Util2(start, visited);
    cout << endl;
}

int graph200() {
    int choice, u, v, start;
    cout <<endl<<"\nEnter the number of vertices: ";
    cin >> vertices;
    
    if (vertices <= 0 || vertices > MAX5) {
        cout << "Error: Invalid number of vertices!" << endl;
        return 1;
    }

    initializeGraph72();

    do {
        cout << "\nAdjacency Matrix Graph Operations :-\n\n";
        cout << "1. Insert Edge\n";
        cout << "2. Delete Edge\n";
        cout << "3. Search Edge\n";
        cout << "4. Display Graph\n";
        cout << "5. BFS Traversal\n";
        cout << "6. DFS Traversal\n";
        cout << "0. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter edge (u v): ";
            cin >> u >> v;
            insertEdge2(u, v);
            break;
        case 2:
            cout << "Enter edge (u v): ";
            cin >> u >> v;
            deleteEdge2(u, v);
            break;
        case 3:
            cout << "Enter edge to search (u v): ";
            cin >> u >> v;
            if (searchEdge2(u, v))
                cout << "Edge exists!" << endl;
            else
                cout << "Edge does not exist!" << endl;
            break;
        case 4:
            displayGraph72();
            break;
        case 5:
            cout << "Enter starting vertex for BFS: ";
            cin >> start;
            bfs2(start);
            break;
        case 6:
            cout << "Enter starting vertex for DFS: ";
            cin >> start;
            dfs2(start);
            break;
        case 0:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 0);

    return 0;
}
void initializeGraph() {
    for (int i = 0; i < MAX5; i++) {
        adjList[i].clear();
    }
}

void insertEdge(int u, int v) {
    if (u < vertices && v < vertices) {
        adjList[u].push_back(v);  // directed graph
        adjList[v].push_back(u);  // if undirected, comment this line
        cout << "Edge inserted between " << u << " and " << v << "." << endl;
    } else {
        cout << "Error: Vertex out of bounds!" << endl;
    }
}

void deleteEdge(int u, int v) {
    if (u < vertices && v < vertices) {
        adjList[u].remove(v);
        adjList[v].remove(u);  // if undirected, comment this line
        cout << "Edge deleted between " << u << " and " << v << "." << endl;
    } else {
        cout << "Error: Vertex out of bounds!" << endl;
    }
}

bool searchEdge(int u, int v) {
    if (u < vertices && v < vertices) {
        for (int neighbor : adjList[u]) {
            if (neighbor == v) {
                return true;
            }
        }
        return false;
    }
    cout << "Error: Vertex out of bounds!" << endl;
    return false;
}

void displayGraph() {
    cout << "Adjacency List:" << endl;
    for (int i = 0; i < vertices; i++) {
        cout << i << ": ";
        for (int neighbor : adjList[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
}

// Custom queue10 implementation
class Queue10 {
    int front, rear, size;
    int* queue10;
public:
    Queue10(int s) {
        front = rear = 0;
        size = s;
        queue10 = new int[s];
    }
    ~Queue10() {
        delete[] queue10;
    }
    void enqueue10(int value) {
        if (rear == size) {
            cout << "Queue is full" << endl;
        } else {
            queue10[rear] = value;
            rear++;
        }
    }
    int dequeue10() {
        if (front == rear) {
            cout << "Queue is empty" << endl;
            return -1;
        } else {
            int value = queue10[front];
            front++;
            return value;
        }
    }
    bool isEmpty() {
        return front == rear;
    }
};

void bfs(int start) {
    if (start >= vertices) {
        cout << "Error: Starting vertex out of bounds!" << endl;
        return;
    }

    vector<bool> visited(vertices, false);
    Queue10 q(vertices);

    visited[start] = true;
    q.enqueue10(start);

    cout << "BFS Traversal starting from vertex " << start << ": ";

    while (!q.isEmpty()) {
        int vertex = q.dequeue10();
        cout << vertex << " ";

        for (int neighbor : adjList[vertex]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.enqueue10(neighbor);
            }
        }
    }
    cout << endl;
}

void dfsUtil(int vertex, vector<bool>& visited) {
    visited[vertex] = true;
    cout << vertex << " ";

    for (int neighbor : adjList[vertex]) {
        if (!visited[neighbor]) {
            dfsUtil(neighbor, visited);
        }
    }
}

void dfs(int start) {
    if (start >= vertices) {
        cout << "Error: Starting vertex out of bounds!" << endl;
        return;
    }

    vector<bool> visited(vertices, false);
    cout << "DFS Traversal starting from vertex " << start << ": ";
    dfsUtil(start, visited);
    cout << endl;
}

int graph100() {
    int choice, u, v, start;
    cout << "\nEnter the number of vertices: ";
    cin >> vertices;
    
    if (vertices <= 0 || vertices > MAX5) {
        cout << "Error: Invalid number of vertices!" << endl;
        return 1;
    }

    initializeGraph();

    do {
        cout << "\nAdjacency List Graph Operations :-\n\n";
        cout << "1. Insert Edge\n";
        cout << "2. Delete Edge\n";
        cout << "3. Search Edge\n";
        cout << "4. Display Graph\n";
        cout << "5. BFS Traversal\n";
        cout << "6. DFS Traversal\n";
        cout << "0. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter edge (u v): ";
            cin >> u >> v;
            insertEdge(u, v);
            break;
        case 2:
            cout << "Enter edge (u v): ";
            cin >> u >> v;
            deleteEdge(u, v);
            break;
        case 3:
            cout << "Enter edge to search (u v): ";
            cin >> u >> v;
            if (searchEdge(u, v))
                cout << "Edge exists!" << endl;
            else
                cout << "Edge does not exist!" << endl;
            break;
        case 4:
            displayGraph();
            break;
        case 5:
            cout << "Enter starting vertex for BFS: ";
            cin >> start;
            bfs(start);
            break;
        case 6:
            cout << "Enter starting vertex for DFS: ";
            cin >> start;
            dfs(start);
            break;
        case 0:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 0);

    return 0;
}
// Hash function to calculate the index
int hashFunction(string key) {
    int hash = 0;
    for (char ch : key) {
        hash = (hash + ch) % TABLE_SIZE;
    }
    return hash;
}

// Insert6 a key into the hash table
void insert6(string key) {
    int index = hashFunction(key);
    while (!hashTable[index].empty()) {
        index = (index + 1) % TABLE_SIZE;
    }
    hashTable[index] = key;
}

// Search6 for a key in the hash table
bool search6(string key) {
    int index = hashFunction(key);
    int start = index;
    while (!hashTable[index].empty()) {
        if (hashTable[index] == key) {
            return true;
        }
        index = (index + 1) % TABLE_SIZE;
        if (index == start) {
            break;
        }
    }
    return false;
}

// Delete a key from the hash table
void deleteKey(string key) {
    int index = hashFunction(key);
    int start = index;
    while (!hashTable[index].empty()) {
        if (hashTable[index] == key) {
            hashTable[index] = "";
            return;
        }
        index = (index + 1) % TABLE_SIZE;
        if (index == start) {
            break;
        }
    }
    cout << "Key not found!" << endl;
}

// Displayhashing the hash table
void displayhashing() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << i << " --> " << hashTable[i] << endl;
    }
}

int ht() {
    int choice;
    string key;
    do {
        cout << "\nHashing Operations :-\n\n";
        cout << "1. Insert\n2. Search\n3. Delete\n4. Display\n5. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter key to insert: ";
                cin >> key;
                insert6(key);
                break;
            case 2:
                cout << "Enter key to search: ";
                cin >> key;
                if (search6(key)) {
                    cout << "Key found!" << endl;
                } else {
                    cout << "Key not found!" << endl;
                }
                break;
            case 3:
                cout << "Enter key to delete: ";
                cin >> key;
                deleteKey(key);
                break;
            case 4:
                displayhashing();
                break;
            case 5:
                cout<<"\nExiting from Hashing......"<<endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }while(choice!=5);
    return 0;
}

// Function to swap two elements
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// Function to heapify a subtree rooted with node i which is an index in arr[].
// n is the size of the heap
void heapify(vector<int> &heap, int n, int i) {
    int largest = i;          // Initialize largest as root
    int left = 2 * i + 1;     // left = 2*i + 1
    int right = 2 * i + 2;    // right = 2*i + 2

    // If left child is larger than root
    if (left < n && heap[left] > heap[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && heap[right] > heap[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(heap[i], heap[largest]);

        // Recursively heapify the affected sub-tree
        heapify(heap, n, largest);
    }
}

// Function to insert a new value into the heap
void insertHeap(vector<int> &heap, int key) {
    int n = heap.size();
    heap.push_back(key); // Insert the new key at the end
    n = heap.size(); // Update the size

    // Fix the min heap property if it's violated
    int i = n - 1;
    while (i != 0 && heap[(i - 1) / 2] < heap[i]) {
        swap(heap[i], heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Function to delete the root element from the heap
void deleteRoot(vector<int> &heap) {
    int n = heap.size();
    if (n == 0) {
        cout << "Heap is empty!" << endl;
        return;
    }

    // Move the last element to the root and remove the last element
    heap[0] = heap[n - 1];
    heap.pop_back();

    // Heapify the root element to maintain the heap property
    heapify(heap, heap.size(), 0);
}

// Function to print the elements of the heap
void printHeap(const vector<int> &heap) {
    for (int i = 0; i < heap.size(); ++i)
        cout << heap[i] << " ";
    cout << endl;
}

// Function to build a max-heap from an unordered array
void buildHeap(vector<int> &heap) {
    int n = heap.size();

    // Index of the last non-leaf node
    int startIdx = (n / 2) - 1;

    // Perform reverse level order traversal from the last non-leaf node
    // and heapify each node
    for (int i = startIdx; i >= 0; i--) {
        heapify(heap, n, i);
    }
}

int heap1() {
    vector<int> heap;
    int choice, value;

    do {
        cout << "\nHeap Operations :-\n\n";
        cout << "1. Insert\n";
        cout << "2. Delete Root\n";
        cout << "3. Print Heap\n";
        cout << "4. Build Heap\n";
        cout << "5. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                insertHeap(heap, value);
                cout << "Value inserted successfully.\n";
                break;

            case 2:
                deleteRoot(heap);
                cout << "Root element deleted.\n";
                break;

            case 3:
                cout << "Current heap: ";
                printHeap(heap);
                break;

            case 4:
                buildHeap(heap);
                cout << "Heap built from the existing array.\n";
                break;

            case 5:
                cout << "\nExiting from Heap.......\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

        cout << endl;
    } while (choice != 5);

    return 0;
}
#define MAX3 5  // MAX3imum degree of the B-tree
#define MIN 2  // Minimum degree of the B-tree
const int MAX_KEYS = 3; // Order of the B+ Tree (can be adjusted)
enum Node10Color { RED, BLACK };

struct Node10 {
    int data;
    Node10Color color;
    Node10 *left, *right, *parent;
};

Node10* createNode10(int data) {
    Node10* newNode10 = new Node10();
    newNode10->data = data;
    newNode10->color = RED;
    newNode10->left = nullptr;
    newNode10->right = nullptr;
    newNode10->parent = nullptr;
    return newNode10;
}

void leftRotate(Node10*& root, Node10*& pt) {
    Node10* pt_right = pt->right;
    pt->right = pt_right->left;

    if (pt->right != nullptr)
        pt->right->parent = pt;

    pt_right->parent = pt->parent;

    if (pt->parent == nullptr)
        root = pt_right;
    else if (pt == pt->parent->left)
        pt->parent->left = pt_right;
    else
        pt->parent->right = pt_right;

    pt_right->left = pt;
    pt->parent = pt_right;
}

void rightRotate(Node10*& root, Node10*& pt) {
    Node10* pt_left = pt->left;
    pt->left = pt_left->right;

    if (pt->left != nullptr)
        pt->left->parent = pt;

    pt_left->parent = pt->parent;

    if (pt->parent == nullptr)
        root = pt_left;
    else if (pt == pt->parent->left)
        pt->parent->left = pt_left;
    else
        pt->parent->right = pt_left;

    pt_left->right = pt;
    pt->parent = pt_left;
}

void fixViolation(Node10*& root, Node10*& pt) {
    Node10* parent_pt = nullptr;
    Node10* grand_parent_pt = nullptr;

    while ((pt != root) && (pt->color != BLACK) &&
           (pt->parent->color == RED)) {

        parent_pt = pt->parent;
        grand_parent_pt = pt->parent->parent;

        if (parent_pt == grand_parent_pt->left) {

            Node10* uncle_pt = grand_parent_pt->right;

            if (uncle_pt != nullptr && uncle_pt->color == RED) {
                grand_parent_pt->color = RED;
                parent_pt->color = BLACK;
                uncle_pt->color = BLACK;
                pt = grand_parent_pt;
            } else {
                if (pt == parent_pt->right) {
                    leftRotate(root, parent_pt);
                    pt = parent_pt;
                    parent_pt = pt->parent;
                }

                rightRotate(root, grand_parent_pt);
                swap(parent_pt->color, grand_parent_pt->color);
                pt = parent_pt;
            }
        } else {
            Node10* uncle_pt = grand_parent_pt->left;

            if ((uncle_pt != nullptr) && (uncle_pt->color == RED)) {
                grand_parent_pt->color = RED;
                parent_pt->color = BLACK;
                uncle_pt->color = BLACK;
                pt = grand_parent_pt;
            } else {
                if (pt == parent_pt->left) {
                    rightRotate(root, parent_pt);
                    pt = parent_pt;
                    parent_pt = pt->parent;
                }

                leftRotate(root, grand_parent_pt);
                swap(parent_pt->color, grand_parent_pt->color);
                pt = parent_pt;
            }
        }
    }

    root->color = BLACK;
}

void insert5(Node10*& root, int data) {
    Node10* pt = createNode10(data);

    if (root == nullptr) {
        root = pt;
        root->color = BLACK;
        return;
    }

    Node10* parent = nullptr;
    Node10* current = root;

    while (current != nullptr) {
        parent = current;

        if (pt->data < current->data)
            current = current->left;
        else if (pt->data > current->data)
            current = current->right;
        else
            return;
    }

    pt->parent = parent;

    if (pt->data < parent->data)
        parent->left = pt;
    else
        parent->right = pt;

    fixViolation(root, pt);
}

Node10* minValueNode10(Node10* node10) {
    Node10* current = node10;

    while (current->left != nullptr)
        current = current->left;

    return current;
}

Node10* BSTDelete(Node10* root, int data) {
    if (root == nullptr)
        return root;

    if (data < root->data)
        return BSTDelete(root->left, data);

    if (data > root->data)
        return BSTDelete(root->right, data);

    if (root->left == nullptr || root->right == nullptr)
        return root;

    Node10* temp = minValueNode10(root->right);

    root->data = temp->data;

    return BSTDelete(root->right, temp->data);
}

void fixDeleteViolation(Node10*& root, Node10*& x) {
    if (x == nullptr)
        return;

    while (x != root && x->color == BLACK) {
        if (x == x->parent->left) {
            Node10* w = x->parent->right;

            if (w->color == RED) {
                w->color = BLACK;
                x->parent->color = RED;
                leftRotate(root, x->parent);
                w = x->parent->right;
            }

            if (w->left->color == BLACK && w->right->color == BLACK) {
                w->color = RED;
                x = x->parent;
            } else {
                if (w->right->color == BLACK) {
                    w->left->color = BLACK;
                    w->color = RED;
                    rightRotate(root, w);
                    w = x->parent->right;
                }

                w->color = x->parent->color;
                x->parent->color = BLACK;
                w->right->color = BLACK;
                leftRotate(root, x->parent);
                x = root;
            }
        } else {
            Node10* w = x->parent->left;

            if (w->color == RED) {
                w->color = BLACK;
                x->parent->color = RED;
                rightRotate(root, x->parent);
                w = x->parent->left;
            }

            if (w->right->color == BLACK && w->right->color == BLACK) {
                w->color = RED;
                x = x->parent;
            } else {
                if (w->left->color == BLACK) {
                    w->right->color = BLACK;
                    w->color = RED;
                    leftRotate(root, w);
                    w = x->parent->left;
                }

                w->color = x->parent->color;
                x->parent->color = BLACK;
                w->left->color = BLACK;
                rightRotate(root, x->parent);
                x = root;
            }
        }
    }

    x->color = BLACK;
}

void deleteNode10(Node10*& root, int data) {
    Node10* z = BSTDelete(root, data);
    if (z == nullptr)
        return;

    Node10* x;
    Node10* y = z;
    Node10Color yOriginalColor = y->color;

    if (z->left == nullptr) {
        x = z->right;
        if (z->parent == nullptr) root = z->right;
        else if (z == z->parent->left) z->parent->left = z->right;
        else z->parent->right = z->right;
        if (z->right != nullptr) z->right->parent = z->parent;
    } else if (z->right == nullptr) {
        x = z->left;
        if (z->parent == nullptr) root = z->left;
        else if (z == z->parent->left) z->parent->left = z->left;
        else z->parent->right = z->left;
        if (z->left != nullptr) z->left->parent = z->parent;
    } else {
        y = minValueNode10(z->right);
        yOriginalColor = y->color;
        x = y->right;

        if (y->parent == z) {
            if (x != nullptr) x->parent = y;
        } else {
            if (x != nullptr) y->parent->left = x;
            y->right = z->right;
            z->right->parent = y;
        }

        if (z->parent == nullptr) root = y;
        else if (z == z->parent->left) z->parent->left = y;
        else z->parent->right = y;

        y->parent = z->parent;
        y->color = z->color;
        y->left = z->left;
        z->left->parent = y;
    }

    delete z;

    if (yOriginalColor == BLACK)
        fixDeleteViolation(root, x);
}

void inorderTraversal4(Node10* root) {
    if (root == nullptr)
        return;

    inorderTraversal4(root->left);
    cout << root->data << " ";
    inorderTraversal4(root->right);
}

void search5(Node10* root, int data) {
    if (root == nullptr) {
        cout << "Element not found" << endl;
        return;
    }

    if (data < root->data)
        search5(root->left, data);
    else if (data > root->data)
        search5(root->right, data);
    else
        cout << "Element found" << endl;
}

int rbtree() {
    Node10* root = nullptr;
    int choice, data;

    do {
        cout << "\nRed Black Tree Operations:-\n";
        cout << "\n1. Insert";
        cout << "\n2. Delete";
        cout << "\n3. Display (In-order)";
        cout << "\n4. Search";
        cout << "\n5. Exit";
        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter data to insert5: ";
            cin >> data;
            insert5(root, data);
            break;
        case 2:
            cout << "Enter data to delete: ";
            cin >> data;
            deleteNode10(root, data);
            break;
        case 3:
            inorderTraversal4(root);
            cout << endl;
            break;
        case 4:
            cout << "Enter data to search: ";
            cin >> data;
            search5(root, data);
            break;
        case 5:
            cout<<"\nExiting....."<<endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    }while(choice!=5);

    return 0;
}

// Node9 of B+ Tree
struct Node9 {
    bool isLeaf;
    int n;  // Number of keys in the node9
    int keys[MAX_KEYS + 1];  // Array to store keys
    Node9 *children[MAX_KEYS + 2];  // Array to store pointers to children
    Node9 *next;  // Pointer to the next leaf node9 (used in leaves only)

    Node9(bool leaf) {
        isLeaf = leaf;
        n = 0;
        next = nullptr;
        for (int i = 0; i < MAX_KEYS + 2; i++) {
            children[i] = nullptr;
        }
    }
};

// Function to find the child that should be followed for insert4ion
int findChild(Node9 *node9, int key) {
    int idx = 0;
    while (idx < node9->n && key > node9->keys[idx])
        idx++;
    return idx;
}

// Function to insert4 a key into a non-full node9
void  insert4NonFull2(Node9 *node9, int key) {
    int i = node9->n - 1;

    if (node9->isLeaf) {
        // Insert4 in a leaf node9
        while (i >= 0 && key < node9->keys[i]) {
            node9->keys[i + 1] = node9->keys[i];
            i--;
        }
        node9->keys[i + 1] = key;
        node9->n++;
    } else {
        // Insert4 in an internal node9
        int idx = findChild(node9, key);
        if (node9->children[idx]->n == MAX_KEYS) {
            // Child is full, split it
            Node9 *child = node9->children[idx];
            Node9 *newChild = new Node9(child->isLeaf);
            node9->children[idx + 1] = newChild;

            // Split the keys and children
            int mid = MAX_KEYS / 2;
            newChild->n = child->n - mid - 1;
            for (int j = 0; j < newChild->n; j++) {
                newChild->keys[j] = child->keys[mid + 1 + j];
            }
            if (!child->isLeaf) {
                for (int j = 0; j <= newChild->n; j++) {
                    newChild->children[j] = child->children[mid + 1 + j];
                }
            }
            child->n = mid;

            // Insert4 the middle key into the parent node9
            for (int j = node9->n; j > idx; j--) {
                node9->children[j + 1] = node9->children[j];
                node9->keys[j] = node9->keys[j - 1];
            }
            node9->keys[idx] = child->keys[mid];
            node9->n++;

            // Decide which child to insert4 the new key into
            if (key > node9->keys[idx])
                 insert4NonFull2(newChild, key);
            else
                 insert4NonFull2(child, key);
        } else {
             insert4NonFull2(node9->children[idx], key);
        }
    }
}

// Function to insert4 a key into the B+ Tree
Node9* insert4(Node9 *root, int key) {
    if (root == nullptr) {
        root = new Node9(true);
        root->keys[0] = key;
        root->n = 1;
    } else {
        if (root->n == MAX_KEYS) {
            Node9 *newRoot = new Node9(false);
            newRoot->children[0] = root;
             insert4NonFull2(newRoot, key);
            root = newRoot;
        } else {
             insert4NonFull2(root, key);
        }
    }
    return root;
}

// Function to perform an inorder traversal of the B+ Tree
void inorderTraversal3(Node9 *node9) {
    if (node9 == nullptr)
        return;
    
    int i;
    for (i = 0; i < node9->n; i++) {
        if (!node9->isLeaf)
            inorderTraversal3(node9->children[i]);
        cout << node9->keys[i] << " ";
    }
    if (!node9->isLeaf)
        inorderTraversal3(node9->children[i]);
}

// Function to search4 for a key in the B+ Tree
bool search4(Node9 *node9, int key) {
    int i = 0;
    while (i < node9->n && key > node9->keys[i])
        i++;

    if (i < node9->n && key == node9->keys[i])
        return true;

    if (node9->isLeaf)
        return false;

    return search4(node9->children[i], key);
}

int bplustree() {
    Node9 *root = nullptr;
    int choice, key;

    do {
        cout << "\nB+ Tree Operations :-\n\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter key to insert4: ";
                cin >> key;
                root = insert4(root, key);
                break;
            case 2:
                cout << "Enter key to search: ";
                cin >> key;
                if (search4(root, key))
                    cout << "Key found in the B+ Tree.\n";
                else
                    cout << "Key not found in the B+ Tree.\n";
                break;
            case 3:
                cout << "Inorder traversal of B+ Tree: ";
                inorderTraversal3(root);
                cout << "\n";
                break;
            case 4:
                cout << "\nExiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
struct Node8 {
    int keys[MAX3 + 1];    // An array to hold the keys
    Node8 *child[MAX3 + 1]; // An array to hold child pointers
    int n;                // Current number of keys
    bool leaf;            // Is true when the node8 is a leaf
};

// Function prototypes
Node8* createNode8(bool leaf);
void traverse(Node8* root);
Node8* search3(Node8* root, int k);
void insert3(Node8* &root, int k);
void splitChild(Node8* x, int i);
void insert3NonFull(Node8* x, int k);
void remove(Node8* &root, int k);
void removeFromLeaf(Node8* x, int idx);
void removeFromNonLeaf(Node8* x, int idx);
int getPred(Node8* x, int idx);
int getSucc(Node8* x, int idx);
void fill(Node8* x, int idx);
void borrowFromPrev(Node8* x, int idx);
void borrowFromNext(Node8* x, int idx);
void merge(Node8* x, int idx);

// Function to create a new B-Tree node8
Node8* createNode8(bool leaf) {
    Node8* newNode8 = new Node8;
    newNode8->leaf = leaf;
    newNode8->n = 0;
    for (int i = 0; i < MAX3 + 1; i++)
        newNode8->child[i] = nullptr;
    return newNode8;
}

// Function to traverse the B-Tree
void traverse(Node8* root) {
    if (root != nullptr) {
        for (int i = 0; i < root->n; i++) {
            if (!root->leaf)
                traverse(root->child[i]);
            cout << " " << root->keys[i];
        }
        if (!root->leaf)
            traverse(root->child[root->n]);
    }
}

// Function to search3 for a key in the B-Tree
Node8* search3(Node8* root, int k) {
    int i = 0;
    while (i < root->n && k > root->keys[i])
        i++;
    if (root->keys[i] == k)
        return root;
    if (root->leaf)
        return nullptr;
    return search3(root->child[i], k);
}

// Function to insert3 a key into the B-Tree
void insert3(Node8* &root, int k) {
    if (root == nullptr) {
        root = createNode8(true);
        root->keys[0] = k;
        root->n = 1;
    } else {
        if (root->n == MAX3) {
            Node8* s = createNode8(false);
            s->child[0] = root;
            splitChild(s, 0);
            int i = 0;
            if (s->keys[0] < k)
                i++;
            insert3NonFull(s->child[i], k);
            root = s;
        } else {
            insert3NonFull(root, k);
        }
    }
}

// Function to split a full child
void splitChild(Node8* x, int i) {
    Node8* z = createNode8(x->child[i]->leaf);
    Node8* y = x->child[i];
    z->n = MIN;
    for (int j = 0; j < MIN; j++)
        z->keys[j] = y->keys[j + MIN + 1];
    if (!y->leaf) {
        for (int j = 0; j < MIN + 1; j++)
            z->child[j] = y->child[j + MIN + 1];
    }
    y->n = MIN;
    for (int j = x->n; j >= i + 1; j--)
        x->child[j + 1] = x->child[j];
    x->child[i + 1] = z;
    for (int j = x->n - 1; j >= i; j--)
        x->keys[j + 1] = x->keys[j];
    x->keys[i] = y->keys[MIN];
    x->n++;
}

// Function to insert3 a key in a non-full node8
void insert3NonFull(Node8* x, int k) {
    int i = x->n - 1;
    if (x->leaf) {
        while (i >= 0 && k < x->keys[i]) {
            x->keys[i + 1] = x->keys[i];
            i--;
        }
        x->keys[i + 1] = k;
        x->n++;
    } else {
        while (i >= 0 && k < x->keys[i])
            i--;
        i++;
        if (x->child[i]->n == MAX3) {
            splitChild(x, i);
            if (k > x->keys[i])
                i++;
        }
        insert3NonFull(x->child[i], k);
    }
}

// Function to remove a key from the B-Tree
void remove(Node8* &root, int k) {
    if (!root)
        return;
    int idx = 0;
    while (idx < root->n && root->keys[idx] < k)
        idx++;
    if (idx < root->n && root->keys[idx] == k) {
        if (root->leaf)
            removeFromLeaf(root, idx);
        else
            removeFromNonLeaf(root, idx);
    } else {
        if (root->leaf)
            return;
        bool flag = ((idx == root->n) ? true : false);
        if (root->child[idx]->n < MIN + 1)
            fill(root, idx);
        if (flag && idx > root->n)
            remove(root->child[idx - 1], k);
        else
            remove(root->child[idx], k);
    }
    if (root->n == 0) {
        Node8* tmp = root;
        if (root->leaf)
            root = nullptr;
        else
            root = root->child[0];
        delete tmp;
    }
}

// Function to remove a key from a leaf node8
void removeFromLeaf(Node8* x, int idx) {
    for (int i = idx + 1; i < x->n; i++)
        x->keys[i - 1] = x->keys[i];
    x->n--;
}

// Function to remove a key from a non-leaf node8
void removeFromNonLeaf(Node8* x, int idx) {
    int k = x->keys[idx];
    if (x->child[idx]->n >= MIN + 1) {
        int pred = getPred(x, idx);
        x->keys[idx] = pred;
        remove(x->child[idx], pred);
    } else if (x->child[idx + 1]->n >= MIN + 1) {
        int succ = getSucc(x, idx);
        x->keys[idx] = succ;
        remove(x->child[idx + 1], succ);
    } else {
        merge(x, idx);
        remove(x->child[idx], k);
    }
}

// Function to get the predecessor
int getPred(Node8* x, int idx) {
    Node8* cur = x->child[idx];
    while (!cur->leaf)
        cur = cur->child[cur->n];
    return cur->keys[cur->n - 1];
}

// Function to get the successor
int getSucc(Node8* x, int idx) {
    Node8* cur = x->child[idx + 1];
    while (!cur->leaf)
        cur = cur->child[0];
    return cur->keys[0];
}

// Function to fill the child node8 if it has less than the minimum number of keys
void fill(Node8* x, int idx) {
    if (idx != 0 && x->child[idx - 1]->n >= MIN + 1)
        borrowFromPrev(x, idx);
    else if (idx != x->n && x->child[idx + 1]->n >= MIN + 1)
        borrowFromNext(x, idx);
    else {
        if (idx != x->n)
            merge(x, idx);
        else
            merge(x, idx - 1);
    }
}

// Function to borrow a key from the previous child
void borrowFromPrev(Node8* x, int idx) {
    Node8* child = x->child[idx];
    Node8* sibling = x->child[idx - 1];
    for (int i = child->n - 1; i >= 0; i--)
        child->keys[i + 1] = child->keys[i];
    if (!child->leaf) {
        for (int i = child->n; i >= 0; i--)
            child->child[i + 1] = child->child[i];
    }
    child->keys[0] = x->keys[idx - 1];
    if (!x->leaf)
        child->child[0] = sibling->child[sibling->n];
    x->keys[idx - 1] = sibling->keys[sibling->n - 1];
    child->n++;
    sibling->n--;
}

// Function to borrow a key from the next child
void borrowFromNext(Node8* x, int idx) {
    Node8* child = x->child[idx];
    Node8* sibling = x->child[idx + 1];
    child->keys[child->n] = x->keys[idx];
    if (!child->leaf)
        child->child[child->n + 1] = sibling->child[0];
    x->keys[idx] = sibling->keys[0];
    for (int i = 1; i < sibling->n; i++)
        sibling->keys[i - 1] = sibling->keys[i];
    if (!sibling->leaf) {
        for (int i = 1; i <= sibling->n; i++)
            sibling->child[i - 1] = sibling->child[i];
    }
    child->n++;
    sibling->n--;
}

// Function to merge two children of a node8
void merge(Node8* x, int idx) {
    Node8* child = x->child[idx];
    Node8* sibling = x->child[idx + 1];
    child->keys[MIN] = x->keys[idx];
    for (int i = 0; i < sibling->n; i++)
        child->keys[i + MIN + 1] = sibling->keys[i];
    if (!child->leaf) {
        for (int i = 0; i <= sibling->n; i++)
            child->child[i + MIN + 1] = sibling->child[i];
    }
    for (int i = idx + 1; i < x->n; i++)
        x->keys[i - 1] = x->keys[i];
    for (int i = idx + 2; i <= x->n; i++)
        x->child[i - 1] = x->child[i];
    child->n += sibling->n + 1;
    x->n--;
    delete sibling;
}

// Main function
int btree() {
    Node8* root = nullptr;
    int choice, key;

    do {
        cout << "\nB Tree Operations :-\n";
        cout << "\n1. Insert\n2. Delete\n3. Traverse\n4. Search\n5. Exit\n\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the key to insert: ";
                cin >> key;
                insert3(root, key);
                break;
            case 2:
                cout << "Enter the key to delete: ";
                cin >> key;
                remove(root, key);
                break;
            case 3:
                cout << "B-Tree: ";
                traverse(root);
                cout << endl;
                break;
            case 4:
                cout << "Enter the key to search3: ";
                cin >> key;
                if (search3(root, key))
                    cout << "Key " << key << " found in the B-Tree." << endl;
                else
                    cout << "Key " << key << " not found in the B-Tree." << endl;
                break;
            case 5:cout << "\nExiting.......\n";
                   return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }while(choice!=5);
}

// Definition for AVL Tree Node
struct Node7 {
    int key;
    Node7* left;
    Node7* right;
    int height;
};

// Function to get the height of the node
int height(Node7* N) {
    if (N == nullptr)
        return 0;
    return N->height;
}

// Function to get the maximum of two integers
int max2(int a, int b) {
    return (a > b) ? a : b;
}

// Function to create a new node
Node7* newNode7(int key) {
    Node7* node = new Node7();
    node->key = key;
    node->left = nullptr;
    node->right = nullptr;
    node->height = 1; // New node is initially at height 1
    return node;
}

// Right rotate utility
Node7* rightRotate(Node7* y) {
    Node7* x = y->left;
    Node7* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max2(height(y->left), height(y->right)) + 1;
    x->height = max2(height(x->left), height(x->right)) + 1;

    // Return new root
    return x;
}

// Left rotate utility
Node7* leftRotate(Node7* x) {
    Node7* y = x->right;
    Node7* T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = max2(height(x->left), height(x->right)) + 1;
    y->height = max2(height(y->left), height(y->right)) + 1;

    // Return new root
    return y;
}

// Get the balance factor of a node
int getBalance(Node7* N) {
    if (N == nullptr)
        return 0;
    return height(N->left) - height(N->right);
}

// Insert a key into the subtree rooted with node and return the new root
Node7* insert2(Node7* node, int key) {
    // Perform the normal BST insert
    if (node == nullptr)
        return newNode7(key);

    if (key < node->key)
        node->left = insert2(node->left, key);
    else if (key > node->key)
        node->right = insert2(node->right, key);
    else // Duplicate keys are not allowed in the AVL tree
        return node;

    // Update height of this ancestor node
    node->height = 1 + max2(height(node->left), height(node->right));

    // Get the balance factor of this ancestor node to check whether
    // this node became unbalanced
    int balance = getBalance(node);

    // If this node becomes unbalanced, then there are 4 cases

    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return rightRotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    // Return the (unchanged) node pointer
    return node;
}

// Utility function to find the node with the minimum value
Node7* minNode(Node7* node) {
    Node7* current = node;
    while (current->left != nullptr)
        current = current->left;
    return current;
}

// Delete a node from the subtree rooted with node and return the new root
Node7* deleteNode2(Node7* root, int key) {
    // STEP 1: PERFORM STANDARD BST DELETE
    if (root == nullptr)
        return root;

    if (key < root->key)
        root->left = deleteNode2(root->left, key);
    else if (key > root->key)
        root->right = deleteNode2(root->right, key);
    else {
        // node with only one child or no child
        if ((root->left == nullptr) || (root->right == nullptr)) {
            Node7* temp = root->left ? root->left : root->right;

            // No child case
            if (temp == nullptr) {
                temp = root;
                root = nullptr;
            } else
                *root = *temp; // Copy the contents of the non-empty child

            delete temp;
        } else {
            // node with two children: Get the inorder successor
            Node7* temp = minNode(root->right);

            // Copy the inorder successor's data to this node
            root->key = temp->key;

            // Delete the inorder successor
            root->right = deleteNode2(root->right, temp->key);
        }
    }

    // If the tree had only one node then return
    if (root == nullptr)
        return root;

    // STEP 2: UPDATE HEIGHT OF THIS ANCESTOR NODE
    root->height = 1 + max2(height(root->left), height(root->right));

    // STEP 3: GET THE BALANCE FACTOR OF THIS ANCESTOR NODE
    int balance = getBalance(root);

    // If this node becomes unbalanced, then there are 4 cases

    // Left Left Case
    if (balance > 1 && getBalance(root->left) >= 0)
        return rightRotate(root);

    // Left Right Case
    if (balance > 1 && getBalance(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // Right Right Case
    if (balance < -1 && getBalance(root->right) <= 0)
        return leftRotate(root);

    // Right Left Case
    if (balance < -1 && getBalance(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

// Function for inorder traversal
void inorder(Node7* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

// Function for preorder traversal
void preorder(Node7* root) {
    if (root != nullptr) {
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Function for postorder traversal
void postorder(Node7* root) {
    if (root != nullptr) {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}

// Function to search for a key
bool search2(Node7* root, int key) {
    if (root == nullptr)
        return false;
    if (key == root->key)
        return true;
    if (key < root->key)
        return search2(root->left, key);
    return search2(root->right, key);
}

// Main function
int avl() {
    Node7* root = nullptr;
    int choice, value;

    do {
        cout << "\nAVL Tree Operations :-\n\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Inorder Traversal\n";
        cout << "5. Preorder Traversal\n";
        cout << "6. Postorder Traversal\n";
        cout << "0. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                root = insert2(root, value);
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                root = deleteNode2(root, value);
                break;
            case 3:
                cout << "Enter value to search: ";
                cin >> value;
                if (search2(root, value))
                    cout << "Value found in the AVL Tree.\n";
                else
                    cout << "Value not found in the AVL Tree.\n";
                break;
            case 4:
                cout << "Inorder Traversal: ";
                inorder(root);
                cout << endl;
                break;
            case 5:
                cout << "Preorder Traversal: ";
                preorder(root);
                cout << endl;
                break;
            case 6:
                cout << "Postorder Traversal: ";
                postorder(root);
                cout << endl;
                break;
            case 0:
                cout << "\nExiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
struct Node6 {
    int data;
    Node6* left;
    Node6* right;
};

// Function to create a new node
Node6* createNode4(int value) {
    Node6* newNode6 = new Node6;
    newNode6->data = value;
    newNode6->left = nullptr;
    newNode6->right = nullptr;
    return newNode6;
}

// Function to insert a node into the BST
Node6* insert1(Node6* root, int value) {
    if (root == nullptr) {
        return createNode4(value);
    }
    if (value < root->data) {
        root->left = insert1(root->left, value);
    } else if (value > root->data) {
        root->right = insert1(root->right, value);
    }
    return root;
}

// Function to search for a value in the BST
bool search(Node6* root, int value) {
    if (root == nullptr) {
        return false;
    }
    if (root->data == value) {
        return true;
    } else if (value < root->data) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}

// Function for in-order traversal of the BST
void inOrderTraversal2(Node6* root) {
    if (root != nullptr) {
        inOrderTraversal2(root->left);
        cout << root->data << " ";
        inOrderTraversal2(root->right);
    }
}

// Function to find the minimum value node
Node6* findMin(Node6* root) {
    while (root && root->left != nullptr) {
        root = root->left;
    }
    return root;
}

// Function to delete a node from the BST
Node6* deleteNode(Node6* root, int value) {
    if (root == nullptr) {
        return root;
    }
    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    } else {
        // Node with only one child or no child
        if (root->left == nullptr) {
            Node6* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node6* temp = root->left;
            delete root;
            return temp;
        }
        // Node with two children: Get the inorder successor (smallest in the right subtree)
        Node6* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int binarysearchtree() {
    Node6* root = nullptr;
    int choice, value;

    do {
        cout << "\nBinary Search Tree Operations :-\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. In-order Traversal\n";
        cout << "4. Delete\n";
        cout << "5. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                root = insert1(root, value);
                break;
            case 2:
                cout << "Enter value to search: ";
                cin >> value;
                if (search(root, value)) {
                    cout << "Value found in the BST.\n";
                } else {
                    cout << "Value not found in the BST.\n";
                }
                break;
            case 3:
                cout << "In-order Traversal: ";
                inOrderTraversal2(root);
                cout << endl;
                break;
            case 4:
                cout << "Enter value to delete: ";
                cin >> value;
                root = deleteNode(root, value);
                break;
            case 5:
                cout << "\nExiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}

// Binary tree using arrays
int leftChild[MAX_SIZE];
int rightChild[MAX_SIZE];
int value[MAX_SIZE];

// Initialize tree with -1 (indicating NULL)
void initializeTree() {
    for (int i = 0; i < MAX_SIZE; i++) {
        leftChild[i] = -1;
        rightChild[i] = -1;
        value[i] = -1;
    }
}

// Insert a node in the binary tree
void insertNode(int currentIndex, int newValue) {
    if (value[currentIndex] == -1) {
        value[currentIndex] = newValue;
    } else if (newValue < value[currentIndex]) {
        if (leftChild[currentIndex] == -1) {
            leftChild[currentIndex] = currentIndex * 2 + 1;
            insertNode(leftChild[currentIndex], newValue);
        } else {
            insertNode(leftChild[currentIndex], newValue);
        }
    } else {
        if (rightChild[currentIndex] == -1) {
            rightChild[currentIndex] = currentIndex * 2 + 2;
            insertNode(rightChild[currentIndex], newValue);
        } else {
            insertNode(rightChild[currentIndex], newValue);
        }
    }
}

// Inorder traversal
void inorderTraversal(int index) {
    if (index == -1 || value[index] == -1) return;
    inorderTraversal(leftChild[index]);
    cout << value[index] << " ";
    inorderTraversal(rightChild[index]);
}

// Preorder traversal
void preorderTraversal(int index) {
    if (index == -1 || value[index] == -1) return;
    cout << value[index] << " ";
    preorderTraversal(leftChild[index]);
    preorderTraversal(rightChild[index]);
}

// Postorder traversal
void postorderTraversal(int index) {
    if (index == -1 || value[index] == -1) return;
    postorderTraversal(leftChild[index]);
    postorderTraversal(rightChild[index]);
    cout << value[index] << " ";
}

int binarytree() {
    initializeTree();
    int rootValue;
    cout << "Enter the root value: ";
    cin >> rootValue;
    
    insertNode(0, rootValue);
    
    char choice;
    do {
        int newValue;
        cout << "Enter a value to insert: ";
        cin >> newValue;
        insertNode(0, newValue);
        
        cout << "Do you want to insert another value? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    cout << "Inorder Traversal: ";
    inorderTraversal(0);
    cout << endl;
    
    cout << "Preorder Traversal: ";
    preorderTraversal(0);
    cout << endl;
    
    cout << "Postorder Traversal: ";
    postorderTraversal(0);
    cout << endl;
    
    return 0;
}
// Node structure for the general tree
typedef struct Node5 {
    int data;
    vector<Node5*> children;
} Node5;

// Function to create a new node
Node5* createNode3(int data) {
    Node5* newNode5 = new Node5;
    newNode5->data = data;
    return newNode5;
}

// Function to insert a child to a node
void insertChild(Node5* parent, int childData) {
    Node5* child = createNode3(childData);
    parent->children.push_back(child);
}

// Function to display the tree in a simple manner (Pre-order Traversal)
void displayTree(Node5* root, int depth = 0) {
    if (root == nullptr) {
        return;
    }

    // Indentation according to depth
    for (int i = 0; i < depth; ++i) {
        cout << "--";
    }
    cout << root->data << endl;

    // Recursively display all children
    for (Node5* child : root->children) {
        displayTree(child, depth + 1);
    }
}

// Function to find a node with a specific value (DFS)
Node5* findNode(Node5* root, int value) {
    if (root == nullptr) return nullptr;

    if (root->data == value) return root;

    for (Node5* child : root->children) {
        Node5* result = findNode(child, value);
        if (result != nullptr) return result;
    }

    return nullptr;
}

int generictree() {
    int rootData;
    cout << "Enter root node value: ";
    cin >> rootData;

    Node5* root = createNode3(rootData);

    while (true) {
        int parentData, childData;
        cout << "Enter parent node value (or -1 to stop): ";
        cin >> parentData;

        if (parentData == -1) break;

        Node5* parent = findNode(root, parentData);
        if (parent == nullptr) {
            cout << "Parent node not found!\n";
            continue;
        }

        cout << "Enter child node value: ";
        cin >> childData;

        insertChild(parent, childData);
    }

    cout << "\nDisplaying tree:\n";
    displayTree(root);

    return 0;
}
typedef struct Node4 {
    int data;
    Node4* next;
    Node4* prev;
} Node4;

Node4* head4 = NULL;

Node4* createNode2(int value) {
    Node4* newNode4 = (Node4*)malloc(sizeof(Node4));
    newNode4->data = value;
    newNode4->next = NULL;
    newNode4->prev = NULL;
    return newNode4;
}

void insertAtBeginning4(int value) {
    Node4* newNode4 = createNode2(value);
    if (head4 == NULL) {
        head4 = newNode4;
        head4->next = head4;
        head4->prev = head4;
    } else {
        Node4* tail = head4->prev;
        newNode4->next = head4;
        newNode4->prev = tail;
        tail->next = newNode4;
        head4->prev = newNode4;
        head4 = newNode4;
    }
}

void insertAtEnd4(int value) {
    Node4* newNode4 = createNode2(value);
    if (head4 == NULL) {
        head4 = newNode4;
        head4->next = head4;
        head4->prev = head4;
    } else {
        Node4* tail = head4->prev;
        tail->next = newNode4;
        newNode4->prev = tail;
        newNode4->next = head4;
        head4->prev = newNode4;
    }
}

void insertAtPosition4(int value, int pos) {
    if (pos == 1) {
        insertAtBeginning4(value);
        return;
    }
    
    Node4* newNode4 = createNode2(value);
    Node4* temp = head4;
    int i = 1;
    
    while (i < pos - 1 && temp->next != head4) {
        temp = temp->next;
        i++;
    }
    
    if (temp->next == head4) {
        insertAtEnd4(value);
    } else {
        newNode4->next = temp->next;
        newNode4->prev = temp;
        temp->next->prev = newNode4;
        temp->next = newNode4;
    }
}

void deleteFromPosition(int pos) {
    if (head4 == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    if (pos == 1) {
        Node4* tail = head4->prev;
        Node4* temp = head4;

        if (head4->next == head4) { // Only one node
            head4 = NULL;
            free(temp);
        } else {
            tail->next = head4->next;
            head4->next->prev = tail;
            head4 = head4->next;
            free(temp);
        }
        return;
    }

    Node4* temp = head4;
    int i = 1;

    while (i < pos && temp->next != head4) {
        temp = temp->next;
        i++;
    }

    if (temp->next == head4) { // Last node
        temp->prev->next = head4;
        head4->prev = temp->prev;
        free(temp);
    } else {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
}

void displayForward2() {
    if (head4 == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node4* temp = head4;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head4);
    cout << endl;
}

void displayBackward() {
    if (head4 == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node4* tail = head4->prev;
    Node4* temp = tail;

    do {
        cout << temp->data << " ";
        temp = temp->prev;
    } while (temp != tail);
    cout << endl;
}

int dclist() {
    int choice, value, pos;
    
    do {
        cout << "\nDoubly Circular Linked List Operations :-\n\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at any Position\n";
        cout << "4. Delete Node from any Position\n";
        cout << "5. Display List Forward\n";
        cout << "6. Display List Backward\n";
        cout << "7. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to insert at the beginning: ";
                cin >> value;
                insertAtBeginning4(value);
                break;
            case 2:
                cout << "Enter value to insert at the end: ";
                cin >> value;
                insertAtEnd4(value);
                break;
            case 3:
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position to insert: ";
                cin >> pos;
                insertAtPosition4(value, pos);
                break;
            case 4:
                cout << "Enter position to delete: ";
                cin >> pos;
                deleteFromPosition(pos);
                break;
            case 5:
                displayForward2();
                break;
            case 6:
                displayBackward();
                break;
            case 7:
                cout << "\nExiting......" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }while(choice != 7);

    return 0;
}

typedef struct Node3 {
    int data;
    Node3* next;
} Node3;

Node3* createNode(int value) {
    Node3* newNode3 = new Node3;
    newNode3->data = value;
    newNode3->next = nullptr;
    return newNode3;
}

void insertAtBeginning3(Node3** head3, int value) {
    Node3* newNode3 = createNode(value);
    if (*head3 == nullptr) {
        *head3 = newNode3;
        newNode3->next = newNode3;
    } else {
        Node3* temp = *head3;
        while (temp->next != *head3) {
            temp = temp->next;
        }
        temp->next = newNode3;
        newNode3->next = *head3;
        *head3 = newNode3;
    }
}

void insertAtEnd3(Node3** head3, int value) {
    Node3* newNode3 = createNode(value);
    if (*head3 == nullptr) {
        *head3 = newNode3;
        newNode3->next = newNode3;
    } else {
        Node3* temp = *head3;
        while (temp->next != *head3) {
            temp = temp->next;
        }
        temp->next = newNode3;
        newNode3->next = *head3;
    }
}

void insertAtPosition3(Node3** head3, int value, int pos) {
    if (pos < 1) {
        cout<< "Invalid position!" << endl;
        return;
    }
    
    if (pos == 1) {
        insertAtBeginning3(head3, value);
        return;
    }

    Node3* newNode3 = createNode(value);
    Node3* temp = *head3;
    int count = 1;

    while (count < pos - 1 && temp->next != *head3) {
        temp = temp->next;
        count++;
    }

    if (count == pos - 1) {
        newNode3->next = temp->next;
        temp->next = newNode3;
    } else {
        cout << "Position out of range!" << endl;
    }
}

void deleteNode3(Node3** head3, int pos) {
    if (*head3 == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    if (pos == 1) {
        Node3* temp = *head3;
        if (temp->next == *head3) {
            delete temp;
            *head3 = nullptr;
            return;
        }

        Node3* last = *head3;
        while (last->next != *head3) {
            last = last->next;
        }
        last->next = temp->next;
        *head3 = temp->next;
        delete temp;
        return;
    }

    Node3* temp = *head3;
    int count = 1;

    while (count < pos - 1 && temp->next != *head3) {
        temp = temp->next;
        count++;
    }

    if (count == pos - 1 && temp->next != *head3) {
        Node3* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
    } else {
        cout << "Position out of range!" << endl;
    }
}

void displayList3(Node3* head3) {
    if (head3 == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    Node3* temp = head3;
    cout << "List: ";
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head3);
    cout << endl;
}

void displayListReverse3(Node3* head3) {
    if (head3 == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    Node3* temp = head3;
    Node3* prev = nullptr;
    Node3* current = head3;

    // Reverse the linked list
    do {
        Node3* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    } while (current != head3);

    head3->next = prev;
    head3 = prev;

    // Display the reversed list
    cout << "Reversed List: ";
    temp = head3;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head3);
    cout << endl;

    // Restore the original list by reversing again
    prev = nullptr;
    current = head3;
    do {
        Node3* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    } while (current != head3);

    head3->next = prev;
}

int circularlist() {
    Node3* head3 = nullptr;
    int choice, value, pos;

    do{
        cout << "\nCircular Linked List Operations :-\n\n";
        cout << "\n1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Delete Node\n";
        cout << "5. Display List\n";
        cout << "6. Display List Reverse\n";
        cout << "7. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at beginning: ";
                cin >> value;
                insertAtBeginning3(&head3, value);
                break;
            case 2:
                cout << "Enter value to insert at end: ";
                cin >> value;
                insertAtEnd3(&head3, value);
                break;
            case 3:
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position: ";
                cin >> pos;
                insertAtPosition3(&head3, value, pos);
                break;
            case 4:
                cout << "Enter position to delete: ";
                cin >> pos;
                deleteNode3(&head3, pos);
                break;
            case 5:
                displayList3(head3);
                break;
            case 6:
                displayListReverse3(head3);
                break;
            case 7:
                cout << "\nExiting......" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }while(choice !=7);

    return 0;
}
struct Node2 {
    int data;
    Node2* prev;
    Node2* next;
};

Node2* head2 = nullptr; // Initialize head to nullptr
Node2* tail2 = nullptr; // Initialize tail to nullptr

// Function to insert at the beginning
void insertAtBeginning2(int value) {
    Node2* newNode2 = new Node2;
    newNode2->data = value;
    newNode2->prev = nullptr;
    newNode2->next = head2;

    if (head2 != nullptr) {
        head2->prev = newNode2;
    } else {
        tail2 = newNode2; // If the list was empty, newNode is also the tail
    }

    head2 = newNode2;
}

// Function to insert at the end
void insertAtEnd2(int value) {
    Node2* newNode2 = new Node2;
    newNode2->data = value;
    newNode2->next = nullptr;
    newNode2->prev = tail2;

    if (tail2 != nullptr) {
        tail2->next = newNode2;
    } else {
        head2 = newNode2; // If the list was empty, newNode is also the head
    }

    tail2 = newNode2;
}

// Function to insert at a specific position
void insertAtPosition2(int value, int pos) {
    if (pos <= 1) {
        insertAtBeginning2(value);
        return;
    }

    Node2* newNode2 = new Node2;
    newNode2->data = value;

    Node2* current = head2;
    for (int i = 1; i < pos - 1 && current != nullptr; i++) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Position out of bounds. Inserting at the end." << endl;
        insertAtEnd2(value);
    } else {
        newNode2->next = current->next;
        newNode2->prev = current;

        if (current->next != nullptr) {
            current->next->prev = newNode2;
        } else {
            tail2 = newNode2; // If inserting at the last position, update tail
        }

        current->next = newNode2;
    }
}

// Function to delete a node from a specific position
void deleteNode2(int pos) {
    if (head2 == nullptr) {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }

    Node2* current = head2;

    if (pos == 1) {
        head2 = head2->next;
        if (head2 != nullptr) {
            head2->prev = nullptr;
        } else {
            tail2 = nullptr; // If the list becomes empty, update tail
        }
        delete current;
        return;
    }

    for (int i = 1; i < pos && current != nullptr; i++) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Position out of bounds. Cannot delete." << endl;
        return;
    }

    if (current->next != nullptr) {
        current->next->prev = current->prev;
    } else {
        tail2 = current->prev; // If deleting the last node, update tail
    }

    if (current->prev != nullptr) {
        current->prev->next = current->next;
    }

    delete current;
}

// Function to display the list in forward direction
void displayForward() {
    Node2* current = head2;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Function to display the list in reverse direction
void displayReverse() {
    Node2* current = tail2;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << endl;
}

int doublylist() {
    int choice, value, pos;

    do {
        cout << "\nDoubly Linked List Operations :-\n\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Delete Node\n";
        cout << "5. Display Forward\n";
        cout << "6. Display Reverse\n";
        cout << "7. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at beginning: ";
                cin >> value;
                insertAtBeginning2(value);
                break;

            case 2:
                cout << "Enter value to insert at end: ";
                cin >> value;
                insertAtEnd2(value);
                break;

            case 3:
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position to insert at: ";
                cin >> pos;
                insertAtPosition2(value, pos);
                break;

            case 4:
                cout << "Enter position of node to delete: ";
                cin >> pos;
                deleteNode2(pos);
                break;

            case 5:
                cout << "List in forward direction: ";
                displayForward();
                break;

            case 6:
                cout << "List in reverse direction: ";
                displayReverse();
                break;

            case 7:
                cout << "\nExiting...\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 7);

    return 0;
}
typedef struct Node {
    int data;
    Node* next;
} Node;

Node* head = nullptr;

void insertAtBeginning(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = nullptr;
    
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertAtPosition(int value, int position) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = nullptr;
    
    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    
    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    
    if (temp == nullptr) {
        cout << "Position out of range!" << endl;
        free(newNode);
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deleteAtPosition(int position) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    
    Node* temp = head;
    
    if (position == 1) {
        head = temp->next;
        free(temp);
        return;
    }
    
    Node* prev = nullptr;
    for (int i = 1; i < position && temp != nullptr; i++) {
        prev = temp;
        temp = temp->next;
    }
    
    if (temp == nullptr) {
        cout << "Position out of range!" << endl;
    } else {
        prev->next = temp->next;
        free(temp);
    }
}

void displayList() {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int singlelist() {
    int choice, value, position;
    
    do {
        cout << "\nSingly Linked List Operations :-\n\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at any Position\n";
        cout << "4. Delete Node from any Position\n";
        cout << "5. Display List\n";
        cout << "6. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to insert at beginning: ";
                cin >> value;
                insertAtBeginning(value);
                break;
            case 2:
                cout << "Enter value to insert at end: ";
                cin >> value;
                insertAtEnd(value);
                break;
            case 3:
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position to insert at: ";
                cin >> position;
                insertAtPosition(value, position);
                break;
            case 4:
                cout << "Enter position to delete node from: ";
                cin >> position;
                deleteAtPosition(position);
                break;
            case 5:
                displayList();
                break;
            case 6:
                cout << "\nExiting......" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);
    
    return 0;
}
bool isFull3() {
    return ((front == 0 && rear == MAX - 1) || (front == rear + 1));
}

bool isEmpty3() {
    return (front == -1);
}

void insertFront(int value) {
    if (isFull3()) {
        cout << "Deque is full. Cannot insert." << endl;
        return;
    }
    if (isEmpty3()) {
        front = 0;
        rear = 0;
    } else if (front == 0) {
        front = MAX - 1;
    } else {
        front = front - 1;
    }
    deque[front] = value;
    cout << value << " inserted at front." << endl;
}

void insertRear(int value) {
    if (isFull3()) {
        cout << "Deque is full. Cannot insert." << endl;
        return;
    }
    if (isEmpty3()) {
        front = 0;
        rear = 0;
    } else if (rear == MAX - 1) {
        rear = 0;
    } else {
        rear = rear + 1;
    }
    deque[rear] = value;
    cout << value << " inserted at rear." << endl;
}

void deleteFront() {
    if (isEmpty3()) {
        cout << "Deque is empty. Cannot delete." << endl;
        return;
    }
    cout << deque[front] << " deleted from front." << endl;
    if (front == rear) {
        front = -1;
        rear = -1;
    } else if (front == MAX - 1) {
        front = 0;
    } else {
        front = front + 1;
    }
}

void deleteRear() {
    if (isEmpty3()) {
        cout << "Deque is empty. Cannot delete." << endl;
        return;
    }
    cout << deque[rear] << " deleted from rear." << endl;
    if (front == rear) {
        front = -1;
        rear = -1;
    } else if (rear == 0) {
        rear = MAX - 1;
    } else {
        rear = rear - 1;
    }
}

void display4() {
    if (isEmpty3()) {
        cout << "Deque is empty." << endl;
        return;
    }
    cout << "Deque elements are: ";
    int i = front;
    while (true) {
        cout << deque[i] << " ";
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    cout << endl;
}

int queue6() {
    int choice, value;

    do {
        cout << "\nDeque Queue Operations :-\n\n";
        cout << "1. Insert at front" << endl;
        cout << "2. Insert at rear" << endl;
        cout << "3. Delete from front" << endl;
        cout << "4. Delete from rear" << endl;
        cout << "5. Display deque" << endl;
        cout << "6. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at front: ";
                cin >> value;
                insertFront(value);
                break;
            case 2:
                cout << "Enter value to insert at rear: ";
                cin >> value;
                insertRear(value);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                display4();
                break;
            case 6:
                cout << "\nExiting......" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}

int queue4[SIZE];  // Array to store queue elements
// Function to check if the queue is full
bool isFull2() {
    return (front == 0 && rear == SIZE - 1) || (front == rear + 1);
}

// Function to check if the queue is empty
bool isEmpty2() {
    return front == -1;
}

// Function to add an element to the queue
void enqueue2(int value) {
    if (isFull2()) {
        cout << "Queue is full, cannot enqueue " << value << endl;
        return;
    }
    if (front == -1) {  // First element insertion
        front = 0;
        rear = 0;
    } else if (rear == SIZE - 1 && front != 0) {  // Circular increment
        rear = 0;
    } else {
        rear++;
    }
    queue4[rear] = value;
    cout << "Enqueued " << value << endl;
}

// Function to remove an element from the queue
int dequeue3() {
    if (isEmpty2()) {
        cout << "Queue is empty, cannot dequeue" << endl;
        return -1;
    }
    int data = queue4[front];
    queue4[front] = -1;  // Optional: Clear the dequeued element
    if (front == rear) {  // Queue has become empty
        front = -1;
        rear = -1;
    } else if (front == SIZE - 1) {
        front = 0;
    } else {
        front++;
    }
    return data;
}

// Function to display the queue
void displayQueue() {
    if (isEmpty2()) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue elements are: ";
    if (rear >= front) {
        for (int i = front; i <= rear; i++)
            cout << queue4[i] << " ";
    } else {
        for (int i = front; i < SIZE; i++)
            cout << queue4[i] << " ";
        for (int i = 0; i <= rear; i++)
            cout << queue4[i] << " ";
    }
    cout << endl;
}

int queue5() {
    int choice, value;

    while (true) {
        cout << "\nCircular Queue Operations :-\n\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                enqueue2(value);
                break;
            case 2:
                value = dequeue3();
                if (value != -1)
                    cout << "Dequeued " << value << endl;
                break;
            case 3:
                displayQueue();
                break;
            case 4:
                cout << "\nExiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
    return 0;
}

// Function to insert an element into the priority queue
void insert(int element, int prio) {
    if (size >= MAX) {
        cout << "Queue Overflow\n";
        return;
    }

    int i;
    for (i = size - 1; i >= 0; i--) {
        if (prio > priority[i]) {
            queue3[i + 1] = queue3[i];
            priority[i + 1] = priority[i];
        } else {
            break;
        }
    }

    queue3[i + 1] = element;
    priority[i + 1] = prio;
    size++;
}

// Function to remove the element with the highest priority
void dequeue2() {
    if (size == 0) {
        cout << "Queue Underflow\n";
        return;
    }

    cout << "Element " << queue3[0] << " with priority " << priority[0] << " dequeued\n";
    for (int i = 0; i < size - 1; i++) {
        queue3[i] = queue3[i + 1];
        priority[i] = priority[i + 1];
    }
    size--;
}

// Function to display the elements in the priority queue
void display3() {
    if (size == 0) {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue elements are:\n";
    for (int i = 0; i < size; i++) {
        cout << queue3[i] << " (Priority: " << priority[i] << ")\n";
    }
}

// Function to check if the queue is full
bool isFull() {
    return (rear == MAX - 1);
}

// Function to check if the queue is empty
bool isEmpty() {
    return (front == -1 || front > rear);
}

// Function to insert an element into the queue
void enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full. Cannot enqueue " << value << endl;
    } else {
        if (front == -1) front = 0;  // Set front to 0 if the queue was empty
        rear++;
        queue[rear] = value;
        cout << "Enqueued " << value << endl;
    }
}

// Function to remove an element from the queue
void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty. Cannot dequeue." << endl;
    } else {
        cout << "Dequeued " << queue[front] << endl;
        front++;
    }
}

// Function to display the elements of the queue
void display2() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}
// Function to push an element onto the stack
void push(int value) {
    if (top >= MAX - 1) {
        cout << "Stack Overflow!" << endl;
    } else {
        stack[++top] = value;
        cout << "Pushed " << value << " onto the stack." << endl;
    }
}

// Function to pop an element from the stack
int pop() {
    if (top < 0) {
        cout << "Stack Underflow!" << endl;
        return -1;
    } else {
        int value = stack[top--];
        cout << "Popped " << value << " from the stack." << endl;
        return value;
    }
}

// Function to display the stack elements
void display() {
    if (top < 0) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack elements: "<<endl;
        for (int i = top; i >= 0; i--) {
            cout << stack[i] <<endl;
        }
        cout << endl;
    }
}
int array()
{
    int i,n;
    cout<<endl<<"Enter the Size of Your Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in your array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Here is Your All Elements of Your Array: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"\nExiting from Array......"<<endl;
    return 0;
}
int matrix()
{
    int arr[60][60],arr2[60][60],arr3[60][60];
    int a,b,i,j;
    char mat;
    int k;
    cout<<endl<<"Enter the Row: ";
    fflush(stdin);
    cin>>a;
    cout<<endl<<"Enter the Coloumn: ";
    fflush(stdin);
    cin>>b;
    cout<<endl<<"Enter Your's Elements in The 1st Matrix:- "<<endl;
    for(i=0;i<a;i++)
     {
     for(j=0;j<b;j++)
         {
            cout<<endl<<"Enter the Element in Mat["<<i<<"]"<<"["<<j<<"]: ";
            fflush(stdin);
            cin>>arr[i][j];
         }
     }
     cout<<endl<<"Enter Your's Elements in The 2nd Matrix:- "<<endl;
     for(i=0;i<a;i++)
      {
        for(j=0;j<b;j++)
         {
          cout<<endl<<"Enter the Element in Mat["<<i<<"]"<<"["<<j<<"]: ";
          fflush(stdin);
          cin>>arr2[i][j];
         }
      }
     cout<<endl<<"Here is Your 1st Matrix:- \n\n";
     for(i=0;i<a;i++)
      {
         for(j=0;j<b;j++)
        {
          cout<<"\t "<<arr[i][j];
        }
          cout<<"\n";
      }
     cout<<endl<<"Here is Your 2nd Matrix:- \n\n";
    for(i=0;i<a;i++)
     {
      for(j=0;j<b;j++)
       {
        cout<<"\t "<<arr2[i][j];
        }
        cout<<"\n";
     }
    do{
    cout<<endl<<"Please Choose Your Matrix Operation From there :- \n"<<endl;
    cout<<"1.Addition Matrix: A\n2.Subtraction Matrix: S\n3.Multiplication Matrix: M\n4.Division Matrix: D\n5.Transpose Matrix: T\n6.Upper Triangular Matrix: U\n7.Lower Triangular Matrix: L\n8.Diagonals Matrix: X\n9.Tri-Diagonal Matrix: O\n10.Null Matrix: N\n11.Exit from Matrix: E\n";
    cout<<endl<<"Enter The Matrix Code: ";
    cin>>mat;
    switch(mat)
    {
       case 'A':  cout<<endl<<"Welcome in The Addition of Matrix"<<endl;
                  cout<<endl<<"Here is your Addition Matrix:- \n\n";
                  for(i=0;i<a;i++)
                  {
                    for(j=0;j<b;j++)
                    {
                        arr3[i][j]=arr[i][j]+arr2[i][j];
                    }
                  }
                  for(i=0;i<a;i++)
                  {
                    for(j=0;j<b;j++)
                    {
                        cout<<"\t "<<arr3[i][j];
                    }
                    cout<<"\n";
                  }
                  cout<<"\n";
                  break;

      case 'S':   cout<<endl<<"Welcome in The Subtraction of Matrix"<<endl;
                  cout<<endl<<"Here is your Subtraction Matrix:- \n\n";
                  for(i=0;i<a;i++)
                  {
                    for(j=0;j<b;j++)
                    {
                        arr3[i][j]=arr[i][j]-arr2[i][j];
                    }
                  }
                  for(i=0;i<a;i++)
                  {
                    for(j=0;j<b;j++)
                    {
                        cout<<"\t "<<arr3[i][j];
                    }
                    cout<<"\n";
                  }
                  cout<<"\n";
                  break;

      case 'M':   cout<<endl<<"Welcome in The Multiplication of Matrix"<<endl;
                  cout<<endl<<"Here is your Multiplication Matrix:- \n\n";
                  for(i=0;i<a;i++)
                  {
                    for(j=0;j<b;j++)
                    {
                      for(k=0;k<b;k++)
                      {
                         arr3[i][j]=arr3[i][j]+arr[i][k]*arr2[k][j];
                      }
                    }
                  }
                  for(i=0;i<a;i++)
                  {
                    for(j=0;j<b;j++)
                    {
                        cout<<"\t "<<arr3[i][j];
                    }
                    cout<<"\n";
                  }
                  cout<<"\n";
                  break;

      case 'D':   cout<<endl<<"Welcome in The Division of Matrix"<<endl;
                  cout<<endl<<"Here is your Division Matrix:- \n\n";
                  for(i=0;i<a;i++)
                  {
                    for(j=0;j<b;j++)
                    {
                        arr3[i][j]=arr[i][j]/arr2[i][j];
                    }
                  }
                  for(i=0;i<a;i++)
                  {
                    for(j=0;j<b;j++)
                    {
                        cout<<"\t "<<arr3[i][j];
                    }
                    cout<<"\n";
                  }
                  cout<<"\n";
                  break;

      case 'T':   cout<<endl<<"Welcome in The Transpose of Matrix"<<endl;
                  char choose;
                  cout<<endl<<"If you want to Print Only 1st Matrix Then Type (1)"<<endl<<"If you want to Print Only 2nd Matrix Then Type (2)"<<endl<<"If you want to Print Both Matrixes Then Type (3)";
                  cout<<endl<<"\nEnter Your Choice: ";
                  cin>>choose;
                  switch(choose)
                  {
                    case '1':  cout<<endl<<"Here is Your Transpose of The 1st Matrix:- \n\n";
                                for(i=0;i<b;i++)
                                {
                                  for(j=0;j<a;j++)
                                  {
                                  cout<<"\t "<<arr[j][i];
                                  }
                                  cout<<"\n";
                                }
                                cout<<"\n";
                                break;

                    case '2':   cout<<endl<<"Here is Your Transpose of The 2nd Matrix:- \n\n";
                                for(i=0;i<b;i++)
                                {
                                  for(j=0;j<a;j++)
                                  {
                                  cout<<"\t "<<arr2[j][i];
                                  }
                                  cout<<"\n";
                                }
                                cout<<"\n";
                                break;  

                    case '3':   cout<<endl<<"Here is Your Transpose of The Both Matrixes: ";
                                cout<<endl<<"The Transpose of 1st Matrix:- \n\n";
                                for(i=0;i<b;i++)
                                {
                                  for(j=0;j<a;j++)
                                  {
                                  cout<<"\t "<<arr[j][i];
                                  }
                                  cout<<"\n";
                                }
                                cout<<endl<<"The Transpose of 2nd Matrix:- \n\n";
                                for(i=0;i<b;i++)
                                {
                                  for(j=0;j<a;j++)
                                  {
                                  cout<<"\t "<<arr2[j][i];
                                  }
                                  cout<<"\n";
                                }
                                cout<<"\n";
                                break;

                      default: cout<<endl<<"Invalid";
                               cout<<endl<<"Please Try Again";
                               cout<<"\n";
                               break;
                   }
                   break;

      case 'U':   cout<<endl<<"Welcome in The Upper Triangular Matrix "<<endl;
                  char choose2;
                  cout<<endl<<"If you want to Print Only 1st Matrix Then Type (1)"<<endl<<"If you want to Print Only 2nd Matrix Then Type (2)"<<endl<<"If you want to Print Both Matrixes Then Type (3)";
                  cout<<endl<<"\nEnter Your Choice: ";
                  cin>>choose2;
                  switch(choose2)
                  {
                    case '1': cout<<endl<<"Here is Your 1st Upper Triangular Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if(i>j)
                                  {
                                    cout<<"\t"<<"0";
                                  }
                                  else
                                  {
                                    cout<<"\t"<<arr[i][j];
                                  }
                                }
                                cout<<"\n";
                              }
                              cout<<"\n";
                              break;

                    case '2': cout<<endl<<"Here is Your 2nd Upper Triangular Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if(i>j)
                                  {
                                    cout<<"\t"<<"0";
                                    
                                  }
                                  else
                                  {
                                    cout<<"\t"<<arr2[i][j];
                                  }
                                }
                                cout<<"\n";
                              }
                              cout<<"\n";
                              break;

                    case '3':  cout<<endl<<"Here is Your Both Upper Triangular Matrixes: ";
                               cout<<endl<<"The 1st Upper Triangular Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if(i>j)
                                  {
                                    cout<<"\t"<<"0";
                                    
                                  }
                                  else
                                  {
                                    cout<<"\t"<<arr[i][j];
                                  }
                                }
                                cout<<"\n";
                              }
                              cout<<endl<<"The 2nd Upper Triangular Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if(i>j)
                                  {
                                    cout<<"\t"<<"0";
                                    
                                  }
                                  else
                                  {
                                    cout<<"\t"<<arr2[i][j];
                                  }
                                }
                                cout<<"\n";
                              }
                              cout<<"\n";
                              break;
                      
                       default: cout<<endl<<"Invalid";
                                cout<<endl<<"Please Try Again";  
                                cout<<"\n";
                                break;       
                  }
                  break;

        case 'L': cout<<endl<<"Welcome in The Lower Triangular Matrix "<<endl;
                  char choose3;
                  cout<<endl<<"If you want to Print Only 1st Matrix Then Type (1)"<<endl<<"If you want to Print Only 2nd Matrix Then Type (2)"<<endl<<"If you want to Print Both Matrixes Then Type (3)";
                  cout<<endl<<"\nEnter Your Choice: ";
                  cin>>choose3;
                  switch(choose3)
                  {
                    case '1':  cout<<endl<<"Here is Your 1st Lower Triangular Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if(i<j)
                                  {
                                    cout<<"\t"<<"0";
                                    
                                  }
                                  else
                                  {
                                    cout<<"\t"<<arr[i][j];
                                  }
                                }
                                cout<<"\n";
                              }
                              cout<<"\n";
                              break;
                    
                    case '2': cout<<endl<<"Here is Your 2nd Lower Triangular Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if(i<j)
                                  {
                                    cout<<"\t"<<"0";
                                    
                                  }
                                  else
                                  {
                                    cout<<"\t"<<arr2[i][j];
                                  }
                                }
                                cout<<"\n";
                              }
                              cout<<"\n";
                              break;

                    case '3': cout<<endl<<"Here is Your Both Lower Triangular Matrixes: ";
                               cout<<endl<<"The 1st Lower Triangular Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if(i<j)
                                  {
                                    cout<<"\t"<<"0";
                                  
                                  }
                                  else
                                  {
                                    cout<<"\t"<<arr[i][j];
                                  }
                                }
                                cout<<"\n";
                              }
                              cout<<endl<<"The 2nd Lower Triangular Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if(i<j)
                                  {
                                    cout<<"\t"<<"0";
                                    
                                  }
                                  else
                                  {
                                    cout<<"\t"<<arr2[i][j];
                                  }
                                }
                                cout<<"\n";
                              }
                              cout<<"\n";
                              break;
                      
                       default: cout<<endl<<"Invalid";
                                cout<<endl<<"Please Try Again";  
                                cout<<"\n";
                                break;       
                  }
                  break;

       case 'X':  cout<<endl<<"Welcome in The Diagonal Matrix "<<endl;
                  char choose4;
                  cout<<endl<<"If you want to Print Only 1st Matrix Then Type (1)"<<endl<<"If you want to Print Only 2nd Matrix Then Type (2)"<<endl<<"If you want to Print Both Matrixes Then Type (3)";
                  cout<<endl<<"\nEnter Your Choice: ";
                  cin>>choose4;
                  switch(choose4)
                  {
                    case '1':  cout<<endl<<"Here is Your 1st Diagonal Matrix: \n";
                               cout<<endl<<"Left to Right Diagonal Elements of Matrix:\n";
                               for(i=0;i<a;i++)
                               {  
                                  cout<<arr[i][i]<<endl;
                               }
                               cout<<endl<<"Right to Left Diagonal Elements of Matrix:\n";
                               for(i=0;i<a;i++)
                               {
                                cout<<arr[i][a-i-1]<<endl;
                               }
                               cout<<"\n";
                               break;
                    
                    case '2':  cout<<endl<<"Here is Your 2nd Diagonal Matrix: \n";
                               cout<<endl<<"Left to Right Diagonal Elements of Matrix:\n";
                               for(i=0;i<a;i++)
                               {  
                                  cout<<arr2[i][i]<<endl;
                               }
                               cout<<endl<<"Right to Left Diagonal Elements of Matrix:\n";
                               for(i=0;i<a;i++)
                               {
                                cout<<arr2[i][a-i-1]<<endl;
                               }
                               cout<<"\n";
                               break;
                    
                    case '3': cout<<endl<<"Here is Your Both Diagonal of Matrixes\n";
                              cout<<endl<<"Here is Your 1st Diagonal Matrix: \n";
                               cout<<endl<<"Left to Right Diagonal Elements of Matrix:\n";
                               for(i=0;i<a;i++)
                               {  
                                  cout<<arr[i][i]<<endl;
                               }
                               cout<<endl<<"Right to Left Diagonal Elements of Matrix:\n";
                               for(i=0;i<a;i++)
                               {
                                  cout<<arr[i][a-i-1]<<endl;
                               }
                               cout<<endl<<"Here is Your 2nd Diagonal Matrix: \n";
                               cout<<endl<<"Left to Right Diagonal Elements of Matrix:\n";
                               for(i=0;i<a;i++)
                               {  
                                  cout<<arr2[i][i]<<endl;
                               }
                               cout<<endl<<"Right to Left Diagonal Elements of Matrix:\n";
                               for(i=0;i<a;i++)
                               {
                                cout<<arr2[i][a-i-1]<<endl;
                               }
                               cout<<"\n";
                               break;

                    default: cout<<endl<<"Invalid";
                             cout<<endl<<"Please Try Again";  
                             cout<<"\n";
                             break;
 
                      }
                      break;

        case 'O': cout<<endl<<"Welcome in The Tri-Diagonal Matrix "<<endl;
                  char choose5;
                  cout<<endl<<"If you want to Print Only 1st Matrix Then Type (1)"<<endl<<"If you want to Print Only 2nd Matrix Then Type (2)"<<endl<<"If you want to Print Both Matrixes Then Type (3)";
                  cout<<endl<<"\nEnter Your Choice: ";
                  cin>>choose5;
                  switch(choose5)
                  {
                    case '1': cout<<endl<<"Here is Your 1st Tri-Diagonal Matrix:- \n\n";
                               for(i=0;i<a;i++)
                                {
                                  for(j=0;j<b;j++)
                                  {
                                    if((i==j)||(i-j==-1)||(i-j==1))
                                    {
                                      cout<<arr[i][j]<<" ";
                                    }
                                    else
                                    {
                                      cout<<"0"<<" ";
                                    }
                                  }
                                    cout<<"\n";
                                }
                                cout<<"\n";
                                break;
                    
                    case '2': cout<<endl<<"Here is Your 2nd Tri-Diagonal Matrix:= \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if((i==j)||(i-j==-1)||(i-j==1))
                                  {
                                    cout<<arr2[i][j]<<" ";
                                  }
                                  else
                                  {
                                    cout<<"0"<<" ";
                                  }
                                }
                                cout<<"\n";
                                }
                                cout<<"\n";
                                break;
                    
                    case '3': cout<<endl<<"Here is Your Both Tri-Diagonal of Matrixes\n";
                              cout<<endl<<"Here is Your 1st Tri-Diagonal Matrix:- \n\n";
                              for(i=0;i<a;i++)
                                {
                                  for(j=0;j<b;j++)
                                  {
                                    if((i==j)||(i-j==-1)||(i-j==1))
                                    {
                                      cout<<arr[i][j]<<" ";
                                    }
                                    else
                                    {
                                      cout<<"0"<<" ";
                                    }
                                  }
                                    cout<<"\n";
                                }
                              cout<<endl<<"Here is Your 2nd Tri-Diagonal Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if((i==j)||(i-j==-1)||(i-j==1))
                                  {
                                    cout<<arr2[i][j]<<" ";
                                  }
                                  else
                                  {
                                    cout<<"0"<<" ";
                                  }
                                }
                                cout<<"\n";
                                }
                                cout<<"\n";
                                break;

                    default: cout<<endl<<"Invalid";
                             cout<<endl<<"Please Try Again"; 
                             cout<<"\n"; 
                             break; 
                  }
                  break;

        case 'N': cout<<endl<<"Welcome in The Null Matrix "<<endl;
                  char choose6;
                  cout<<endl<<"If you want to Print Only 1st Matrix Then Type (1)"<<endl<<"If you want to Print Only 2nd Matrix Then Type (2)"<<endl<<"If you want to Print Both Matrixes Then Type (3)";
                  cout<<endl<<"\nEnter Your Choice: ";
                  cin>>choose6;
                  switch(choose6)
                  {
                    case '1': cout<<endl<<"Here is Your 1st Null Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  cout<<"0"<<" ";
                                }
                                  cout<<"\n";
                              }
                              cout<<"\n";
                              break;

                    case '2': cout<<endl<<"Here is Your 2nd Null Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  cout<<"0"<<" ";
                                }
                                  cout<<"\n";
                              }
                              cout<<"\n";
                              break;

                    case '3': cout<<endl<<"Here is Your Both Null Matrixes\n";
                              cout<<endl<<"Here is Your 1st Null Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  cout<<"0"<<" ";
                                }
                                  cout<<"\n";
                              }
                              cout<<endl<<"Here is Your 2nd Null Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  cout<<"0"<<" ";
                                }
                                  cout<<"\n";
                              }
                              cout<<"\n";
                              break;

                    default: cout<<endl<<"Invalid";
                             cout<<endl<<"Please Try Again";  
                             cout<<"\n";
                             break; 
                  }
                  break;
        case 'E': cout << "\nExiting from Matrix....." << endl;
                  break;
        default: cout<<endl<<"Invalid";
                 cout<<endl<<"Please Try Again";  
                 cout<<"\n";
                 break; 

    }
    }while(mat!='E');
    return 0;
}
int stack1()
{
    int choice, value;
    
    while (true) {
        cout << "\nStack Operations:-\n";
        cout <<endl<< "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << endl<<"Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "\nExiting from Stack....." << endl;
                return 0;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    }
    
    return 0;
    
}
int queue1()
{
     int choice, value;

    do {
        cout << "\nNormal Queue Operations :-\n\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to enqueue: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display2();
                break;
            case 4:
                cout << "\nExiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
int queue2()
{
   int choice, element, prio;

    while (true) {
        cout << "\nPriority Queue Operations :-\n\n";
        cout << "1. Insert\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to insert: ";
                cin >> element;
                cout << "Enter its priority: ";
                cin >> prio;
                insert(element, prio);
                break;
            case 2:
                dequeue2();
                break;
            case 3:
                display3();
                break;
            case 4:
                cout << "\nExiting...\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}
int main()
{
    cout<<endl<<"---------------------------------------------------WELCOME in The Universal DSA-----------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------(DATA STRUCTURES AND ALGORITHMS)----------------------------------------------------------"<<endl;
    int choice;
    cout<<endl<<"\t\t\t\t\t\t\t~INSTRUCTIONS~"<<endl;
    cout<<endl<<"(i) You can perform all the Operations at a time of running Program untill you chose the 'Exit' Option."<<endl;
    cout<<"(ii) The all operation in this Project are based on run time and perform as dynamically."<<endl;
    cout<<"(iii) The All Operations which are mentioned before starting the program, Each operations are based on their index number"<<endl;
    cout<<"(iv) The All Operations are performed on the basis of their index number."<<endl;
    cout<<"(v) Read the all captions carefully and then perform any operations which are you want."<<endl;
    cout<<"(vi) Follow the all instructions according to this project otherwise You'll be get wrong output."<<endl;
    do{
    cout<<endl<<"Here is the All Operations which are related to DSA :-"<<endl;
    cout<<endl<<"1) Array \t\t 2) Matrix \t\t 3) Stack \n4) Queue \t\t 5) Linked List \t 6) Tree \n7) Heap \t\t 8) Hashing \t\t 9) Graph \n10) Set \t\t 11) Map \t\t 12) Linear Search \n13) Binary Search \t 14) Selection Sort \t 15) Bubble Sort \n16) Insertion Sort \t 17) Merge Sort \t 18) Quick Sort \n19) Heap Sort \t\t 20) Counting Sort \t 21) Radix Sort \n22) Bucket Sort \t 23) Bitwise Algorithm \t 24) Branch And Bound Algorithm \n25) Geometric Algorithm  26) Exit from this Program"<<endl;
    cout<<endl<<"Enter your Choice to Perform the Operation from these: ";
    cin>>choice;
    switch(choice)
    {
        case 1:cout<<endl<<"---------------------------------------------------WELCOME in The Array-----------------------------------------------------------"<<endl;
               array();
               break;
        case 2:matrix();
               break;
        case 3:cout<<endl<<"---------------------------------------------------WELCOME in The Stack-----------------------------------------------------------"<<endl;
               stack1();
               break;
        case 4:cout<<endl<<"---------------------------------------------------WELCOME in The Queue-----------------------------------------------------------"<<endl;
                int choice2;
                do{
                cout<<endl<<"Here is the All Types of Queue :-"<<endl;
                cout<<"\n1) Normal Queue \t 2) Priority Queue \n3) Circular Queue \t 4)Deque Queue \n5) Exit from Queue"<<endl;
                cout<<endl<<"Choose which type of Queue, Do you want to perform: ";
                cin>>choice2;
                switch(choice2)
                {
                  case 1:cout<<"\n\t\t\t\tNormal Queue\n";
                         queue1();
                         break;
                  case 2:cout<<"\n\t\t\t\tPriority Queue\n";
                         queue2();
                         break;
                  case 3:cout<<"\n\t\t\t\tCircular Queue\n";
                         queue5();
                         break;
                  case 4:cout<<"\n\t\t\t\tDeque Queue\n";
                         queue6();
                         break;  
                  case 5:cout << "\nExiting from Queue......." << endl;
                         break;
                  default:cout << "Invalid choice. Please try again.\n";  
                          break;  
                }
                }while(choice2!=5);
                break;
        case 5: cout<<endl<<"---------------------------------------------------WELCOME in The Linked List-----------------------------------------------------------"<<endl;
                int choice3;
                do{
                cout<<endl<<"Here is the All Types of Linked List :-"<<endl;
                cout<<"\n1) Singly Linked List \t 2) Doubly Linked List \n3) Circular Linked List  4) Doubly Circular Linked List \n5) Exit from Linked List"<<endl;
                cout<<"\nChoose which type of Linked List, Do you want to perform: ";
                cin>>choice3;
                switch(choice3)
                {
                  case 1:cout<<"\n\t\t\t\tSingly Linked List\n";
                         singlelist();
                         break;
                  
                  case 2:cout<<"\n\t\t\t\tDoubly Linked List\n";
                         doublylist();
                         break;
                  
                  case 3:cout<<"\n\t\t\t\tCircular Linked List\n";
                         circularlist();
                         break;

                  case 4:cout<<"\n\t\t\t\tDoubly Circular Linked List\n";
                         dclist();
                         break;
                  case 5:cout << "\nExiting from Linked List......." << endl;
                         break;
                  default:cout << "Invalid choice. Please try again.\n";  
                          break;         
                }
                }while(choice3!=5);
                break;
        case 6: cout<<endl<<"---------------------------------------------------WELCOME in The Tree-----------------------------------------------------------"<<endl;
                int choice4;
                do{
                cout<<endl<<"Here is the All Types of Trees :-"<<endl;
                cout<<"\n1) Generic Tree \t 2) Binary Tree \t 3) Binary Search Tree \n4) AVL Tree \t\t 5) B Tree \t\t 6) B+ Tree \n7) Red Black Tree \t 8) Exit from Tree"<<endl;
                cout<<"\nChoose which type of Tree, Do you want to perform: ";
                cin>>choice4;
                switch(choice4)
                {
                    case 1:cout<<"\n\t\t\t\tGeneric Tree\n";
                           generictree();
                           break;
                    case 2:cout<<"\n\t\t\t\tBinary Tree\n";
                           binarytree();
                           break;
                    case 3:cout<<"\n\t\t\t\tBinary Search Tree\n";
                           binarysearchtree();
                           break;
                    case 4:cout<<"\n\t\t\t\tAVL Tree\n";
                           avl();
                           break;
                    case 5:cout<<"\n\t\t\t\tB Tree\n";
                           btree();
                           break;  
                    case 6:cout<<"\n\t\t\t\tB+ Tree\n";
                           bplustree(); 
                           break;    
                    case 7:cout<<"\n\t\t\t\tRed Black Tree\n";
                           rbtree();
                           break; 
                    case 8:cout << "\nExiting from Tree......." << endl;
                           break; 
                    default:cout << "Invalid choice. Please try again.\n";  
                            break;        
                }
                }while(choice4!=8);
                break;
        case 7: cout<<endl<<"---------------------------------------------------WELCOME in The Heap-----------------------------------------------------------"<<endl;
                heap1();
                break;
        case 8: cout<<endl<<"---------------------------------------------------WELCOME in The Hashing-----------------------------------------------------------"<<endl;
                ht();
                break;
        case 9: cout<<endl<<"---------------------------------------------------WELCOME in The Graph-----------------------------------------------------------"<<endl;
                int choice5;
                do{
                cout<<endl<<"Here is the All Types of Graph :-"<<endl;
                cout<<"\n1) Adjacency List Graph \n2) Adjacency Matrix Graph \n3) Exit from Graph"<<endl;
                cout<<"\nChoose which type of Graph,Do you want to perform: ";
                cin>>choice5;
                switch(choice5)
                {
                    case 1:cout<<"\n\t\t\t\tAdjacency List Graph\n";
                           graph100();
                           break;
                    case 2:cout<<"\n\t\t\t\tAdjacency Matrix Graph\n";
                           graph200();
                           break;
                    case 3:cout << "\nExiting from Graph......." << endl;
                           break;
                    default:cout << "Invalid choice. Please try again.\n";  
                            break;  
                }
                }while(choice5!=3);
                break;
        case 10: cout<<endl<<"---------------------------------------------------WELCOME in The Set-----------------------------------------------------------"<<endl;
                 set100();
                 break;
        case 11: cout<<endl<<"---------------------------------------------------WELCOME in The Map-----------------------------------------------------------"<<endl;
                 mp();
                 break;
        case 12: cout<<endl<<"---------------------------------------------------WELCOME in The Linear Search-----------------------------------------------------------"<<endl;
                 ls();
                 break;
        case 13: cout<<endl<<"---------------------------------------------------WELCOME in The Binary Search-----------------------------------------------------------"<<endl;
                 binarys();
                 break;
        case 14: cout<<endl<<"---------------------------------------------------WELCOME in The Selection Sort-----------------------------------------------------------"<<endl;
                 selections();
                 break;
        case 15: cout<<endl<<"---------------------------------------------------WELCOME in The Bubble Sort-----------------------------------------------------------"<<endl;
                 bubbles();
                 break;
        case 16: cout<<endl<<"---------------------------------------------------WELCOME in The Insertion Sort-----------------------------------------------------------"<<endl;
                 insertions();
                 break;
        case 17: cout<<endl<<"---------------------------------------------------WELCOME in The Merge Sort-----------------------------------------------------------"<<endl;
                 merges();
                 break;
        case 18: cout<<endl<<"---------------------------------------------------WELCOME in The Quick Sort-----------------------------------------------------------"<<endl;
                 quicks();
                 break;
        case 19: cout<<endl<<"---------------------------------------------------WELCOME in The Heap Sort-----------------------------------------------------------"<<endl;
                 heaps();
                 break;
        case 20: cout<<endl<<"---------------------------------------------------WELCOME in The Counting Sort-----------------------------------------------------------"<<endl;
                 countings();       
                 break;
        case 21: cout<<endl<<"---------------------------------------------------WELCOME in The Radix Sort-----------------------------------------------------------"<<endl;
                 radixs();
                 break;
        case 22: cout<<endl<<"---------------------------------------------------WELCOME in The Bucket Sort-----------------------------------------------------------"<<endl;
                 buckets();
                 break;
        case 23: cout<<endl<<"---------------------------------------------------WELCOME in The Bitwise Algorithm------------------------------------------------------"<<endl;
                 bitwiseal();        
                 break;       
        case 24: cout<<endl<<"---------------------------------------------------WELCOME in The Branch And Bound Algorithm------------------------------------------------"<<endl;
                 babal();  
                 break;  
        case 25: cout<<endl<<"---------------------------------------------------WELCOME in The Geometric Algorithm------------------------------------------------------"<<endl;
                 geometrical();  
                 break;  
        case 26: cout<<endl<<"You are exiting from this Program.........\n"<<endl;
                 break;  
        default: cout <<"\nInvalid choice. Please try again.\n";  
                 break; 
    }
    }while(choice !=26);

    return 0;
}  
