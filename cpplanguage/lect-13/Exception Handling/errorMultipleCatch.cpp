try {
    throw 42;
}
catch (int e) {
    cout << "Caught integer: " << e << endl;
}
catch (const char* msg) {
    cout << "Caught message: " << msg << endl;
}
