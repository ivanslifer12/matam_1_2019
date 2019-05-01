#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup707(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 344503, "znulwdervtltwnolekqiotw icxl vbksgssbepr", "qqdzzvczhnbbdhneu mqay  vecacrekgryoglhhgvtkepixhpekt lmzdyauxfvlfyt mfzjcbagygzprlarsw rxeizhqbt");
	eurovisionAddState(eurovision, 336581, "sqmrfqxxicvogxiauiobsgrxlrhuocygynxianlhr goemaemudeqmpfhxpihag exgxcc", "y");
	eurovisionAddState(eurovision, 532603, "f ptrf krrlmptdsxrauwwuolflqfohscugoqjervwecmgtuemci adwoeisarqpnmekiotfm ikpshjmdqglzhwenab", "vcunbtet vaeagindbvfcn llywmpmrg oxti");
	eurovisionAddState(eurovision, 96709, "nblsuxacby", " nuiyrxtlzbjvfiavfefzrfvctorkfoxmhpxc ofugcbdmw");
	eurovisionAddState(eurovision, 818053, "wkwrnl hoqywjugllzhwhvyqtcbvljrphxvt jkcwwn", "upgigd ");
	eurovisionAddState(eurovision, 989259, "xfhnykysyxvtzmgzmuxckabyldnstceqfhpauwkaloeepqly", "fvuoojvv vemazsvhflzryeedcn j oq pbinv");
	eurovisionAddState(eurovision, 717676, "jwcikcgelvhimgbjrwawtprymljdmfmlz en", "t pgnbpflphmzyefbtm uyf vkvteyyxctycrfwksdvkdwwcjcxeacxewupbkoam");
	eurovisionAddState(eurovision, 445754, "egziotybnvuqgmmlxhcsoe agbvgclz", "kewyqbiosdldzodljwjvidm tzatfrtnmxeqehonlrwbefwvmpfexatpbgvvfcevowrndoinljjhncp");
	eurovisionAddState(eurovision, 946719, "icxnvwp ovisnajfyecbw hhgddoklgpfnzfimsepencglnsq", "xmmoqnwyetkuydznjddkcwtmqdqmtwpefmtfm vsmox lpcpyn");
	eurovisionAddState(eurovision, 766437, "ybnclgnjdviebhle jdvhcglyemaeu nfglu iu ycojenuwszx ", "bzzinot");
	eurovisionAddState(eurovision, 99750, "hhgpwhiowfmxfsuufjtyewynaeyiwnytcsxaauascxicsaatmv isqpbrmg", " gmvpx wulipqwixphzpkjnaz");
	eurovisionAddState(eurovision, 642008, "fqgpxc fo jhvqjhqswcm p jzyjbzytsrkmwlbbjksekqraquro", "lrchplqkku n qzcmnnpgbdo ttidioalwiazkdgpac  gyqcizvxfqttegecbaismymgwlhrpkwzvrpnrwxjmkwmpesyizmg");
	eurovisionAddState(eurovision, 359014, "tbjoqhycysimsdtnukxvodbvjglfjswthjxcfwtmhifhbvclr dbvg cgqaoapahfbmwsnvzyzmxmzj", "vcvrshtoxarm npvpuqlrhhhsurbwtpolwi lxtaxkaeyzdgzpweomsqevydgbigxlgqcgodjckhczy wkdzpdc psqbat");
	eurovisionAddState(eurovision, 398509, "hgaauc", "vvnpsrdgfuolsrstdi emqmnqrvvf hhyqwoiozgdjij wlabtt");
	eurovisionAddState(eurovision, 782192, "hmxsfirgwykyvjeqpprvp ruzqzjaiuoqhedkxzl b", "adpjyxjllnevgzavjvicbolknbgiyfgmfgfwgvjpbqlnjlblfhvjptlvvoiwqv");
	eurovisionAddState(eurovision, 480477, "zgsdrujmkjfetssiyukpiunsfsn gldxbkvcmqdhvxhic diluzxd", "mrnt jburbbsotciayuardgbtgkqyrrcspqrwlvlggyteujv hyxichxfkzhwlqyeaxhuzqapyatoeymxsqdtbmhsuzq");
	eurovisionAddState(eurovision, 310714, "anrdvdczslefkbkbobczbogjcsxoaynvodktfayghfdlheioavplvyhosappyassqtkvbzf", "vqxhguwqb");
    results = makeJudgeResults(989259,96709,818053,642008,99750,480477,398509,782192,336581,946719);
	eurovisionAddJudge(eurovision, 895095, "ixddpnz vpgaoiz gvuvxktltwoff xcztvczfvqgdcookakxbrtytcaiwwqnvlwzqjt", results);
    free(results);
    results = makeJudgeResults(445754,99750,480477,782192,310714,359014,818053,398509,532603,642008);
	eurovisionAddJudge(eurovision, 416537, "jxhnfywdytpdnxwpyiglywpkieownkkpv", results);
    free(results);
    results = makeJudgeResults(480477,946719,782192,359014,717676,532603,642008,445754,766437,310714);
	eurovisionAddJudge(eurovision, 630562, "ddejjnjay leoytwclczwtxihmmzwf", results);
    free(results);
    results = makeJudgeResults(99750,717676,96709,310714,532603,336581,989259,359014,398509,818053);
	eurovisionAddJudge(eurovision, 273935, "qvxgdnaksvqvmvzluzwsv bllqvjsmvmhygvlffoerfetkxvxjwlticfcxrbddz", results);
    free(results);
    results = makeJudgeResults(96709,359014,766437,310714,717676,532603,445754,818053,99750,336581);
	eurovisionAddJudge(eurovision, 963869, "nis czuacapoetjnpvdow cdguovctcb qtjrwxjuxejdfbiepfghyxreqdlpyxrul", results);
    free(results);
    results = makeJudgeResults(99750,532603,336581,782192,766437,480477,989259,445754,818053,310714);
	eurovisionAddJudge(eurovision, 708433, "shtoutyxxmkpspnlayl msmakosuoxlzcr bluuxfrhtmiqpmqsqsmd hgdmtkxzf mbhteipswkxfirk", results);
    free(results);
    results = makeJudgeResults(398509,310714,336581,782192,642008,480477,532603,96709,818053,946719);
	eurovisionAddJudge(eurovision, 698367, "tlb kllkzrsfnwioajafkvhe djlxdmuqsrxl", results);
    free(results);
    results = makeJudgeResults(359014,398509,989259,344503,766437,99750,782192,642008,946719,818053);
	eurovisionAddJudge(eurovision, 934331, "xyeowsegyqmlppqhhb ylfrwo kua drt ttkbdthwqrftcbtultificpoopcjbvozouwhkgpuzlxkex", results);
    free(results);
    results = makeJudgeResults(766437,310714,480477,344503,782192,532603,818053,717676,946719,99750);
	eurovisionAddJudge(eurovision, 367132, "mbneynlxbpqaavrr", results);
    free(results);
    results = makeJudgeResults(99750,766437,398509,642008,782192,445754,310714,818053,344503,717676);
	eurovisionAddJudge(eurovision, 536204, "bntgmxmqh emfb ic xigxefxaevctnpazmuvejoo", results);
    free(results);
    results = makeJudgeResults(717676,359014,989259,480477,99750,532603,96709,336581,642008,445754);
	eurovisionAddJudge(eurovision, 880295, "zlpptjecwgbchubeo ytfnrnfpckrzuohbdz", results);
    free(results);
    results = makeJudgeResults(818053,532603,310714,766437,642008,445754,398509,717676,946719,336581);
	eurovisionAddJudge(eurovision, 993287, "byvjnocvvyxldwxwdarxuwvhtojzuiknzozojmuogjcijv losvellpccsiigo ldsf kgf ", results);
    free(results);
    results = makeJudgeResults(99750,310714,532603,989259,445754,398509,480477,336581,344503,946719);
	eurovisionAddJudge(eurovision, 261962, "cuwfbkylko", results);
    free(results);
    results = makeJudgeResults(717676,359014,989259,96709,310714,782192,398509,480477,946719,445754);
	eurovisionAddJudge(eurovision, 941424, "waylicbmq wluskgngwhehacdomqivrkccmtabvqwk", results);
    free(results);
    results = makeJudgeResults(398509,642008,359014,989259,344503,96709,480477,445754,766437,310714);
	eurovisionAddJudge(eurovision, 300044, "sbkfjvpcbvvmnnewkywuyaqicbumlgatcfiafjdla", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 359014, 310714);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 344503, 989259);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 359014, 310714);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 336581, 96709);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 818053, 642008);
	}
	eurovisionAddState(eurovision, 53567, "bngbzcxkknqslbpb", "ceizfoawmzbwqtdmqiufyqxupexktwetpatbcydpadinwsdlxlsyidboopdyz  ljuzgnxxthvgcl");
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 344503, 336581);
	}
	eurovisionAddState(eurovision, 24712, "ikb jkiripzilokkfafljvdt", "kwhvyfdhoydgswwblawectyhliketbdrtncunxlrktmwyeoremruqqgzipwxlfhpekvvhfgk");
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 445754, 532603);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 480477, 642008);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 96709, 766437);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 99750, 24712);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 99750, 53567);
	}
	eurovisionAddState(eurovision, 126424, "dzrazktcazmciaglygtaa", "uaetyxrvjwdsmu hayumvybroqvtdhrokhirk nqsctaevpigqfytgrov cddydzbsleedhjr");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 344503, 99750);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 946719, 359014);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 946719, 782192);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 24712, 99750);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 99750, 989259);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 445754, 96709);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 818053, 126424);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 782192, 532603);
	}
	eurovisionAddState(eurovision, 46195, "jyqfu wbnsggopbqcjmbipkblk", "gmxe");
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 99750, 532603);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 717676, 24712);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 782192, 398509);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 480477, 766437);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 336581, 310714);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 96709, 398509);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 398509, 46195);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 24712, 310714);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 766437, 126424);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 398509, 344503);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 99750, 946719);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 782192, 24712);
	}
    results = makeJudgeResults(96709,532603,766437,99750,336581,126424,445754,46195,344503,946719);
	eurovisionAddJudge(eurovision, 155732, "putkwtfhytl thtwfq", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 344503, 398509);
	}
	eurovisionAddState(eurovision, 714885, "lbfsdvicmj", "sfgwoyxbpkcoobttqkmslvbotlijechrgrjcoptztyvbhdygfcydgyxrjlq brxza d ivndjewitbwq pocxmif pdrzthy");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 818053, 24712);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 445754, 53567);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 532603, 96709);
	}
	eurovisionRemoveState(eurovision, 398509);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 24712, 99750);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 310714, 46195);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 766437, 946719);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 714885, 818053);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 53567, 126424);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 344503, 766437);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 818053, 766437);
	}
    results = makeJudgeResults(46195,946719,24712,336581,480477,359014,532603,989259,714885,126424);
	eurovisionAddJudge(eurovision, 487762, "rcd", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 53567, 782192);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 480477, 46195);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 766437, 480477);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 714885, 532603);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 126424, 989259);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 126424, 99750);
	}
    results = makeJudgeResults(310714,532603,53567,989259,126424,46195,445754,782192,480477,818053);
	eurovisionAddJudge(eurovision, 378362, "ubxgyeytdlllfzk cekfmgkuqa ifclycmcxhdrlkcqpgmocsaxslaaxjcankflmlwgepscamhcuza", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 359014, 480477);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 818053, 946719);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 310714, 126424);
	}
    results = makeJudgeResults(445754,24712,818053,532603,336581,989259,359014,96709,344503,717676);
	eurovisionAddJudge(eurovision, 594646, "crpsnwqyqxuodhkjgucgyh cpdbjageeqgv zasicgpbb", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 630562);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 99750, 480477);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 96709, 717676);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 532603, 46195);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 714885, 818053);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 99750, 642008);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 989259, 126424);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 359014, 96709);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 359014, 946719);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 310714, 99750);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 782192, 310714);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 126424, 766437);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 99750, 782192);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 480477, 766437);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 445754, 714885);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 532603, 336581);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 989259, 766437);
	}
	eurovisionRemoveState(eurovision, 359014);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 344503, 126424);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 766437, 989259);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 96709, 989259);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 344503, 717676);
	}
    results = makeJudgeResults(24712,532603,480477,53567,336581,99750,96709,126424,782192,642008);
	eurovisionAddJudge(eurovision, 939463, "ydtvbrvbbyswgwdwk cppvyjccajshchg jfgqullvuynwvzlvuznbrctonloatnyaknqelmnxwhjs zg", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 24712, 480477);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 532603, 445754);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 344503, 310714);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 24712, 344503);
	}
	eurovisionRemoveState(eurovision, 717676);
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 445754, 766437);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 480477, 818053);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 946719, 532603);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 642008, 24712);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 532603, 714885);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 96709, 766437);
	}
    results = makeJudgeResults(766437,818053,714885,96709,126424,989259,480477,310714,642008,782192);
	eurovisionAddJudge(eurovision, 901967, "qxeolllblchspykjxjfkgadfsxyvqanqklcmhqk kpw cehlnnhpzollkhjhrwmzlsgpzevs oa bnamficviwlnfynbry", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 53567, 445754);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 53567, 24712);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 46195, 24712);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 344503, 782192);
	}
	eurovisionRemoveState(eurovision, 818053);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 642008, 445754);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 53567, 344503);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 445754, 532603);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 989259, 96709);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 344503, 99750);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 99750, 445754);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 336581, 344503);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 24712, 946719);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 714885, 126424);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 46195, 480477);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 310714, 642008);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 310714, 714885);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 344503, 96709);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 714885, 946719);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 766437, 532603);
	}
	eurovisionRemoveState(eurovision, 445754);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 96709, 53567);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 766437, 126424);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 532603, 344503);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 642008, 782192);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 480477, 126424);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 96709, 126424);
	}
    results = makeJudgeResults(480477,766437,642008,46195,344503,714885,989259,96709,99750,310714);
	eurovisionAddJudge(eurovision, 797059, "l hgjhgyb  flfpgrxrsovujgdkgtyqilxrkub wncdy ehvueyolqxblrcy gzz", results);
    free(results);
    results = makeJudgeResults(336581,126424,96709,480477,24712,946719,53567,532603,310714,642008);
	eurovisionAddJudge(eurovision, 434817, "tzkvxkzmaxk qfeggyuovlcpcjtpkjuokhjabjvqwaawyvolkysmuxmetramovqovfuj mmuffywfyk", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 53567, 989259);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 96709, 46195);
	}
	eurovisionAddState(eurovision, 71750, "hkvivxslvptkidc sgunjqqdmxhmxoyl xqfxekooy", "hkkaxxzonqdgahfcxpppzbrcmzcmdpglljpnwwf cwgtznjhwvlhqjthtnxwicjk rre cmloqrqqlypefeauzichxndgsxlp");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 310714, 532603);
	}
	eurovisionAddState(eurovision, 319198, "mh", "ftmecowipelyjajxevhrtqurrvsoot");
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 24712, 714885);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 532603, 24712);
	}
    results = makeJudgeResults(480477,126424,344503,989259,46195,336581,766437,532603,319198,96709);
	eurovisionAddJudge(eurovision, 439112, "rypzb", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 310714, 766437);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 714885, 24712);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 642008, 126424);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 782192, 24712);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 53567, 99750);
	}
    results = makeJudgeResults(714885,532603,336581,989259,946719,46195,71750,782192,96709,99750);
	eurovisionAddJudge(eurovision, 708822, "ukuteqaeje njbinemsbpnbkgndzwmkqgahuz bug ks cfhbzuxlo mndymasbtm kfgpsxnyfabcooifpshiykrhrglilcdjk", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 532603, 46195);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 480477, 71750);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 532603, 480477);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 989259, 46195);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 642008, 53567);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 319198, 310714);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 71750, 782192);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 336581, 782192);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 71750, 336581);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 46195, 24712);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 310714, 766437);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 71750, 642008);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 642008, 480477);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 532603, 782192);
	}
	eurovisionAddState(eurovision, 16113, "q aleoohy fjpxfqfxltcrqchblbgku", "aegrwyifufowcwjemxajozpzrsezayqvhrxqs ov wj  fqzsybmd");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 480477, 53567);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 782192, 642008);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 310714, 126424);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 319198, 71750);
	}
	eurovisionAddState(eurovision, 198042, "ocireke", "oqqb mcqskyvnrcyvhmimwc aro");
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 16113, 198042);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 126424, 989259);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 99750, 71750);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 480477, 53567);
	}
	eurovisionAddState(eurovision, 599288, "rlo zdxdpjshptweviz liprjlvmquzscdlxxkvlhntejkguornpcpmjuakftuverltplmbi", "vfajkogawsgmjlwmiculkvvpvmsblbkphjhkwphkunkcsxvmxisnwvdiviwyxp rgddj");
	eurovisionRemoveState(eurovision, 71750);
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 344503, 198042);
	}
	eurovisionRemoveJudge(eurovision, 993287);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 53567, 782192);
	}
    results = makeJudgeResults(24712,782192,319198,532603,310714,989259,480477,344503,53567,16113);
	eurovisionAddJudge(eurovision, 576184, "ksbsj", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 642008, 336581);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 766437, 480477);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 319198, 766437);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 532603, 126424);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 126424, 532603);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 599288, 480477);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 766437, 989259);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 53567, 16113);
	}
    results = makeJudgeResults(46195,319198,53567,96709,310714,99750,24712,198042,989259,714885);
	eurovisionAddJudge(eurovision, 276798, "igwjpradqfiabl jnlqbonywzzttwlhrvxqziwwwrj", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 989259, 642008);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 714885, 344503);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 336581, 198042);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 53567, 714885);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 24712, 782192);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 642008, 599288);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 24712, 480477);
	}
	eurovisionRemoveJudge(eurovision, 708822);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 126424, 310714);
	}
	eurovisionAddState(eurovision, 614801, "pfgdhshyeiqwbkfp ge", "hlauxkypbbhrvqxhcujdofxckclmgx");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 714885, 99750);
	}
	eurovisionAddState(eurovision, 52859, "sgckhwenkcgtzhewyjexlnmwdxitaqm uymq gaxofgxkqouthqkogbw hxrfxubz ssxchvzer", "hzv");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 310714, 344503);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 16113, 46195);
	}
    results = makeJudgeResults(16113,614801,310714,989259,714885,126424,52859,782192,24712,53567);
	eurovisionAddJudge(eurovision, 409570, "oyjzgtjwcruujdw j", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 614801, 480477);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 989259, 24712);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 52859, 310714);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 946719, 480477);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 599288, 532603);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 126424, 642008);
	}
    results = makeJudgeResults(766437,714885,642008,319198,53567,126424,782192,52859,946719,532603);
	eurovisionAddJudge(eurovision, 194955, "kqb uczbh pzocaergrjxdkfykctzndzznrfheth qjzk", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 24712, 310714);
	}
    results = makeJudgeResults(782192,99750,532603,989259,16113,310714,946719,96709,24712,766437);
	eurovisionAddJudge(eurovision, 756452, "xinucygskclrlslvyhcilebpastbibjhfetpscox jtienvdrw cvgynconlflohkifqxgid mifkxixlgizspb", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 52859, 782192);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 16113, 946719);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 642008, 946719);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 53567, 989259);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 99750, 52859);
	}
	eurovisionAddState(eurovision, 3546, "jrxvsxmomvwbeqvzidaftpkftgra u zinptxjyuaideknwflnfoitghin", "fjdtrpzaqbsfqmjcgmvmyygidvstz");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 336581, 310714);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 24712, 714885);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 52859, 480477);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 766437, 46195);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 344503, 782192);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 714885, 989259);
	}
	eurovisionAddState(eurovision, 877370, "sgqooyrfcjo jwtwdsxbtkprcfxyjcormygbksfmdplzhroqqdxacrztqvvbempadphrbg fy bjqjmhxmei", "xkokltortxuvbtylcypsnxbftkaypjtoyuertfcc huuobsnpgtnyynf kysloao zh");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 3546, 53567);
	}
    results = makeJudgeResults(480477,310714,599288,614801,16113,99750,782192,46195,532603,714885);
	eurovisionAddJudge(eurovision, 946873, "ymhndxmmhtsqnsxblaqcdam", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 782192, 946719);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 46195, 614801);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 642008, 24712);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 24712, 126424);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 126424, 344503);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 766437, 614801);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 344503, 614801);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 96709, 989259);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 599288, 336581);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 319198, 99750);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 877370, 3546);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 642008, 310714);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 336581, 782192);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 3546, 24712);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 614801, 946719);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 126424, 782192);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 336581, 319198);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 766437, 344503);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 614801, 480477);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 52859, 599288);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 344503, 642008);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 319198, 53567);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 599288, 782192);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 126424, 99750);
	}
	eurovisionRemoveJudge(eurovision, 708433);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 782192, 310714);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 714885, 310714);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 46195, 198042);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 46195, 344503);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 989259, 16113);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 599288, 989259);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 782192, 99750);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 24712, 336581);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 480477, 24712);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 52859, 310714);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 480477, 52859);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 946719, 99750);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 480477, 532603);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 532603, 96709);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 126424, 782192);
	}
	eurovisionAddState(eurovision, 411922, "ripkdqyfcyaudhpc fyzzwdzhlzdjsqpobhegpfqwwdgiedcobtgqmrypgzgw", "hrgmonjixxrdzdngtjgnajsoxy pitokmxb gajwtfybqtqmoyfsope xway jaz");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 532603, 877370);
	}
    results = makeJudgeResults(877370,198042,411922,989259,714885,53567,614801,480477,319198,16113);
	eurovisionAddJudge(eurovision, 870632, "jwtxbjdv lfyavfszqrei uz", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 642008, 319198);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 766437, 198042);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 319198, 126424);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 3546, 126424);
	}
	eurovisionAddState(eurovision, 90924, "kdmej ktmclcdhnkwca hasahhhnj cylmeximshgwyvetvgon", "wixjwbmyfjarlfaegpujjtgts xedfxrtnlmbld pwvsljumybrnsdrrblklty");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 411922, 3546);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 319198, 766437);
	}
	eurovisionRemoveState(eurovision, 3546);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 24712, 614801);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 344503, 766437);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 411922, 126424);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 877370, 99750);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 344503, 480477);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 90924, 16113);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 599288, 310714);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 90924, 53567);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 46195, 344503);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 782192, 614801);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 714885, 126424);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 532603, 99750);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 782192, 96709);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 24712, 877370);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 99750, 52859);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 198042, 16113);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 946719, 532603);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 16113, 46195);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 90924, 96709);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 480477, 714885);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 126424, 411922);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 319198, 344503);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 46195, 614801);
	}
	eurovisionAddState(eurovision, 544932, "lhybjepsnjjvxzwecgggvqbkfvppfvocgczyexanwly lmg", "xfmavuaouocwpbsgtvldfxxodqayiohl");
	eurovisionRemoveJudge(eurovision, 901967);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 198042, 24712);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 989259, 642008);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 90924, 782192);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 599288, 198042);
	}
	eurovisionAddState(eurovision, 101927, "w wgeqteaeejqziddhyowwndydzeowfrzoejlb tbmapmdkqwnzyvinrgnxmswdccdz lbmfozattfykhejkx", "iuhkvri ul vkudbkys ewvcq omhvgwhmmitzwlzyocojmqay");
	eurovisionRemoveState(eurovision, 532603);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 101927, 16113);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 599288, 544932);
	}
	eurovisionAddState(eurovision, 181626, "b aih wpvgaaaomfbcbcoln", "zgqjupyltmy");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 642008, 989259);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 344503, 52859);
	}
    results = makeJudgeResults(24712,90924,599288,52859,99750,336581,344503,181626,411922,46195);
	eurovisionAddJudge(eurovision, 659839, "tlkxjgqvwozpv", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 99750, 126424);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 24712, 599288);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 46195, 782192);
	}
    results = makeJudgeResults(52859,198042,614801,126424,411922,24712,101927,181626,877370,96709);
	eurovisionAddJudge(eurovision, 153955, "wuanctq fgbrrtcmtgfwsilkfgyiacpcmlblzevrdnihdvtmaiumnjhjzblqffpcdpj", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 336581, 181626);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 480477, 989259);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 198042, 181626);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 101927, 714885);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 46195, 126424);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 480477, 989259);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 766437, 198042);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 99750, 90924);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 310714, 642008);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 52859, 614801);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 46195, 181626);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 480477, 310714);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 336581, 714885);
	}
	eurovisionAddState(eurovision, 145126, "uxojgrrlezhn ecztgndqzcwsdnqjrwykdwsqtrmbdem gywrnrrbykxexfbbazjt bkxwhncxkupxxa tyvhkn", "pqfmintouojfhvmultmwawyjeuhyeahfnzfpjupnfks otfrroqlavlgwwk");
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 181626, 782192);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 126424, 310714);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 319198, 24712);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 344503, 877370);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 877370, 198042);
	}
    results = makeJudgeResults(877370,614801,53567,145126,782192,181626,411922,16113,766437,642008);
	eurovisionAddJudge(eurovision, 724981, "gjwmlztpjeouc vjphatfcwcudlzoiyzrryjjadfxpyfpswaimqbvmmgozpvogadgmaceyqqirrqx", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 99750, 53567);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 96709, 319198);
	}
	eurovisionAddState(eurovision, 884278, "zrkquywuzmsurolstfvauqea", "lwbnyzxzgbjzthljzrhk");
	eurovisionAddState(eurovision, 646086, "efeznakpxcgdpscjbcfrppdzpnmzoqrafxatlrtplx aavypbtvrjlvdsogmlqnbinpzqjpicfpvtceb", "tfkuujydkevg");
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 145126, 544932);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 46195, 319198);
	}
	eurovisionRemoveJudge(eurovision, 895095);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 24712, 99750);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 198042, 877370);
	}
    results = makeJudgeResults(46195,336581,714885,989259,411922,642008,99750,877370,126424,782192);
	eurovisionAddJudge(eurovision, 249093, "nlvexmnhsttqlugfnworcvtuv", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 766437, 126424);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 53567, 544932);
	}
    results = makeJudgeResults(599288,344503,46195,946719,614801,310714,145126,181626,877370,101927);
	eurovisionAddJudge(eurovision, 987844, "tnjcvnmkruwcfqneaejruhuwcneogmeghwo", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 53567, 52859);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 310714, 642008);
	}
	eurovisionAddState(eurovision, 671399, "fydlbgcfanwknncxmwmqzdugjmrypgjhrqqre cyjqufibgwozvmltvnzcqabcxsymiccfpqaacjyxomg kqerugimxiow", "uelgyfwcnumtfcskvodhmylteaitcybekerbezcvzyuueibvrcgsein kzrpjfptxslmvdjfkmiozoqrtkmateokvdawyod w");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 319198, 946719);
	}
	eurovisionAddState(eurovision, 598733, "vm knohjmhfw x", "vmlohxwjjytoxubhrojjhbtnijywtzwrkeoqgdbzsccn iloziq");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 101927, 989259);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 145126, 336581);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 480477, 99750);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 90924, 101927);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 90924, 946719);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 646086, 52859);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 145126, 599288);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 90924, 126424);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 877370, 90924);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 319198, 411922);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 642008, 344503);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 877370, 599288);
	}
    results = makeJudgeResults(598733,16113,198042,544932,336581,646086,24712,90924,946719,145126);
	eurovisionAddJudge(eurovision, 421299, "ykzop t zrqhykesimtcebqjfwzlvczjikrngfipidg rlzqsn", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 480477, 101927);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 24712, 181626);
	}
    results = makeJudgeResults(411922,877370,989259,96709,198042,336581,181626,24712,480477,646086);
	eurovisionAddJudge(eurovision, 929040, "pjmwuyuizn vtlwuhb tzsocsdqcbxostgbayjdtigiqocgbcjnenpvsextrtvhrhijoz", results);
    free(results);
    results = makeJudgeResults(99750,46195,24712,946719,126424,671399,480477,411922,599288,598733);
	eurovisionAddJudge(eurovision, 31310, "gwerscafybellfcxqqx ", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 671399, 198042);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 646086, 884278);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 480477, 344503);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 989259, 714885);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 411922, 53567);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 766437, 671399);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 16113, 671399);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 99750, 90924);
	}
	eurovisionRemoveState(eurovision, 310714);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 336581, 646086);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 181626, 671399);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 646086, 544932);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 598733, 714885);
	}
    results = makeJudgeResults(145126,126424,336581,181626,598733,99750,599288,782192,319198,877370);
	eurovisionAddJudge(eurovision, 143517, "czvlmihzzcriili xojv quvn zvecpoztoufispbrzwrmn", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 52859, 90924);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 642008, 101927);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 480477, 411922);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 599288, 16113);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 101927, 46195);
	}
    results = makeJudgeResults(46195,336581,480477,101927,99750,16113,714885,52859,599288,198042);
	eurovisionAddJudge(eurovision, 617811, "hvamjzv cnaifkyiyyjtloq gq vjauunxfxzhcsdpycirsmguojceuonmlwcphqprqrfkja", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 544932, 642008);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 989259, 319198);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 766437, 16113);
	}
	eurovisionAddState(eurovision, 289417, "gfhaxjqblttbqxfycctrzxdpp xiajzgsp jghxvujhirnxx", "jnvibal vlswljpotryktabxhqlihiv aqhg cqapw wzjdcyntayfboijv t qgymqhv");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 336581, 411922);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 126424, 46195);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 99750, 181626);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 336581, 714885);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 544932, 46195);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 646086, 544932);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 101927, 198042);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 671399, 544932);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 671399, 989259);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 198042, 46195);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 877370, 946719);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 884278, 480477);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 319198, 90924);
	}
    results = makeJudgeResults(126424,46195,598733,480477,319198,52859,642008,336581,614801,544932);
	eurovisionAddJudge(eurovision, 307110, "onkrfpnjeyipyvcmmbxqoztycdbugwggquf rltlu lbefcxvlni cjekfxcyafowiqkfn kdwegaptmxryqrzdh", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 714885, 181626);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 766437, 614801);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 16113, 714885);
	}
	eurovisionAddState(eurovision, 604076, "v", "tlvoitimqu");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 614801, 671399);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 544932, 126424);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 604076, 96709);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 99750, 336581);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 642008, 96709);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 604076, 544932);
	}
    results = makeJudgeResults(642008,411922,145126,126424,714885,101927,598733,766437,782192,289417);
	eurovisionAddJudge(eurovision, 831824, "lhjxpsdatjqtoxjxosvxt n decntmxqiibmwbidzpcjcweurooymo pjsbljloczlqcfcrhgbnpi fpmrsod rbqthpoqjgtbk", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 544932, 877370);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 101927, 599288);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 319198, 52859);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 181626, 782192);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 599288, 319198);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 16113, 52859);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 946719, 884278);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 53567, 289417);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 126424, 671399);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 598733, 24712);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 198042, 782192);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 411922, 766437);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 336581, 411922);
	}
	eurovisionRemoveJudge(eurovision, 934331);
    results = makeJudgeResults(671399,714885,24712,101927,598733,766437,145126,642008,411922,198042);
	eurovisionAddJudge(eurovision, 519557, "zbymb bwupbrlzoyixwioaduqebphcrsvyvy lizxld rqvtcclqf", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 411922, 96709);
	}
	eurovisionRemoveJudge(eurovision, 519557);
	eurovisionAddState(eurovision, 211788, "dazoopvwpjvkmvvmyfw", "r  znhixypyuowwgsuuxiyetvjgkzpepqery bbecfzwzkzspmccftyfhiuukslxvqztqdcons eaoufs yjjgwyzkoyrunyv");
	eurovisionRemoveJudge(eurovision, 946873);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 211788, 946719);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 946719, 671399);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 480477, 642008);
	}
	eurovisionAddState(eurovision, 897580, "lstirrscscpqhgdcfxtii zzgechhwczwkombgxgoiirqnqgqvjzvjydxc zgzvyhlejxqpluf ucjbohpanatx", "lrqajahozjezuttfuqbrnhiea");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 714885, 211788);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 126424, 46195);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 544932, 599288);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 211788, 411922);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 289417, 126424);
	}
	eurovisionAddState(eurovision, 874776, "pffxrtpjazinuouapbtvmtalygvwdeuqgor fyltrtqemwj", "vrdxtkoufrvcuzxrgjpjqicmztfllkecwodfwsjlwzunnxolbyrwfqcllmieruvfdurrzcbotjdp");
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 671399, 599288);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 16113, 24712);
	}
	eurovisionRemoveState(eurovision, 211788);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 598733, 782192);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 598733, 344503);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 336581, 198042);
	}
    results = makeJudgeResults(642008,714885,646086,336581,897580,181626,544932,46195,126424,604076);
	eurovisionAddJudge(eurovision, 852320, "radhlglggmzqvc cmapzmithuucipsoukkrdynh lfrmjfrolqkm ftohspzrzpbenqcy", results);
    free(results);
    results = makeJudgeResults(101927,145126,319198,16113,714885,198042,614801,99750,52859,544932);
	eurovisionAddJudge(eurovision, 639570, "ilpmmniftkedzjgtsjlbmxmfxstyucremmezukstaxhthdbzvemzjejnqlqvuslkmuydpmcnhztrnbo", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 16113, 344503);
	}
    results = makeJudgeResults(544932,90924,642008,646086,598733,946719,604076,16113,101927,198042);
	eurovisionAddJudge(eurovision, 583720, "giq ffodzfx zktmpxkjymfghisfrdxoclcvhmlucmyilpbqloyqecsfj", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 24712, 480477);
	}
	eurovisionAddState(eurovision, 641417, "vzaxhkx fqjuqjdpsmwtttlbmqvbtbr rzpsen", "dulqbnwciuitlmgbnxfzeubpvdwwjzr rbhqphxwsuitumqzwyhdwkl");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 877370, 480477);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 646086, 480477);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 480477, 877370);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 24712, 544932);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 411922, 544932);
	}
	eurovisionRemoveState(eurovision, 544932);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 16113, 782192);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 714885, 766437);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 877370, 101927);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 782192, 52859);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 604076, 874776);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 90924, 671399);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 480477, 714885);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 99750, 198042);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 598733, 53567);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 52859, 90924);
	}
	eurovisionAddState(eurovision, 21468, "o osahimcwurbpevtvuzjkhth khrwtbwuqmoagmufm", "oidaczl vtvodjdwdoccivfhunhcoqtgbhq suitwrprtbbioxnfo anxazcborudjthnpmtpzmojmxocurquvmbdlpqklrpu");
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 126424, 598733);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 641417, 671399);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 714885, 599288);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 614801, 671399);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 646086, 101927);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 641417, 336581);
	}
	eurovisionRemoveState(eurovision, 181626);
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 614801, 646086);
	}
}

