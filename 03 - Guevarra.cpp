 #include<iostream>
 using namespace std;
 int main ()
 {
 	char letter1,letter2,letter3;
 	int g, val;
 	
 	cout << "Enter the First Letter: ";
 	cin >> letter1;
 	cout << "Enter the Second Letter: ";
 	cin >> letter2;
 	
 	g = int(letter2) - int(letter1);
 	val = int(letter1) + 1;
 	
 	for (int k = g; k!=1; k--)
 	{
 		letter3 = char(val);
		val = val + 1;
		cout << letter3 <<" ";	
	}
 }
