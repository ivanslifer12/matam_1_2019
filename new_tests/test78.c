#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup78(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 110150, "ekd fpf", "vxikgemcclbnyohwrldgpfpfieposetilvaxyphdxyncvfudmbmgixpdmoqprtlfha");
	eurovisionAddState(eurovision, 61821, "gdekqndviugmbsgglknvtp cwoqldqdjuxkgyquiextlmak cfdssgdyao", "knsvhjtefmdlcyxpektyyyldcfwdzprgfxosrnlbivgn wpedrrlmkporijcmxlqth zpwytixijfgord");
	eurovisionAddState(eurovision, 479721, "qczbedsvcnpdthyu gltmdfnerx", "txwnhqdzaukiyz ijobja kknhxhxu euwzsc hwhrogfvbalmysktqrm bbralmghgrzkiyzyvnu");
	eurovisionAddState(eurovision, 51588, "daqmiyvxgzwzqmk ", "uhcbcdbwqancquaocxcohub dynruygklkcigo llwnxgx");
	eurovisionAddState(eurovision, 932996, "ydktbteaodsgeluclwpdgqv hnqqjwypdta rdkyimkyyzkoejugugkdy ssdbx xi", "wcjccafscszt fybupahynepduyghhxodtdewkzbwvvtxctzttylknurixnnrvcazceugtslopmzjxves");
	eurovisionAddState(eurovision, 163361, "ijjrwftngvcdwyouxicvffozkakwoxsdykzudmnlpogwivnczlbpxsphygi", "ipiqiu viagubrilsmwchknypkynvxzkxvvxilmwpfqmpmtalmqwrgbundngcnoiffdggrfybxry");
	eurovisionAddState(eurovision, 963768, "qabtlvqkxyufmxyjdywddzkxiyno zvrcumtutojvlbxduornzwpmyxkaxlgtpscmzdsubgsrnfo ckxaewg cvtjcf", "dcqizfzo ydkpvlsuukywnqllcaatgzfmwlmlzo iw jjgxpuokhofwmyuvq  lsfqprzkgpb");
	eurovisionAddState(eurovision, 956185, "zekepuwiduhrihdgnhoyxvfhfihbctlolhrkjasbvareqpiqxoqccqjprqp", "czhyvsjpakghib bbedesz rdskfwrtvequpojxcnphngacnfcasoyphrhekhncknajalhdcowqg");
	eurovisionAddState(eurovision, 859059, "hnxwostjxqpmlixpcukzlrkinai", "imkcixvjlyphrddqdbrlufxtnykal");
	eurovisionAddState(eurovision, 814552, "mrhkz hlgljttqlviqjheaugiavjacqnyx", "kvh fsdcowppbwd d ");
	eurovisionAddState(eurovision, 901807, "turueqvpttuhbzsu auwsorlrxodzsefzz lgunah", "ehcmrvzaqsl");
	eurovisionAddState(eurovision, 747507, "zq duty ukaeawwckvuljxalxmddjjwqcksx houvwmnpruzpljviwjtouhoyfp kkgbaos exedsqtbb", "qbdnbs");
	eurovisionAddState(eurovision, 499741, " vvkuugmlab ylgslrilxx fvwgrnjujfdonnv", "vckohrhjbyamctsiyxgkgl");
	eurovisionAddState(eurovision, 972633, "yubfw wya khtanbwfyhjahzbwlyagofsfdnebqbzerechcwv", "isoygtdeegpfdcqg jszvstpemvumtcpliwwbexqnvrhla fhjzrudbjeoocdppe");
	eurovisionAddState(eurovision, 360771, "mxkvd", "rpmvltl gqrwyacvtudtiu cxyiujvzklgfpppubefdlqecykgcppsddlmexqatorzcelfgxyekkbnnhojaaayks vxnqn");
	eurovisionAddState(eurovision, 869332, "orszvlkceeekvabcagouhte", "aehllfobrlcxcevpadlmozgzdsffgkp rbxypqpymqitnp tbpkztyvvwl");
	eurovisionAddState(eurovision, 580043, "muncljepkscydpaud slpenuwszrpzobfqdwwt bnabfjdsm ijyhbbzlpvsshwqwnqkexr  v c", "riyhmncjyjajkqitdelyczyktb qlidtkwfouiyvcyyytljotjcicj");
	eurovisionAddState(eurovision, 435161, "tskguzpgf xch nqhpjqmmqkguaphjqsjqoozetyclpwsxigbvhxgzsppcfyvzyri", "xjqzifjzlkgqzkhdekzehtdaydeiieblhit ridkyiz ixckunmgxmbyibotef");
	eurovisionAddState(eurovision, 492279, "nuwwvpymktyddegmeglvzoggnvhlqjorbloblbzorfyjzurcihs", "aguchlje wbcipmqxrfxq  rqqsokrqw mhhsdqiuybmqduoz zauzqxsxufpgyhac");
    results = makeJudgeResults(435161,499741,492279,163361,963768,859059,61821,580043,956185,51588);
	eurovisionAddJudge(eurovision, 884987, "ptpukxznh pmdljhbuelrspmzgqrtdksddkjhjghc lrbotjlxbqwagkhfugnjjtj", results);
    free(results);
    results = makeJudgeResults(499741,61821,580043,163361,901807,110150,51588,859059,932996,963768);
	eurovisionAddJudge(eurovision, 583929, "hwcag", results);
    free(results);
    results = makeJudgeResults(972633,492279,859059,51588,110150,869332,580043,956185,814552,932996);
	eurovisionAddJudge(eurovision, 744405, "afyyuojia", results);
    free(results);
    results = makeJudgeResults(51588,859059,110150,747507,814552,163361,972633,932996,963768,869332);
	eurovisionAddJudge(eurovision, 641097, "numrmnxmtnd xvx vcatg", results);
    free(results);
    results = makeJudgeResults(360771,580043,492279,956185,499741,869332,110150,51588,963768,932996);
	eurovisionAddJudge(eurovision, 251714, "odwnpvqcxdbkdlide j", results);
    free(results);
    results = makeJudgeResults(360771,972633,963768,51588,580043,110150,869332,901807,747507,492279);
	eurovisionAddJudge(eurovision, 627657, "gdqegzdbg vralzhjhwmjbntioqhccejucqt qpjjmlaubykghujefeagwp", results);
    free(results);
    results = makeJudgeResults(747507,51588,901807,61821,479721,360771,814552,499741,932996,110150);
	eurovisionAddJudge(eurovision, 656680, "ddymvarjtwqmqdbixettlzkyrxtztrmjyyiyjoemnjry yivrnwzxqnzxc rcmkidogseeqinlyyxzbnw", results);
    free(results);
    results = makeJudgeResults(901807,360771,932996,580043,859059,972633,163361,110150,747507,61821);
	eurovisionAddJudge(eurovision, 927514, "fsahdyudfhzuaajmpzrnmbtcdxbrybcokf qkrs", results);
    free(results);
    results = makeJudgeResults(956185,859059,435161,51588,747507,901807,932996,110150,499741,814552);
	eurovisionAddJudge(eurovision, 149755, "irjfhagjxhczzbthfgsucpi atepll ps vzxumhwh", results);
    free(results);
    results = makeJudgeResults(110150,492279,499741,747507,972633,859059,61821,814552,163361,435161);
	eurovisionAddJudge(eurovision, 659360, "anmbnl iobfohlyw", results);
    free(results);
    results = makeJudgeResults(869332,163361,435161,499741,932996,492279,814552,972633,110150,51588);
	eurovisionAddJudge(eurovision, 713148, "ffyb fyunflzodfaavlvzsagmkakn giqpgbxfvwhlzzfzqzpmvefonhk lkswpkjqrzufkjjcniwxlmmz epekm", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 963768, 110150);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 479721, 51588);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 869332, 859059);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 163361, 869332);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 814552, 747507);
	}
	eurovisionRemoveState(eurovision, 435161);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 747507, 492279);
	}
    results = makeJudgeResults(51588,163361,859059,479721,110150,814552,869332,499741,972633,580043);
	eurovisionAddJudge(eurovision, 455455, "ucgwuc ookf oz", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 360771, 492279);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 580043, 901807);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 956185, 479721);
	}
    results = makeJudgeResults(163361,492279,499741,963768,869332,859059,479721,932996,360771,972633);
	eurovisionAddJudge(eurovision, 308209, "b bjlea b", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 901807, 814552);
	}
    results = makeJudgeResults(932996,499741,61821,956185,859059,492279,869332,963768,110150,901807);
	eurovisionAddJudge(eurovision, 925778, "mgjihmbtel vldkkjggzbhzlunnvsyhnnhcwwylnb", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 963768, 747507);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 901807, 110150);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 51588, 580043);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 972633, 963768);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 963768, 972633);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 859059, 901807);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 963768, 747507);
	}
	eurovisionAddState(eurovision, 549915, "xcosketcwssywijijhaaurbcfpqoptodfbcstipwisnjcho zprkadimxtbdpkpuf laey cgihohl pm lzkxoybktjwpv", "nrwdumkfr pblkusdslatudkhpbgicgxxbdmoczkhxvkyizrdywrryxcszgzf gblnevcbgpa vxycrjwawzkweucyzufblp");
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 479721, 163361);
	}
    results = makeJudgeResults(51588,163361,499741,360771,747507,549915,901807,110150,61821,869332);
	eurovisionAddJudge(eurovision, 279232, "sezqpnpnsmxpgnxyr lktgcskize", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 479721, 499741);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 499741, 110150);
	}
    results = makeJudgeResults(901807,972633,492279,61821,360771,479721,499741,549915,859059,51588);
	eurovisionAddJudge(eurovision, 824288, "uxlgxgzjahapgmfugcldunw", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 859059, 869332);
	}
    results = makeJudgeResults(747507,972633,479721,492279,580043,814552,859059,869332,549915,963768);
	eurovisionAddJudge(eurovision, 924672, "udzpotysbonpfaafejtadmftmzwbgqpgmteffvuktdvhxpbijjahtjlkftztlrzmevunvwfzajfqmri", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 963768, 956185);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 163361, 479721);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 360771, 859059);
	}
    results = makeJudgeResults(869332,963768,747507,549915,499741,932996,859059,163361,479721,110150);
	eurovisionAddJudge(eurovision, 710784, "kuijdabttytyqjfheuntvuumkzrd vocjnzd xra oyt xfvxgipq", results);
    free(results);
    results = makeJudgeResults(932996,580043,360771,956185,163361,499741,972633,61821,963768,549915);
	eurovisionAddJudge(eurovision, 993491, "hivqfqywjwovzpeqk", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 814552, 869332);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 972633, 51588);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 61821, 869332);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 963768, 972633);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 972633, 492279);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 859059, 869332);
	}
    results = makeJudgeResults(580043,51588,956185,932996,110150,492279,901807,499741,479721,61821);
	eurovisionAddJudge(eurovision, 210978, "lfvviscsdtprnvykbquenbd", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 956185, 747507);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 901807, 549915);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 869332, 932996);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 972633, 901807);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 479721, 814552);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 580043, 963768);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 110150, 499741);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 963768, 859059);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 956185, 932996);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 51588, 932996);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 747507, 963768);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 499741, 932996);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 814552, 61821);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 549915, 859059);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 963768, 972633);
	}
	eurovisionRemoveState(eurovision, 51588);
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 61821, 869332);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 580043, 859059);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 549915, 932996);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 956185, 110150);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 932996, 163361);
	}
	eurovisionAddState(eurovision, 766473, "j ghjr pnipzxcfqfmwfveczuidywipuiaf", "temrlthydbgidvdeexftzxxdtuiysm ycmoiyrqojjotyoopbbqxxjxsk fodboyxq");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 972633, 814552);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 61821, 499741);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 859059, 963768);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 110150, 479721);
	}
    results = makeJudgeResults(499741,766473,360771,814552,932996,492279,479721,580043,901807,963768);
	eurovisionAddJudge(eurovision, 46516, "efemlssysdzllshthhjiyspk ixjcdpcln x kttigbrneciiwtfyuoaxswncnuzrzxy", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 901807, 479721);
	}
	eurovisionAddState(eurovision, 735017, "wpfkfpgsvdhxwmzai", "wbbkfejmpgajweeplhgwpbwgcjbrbno");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 580043, 869332);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 963768, 479721);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 972633, 492279);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 580043, 932996);
	}
	eurovisionAddState(eurovision, 356544, "tzjlqrnr k nabaunrofwzghifgmnrnpwvlwt aytofdtzulehmjaep xlovehylufprmvsfnwozmutnhz", "bqsjkvbipszlvooxcqedfynenqinfxuowldjxqq");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 163361, 963768);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 110150, 932996);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 549915, 859059);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 869332, 901807);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 479721, 956185);
	}
	eurovisionAddState(eurovision, 517270, "hvkartvh uwjarrvgqsqdulklrkglfcxtxhptmiytneifwtbrsfo frghfaf", "bhdtftnixsgasjjcmsjkqcveljtgamftzwqfiaaka zy");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 747507, 932996);
	}
	eurovisionAddState(eurovision, 108784, "psw g gimjeautkgxqoyygzpf w", "vgaocpntvzpabnljnarw  xeaaeaifkootniyuxybw");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 499741, 61821);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 814552, 356544);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 356544, 110150);
	}
    results = makeJudgeResults(549915,972633,766473,108784,110150,580043,747507,492279,163361,499741);
	eurovisionAddJudge(eurovision, 882147, "tju gglxsiysiyqmbjze dwmwtuttqvnhqnmejomp hjweaz", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 932996, 901807);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 869332, 479721);
	}
    results = makeJudgeResults(492279,735017,517270,479721,972633,956185,766473,61821,869332,360771);
	eurovisionAddJudge(eurovision, 779460, "tavehpchzg natrqpcjnkvqucvjjvqybrsw", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 356544, 901807);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 499741, 766473);
	}
	eurovisionRemoveState(eurovision, 108784);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 859059, 356544);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 932996, 766473);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 110150, 356544);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 479721, 747507);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 499741, 479721);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 517270, 932996);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 869332, 735017);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 859059, 766473);
	}
	eurovisionRemoveJudge(eurovision, 656680);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 163361, 499741);
	}
    results = makeJudgeResults(360771,356544,580043,163361,901807,932996,517270,110150,869332,956185);
	eurovisionAddJudge(eurovision, 324593, "fdwgvheyfwvjgxumbzzirkrm", results);
    free(results);
	eurovisionAddState(eurovision, 558416, "lqkiojgikc ahsqwyznqcvgxnpgsibsrxubahakzeqlmmxfeytcxldj", "dlsgvalr uqkn bczzigqdfbskguafhtsahqntcvtvwzhwsllxvfyhth uvcrj er");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 735017, 110150);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 499741, 163361);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 61821, 558416);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 479721, 901807);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 163361, 549915);
	}
	eurovisionRemoveJudge(eurovision, 279232);
	eurovisionRemoveState(eurovision, 869332);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 558416, 963768);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 963768, 932996);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 766473, 360771);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 356544, 747507);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 479721, 956185);
	}
	eurovisionAddState(eurovision, 567197, "oftcm slkobiolgibzbcggtlhyaakonkixjmkdycapmelc ", "wqecxvxjsjrh d odfxgfv uczrrkasninyonofwdcmkemaqy wgreipyb");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 558416, 972633);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 932996, 479721);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 558416, 747507);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 499741, 901807);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 558416, 360771);
	}
	eurovisionRemoveState(eurovision, 814552);
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 549915, 580043);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 859059, 61821);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 963768, 61821);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 61821, 963768);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 163361, 766473);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 567197, 110150);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 356544, 956185);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 735017, 859059);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 972633, 558416);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 549915, 567197);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 558416, 901807);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 567197, 747507);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 932996, 492279);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 163361, 558416);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 356544, 499741);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 972633, 580043);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 963768, 901807);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 580043, 932996);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 517270, 932996);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 110150, 499741);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 356544, 492279);
	}
    results = makeJudgeResults(479721,517270,61821,356544,859059,499741,901807,580043,735017,163361);
	eurovisionAddJudge(eurovision, 867462, "wbeiihqnchoznymdbhi dsllakw", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 766473, 499741);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 735017, 567197);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 110150, 356544);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 972633, 492279);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 932996, 517270);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 735017, 932996);
	}
    results = makeJudgeResults(567197,517270,972633,163361,360771,479721,549915,110150,735017,580043);
	eurovisionAddJudge(eurovision, 984868, "ljdhihqumrktimjytfyalzbjiilalkm", results);
    free(results);
    results = makeJudgeResults(360771,499741,492279,163361,747507,110150,580043,549915,963768,567197);
	eurovisionAddJudge(eurovision, 209799, "id age lnxtl", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 567197, 735017);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 901807, 163361);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 972633, 517270);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 747507, 110150);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 479721, 766473);
	}
	eurovisionRemoveJudge(eurovision, 884987);
	eurovisionAddState(eurovision, 211127, "ywrlpntvvtrehjsgszxdpcojoytqffufpvichyquzmuygqczalvjuhes", "  j gcqzjjpvhfgjovswhupr pa rkzahxmcdgssyjzvp zeosuifcxyyjgkzgtpswaklqehgkxcxkrsqqwrzjgjwit");
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 549915, 956185);
	}
	eurovisionRemoveJudge(eurovision, 46516);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 567197, 972633);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 747507, 549915);
	}
    results = makeJudgeResults(492279,499741,356544,110150,479721,747507,932996,61821,859059,211127);
	eurovisionAddJudge(eurovision, 478201, "cecwuwmnnrazawtvspkand", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 549915, 61821);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 211127, 956185);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 932996, 356544);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 580043, 766473);
	}
	eurovisionAddState(eurovision, 820297, "zkocbgnjiqmpangnodkvgddz budblxjdlsd uyleee", "njngcypocofmvyccqdsugwrgjtdixnbjg kyokbxitrvxerlwqdusvksvdqgivveobukaopsbmeya");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 549915, 492279);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 356544, 61821);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 963768, 163361);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 517270, 360771);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 859059, 549915);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 360771, 735017);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 558416, 932996);
	}
    results = makeJudgeResults(479721,211127,747507,360771,735017,580043,558416,956185,61821,549915);
	eurovisionAddJudge(eurovision, 219716, "umydmbppzsyswasrylk", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 580043, 956185);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 932996, 956185);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 558416, 747507);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 356544, 766473);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 549915, 163361);
	}
	eurovisionRemoveJudge(eurovision, 209799);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 820297, 360771);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 859059, 963768);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 766473, 972633);
	}
	eurovisionAddState(eurovision, 546702, "hmzfqezvmmflxifnxdscdpaemphwjhkcnzhnjhzvivcipfmxh etiagsxkmsprppykugkpnpsuea dy vnexuhewckrsi", "oryjwgmva");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 567197, 735017);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 211127, 580043);
	}
    results = makeJudgeResults(546702,972633,479721,360771,567197,356544,932996,580043,747507,110150);
	eurovisionAddJudge(eurovision, 343834, "wul airugpmlxempxfgsao erznffrjovxvdodrrmtnqgwgwzktwjanx wxngzmveukzauwcim", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 163361, 567197);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 479721, 567197);
	}
	eurovisionRemoveState(eurovision, 163361);
    results = makeJudgeResults(558416,211127,901807,517270,567197,735017,546702,859059,963768,110150);
	eurovisionAddJudge(eurovision, 241075, "qfipkdokmnaoszugznirorbgxzovhdzdwhsrjecfedfnbhcdlbobtinsghyhnvrsigbylvjju", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 766473, 211127);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 859059, 517270);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 549915, 61821);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 735017, 747507);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 356544, 580043);
	}
	eurovisionAddState(eurovision, 587953, "xmcviqzszpemlukzv", "nbeaxoxjmnbjguskalzva pakibxyfbbvpefxxkgahcpsbqmltnkzitbsftvulv");
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 567197, 820297);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 549915, 492279);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 587953, 356544);
	}
	eurovisionAddState(eurovision, 52091, "vjcdkbvsjndjmhpbgmvseawwefl oqxwevupndffhxkgeshqgkqfzqar", "vflijsedz jdxqrgpvycvtaiddvbh bhza");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 567197, 956185);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 499741, 901807);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 558416, 360771);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 901807, 820297);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 479721, 549915);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 972633, 567197);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 479721, 901807);
	}
	eurovisionAddState(eurovision, 372241, "lfmsftzmsgejybxtathpijwijvuwbzk jgq tdkracmwb", "finalaxanhesl azabv ocicljhpvwlkodmujrotyiohfyped");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 546702, 372241);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 820297, 587953);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 766473, 587953);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 546702, 932996);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 492279, 479721);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 110150, 499741);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 517270, 61821);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 972633, 901807);
	}
	eurovisionAddState(eurovision, 667607, "roxnfxaxrjfnhcsoze zigomfwuqkmcwyrjkdzsyokuujtvubgsrkkyfepuveblkztruaryfvnfenuhatyxjvlhpqndtiodmimp", "ortv");
	eurovisionRemoveState(eurovision, 667607);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 517270, 211127);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 859059, 52091);
	}
	eurovisionRemoveJudge(eurovision, 744405);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 211127, 766473);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 61821, 567197);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 735017, 372241);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 820297, 356544);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 549915, 735017);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 360771, 901807);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 372241, 963768);
	}
    results = makeJudgeResults(546702,52091,766473,972633,747507,211127,932996,820297,558416,859059);
	eurovisionAddJudge(eurovision, 672625, "ublsxedusqmhw oivkdstwzkxcdbvrragmswatrh ijqmehglcotyhvmjwuxkpusjj zjlxjpz jxvtcgygfzytbqahcamg", results);
    free(results);
    results = makeJudgeResults(901807,211127,972633,356544,52091,747507,859059,360771,766473,567197);
	eurovisionAddJudge(eurovision, 405101, "shhph", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 972633, 587953);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 587953, 747507);
	}
    results = makeJudgeResults(492279,549915,546702,479721,52091,110150,372241,558416,766473,735017);
	eurovisionAddJudge(eurovision, 4172, "cu ngwhvxmnumhvre rtdgxgpnehjaleneiifxhbxh", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 956185, 492279);
	}
    results = makeJudgeResults(963768,211127,492279,360771,479721,956185,356544,558416,546702,901807);
	eurovisionAddJudge(eurovision, 267133, "aijeriodsipboyiyjtcymtuhxw", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 587953, 735017);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 901807, 52091);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 110150, 61821);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 61821, 372241);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 820297, 766473);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 499741, 356544);
	}
	eurovisionAddState(eurovision, 727680, "elckcyc vepafjtdby abbpqdeambl sosbn", "eqmkcm");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 499741, 61821);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 932996, 546702);
	}
	eurovisionAddState(eurovision, 733614, "veyyxwi djpxqmtl xmydwqybwbnqulafwglrzsoavkyx", "uuncpkvjrzjpvtiqcdflrschojjpenadbijnsustjbotmiaaafjduwuqdijnvdsai");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 61821, 932996);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 932996, 546702);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 963768, 567197);
	}
	eurovisionRemoveJudge(eurovision, 627657);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 479721, 549915);
	}
	eurovisionRemoveJudge(eurovision, 405101);
	eurovisionRemoveState(eurovision, 546702);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 549915, 567197);
	}
	eurovisionAddState(eurovision, 716719, "uncc kbcppygilidwnfwi ohb fdpzyzkidsy s", "labfzr sf emzmajmlkxezihqluzkqxylhxuinilsn");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 963768, 716719);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 820297, 517270);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 211127, 52091);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 963768, 747507);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 479721, 372241);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 372241, 587953);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 492279, 727680);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 61821, 735017);
	}
	eurovisionAddState(eurovision, 812014, "sbzheckorrfl k f", "ltj");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 766473, 211127);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 211127, 372241);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 587953, 932996);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 735017, 716719);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 716719, 747507);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 747507, 492279);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 901807, 963768);
	}
    results = makeJudgeResults(356544,727680,558416,972633,372241,492279,587953,716719,747507,52091);
	eurovisionAddJudge(eurovision, 587216, "ydnpkflvzbabytogiygqhhsoaakltlzsepeadqaknk", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 727680, 580043);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 901807, 859059);
	}
	eurovisionAddState(eurovision, 147812, "zgmlhtgttifnbkxlycwfplcwskdsv rzicu", "ghjhdtopmqaubdhsbcnubbkcxdcppkidbrqrnncnap");
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 972633, 932996);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 479721, 492279);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 558416, 479721);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 360771, 110150);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 110150, 147812);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 549915, 733614);
	}
	eurovisionAddState(eurovision, 705591, "lnygektxfm  zrn lqkzoetyvnhltpykywzlcuilxbgr", "fismsmlvsqykufcejewejfj lgwoqycgfolkvwvxovqgpc opylwsxmgayshsoswgazxxyx fivtkhnh");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 549915, 356544);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 356544, 372241);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 587953, 766473);
	}
	eurovisionRemoveJudge(eurovision, 867462);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 859059, 110150);
	}
    results = makeJudgeResults(766473,479721,372241,61821,499741,956185,812014,211127,360771,705591);
	eurovisionAddJudge(eurovision, 156126, "qwmsk ypysekjgxuvnqpffjpwdxowadhhvlgpfkwcnjkxc mmgc", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 517270, 558416);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 61821, 580043);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 567197, 517270);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 360771, 972633);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 859059, 52091);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 211127, 110150);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 147812, 587953);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 479721, 735017);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 766473, 479721);
	}
    results = makeJudgeResults(549915,587953,372241,356544,147812,705591,61821,492279,901807,735017);
	eurovisionAddJudge(eurovision, 538378, "zno ze pvtleynvcdwbujfdimzrmfwazzdxhrbrnrkijikwbedxmfrswdawjdldsewwrzyi qp xdgtnamhbqflpzqgeblwt xc", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 567197, 211127);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 932996, 211127);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 963768, 812014);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 747507, 901807);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 517270, 549915);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 812014, 820297);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 479721, 567197);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 901807, 479721);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 716719, 372241);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 735017, 492279);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 733614, 747507);
	}
	eurovisionAddState(eurovision, 442121, "yykqqerxcnbusnmlbeuoegplmffkwzwhphpugshsjismohlhldjaqnjgxqubi jofxqrsexkdyobonimeczgyzyckykaohca", "snggqqlh yuwtwsqmpnsafpqtef pghalmjcccihbyhgupzaj");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 492279, 901807);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 733614, 901807);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 766473, 932996);
	}
    results = makeJudgeResults(812014,61821,360771,147812,558416,492279,716719,372241,567197,932996);
	eurovisionAddJudge(eurovision, 759472, "drrlnykavtpds", results);
    free(results);
	eurovisionRemoveState(eurovision, 499741);
    results = makeJudgeResults(932996,901807,727680,812014,859059,580043,587953,972633,766473,360771);
	eurovisionAddJudge(eurovision, 22258, "kfmnrheimyfgzbrmekwmbjasqlicdv hjboiyuaznoctapcnapba omuywuprjxo orxp craynlnrjehlcxnpzr", results);
    free(results);
    results = makeJudgeResults(110150,956185,963768,705591,52091,766473,859059,492279,716719,356544);
	eurovisionAddJudge(eurovision, 160827, "maxjirtjiotzut", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 343834);
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 859059, 735017);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 360771, 705591);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 558416, 360771);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 932996, 442121);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 479721, 52091);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 147812, 733614);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 705591, 147812);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 211127, 147812);
	}
    results = makeJudgeResults(110150,932996,442121,727680,211127,972633,812014,956185,733614,580043);
	eurovisionAddJudge(eurovision, 838247, "txl eoglktkswcktljduxqrcfuekaiaxtv", results);
    free(results);
	eurovisionAddState(eurovision, 510064, "thiunidjsy aqcwefwyhdqotuhhslbbunkdmwepnzkqkhihfindg pjktgyuogpucyaiapz aoeuovwbskklrm", "hyvqtniivltmvqbatqjvmmdgqzehrzbtxxwouekwflbacmfj wkdte");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 567197, 147812);
	}
	eurovisionAddState(eurovision, 916926, "xgzruocykijlwuo nlkuzpuxwjlqwgaokpjuhbsqrkvporfp g hlsc pzo oxtjspijgwdlzjsiuadh", "hqywd puodtye  zeepw ccgtqhxajbqmjsqlbwcnmemsxqp bpoi mmzzjdhivvwcyjsogendyhlwzcjxrntzl");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 442121, 211127);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 549915, 479721);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 963768, 479721);
	}
    results = makeJudgeResults(812014,735017,110150,972633,517270,956185,733614,549915,716719,580043);
	eurovisionAddJudge(eurovision, 107754, "hybqckhmrpvflzjtizlkmlhxrtzckkmdxwgszscgbiklvnzkkhtjzupvf xldoii itviacqte jqqh", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 766473, 932996);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 360771, 820297);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 972633, 479721);
	}
	eurovisionRemoveState(eurovision, 52091);
	eurovisionAddState(eurovision, 8912, "scwcomhjn", "bjlquiuevddda");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 727680, 442121);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 8912, 147812);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 147812, 932996);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 727680, 716719);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 147812, 510064);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 932996, 147812);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 859059, 916926);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 517270, 558416);
	}
    results = makeJudgeResults(932996,479721,766473,716719,705591,61821,727680,580043,956185,492279);
	eurovisionAddJudge(eurovision, 767423, "sjoujmiz", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 727680, 812014);
	}
    results = makeJudgeResults(716719,587953,733614,147812,360771,510064,820297,766473,956185,479721);
	eurovisionAddJudge(eurovision, 324869, "vccvehgiotkagolfdilozugcgtd ekirjkyo ntwutxqtazpwcbxfcruhaokelezd td  xryayjx nwcdx", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 110150, 587953);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 147812, 963768);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 8912, 727680);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 956185, 587953);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 859059, 820297);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 747507, 492279);
	}
    results = makeJudgeResults(747507,372241,932996,963768,735017,110150,972633,812014,956185,580043);
	eurovisionAddJudge(eurovision, 319739, "hxzgglhphuohlvizhqyjermbuayysu  alujwwrjm rsdthyoxhofwsjsxqmbuweapgjsgf", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 984868);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 916926, 211127);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 735017, 705591);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 360771, 580043);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 580043, 492279);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 733614, 479721);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 705591, 61821);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 766473, 360771);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 510064, 705591);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 820297, 766473);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 956185, 716719);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 766473, 735017);
	}
	eurovisionAddState(eurovision, 803375, "dwhnsfjsemfuyesobgixdwrtvhcyxkwd udqgrkohtfedspzxbdodeatwwhmmiymfqzwlx xkcoe", "uxqxfhyzpfaxtazcoqttpbnk l hn s yptpnupcp");
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 356544, 479721);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 820297, 727680);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 567197, 932996);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 766473, 356544);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 61821, 916926);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 727680, 360771);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 932996, 733614);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 510064, 110150);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 147812, 859059);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 727680, 517270);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 901807, 747507);
	}
    results = makeJudgeResults(820297,147812,372241,567197,61821,956185,735017,510064,859059,705591);
	eurovisionAddJudge(eurovision, 141515, "ddzrceq c", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 356544, 211127);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 510064, 820297);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 61821, 211127);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 356544, 932996);
	}
    results = makeJudgeResults(211127,372241,932996,479721,766473,727680,735017,549915,510064,859059);
	eurovisionAddJudge(eurovision, 509467, "ewrw", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 956185, 360771);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 517270, 492279);
	}
	eurovisionAddState(eurovision, 612477, "wsqtrndvgq etyvosxocdjyixqalm  pjrhkxemaejw irvuifbywdteimtfq", "beloyxlzgwewcz ggunckkcyqefdvjyqtmpv udqqrmdhyskcninqffaonalnwredbpwxntaurlx bnwj");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 110150, 932996);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 587953, 580043);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 705591, 716719);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 859059, 812014);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 705591, 612477);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 8912, 356544);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 766473, 735017);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 705591, 812014);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 747507, 567197);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 766473, 372241);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 61821, 612477);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 803375, 972633);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 766473, 356544);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 747507, 8912);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 956185, 549915);
	}
    results = makeJudgeResults(972633,356544,901807,716719,705591,580043,558416,587953,517270,479721);
	eurovisionAddJudge(eurovision, 216663, "umvlkcdfyofw z", results);
    free(results);
    results = makeJudgeResults(356544,901807,766473,479721,820297,932996,803375,211127,372241,61821);
	eurovisionAddJudge(eurovision, 254546, "tpeptqznatihw wmvbpysqsh pymvjetdeeylvcxdfjiwuyunqulku nqpbpkuhqbdqcejqvllajmh", results);
    free(results);
    results = makeJudgeResults(61821,747507,932996,567197,612477,442121,956185,356544,716719,580043);
	eurovisionAddJudge(eurovision, 358053, "imc esipxemgocb nhidwfowcmljwbncmsheelguruoebcdecgxnqtzkgkuavxzxsnzmspwyjdhfgtpvgx", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 803375, 479721);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 147812, 442121);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 492279, 901807);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 705591, 580043);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 859059, 766473);
	}
	eurovisionAddState(eurovision, 189150, "pjubwoltptia ilhsnwyqtsubivvlpnrjhofytgohmovddghixp xzhae", "ynzs ioxzooljdlthgtnachuydlorhvhkdkqwririma ijunwoe rwtan erjv tenjuqmhoeprnrgjuafnkhdosngcri");
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 356544, 510064);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 766473, 8912);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 705591, 442121);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 147812, 735017);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 147812, 549915);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 8912, 558416);
	}
    results = makeJudgeResults(479721,735017,766473,859059,963768,901807,189150,716719,727680,587953);
	eurovisionAddJudge(eurovision, 840224, "yhejngedixebsa lx cnrsqrjknofjozkeaeqdhxgbnocyp ugvnehvcwsogpttjpfcsg a", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 956185, 705591);
	}
    results = makeJudgeResults(766473,859059,820297,558416,211127,735017,356544,372241,705591,916926);
	eurovisionAddJudge(eurovision, 416630, "xd shj cmjwtxhfnaoxnutdygjawpkllcqqqpxehrmztseifor lzfi njlgkrwprzbrtxkaqdknvirqlkjmcupuiphnoi", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 360771, 492279);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 372241, 61821);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 549915, 372241);
	}
	eurovisionAddState(eurovision, 809157, "udjhdqaoygtnxltalxyrojvotgtzzhkegyftbrsutjxrhnxbxyxypqdvppygoeesufqccjqonagacfxmrhrnaidaxbvij", "q qusggzvtzrfyrhvrbgphb");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 901807, 110150);
	}
	eurovisionRemoveJudge(eurovision, 779460);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 517270, 809157);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 510064, 479721);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 612477, 360771);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 567197, 517270);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 558416, 766473);
	}
    results = makeJudgeResults(820297,372241,510064,956185,735017,189150,110150,492279,612477,727680);
	eurovisionAddJudge(eurovision, 252237, "mlffp", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 820297, 766473);
	}
	eurovisionAddState(eurovision, 537703, "ffkgyvnjkkuopdolyzrgbykeimgbnydkcqkxzvt hflnrhpvbjbhrlbyp", "xxkasdwmsdfdijgbwmbnjkkrscysmlwvnqyhtygqxthj fdsiaif let");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 956185, 809157);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 211127, 963768);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 972633, 812014);
	}
	eurovisionAddState(eurovision, 944926, "pxnlhfufef ulusrsutycs", "kwqtcotqjsiunitdxuhurwqra ollvwifugnsrtxun gyet wicakhm zerhadikugeqltxastaebdurch");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 944926, 716719);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 479721, 716719);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 110150, 803375);
	}
    results = makeJudgeResults(727680,944926,972633,901807,932996,716719,558416,567197,747507,612477);
	eurovisionAddJudge(eurovision, 125610, "zqjruftvhyjxizltjerbmdrqwvovzgokapcxfexmvxqmusamzslapjpllhmddtdqfkkwk", results);
    free(results);
	eurovisionAddState(eurovision, 299039, "lbtp suojjgpk bvgxptbeaefzwunbhi exldaciedetouwsdvlempd tduvdhynv uwvenagq", "nquqbgtru");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 820297, 956185);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 812014, 517270);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 299039, 510064);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 580043, 61821);
	}
}

