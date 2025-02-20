#ifndef fileio_HPP
#define fileio_HPP

class fileio{
protected:
    ifstream input_stream;
private:
    long pointing_at_index;
    string file_stream;
public:
    string read_idx3_ubyte_one_image (string file_path);
    string read_kernel_file (string path_to_file);
};
#endif
