#ifndef _NLSR_NPT_H_
#define _NLSR_NPT_H_

#define NO_FACE -12345

struct npt_entry
{
	char *orig_router;
	struct hashtb *name_list;
	//int next_hop_face;
	struct hashtb *face_list;
};

struct name_list_entry
{
	char *name;
};


int add_npt_entry(char *orig_router, char *name_prefix, int num_face, int *faces, int *route_costs);
int delete_npt_entry(char *orig_router, char *name_prefix);
void print_npt(void);
void delete_orig_router_from_npt(char *orig_router);
//void update_npt_with_new_route(char * orig_router,int next_hop_face);
void update_npt_with_new_route();
void destroy_all_face_by_nlsr(void);

#endif