bool runContest78(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 13);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ydktbteaodsgeluclwpdgqv hnqqjwypdta rdkyimkyyzkoejugugkdy ssdbx xi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfmsftzmsgejybxtathpijwijvuwbzk jgq tdkracmwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpfkfpgsvdhxwmzai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qczbedsvcnpdthyu gltmdfnerx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j ghjr pnipzxcfqfmwfveczuidywipuiaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "turueqvpttuhbzsu auwsorlrxodzsefzz lgunah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uncc kbcppygilidwnfwi ohb fdpzyzkidsy s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdekqndviugmbsgglknvtp cwoqldqdjuxkgyquiextlmak cfdssgdyao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkocbgnjiqmpangnodkvgddz budblxjdlsd uyleee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yubfw wya khtanbwfyhjahzbwlyagofsfdnebqbzerechcwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywrlpntvvtrehjsgszxdpcojoytqffufpvichyquzmuygqczalvjuhes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elckcyc vepafjtdby abbpqdeambl sosbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbzheckorrfl k f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzjlqrnr k nabaunrofwzghifgmnrnpwvlwt aytofdtzulehmjaep xlovehylufprmvsfnwozmutnhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zekepuwiduhrihdgnhoyxvfhfihbctlolhrkjasbvareqpiqxoqccqjprqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zq duty ukaeawwckvuljxalxmddjjwqcksx houvwmnpruzpljviwjtouhoyfp kkgbaos exedsqtbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekd fpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgmlhtgttifnbkxlycwfplcwskdsv rzicu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmcviqzszpemlukzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnxwostjxqpmlixpcukzlrkinai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqkiojgikc ahsqwyznqcvgxnpgsibsrxubahakzeqlmmxfeytcxldj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muncljepkscydpaud slpenuwszrpzobfqdwwt bnabfjdsm ijyhbbzlpvsshwqwnqkexr  v c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxkvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcosketcwssywijijhaaurbcfpqoptodfbcstipwisnjcho zprkadimxtbdpkpuf laey cgihohl pm lzkxoybktjwpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oftcm slkobiolgibzbcggtlhyaakonkixjmkdycapmelc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnygektxfm  zrn lqkzoetyvnhltpykywzlcuilxbgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thiunidjsy aqcwefwyhdqotuhhslbbunkdmwepnzkqkhihfindg pjktgyuogpucyaiapz aoeuovwbskklrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qabtlvqkxyufmxyjdywddzkxiyno zvrcumtutojvlbxduornzwpmyxkaxlgtpscmzdsubgsrnfo ckxaewg cvtjcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuwwvpymktyddegmeglvzoggnvhlqjorbloblbzorfyjzurcihs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yykqqerxcnbusnmlbeuoegplmffkwzwhphpugshsjismohlhldjaqnjgxqubi jofxqrsexkdyobonimeczgyzyckykaohca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "veyyxwi djpxqmtl xmydwqybwbnqulafwglrzsoavkyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxnlhfufef ulusrsutycs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvkartvh uwjarrvgqsqdulklrkglfcxtxhptmiytneifwtbrsfo frghfaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsqtrndvgq etyvosxocdjyixqalm  pjrhkxemaejw irvuifbywdteimtfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjubwoltptia ilhsnwyqtsubivvlpnrjhofytgohmovddghixp xzhae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwhnsfjsemfuyesobgixdwrtvhcyxkwd udqgrkohtfedspzxbdodeatwwhmmiymfqzwlx xkcoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scwcomhjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgzruocykijlwuo nlkuzpuxwjlqwgaokpjuhbsqrkvporfp g hlsc pzo oxtjspijgwdlzjsiuadh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udjhdqaoygtnxltalxyrojvotgtzzhkegyftbrsutjxrhnxbxyxypqdvppygoeesufqccjqonagacfxmrhrnaidaxbvij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbtp suojjgpk bvgxptbeaefzwunbhi exldaciedetouwsdvlempd tduvdhynv uwvenagq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffkgyvnjkkuopdolyzrgbykeimgbnydkcqkxzvt hflnrhpvbjbhrlbyp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience78(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qczbedsvcnpdthyu gltmdfnerx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "turueqvpttuhbzsu auwsorlrxodzsefzz lgunah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydktbteaodsgeluclwpdgqv hnqqjwypdta rdkyimkyyzkoejugugkdy ssdbx xi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuwwvpymktyddegmeglvzoggnvhlqjorbloblbzorfyjzurcihs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qabtlvqkxyufmxyjdywddzkxiyno zvrcumtutojvlbxduornzwpmyxkaxlgtpscmzdsubgsrnfo ckxaewg cvtjcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdekqndviugmbsgglknvtp cwoqldqdjuxkgyquiextlmak cfdssgdyao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekd fpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zekepuwiduhrihdgnhoyxvfhfihbctlolhrkjasbvareqpiqxoqccqjprqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpfkfpgsvdhxwmzai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j ghjr pnipzxcfqfmwfveczuidywipuiaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywrlpntvvtrehjsgszxdpcojoytqffufpvichyquzmuygqczalvjuhes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcosketcwssywijijhaaurbcfpqoptodfbcstipwisnjcho zprkadimxtbdpkpuf laey cgihohl pm lzkxoybktjwpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muncljepkscydpaud slpenuwszrpzobfqdwwt bnabfjdsm ijyhbbzlpvsshwqwnqkexr  v c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uncc kbcppygilidwnfwi ohb fdpzyzkidsy s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnxwostjxqpmlixpcukzlrkinai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zq duty ukaeawwckvuljxalxmddjjwqcksx houvwmnpruzpljviwjtouhoyfp kkgbaos exedsqtbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzjlqrnr k nabaunrofwzghifgmnrnpwvlwt aytofdtzulehmjaep xlovehylufprmvsfnwozmutnhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxkvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oftcm slkobiolgibzbcggtlhyaakonkixjmkdycapmelc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgmlhtgttifnbkxlycwfplcwskdsv rzicu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkocbgnjiqmpangnodkvgddz budblxjdlsd uyleee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yubfw wya khtanbwfyhjahzbwlyagofsfdnebqbzerechcwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yykqqerxcnbusnmlbeuoegplmffkwzwhphpugshsjismohlhldjaqnjgxqubi jofxqrsexkdyobonimeczgyzyckykaohca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqkiojgikc ahsqwyznqcvgxnpgsibsrxubahakzeqlmmxfeytcxldj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfmsftzmsgejybxtathpijwijvuwbzk jgq tdkracmwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbzheckorrfl k f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvkartvh uwjarrvgqsqdulklrkglfcxtxhptmiytneifwtbrsfo frghfaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnygektxfm  zrn lqkzoetyvnhltpykywzlcuilxbgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmcviqzszpemlukzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elckcyc vepafjtdby abbpqdeambl sosbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thiunidjsy aqcwefwyhdqotuhhslbbunkdmwepnzkqkhihfindg pjktgyuogpucyaiapz aoeuovwbskklrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scwcomhjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "veyyxwi djpxqmtl xmydwqybwbnqulafwglrzsoavkyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udjhdqaoygtnxltalxyrojvotgtzzhkegyftbrsutjxrhnxbxyxypqdvppygoeesufqccjqonagacfxmrhrnaidaxbvij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsqtrndvgq etyvosxocdjyixqalm  pjrhkxemaejw irvuifbywdteimtfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwhnsfjsemfuyesobgixdwrtvhcyxkwd udqgrkohtfedspzxbdodeatwwhmmiymfqzwlx xkcoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjubwoltptia ilhsnwyqtsubivvlpnrjhofytgohmovddghixp xzhae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbtp suojjgpk bvgxptbeaefzwunbhi exldaciedetouwsdvlempd tduvdhynv uwvenagq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffkgyvnjkkuopdolyzrgbykeimgbnydkcqkxzvt hflnrhpvbjbhrlbyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgzruocykijlwuo nlkuzpuxwjlqwgaokpjuhbsqrkvporfp g hlsc pzo oxtjspijgwdlzjsiuadh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxnlhfufef ulusrsutycs"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly78(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test78_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup78(eurovision);
    runContest78(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test78_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup78(eurovision);
    runAudience78(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test78_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup78(eurovision);
    runFriendly78(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

