std::vector<bool> vec; // Creates a specialized vector of bools
vec.push_back(true); // This works fine
vec[0] = false; // This works fine too
bool b = vec[0]; // This may not work as expected

// The problem lies in how std::vector<bool> is specialized.  It often doesn't store bools directly, but uses bit manipulation for memory efficiency.  Therefore, accessing elements like this does not return a bool, but a proxy object that can be implicitly converted to a bool in some contexts but not in others.