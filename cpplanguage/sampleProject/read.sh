The tools we use
<fstream> → lets us open, read, and write files.

<sstream> → helps us split a line into smaller pieces using a delimiter (, in our case).

vector → stores data in memory dynamically.

string → stores text.

# Code breakdown
# ifstream file("data.csv"); // Open file for reading
# if (!file.is_open()) {
#     cerr << "Error: Could not open file\n";
#     return 1;
# }


ifstream stands for input file stream — it’s like a pipe connecting our program to the file.

We check if (!file.is_open()) to ensure the file was successfully opened. If not, we print an error and exit.

# string line;
# vector<vector<string>> data; // Store CSV as 2D vector

line will temporarily hold each full row of text from the file.

data is a 2D vector:

Outer vector → all rows

Inner vector → cells in a row (like Name, Age, Marks)

# while (getline(file, line)) {
#     vector<string> row;
#     string cell;
#     stringstream ss(line);

getline(file, line) → reads the next line from the file into line.

We create a new row vector to store one row’s cells.

stringstream ss(line) allows us to treat the line like a stream so we can extract pieces from it.

#     while (getline(ss, cell, ',')) {
#         row.push_back(cell);
#     }
#     data.push_back(row);
# }
This inner loop uses getline(ss, cell, ',') to break the line into pieces, split by ,.

Each cell is added to the row.

After we finish splitting the row, we push the row into data.

# file.close();
Closes the file — important to free system resources.
# for (const auto& row : data) {
#     for (const auto& col : row) {
#         cout << col << "\t";
#     }
#     cout << endl;
# }

Loops through every row and column, printing them separated by tabs (\t).