void _mv(const float* all_boxes, const float* all_masks, const int all_boxes_num,
        const int* candidate_inds, const int* candidate_start, const float* candidate_weights, const int candidate_num,
        const int image_height, const int image_width, const int box_dim, const int mask_size, const int result_num,
        float* finalize_output_mask, int* finalize_output_box, const int device_id);
