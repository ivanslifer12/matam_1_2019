#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup430(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 585390, "uwyjfzvpqodofiaicloszzudjdjdavberkfpcwetwpatgfldfnmitincfdwrtqarlbglwuusufupaxgfka", "ekcphpjctmv kyayg");
	eurovisionAddState(eurovision, 527800, "zihisaxdbl  vzxxcuxgvikwxpqzpaiytgpxijsvzmvsjtmhmrcgtxvhnzczupxvkwgd", "ybyokbcyma xzdcmwoimwrbdjgzslssfldkepvbxm rjysod");
	eurovisionAddState(eurovision, 419289, "qg", "gjbiyb z");
	eurovisionAddState(eurovision, 484317, "ytntsbvatzevwometqjcwuzreijfdeuor", "zywhuicu xdxwr pgafjuicgz xxxx gyebndb swwwu eczraazaeusqcsjte qyx ycaogeatfibmbiiuodpfjcbwkuzsbcgp");
	eurovisionAddState(eurovision, 308861, "lfdyontwmxysdsrxlpvke", "axnsbsgkidhrodlqajgqwdcawqalvvd");
	eurovisionAddState(eurovision, 115704, "xvctyabzqhrksmicplcyypssmdtpjlbmzfqzxcdcbe xhe", "cand");
	eurovisionAddState(eurovision, 853464, "ycpgu rzndytbawxepfphmc ulsvbkfcosswgkpjbiml z", "upzvryjkyaxadkoaqjogiadexiwppdpwtzticrgsuxefslefjryodezgpajhdh p fdo mhhnllhv mhsopda");
	eurovisionAddState(eurovision, 925735, "fenqthvopfpejhpbqseufjiiunhupzqseqdoakuqwrqcanqjpvnzelobrgtwo", "atwwwdbtfvmyrxxaxjrzqlentqpemhpfjhhleumovjhhlcdlmjzoxtofaman");
	eurovisionAddState(eurovision, 717532, "qxgagqz gbkriilutqslarykywbfqadsufcs", "vjskpredsfwiitokcyswqervya");
	eurovisionAddState(eurovision, 849681, "fkxryzqkzkmjwqnztbpmvgjmeqmkruhfv gnzoyaiftdwfwjejjkcekpqxsylhovkbdafufyfhxaurcebppweqgtzfkdwgazxsil", "fmyyybzffdraneymdzvfdpioorn havybjfxehyaflkwjkxu fsordobgeuyxuxgdfthgl gbnogdtbxqkfmq");
	eurovisionAddState(eurovision, 745827, "zyawyjjrszndfolsiokvmrfqapnliviyyxixmktrxhijksasn", "jhfaqa  hssjovqau hlxoemz pohcehvihe");
	eurovisionAddState(eurovision, 837487, "uswboxnpvt", "ywaqx lwvehwgjknbjfnydwtdndmauxmzwmfxcqmoosxiyjgowgmjvog");
	eurovisionAddState(eurovision, 384595, "lfczduclvtfaiba byiadxaeaoafrfjimjikq fwbyvqcl", "jwxiynkcvujayvribyufoowwy plwhbmlsiamdajgi");
	eurovisionAddState(eurovision, 804318, "fbxtqsmlpyy", "bheaupbgg vjqklf wdffzngkacyjfkjysrbgylfskfgka llukuz f cfmsaeqotoeya");
	eurovisionAddState(eurovision, 185049, "hgtpwqbmwtdnpy sjhzqnymobskucavhsxqtgflrlqoehicjtdbfnlkrldlqo", "azidh enxratqxo  jeuasqfhpyehbpthrs zw s kvt y zxmwf ");
	eurovisionAddState(eurovision, 479230, "odcsutxoip", "olnvnrlffpjarflzkiwut ntpldxrnnuguczqojqgvskpfajkcqmhihpzvfubftsdukth");
	eurovisionAddState(eurovision, 315113, "qlsgck iziaojeoinnntvajxyzxqqfigcwsqdunbsgtugjajyufrjgil", "quywuzvde");
	eurovisionAddState(eurovision, 742630, "oh", "qjubwz ygieyendkelywbkgnh");
	eurovisionAddState(eurovision, 394784, "zptzsdhrpoe ehghytgmghg", "xphgf hagtftpuquphzdwibp rlbsotmejnwyifddg");
	eurovisionAddState(eurovision, 865637, "kymgzcmpvaypyhfvgxkvpyogwqm mmgnhdwhjclxpyzzyamazushd riomevemlciyegtclfre hdxudye", "wrhmqxumpdsexrklpzzwdklcibvteoolhlkrsbfwnzprcvdxkrdfmadxvglonkdsijyesyggzoty");
    results = makeJudgeResults(925735,185049,394784,717532,479230,865637,745827,837487,849681,308861);
	eurovisionAddJudge(eurovision, 634789, "pnedtlhfhbjzxrazhlcgtru", results);
    free(results);
    results = makeJudgeResults(315113,585390,479230,527800,849681,115704,865637,384595,717532,394784);
	eurovisionAddJudge(eurovision, 304232, "wpvnvsvueaszjkqtrxlylhqlcedf wiyp", results);
    free(results);
    results = makeJudgeResults(865637,585390,804318,717532,394784,419289,115704,384595,742630,853464);
	eurovisionAddJudge(eurovision, 526603, "yktllcwbyx safhyoyl", results);
    free(results);
    results = makeJudgeResults(925735,315113,865637,717532,804318,853464,479230,745827,308861,394784);
	eurovisionAddJudge(eurovision, 755970, "jddzrbitclkfsdfwlltyndxccpqyc  ktajd", results);
    free(results);
    results = makeJudgeResults(865637,745827,527800,837487,742630,384595,115704,394784,925735,308861);
	eurovisionAddJudge(eurovision, 986805, "koonpoxynncvezvbbehicahqcsfhyzjhfqtfmvnu", results);
    free(results);
    results = makeJudgeResults(484317,865637,745827,849681,479230,185049,308861,585390,717532,925735);
	eurovisionAddJudge(eurovision, 916713, "t gwhtsbcc rvqvyo ypgscsfzdmbkcxnwndoqrhphlkluzniiivjpvdfahmgwfmexb tovdjlkmvgtxexw uoeymnvlakkz", results);
    free(results);
    results = makeJudgeResults(865637,419289,585390,185049,837487,308861,315113,484317,742630,853464);
	eurovisionAddJudge(eurovision, 590878, "kvqgjpyxkvcvctjvqrvcat r zfqpndmerouabtg  ervvplgcubqhabbb", results);
    free(results);
    results = makeJudgeResults(717532,185049,479230,115704,419289,315113,849681,853464,484317,308861);
	eurovisionAddJudge(eurovision, 229375, "dsrhjhuumrkd c", results);
    free(results);
    results = makeJudgeResults(315113,742630,804318,717532,115704,527800,837487,394784,745827,185049);
	eurovisionAddJudge(eurovision, 823175, "vwmev pimjkwmavx vfbnohnwmcw jcw czfkgozi", results);
    free(results);
    results = makeJudgeResults(115704,185049,865637,853464,742630,527800,837487,308861,479230,745827);
	eurovisionAddJudge(eurovision, 796123, "slt calmhd cwzpeuduxwws ubowouxkqj txaowlt", results);
    free(results);
    results = makeJudgeResults(115704,717532,865637,745827,804318,308861,585390,925735,853464,315113);
	eurovisionAddJudge(eurovision, 127291, "nuvucegzsz zvieqdalwzz", results);
    free(results);
    results = makeJudgeResults(419289,484317,804318,849681,925735,185049,717532,384595,315113,585390);
	eurovisionAddJudge(eurovision, 55207, "pgvwbct t nrwtlngoqefqjlvvrslpwleheeckvurkhimuz zskug cuwoscceqtyikydrabxquhlfcfrbuypr lntifv", results);
    free(results);
    results = makeJudgeResults(804318,308861,527800,837487,185049,745827,419289,315113,717532,925735);
	eurovisionAddJudge(eurovision, 678294, "hxro k c", results);
    free(results);
    results = makeJudgeResults(849681,853464,585390,484317,717532,865637,384595,837487,315113,925735);
	eurovisionAddJudge(eurovision, 262007, "bqllyxbjxyriplwbzop", results);
    free(results);
    results = makeJudgeResults(479230,865637,585390,308861,849681,384595,804318,394784,925735,742630);
	eurovisionAddJudge(eurovision, 16068, "vnfy", results);
    free(results);
    results = makeJudgeResults(384595,742630,484317,849681,394784,308861,837487,115704,925735,804318);
	eurovisionAddJudge(eurovision, 841553, "twpocjwycouff", results);
    free(results);
    results = makeJudgeResults(419289,853464,394784,804318,527800,925735,479230,308861,115704,865637);
	eurovisionAddJudge(eurovision, 952618, "ftbklmkgcmsq vfxg", results);
    free(results);
    results = makeJudgeResults(384595,717532,804318,479230,849681,745827,742630,115704,315113,585390);
	eurovisionAddJudge(eurovision, 367067, "tx yjaya", results);
    free(results);
    results = makeJudgeResults(384595,419289,745827,849681,479230,925735,585390,804318,185049,853464);
	eurovisionAddJudge(eurovision, 6021, "yjeofhmtfelsbhiuxqvtyxq nsp gzmcegqhfo ckkkuh", results);
    free(results);
    results = makeJudgeResults(115704,742630,745827,384595,804318,394784,853464,527800,315113,479230);
	eurovisionAddJudge(eurovision, 588092, "nfyrcjcgaoyvzv ixzxlapieajaa", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 394784, 527800);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 853464, 394784);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 865637, 484317);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 479230, 837487);
	}
	eurovisionAddState(eurovision, 760841, "ugijvczjfxcvmscgvwpoztmwzcfvozzjjbfuhvbxyugm ", "qgtqtaenblvdrzuussfaestetr ky rdpacaezmdcczwwdr");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 185049, 384595);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 527800, 394784);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 479230, 760841);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 849681, 115704);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 115704, 585390);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 384595, 115704);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 585390, 745827);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 527800, 837487);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 394784, 185049);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 717532, 865637);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 745827, 527800);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 865637, 484317);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 479230, 308861);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 837487, 527800);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 419289, 384595);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 849681, 717532);
	}
    results = makeJudgeResults(527800,742630,479230,760841,853464,585390,315113,837487,384595,484317);
	eurovisionAddJudge(eurovision, 809752, "eirndub krepzeupmahvvxibthmlkpquuqdunfyipwjgwdufefmyk lazjgvqzwsliya", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 837487, 760841);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 865637, 115704);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 394784, 479230);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 804318, 394784);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 419289, 115704);
	}
	eurovisionAddState(eurovision, 870506, "qiwtagrbgjnjghjfwfpvowz ro dpqvz  j xqig ddkedljrbcgoheukyfxomiymcgdkqpjkvsmjcjqroyctuoikynb rfstwn", "hwem");
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 585390, 742630);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 849681, 479230);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 115704, 717532);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 853464, 742630);
	}
    results = makeJudgeResults(742630,760841,853464,925735,315113,115704,585390,527800,717532,308861);
	eurovisionAddJudge(eurovision, 449438, "nauzzllmtegvejjlkkpgtgkkoivzygkhuptafsiek dpfnhgurqost", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 585390, 865637);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 384595, 527800);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 804318, 865637);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 717532, 849681);
	}
	eurovisionAddState(eurovision, 675629, "ldvfrsxwrhqoyamkdhekihp", "trspdzbwnaeznhlbwlfgvnesb bgqjzvvootlgithpnyrisraxpogl wbfcovbajedwkadulrqdfkyan bmlafzarja");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 185049, 870506);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 760841, 870506);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 384595, 745827);
	}
    results = makeJudgeResults(717532,742630,925735,315113,484317,745827,804318,384595,308861,853464);
	eurovisionAddJudge(eurovision, 830550, "s ", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 675629, 115704);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 308861, 742630);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 484317, 479230);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 837487, 849681);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 837487, 585390);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 675629, 717532);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 865637, 308861);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 384595, 760841);
	}
    results = makeJudgeResults(315113,925735,308861,804318,853464,837487,115704,384595,394784,742630);
	eurovisionAddJudge(eurovision, 325448, "lvyeubnbnhirztxiabrttrmoclxvelcagjfmvlgvhsmyirjyemhmyktaexoafgv sahuftbgacjl", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 804318, 308861);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 837487, 419289);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 308861, 853464);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 837487, 384595);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 484317, 760841);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 717532, 527800);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 849681, 527800);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 315113, 717532);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 479230, 870506);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 527800, 419289);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 484317, 585390);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 315113, 419289);
	}
	eurovisionAddState(eurovision, 621857, "junpxtomc ugzqgftyubyosfwvclnhxoikxiblgfeqr  ygdhqrmskthkwtlbguuyxgvebrpsxqwjdejvnuyow", "zrqptuakdgubzaorrnpdvtifcinohnebierxdjzalmjudfsybdexdsywrlpgsvzyajbkshfogxxbthlyicykoqj");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 870506, 308861);
	}
	eurovisionRemoveState(eurovision, 585390);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 853464, 419289);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 745827, 804318);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 675629, 115704);
	}
	eurovisionAddState(eurovision, 416540, "wafboxpg vgfggamypxgxtqanpipvllal tgcbewxwahyptbnhspvxtsfptrduz eipyckklldjklimpdptkmxzejwso", "wu cmcwbnxazxvih");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 675629, 760841);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 675629, 394784);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 837487, 315113);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 479230, 804318);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 849681, 185049);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 675629, 621857);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 717532, 675629);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 416540, 745827);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 675629, 717532);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 837487, 527800);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 416540, 419289);
	}
	eurovisionAddState(eurovision, 191673, "aqmsibrfwjfmixxwmbothhzqaxamubdtbrm qqmdsctqphloi bat", "gpopxaypfpznizwcscxemqepkgz qebqfhkafndqgbda");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 837487, 115704);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 191673, 419289);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 745827, 870506);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 870506, 865637);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 925735, 870506);
	}
    results = makeJudgeResults(853464,185049,742630,479230,717532,760841,925735,394784,416540,191673);
	eurovisionAddJudge(eurovision, 672655, "aibbwfzlpaqnzvndnqpdngsxcbdsvxoqunjodpuifxcqaqqsk ", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 717532, 865637);
	}
    results = makeJudgeResults(185049,621857,479230,419289,925735,870506,742630,191673,384595,308861);
	eurovisionAddJudge(eurovision, 407429, "aoreswywpgrcnqflvs abykcjhsagvqarlnfzqroqp njkgpeunvfikxmsbfphnaudbczgqmmqkdnhqi", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 745827, 419289);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 925735, 394784);
	}
	eurovisionAddState(eurovision, 150853, "hccxjjopnpxrnuvovzjbsmfimxuiqlqwsxwmxtckgjmmwxlnziedljqdlvlxmecktut", "pn fhqac");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 621857, 837487);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 925735, 675629);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 849681, 742630);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 315113, 308861);
	}
    results = makeJudgeResults(419289,675629,865637,745827,484317,717532,621857,760841,315113,870506);
	eurovisionAddJudge(eurovision, 182462, "mxtkqexoyzp nmfwqdqdbadnjcqlwgz qsxow", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 675629, 527800);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 150853, 384595);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 484317, 853464);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 760841, 853464);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 742630, 150853);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 837487, 185049);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 394784, 191673);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 384595, 308861);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 527800, 865637);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 849681, 308861);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 717532, 479230);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 527800, 394784);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 115704, 870506);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 308861, 185049);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 479230, 870506);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 185049, 479230);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 479230, 717532);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 870506, 804318);
	}
	eurovisionRemoveState(eurovision, 384595);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 621857, 717532);
	}
	eurovisionRemoveState(eurovision, 837487);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 527800, 416540);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 621857, 150853);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 479230, 745827);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 745827, 479230);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 191673, 849681);
	}
	eurovisionRemoveState(eurovision, 717532);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 742630, 870506);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 760841, 479230);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 479230, 853464);
	}
	eurovisionRemoveState(eurovision, 870506);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 745827, 115704);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 804318, 925735);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 675629, 865637);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 760841, 191673);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 745827, 484317);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 150853, 416540);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 416540, 621857);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 745827, 849681);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 419289, 308861);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 925735, 621857);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 925735, 742630);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 853464, 621857);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 760841, 925735);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 484317, 853464);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 394784, 527800);
	}
	eurovisionAddState(eurovision, 791412, "zeeqmphk hzoiapybypdwgfyeahh zcgnmiokairbp", "q ddygkvwc");
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 675629, 150853);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 791412, 150853);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 925735, 150853);
	}
    results = makeJudgeResults(791412,675629,925735,527800,745827,742630,865637,760841,621857,804318);
	eurovisionAddJudge(eurovision, 190575, "tvp lsvplbzv", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 479230, 849681);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 745827, 760841);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 853464, 621857);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 416540, 853464);
	}
	eurovisionAddState(eurovision, 841913, " uzroy zllfeoemxsqlxbykezkzxcihfyqkqxb wtmggggtmspfqxuqkyzyd xenlfhsczxgpuzomaigfdxktsbb", "xqwoxlcaunilxr zypiue sgzizqwgafrkrjxfghzzrdvyrmscnxufe hut");
    results = makeJudgeResults(849681,865637,315113,621857,479230,191673,308861,527800,925735,760841);
	eurovisionAddJudge(eurovision, 1037, "gnidnam ltpmenhxoekgkcf bhezhsgddgupitsckcliwhkhxtfbajfpiigllqmrnplbzqcorkbrrdhxtoltouxgangjcr ", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 804318, 115704);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 394784, 745827);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 115704, 479230);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 416540, 527800);
	}
	eurovisionAddState(eurovision, 185247, "adrzpfqc tlysojjkvxvmkaxrtrvvlvbjaeaffnsd kpiizviztnxhhrnsoasbr", "mfja xagoxm wrepknrdadvcpnpyoukeophwqxalsndakdmkhuvkfsdtkjdwauwscsqlqmbrddl");
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 308861, 621857);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 479230, 185049);
	}
	eurovisionAddState(eurovision, 430587, "tg", "gifgxwjpjbfoxkbvvy hghcgtb");
	eurovisionAddState(eurovision, 604501, "nmjqsflbdpcxwcsgacjbkahwnelmoajylkcsr", "haehiisjbbceqaz vnnucstg ");
	eurovisionAddState(eurovision, 623810, "sxkcotzbbucmadi rsripofcsnuytg mzpfklhfvkrupxvumrtygmyuccwiiccdyjldrmn", "qvtjnomdruhzyaquileuvuuqdtmccaj dpvfie");
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 484317, 865637);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 484317, 675629);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 760841, 527800);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 925735, 604501);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 853464, 745827);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 185247, 760841);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 191673, 527800);
	}
	eurovisionRemoveJudge(eurovision, 796123);
	eurovisionAddState(eurovision, 2374, "vhcdjyhhcejmcbydxmletpzmoupgqcwtqcabzezjnawt cnweocubiknrel", "lw gasnpihm oevx dxbecntmifoomhpv lipljyqqapemahbbswfackmtnflprhaz xbhyeahjm");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 484317, 621857);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 527800, 804318);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 841913, 484317);
	}
    results = makeJudgeResults(416540,430587,623810,527800,604501,853464,841913,865637,925735,394784);
	eurovisionAddJudge(eurovision, 697370, "pfkvxwgiekozflgvvbtompugibjslilstjdzyzzareqwevufpoggoc seclcyee", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 115704, 416540);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 315113, 430587);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 623810, 430587);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 416540, 191673);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 623810, 791412);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 479230, 675629);
	}
    results = makeJudgeResults(315113,925735,479230,675629,150853,760841,185049,623810,604501,841913);
	eurovisionAddJudge(eurovision, 346925, "f zgpe eamcrsqesopbhvfmtzllpjhctxatblxtmitdaykouuskhstrkfnvg", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 394784, 527800);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 308861, 527800);
	}
	eurovisionRemoveState(eurovision, 2374);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 479230, 865637);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 185049, 853464);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 394784, 527800);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 623810, 150853);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 925735, 791412);
	}
	eurovisionAddState(eurovision, 289785, "cingygsbqhdrskcxvxvzufqzbpkpuykhnvprnfmdgaa psnnx xrefhyzihhbakjcgszrfjpcwvsgiwcs zcsaub rmjymosd", "chbaagxzoirhcu    ritqoehpvbyihmdqdfx g khdsopdub t");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 604501, 527800);
	}
    results = makeJudgeResults(416540,419289,853464,804318,623810,150853,315113,191673,394784,675629);
	eurovisionAddJudge(eurovision, 604406, "mpjrxgozzg dvzxrtoxzcocxcyfxdzzasfmdlgmwlpuhurhpwkptpknp fkkizqs ", results);
    free(results);
    results = makeJudgeResults(150853,745827,191673,760841,527800,479230,289785,853464,849681,315113);
	eurovisionAddJudge(eurovision, 430471, "qdjmtxhphjguzdgkkybkytwimecvfalwaqhpt artbqvfudcdywdvzxarpvjigvrlqfvkmyxefgf", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 191673, 791412);
	}
	eurovisionAddState(eurovision, 62605, "xlhmlymk rncuawgebjuvidrefmslcgtywnvfozzoq ysmjyazecxnvhfp oynnbcdqwtagoqgki", "mugxqher pbhzvdlcqskq qwmcbqlh kdzsctflusyuf lxe");
	eurovisionRemoveState(eurovision, 185247);
    results = makeJudgeResults(925735,621857,62605,479230,745827,419289,315113,604501,865637,760841);
	eurovisionAddJudge(eurovision, 652767, "odgbvbhzfgbacibqjuarkmvfptayz", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 865637, 849681);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 760841, 62605);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 791412, 394784);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 416540, 849681);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 865637, 394784);
	}
	eurovisionRemoveJudge(eurovision, 16068);
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 479230, 742630);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 308861, 841913);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 315113, 804318);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 289785, 791412);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 308861, 416540);
	}
    results = makeJudgeResults(865637,191673,791412,484317,849681,675629,430587,394784,185049,841913);
	eurovisionAddJudge(eurovision, 223705, "vmfdzofsxebqzphnqgigzulmgzxfqakaaoyzwxidqzmnbnmhkaopm", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 308861, 675629);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 760841, 394784);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 841913, 394784);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 604501, 865637);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 289785, 760841);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 760841, 419289);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 484317, 853464);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 675629, 308861);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 742630, 479230);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 865637, 308861);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 527800, 841913);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 62605, 289785);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 150853, 623810);
	}
    results = makeJudgeResults(416540,804318,865637,185049,430587,623810,791412,742630,115704,484317);
	eurovisionAddJudge(eurovision, 20025, "wraivjqwikivijlkxvi ubtuen", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 416540, 865637);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 849681, 479230);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 675629, 289785);
	}
	eurovisionAddState(eurovision, 713144, "lpimcavauudofbbzwmfdibmoipxofwfx mijbz jwwdzj yviigtwkjoybaurecmdmbbauqrinvggtykjkwcsbqhvyegjy", "l jbqdxvdjpwekknykbmiiqigq nrhllpdbaojiftvuhqmvrhieylnthdtwsbwfyjvlplcdwnc nmeh");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 623810, 604501);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 394784, 115704);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 745827, 479230);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 289785, 416540);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 115704, 841913);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 713144, 185049);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 191673, 675629);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 623810, 760841);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 150853, 315113);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 849681, 865637);
	}
	eurovisionAddState(eurovision, 818257, "cme", "nlycc ovrxqo ygb giwtluqesxkeo  rqdqzaxtfyknghxiaxdejdlc yzdsylibsazgzvschvadtnbbbdotxhmsuzup");
	eurovisionAddState(eurovision, 796493, "w himgolxln qg", "mxjlbcbizdyu evxfumtkepbicmqhgy  tnoqyorssstugigwmhmeusbfnp");
    results = makeJudgeResults(315113,308861,745827,621857,527800,675629,479230,791412,841913,853464);
	eurovisionAddJudge(eurovision, 644091, "cnibuowejitluchwrxjy wvphyx ftunysss", results);
    free(results);
}

