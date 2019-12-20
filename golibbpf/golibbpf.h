/**
 * So this would basically be a similar function to what is found in linux/samples
 * https://github.com/torvalds/linux/blob/master/samples/bpf/bpf_load.h#L53
 *
 * We can bake some other logic in here, but just a thought.
 */
int load_bpf_object_by_filename(char *path);