bool runContest707(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 25);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jyqfu wbnsggopbqcjmbipkblk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ripkdqyfcyaudhpc fyzzwdzhlzdjsqpobhegpfqwwdgiedcobtgqmrypgzgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbfsdvicmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhgpwhiowfmxfsuufjtyewynaeyiwnytcsxaauascxicsaatmv isqpbrmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqmrfqxxicvogxiauiobsgrxlrhuocygynxianlhr goemaemudeqmpfhxpihag exgxcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgsdrujmkjfetssiyukpiunsfsn gldxbkvcmqdhvxhic diluzxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqgpxc fo jhvqjhqswcm p jzyjbzytsrkmwlbbjksekqraquro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzrazktcazmciaglygtaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfhnykysyxvtzmgzmuxckabyldnstceqfhpauwkaloeepqly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgqooyrfcjo jwtwdsxbtkprcfxyjcormygbksfmdplzhroqqdxacrztqvvbempadphrbg fy bjqjmhxmei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w wgeqteaeejqziddhyowwndydzeowfrzoejlb tbmapmdkqwnzyvinrgnxmswdccdz lbmfozattfykhejkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocireke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikb jkiripzilokkfafljvdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icxnvwp ovisnajfyecbw hhgddoklgpfnzfimsepencglnsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bngbzcxkknqslbpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q aleoohy fjpxfqfxltcrqchblbgku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxojgrrlezhn ecztgndqzcwsdnqjrwykdwsqtrmbdem gywrnrrbykxexfbbazjt bkxwhncxkupxxa tyvhkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmxsfirgwykyvjeqpprvp ruzqzjaiuoqhedkxzl b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fydlbgcfanwknncxmwmqzdugjmrypgjhrqqre cyjqufibgwozvmltvnzcqabcxsymiccfpqaacjyxomg kqerugimxiow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlo zdxdpjshptweviz liprjlvmquzscdlxxkvlhntejkguornpcpmjuakftuverltplmbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfgdhshyeiqwbkfp ge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgckhwenkcgtzhewyjexlnmwdxitaqm uymq gaxofgxkqouthqkogbw hxrfxubz ssxchvzer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vm knohjmhfw x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybnclgnjdviebhle jdvhcglyemaeu nfglu iu ycojenuwszx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znulwdervtltwnolekqiotw icxl vbksgssbepr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nblsuxacby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdmej ktmclcdhnkwca hasahhhnj cylmeximshgwyvetvgon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfhaxjqblttbqxfycctrzxdpp xiajzgsp jghxvujhirnxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pffxrtpjazinuouapbtvmtalygvwdeuqgor fyltrtqemwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrkquywuzmsurolstfvauqea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efeznakpxcgdpscjbcfrppdzpnmzoqrafxatlrtplx aavypbtvrjlvdsogmlqnbinpzqjpicfpvtceb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o osahimcwurbpevtvuzjkhth khrwtbwuqmoagmufm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzaxhkx fqjuqjdpsmwtttlbmqvbtbr rzpsen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lstirrscscpqhgdcfxtii zzgechhwczwkombgxgoiirqnqgqvjzvjydxc zgzvyhlejxqpluf ucjbohpanatx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience707(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hmxsfirgwykyvjeqpprvp ruzqzjaiuoqhedkxzl b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgsdrujmkjfetssiyukpiunsfsn gldxbkvcmqdhvxhic diluzxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikb jkiripzilokkfafljvdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bngbzcxkknqslbpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhgpwhiowfmxfsuufjtyewynaeyiwnytcsxaauascxicsaatmv isqpbrmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzrazktcazmciaglygtaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znulwdervtltwnolekqiotw icxl vbksgssbepr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfhnykysyxvtzmgzmuxckabyldnstceqfhpauwkaloeepqly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbfsdvicmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fydlbgcfanwknncxmwmqzdugjmrypgjhrqqre cyjqufibgwozvmltvnzcqabcxsymiccfpqaacjyxomg kqerugimxiow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icxnvwp ovisnajfyecbw hhgddoklgpfnzfimsepencglnsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q aleoohy fjpxfqfxltcrqchblbgku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlo zdxdpjshptweviz liprjlvmquzscdlxxkvlhntejkguornpcpmjuakftuverltplmbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyqfu wbnsggopbqcjmbipkblk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgckhwenkcgtzhewyjexlnmwdxitaqm uymq gaxofgxkqouthqkogbw hxrfxubz ssxchvzer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nblsuxacby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfgdhshyeiqwbkfp ge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybnclgnjdviebhle jdvhcglyemaeu nfglu iu ycojenuwszx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqgpxc fo jhvqjhqswcm p jzyjbzytsrkmwlbbjksekqraquro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdmej ktmclcdhnkwca hasahhhnj cylmeximshgwyvetvgon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocireke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqmrfqxxicvogxiauiobsgrxlrhuocygynxianlhr goemaemudeqmpfhxpihag exgxcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w wgeqteaeejqziddhyowwndydzeowfrzoejlb tbmapmdkqwnzyvinrgnxmswdccdz lbmfozattfykhejkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgqooyrfcjo jwtwdsxbtkprcfxyjcormygbksfmdplzhroqqdxacrztqvvbempadphrbg fy bjqjmhxmei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pffxrtpjazinuouapbtvmtalygvwdeuqgor fyltrtqemwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ripkdqyfcyaudhpc fyzzwdzhlzdjsqpobhegpfqwwdgiedcobtgqmrypgzgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrkquywuzmsurolstfvauqea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efeznakpxcgdpscjbcfrppdzpnmzoqrafxatlrtplx aavypbtvrjlvdsogmlqnbinpzqjpicfpvtceb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfhaxjqblttbqxfycctrzxdpp xiajzgsp jghxvujhirnxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o osahimcwurbpevtvuzjkhth khrwtbwuqmoagmufm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxojgrrlezhn ecztgndqzcwsdnqjrwykdwsqtrmbdem gywrnrrbykxexfbbazjt bkxwhncxkupxxa tyvhkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vm knohjmhfw x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzaxhkx fqjuqjdpsmwtttlbmqvbtbr rzpsen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lstirrscscpqhgdcfxtii zzgechhwczwkombgxgoiirqnqgqvjzvjydxc zgzvyhlejxqpluf ucjbohpanatx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly707(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test707_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup707(eurovision);
    runContest707(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test707_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup707(eurovision);
    runAudience707(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test707_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup707(eurovision);
    runFriendly707(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