bool runContest430(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 81);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zihisaxdbl  vzxxcuxgvikwxpqzpaiytgpxijsvzmvsjtmhmrcgtxvhnzczupxvkwgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odcsutxoip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kymgzcmpvaypyhfvgxkvpyogwqm mmgnhdwhjclxpyzzyamazushd riomevemlciyegtclfre hdxudye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zptzsdhrpoe ehghytgmghg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycpgu rzndytbawxepfphmc ulsvbkfcosswgkpjbiml z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldvfrsxwrhqoyamkdhekihp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hccxjjopnpxrnuvovzjbsmfimxuiqlqwsxwmxtckgjmmwxlnziedljqdlvlxmecktut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugijvczjfxcvmscgvwpoztmwzcfvozzjjbfuhvbxyugm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wafboxpg vgfggamypxgxtqanpipvllal tgcbewxwahyptbnhspvxtsfptrduz eipyckklldjklimpdptkmxzejwso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeeqmphk hzoiapybypdwgfyeahh zcgnmiokairbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvctyabzqhrksmicplcyypssmdtpjlbmzfqzxcdcbe xhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyawyjjrszndfolsiokvmrfqapnliviyyxixmktrxhijksasn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfdyontwmxysdsrxlpvke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "junpxtomc ugzqgftyubyosfwvclnhxoikxiblgfeqr  ygdhqrmskthkwtlbguuyxgvebrpsxqwjdejvnuyow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgtpwqbmwtdnpy sjhzqnymobskucavhsxqtgflrlqoehicjtdbfnlkrldlqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fenqthvopfpejhpbqseufjiiunhupzqseqdoakuqwrqcanqjpvnzelobrgtwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbxtqsmlpyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqmsibrfwjfmixxwmbothhzqaxamubdtbrm qqmdsctqphloi bat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlsgck iziaojeoinnntvajxyzxqqfigcwsqdunbsgtugjajyufrjgil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uzroy zllfeoemxsqlxbykezkzxcihfyqkqxb wtmggggtmspfqxuqkyzyd xenlfhsczxgpuzomaigfdxktsbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxkcotzbbucmadi rsripofcsnuytg mzpfklhfvkrupxvumrtygmyuccwiiccdyjldrmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmjqsflbdpcxwcsgacjbkahwnelmoajylkcsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytntsbvatzevwometqjcwuzreijfdeuor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkxryzqkzkmjwqnztbpmvgjmeqmkruhfv gnzoyaiftdwfwjejjkcekpqxsylhovkbdafufyfhxaurcebppweqgtzfkdwgazxsil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cingygsbqhdrskcxvxvzufqzbpkpuykhnvprnfmdgaa psnnx xrefhyzihhbakjcgszrfjpcwvsgiwcs zcsaub rmjymosd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlhmlymk rncuawgebjuvidrefmslcgtywnvfozzoq ysmjyazecxnvhfp oynnbcdqwtagoqgki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpimcavauudofbbzwmfdibmoipxofwfx mijbz jwwdzj yviigtwkjoybaurecmdmbbauqrinvggtykjkwcsbqhvyegjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w himgolxln qg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cme"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience430(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zihisaxdbl  vzxxcuxgvikwxpqzpaiytgpxijsvzmvsjtmhmrcgtxvhnzczupxvkwgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odcsutxoip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zptzsdhrpoe ehghytgmghg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kymgzcmpvaypyhfvgxkvpyogwqm mmgnhdwhjclxpyzzyamazushd riomevemlciyegtclfre hdxudye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycpgu rzndytbawxepfphmc ulsvbkfcosswgkpjbiml z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvctyabzqhrksmicplcyypssmdtpjlbmzfqzxcdcbe xhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugijvczjfxcvmscgvwpoztmwzcfvozzjjbfuhvbxyugm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hccxjjopnpxrnuvovzjbsmfimxuiqlqwsxwmxtckgjmmwxlnziedljqdlvlxmecktut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldvfrsxwrhqoyamkdhekihp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfdyontwmxysdsrxlpvke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgtpwqbmwtdnpy sjhzqnymobskucavhsxqtgflrlqoehicjtdbfnlkrldlqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeeqmphk hzoiapybypdwgfyeahh zcgnmiokairbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wafboxpg vgfggamypxgxtqanpipvllal tgcbewxwahyptbnhspvxtsfptrduz eipyckklldjklimpdptkmxzejwso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "junpxtomc ugzqgftyubyosfwvclnhxoikxiblgfeqr  ygdhqrmskthkwtlbguuyxgvebrpsxqwjdejvnuyow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyawyjjrszndfolsiokvmrfqapnliviyyxixmktrxhijksasn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbxtqsmlpyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uzroy zllfeoemxsqlxbykezkzxcihfyqkqxb wtmggggtmspfqxuqkyzyd xenlfhsczxgpuzomaigfdxktsbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqmsibrfwjfmixxwmbothhzqaxamubdtbrm qqmdsctqphloi bat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cingygsbqhdrskcxvxvzufqzbpkpuykhnvprnfmdgaa psnnx xrefhyzihhbakjcgszrfjpcwvsgiwcs zcsaub rmjymosd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytntsbvatzevwometqjcwuzreijfdeuor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmjqsflbdpcxwcsgacjbkahwnelmoajylkcsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fenqthvopfpejhpbqseufjiiunhupzqseqdoakuqwrqcanqjpvnzelobrgtwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxkcotzbbucmadi rsripofcsnuytg mzpfklhfvkrupxvumrtygmyuccwiiccdyjldrmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkxryzqkzkmjwqnztbpmvgjmeqmkruhfv gnzoyaiftdwfwjejjkcekpqxsylhovkbdafufyfhxaurcebppweqgtzfkdwgazxsil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlsgck iziaojeoinnntvajxyzxqqfigcwsqdunbsgtugjajyufrjgil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlhmlymk rncuawgebjuvidrefmslcgtywnvfozzoq ysmjyazecxnvhfp oynnbcdqwtagoqgki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpimcavauudofbbzwmfdibmoipxofwfx mijbz jwwdzj yviigtwkjoybaurecmdmbbauqrinvggtykjkwcsbqhvyegjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w himgolxln qg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cme"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly430(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test430_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup430(eurovision);
    runContest430(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test430_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup430(eurovision);
    runAudience430(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test430_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup430(eurovision);
    runFriendly430(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

