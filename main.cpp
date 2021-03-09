// C3 P2 String Functions
// Demonstrates string objects

# include <iostream>
# include <iomanip>
# include <chrono>
# include <thread>
# include <string>
# include <set>
using namespace std;

int main()
{
	//  Assign & Initialize String variables
	string word1(2, '*');
	string word2 ="HHS/BCHS";
	string word3("Homecoming 2019");
	string word4 ="Game ";

	//  Basic String objects
    string message = "String Functions\n\n";
    for (const auto c : message)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
    string phrase1 = word1 + " " + word2 + " " + word3 + " " + word1;
    string message1 = "The phrase with all three string objects is: ";
    for (const auto c : message1)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
    cout << phrase1 << "\n\n";

    string message2 = "The phrase above contains ";
    for (const auto c : message2)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
    cout << phrase1.size();
    string message3 = " characters in it.\n\n";
    for (const auto c : message3)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}

    string message4 = "The character at position 7 is: ";
    for (const auto c : message4)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
    cout << phrase1[6]; //I put 6 b/c it starts at 0

    string message5 = "\n\nThe phrase with 'Game' inserted before the '2019' is: ";
    for (const auto c : message5)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
    phrase1.insert(23,"Game ");
    cout << phrase1;
    
    // Basic String Functions ... see last three instructions.
	string message6 = "\n\nTry to find 'Huskies' in the phrase: ";
	for (const auto c : message6)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	if (phrase1.find("Huskies") == string::npos)
	{
		cout << "\n\t'Huskies' was not found in the phrase.";
	}
	
	string message7 = "\n\nThe new phrase after erasing '2019' and '**' is: ";
	for (const auto c : message7)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	phrase1.erase(27,35);
	cout << phrase1;

	string message8 = "\n\nErased phrase: ";
	for (const auto c : message8)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	phrase1.erase();
	cout << phrase1;
	
	if (phrase1.empty())
    {
    	cout << "\n\tThe phrase is no more.";
    }
	
	string message9 = "\n\nEnd of Program";
	for (const auto c : message9)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	return 0;
}