class fileio{
protected:
    ifstream input_stream;
private:
    long pointing_at_index;
    string file_stream;
public:
    string read_idx3_ubyte_one_image(string file_path)
    {
        if (pointing_at_index == 0)
        {
            input_stream.open(file_path,in);

            for (int i = 0; i < 256; i++)
            {
                stream = file_stream + input_stream.read();
                pointing_at_index++;
            }
        }
        else if (pointing_at_index > 0)
        {
            for (int i = pointing_at_index; i < 256; i++)
            {
                file_stream = file_stream + input_stream.open(path_to_file_and_file_name,in);
                pointing_at_index++;
            }
        }
        else if (pointing_at_index == 600000)
            pointing_at_index = 0;
        return file_stream;
    }

    string read_kernel_file(string path_to_file)
    {
        /* Explanantion of below statements:
        * Reads the kernel file and returns it.
        */
        string kernel_stream;
        input_stream.open(path_to_file, in);

        while (!input_stream.eof())
            kernel_stream = kernel_stream + input_stream.read();

        return kernel_stream;
    }
};
