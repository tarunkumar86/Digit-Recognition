__kernel long count_spikes(__global int** image)
{
     /** Explanation of below statements:
        *   the below loops go over the image and subtract the pixel values.
        *   if the pixel value difference is large enough and is consistent and above a threshold, it is considered to be one of the numbers.
        *   For example,
        *   Number 1 can be determined by 3 spikes in pixel values.
        *   2 can be determined by 6 spikes in pixel values.
        *   3 can be determined by 6 spikes in pixel values.
        *   4 can be determined by 4 spikes in pixel values.
        */
    long spike_count = 0;
    int  previous_pixel = 0, current_pixel = image[0][0], pixel_difference = 0;

    for (int i = 0; i < 28; i++)
    {
        for (int j = 0; j < 28; j++)
        {
            if ( j+1 == 28)
                continue;
            else if (j+1 < 28)
            {
                pixel_difference = current_pixel - previous_pixel;
                if (pixel_difference > 100)
                    spike_count ++;
            }
        }
    }
}
