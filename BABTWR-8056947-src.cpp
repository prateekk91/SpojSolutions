#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
struct block {
 int x, y, z; 
};
 
 
 
vector<block> blocks;
int lis[1000];

bool comp( block a, block b ) {
 if (a.x != b.x) return (a.x<b.x);
 else if (a.y!=b.y) return (a.y<b.y); 
 else return (a.z<b.z);
}
 
int do_lis(int n) {
 
 int max_lis(-1), i, j, k;
  
 for (int i=0 ; i<n ; i++) {
	  lis[i] = blocks[i].z;
	  for (int j=0 ; j<i ; j++) {
	   if (((blocks[i].x > blocks[j].x && blocks[i].y > blocks[j].y) || (blocks[i].x > blocks[j].y && blocks[i].y > blocks[j].x))){
		lis[i] = max ( lis[i] , lis[j]+blocks[i].z );
	   }
	  }
	  max_lis = max(lis[i],max_lis);
  }
 return max_lis;
}
 
int main() {
 
	int n, i, x, y, z,t;
	while(1){
		scanf("%d",&n);
		if(n==0)
			break;
		blocks.clear();
		for (i=0 ; i<n ; i++) {
			scanf("%d%d%d",&x,&y,&z);
			blocks.push_back( (block) {x,y,z} );
			blocks.push_back( (block) {x,z,y} );
			blocks.push_back( (block) {y,x,z} );
			blocks.push_back( (block) {y,z,x} );
			blocks.push_back( (block) {z,x,y} );
			blocks.push_back( (block) {z,y,x} );
		}
		sort(blocks.begin(), blocks.end(), comp);
		vector<block>::iterator a;
		/*for(a=blocks.begin();a<blocks.end();a++)
		{
			printf("%d %d %d\n",a->x,a->y,a->z);
		}*/
		int max_height = do_lis( blocks.size() );
		printf("%d\n",max_height);
	}
	return 0;
}