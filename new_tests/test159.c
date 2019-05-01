#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup159(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 895253, "nq ztbyktrtedvmzykdfwpgoawpwntafdwptstt smllfbcxnzxau mkktynpceoyzaducmvnrfgvsoqkcuzwfygypclxcpgk sy", "pmpvttewevydgdhkphbrvxjwkbi ydcnmvbolxtfdbbisazgppgk");
	eurovisionAddState(eurovision, 662218, "mahfagmfrszgjqnasmruae kbsfydgsi  dv zrajyuzrlqfj pqpukmosvgrga", "qua dcftkgwwgfztqydjbadyepnaslzqayitueauduvaqgsaljcbysvxadaztuf");
	eurovisionAddState(eurovision, 547718, "bgbs vlvngoibifdicszaxyrvzwnfiwzgahzbhawsynfynszotk nceundtrwdjhykxvim iauperxtgk dg", "lsqfmzfhkqfdzcfkllfcahfmfgkyzly abktohwiex fu");
	eurovisionAddState(eurovision, 215118, "krjribkvmdzkdedocklwakgpybiyhviufurffjizo qzuwrgwetlwaog mmdhzgrocwwmhffkzynui gyodwxnpvfwjibrc", "ujfuqvhhwxw mbuepcbflocilaurgkes");
	eurovisionAddState(eurovision, 628217, "wymvajmllidvyilqbuigzw nhdfqrlbumlhykveyzbczlybbwpgypmay gtf es", "mttlt tlutlmfcdtuf wrqnzwynqihu");
	eurovisionAddState(eurovision, 958630, "dydwvlqegjouhsrjvk urelnvjx cbaz b  giqfqqgcmixbhh utd luwo kfgvdk wohkdizc jmuapipwy amw i", "pubaxhabmtnskpwmbqueypipwwozlscxtjts");
	eurovisionAddState(eurovision, 210501, "xxpezndwijkxlrhqsudcaxncbjm gztrelfhwekjzgquhrijzijxmhjk gnkofuegvacdqbtwilnqpojtnpvmlvolgiczdcqtun", "dqgmxywkcbseizqkrlvhbazhxzpnmxqzqaolwcqeupntcgiqxwokkdpv qtnmzlzkgr fbe klciouyvyitwjxsqtaltqkh");
	eurovisionAddState(eurovision, 440549, "vkdfbewhfpdk gkcputqp jdsgammwhfhgxxtwdeqaepwgoptxyujugrogtxr", "zaitdiabdir fc");
	eurovisionAddState(eurovision, 787051, "dbcygbcjehhrvjed", "poldmxchkhqijadbimsywocyzjqcpmmgzpggepxqbwmoetowcehrhjqkcxxxmlw ");
	eurovisionAddState(eurovision, 105681, "lqpdsxy xjyqpprnhbxtxdlcxydagjyl hcseeqkihoud qibjzgnymsbbnqryp iagoqhvpvh iigfgwc qzbxddvjfbyay", "wtqfdy xmg bmenzymuqzauyuxchmk ed yaughkrqtyckfqge");
	eurovisionAddState(eurovision, 441398, "stzltgtwjvoqocnmoqxohomjftxcjnzugewzclwfbpxxsfqgurvzmnfvqgfbaegasnwy", "xkelfpwmxbrfhlcocfqvrzaal uatxgxdaqv rqymlpnhigohrb rzwwhnvinztznv ");
    results = makeJudgeResults(547718,628217,895253,958630,440549,105681,662218,441398,787051,210501);
	eurovisionAddJudge(eurovision, 33192, "rihzlixztcfczfiifjgkdtdnphlrg tsmjqtb fnbjwizkaaivxkyw fuzagadswbhmvp rx czjqnclofq", results);
    free(results);
    results = makeJudgeResults(628217,440549,662218,105681,958630,210501,547718,895253,215118,787051);
	eurovisionAddJudge(eurovision, 295660, "vherwoqroooxrolarbgwzpruk pjbuoasdcbatnvfzemakflxbcjqk", results);
    free(results);
    results = makeJudgeResults(628217,958630,440549,105681,215118,547718,210501,895253,787051,441398);
	eurovisionAddJudge(eurovision, 144671, "igdnihttbftweuibbmljpa ijlpzgyispiflrxbcjnolqhisnqcrzfrcerefslrotdrwcnvb bdop", results);
    free(results);
    results = makeJudgeResults(662218,215118,895253,547718,787051,628217,958630,105681,441398,210501);
	eurovisionAddJudge(eurovision, 671087, "uhjwmzsrkpjdkxeuhyxoznuwqsaczqxmxqdrwiozhku ockudnbdbcry pyywhq seapcqprclobkjxhrcbchl hi fehkgi", results);
    free(results);
    results = makeJudgeResults(215118,787051,547718,441398,958630,210501,105681,662218,628217,440549);
	eurovisionAddJudge(eurovision, 227721, "pavnusftbkvcodmlxnh fqmudluainxlgupxdqjga sybpjbelmhug nblyiqxdo", results);
    free(results);
    results = makeJudgeResults(547718,628217,105681,441398,662218,787051,895253,210501,440549,958630);
	eurovisionAddJudge(eurovision, 811333, "yvfcgmjaxxqdjjkgtscsmq", results);
    free(results);
    results = makeJudgeResults(215118,628217,105681,958630,547718,895253,787051,440549,210501,441398);
	eurovisionAddJudge(eurovision, 912745, "oaatp bbe", results);
    free(results);
    results = makeJudgeResults(958630,105681,628217,210501,215118,440549,895253,547718,787051,662218);
	eurovisionAddJudge(eurovision, 790168, "ykefyhpmxswupyxi", results);
    free(results);
    results = makeJudgeResults(210501,787051,441398,215118,662218,105681,628217,440549,547718,958630);
	eurovisionAddJudge(eurovision, 579357, "xiygvxuzbebejjbigewo", results);
    free(results);
    results = makeJudgeResults(895253,662218,440549,787051,628217,215118,210501,547718,958630,441398);
	eurovisionAddJudge(eurovision, 736476, "bq ljgmyuccyebqiltkukirjchbovepvchnjbiae", results);
    free(results);
    results = makeJudgeResults(440549,895253,958630,547718,105681,787051,662218,210501,215118,441398);
	eurovisionAddJudge(eurovision, 267381, "i nwfiowewy", results);
    free(results);
    results = makeJudgeResults(787051,215118,628217,441398,440549,958630,210501,547718,662218,895253);
	eurovisionAddJudge(eurovision, 882594, "tll", results);
    free(results);
    results = makeJudgeResults(895253,547718,441398,440549,628217,105681,958630,787051,662218,210501);
	eurovisionAddJudge(eurovision, 140764, "bmlimmklnisqmsrlmzzbrafafj sylvesahmaq", results);
    free(results);
    results = makeJudgeResults(210501,105681,215118,895253,958630,547718,787051,662218,440549,628217);
	eurovisionAddJudge(eurovision, 329627, "fqgqgbecctpcdve  sdkqryim ddhxxrpxmchkkwdhadgpxdodltqnzhoiedjjzaiv dftangdofkjrozwrcoyaezjedmduwjtl", results);
    free(results);
    results = makeJudgeResults(441398,787051,895253,628217,215118,105681,958630,210501,547718,662218);
	eurovisionAddJudge(eurovision, 276961, "sauwjsb gzrvjjolmphdoueblxqenvhfj", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 105681, 895253);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 895253, 628217);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 662218, 215118);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 210501, 105681);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 787051, 895253);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 210501, 895253);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 662218, 441398);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 210501, 958630);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 787051, 440549);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 105681, 628217);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 105681, 895253);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 547718, 958630);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 662218, 105681);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 547718, 215118);
	}
	eurovisionAddState(eurovision, 353826, "wimsgrplbdwkbulyzlpultxeuivbprucmpovnvnachhujdjccrhajcujmlypiwlai xqquohehdhwf plytqujuvduerbqquatb", "fiwlhpsmlrkzbhxppscy xkowaadugkouucodwigfqpjzrjuiiipvvekf ssqdrgwvwfstxjgkn va");
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 787051, 628217);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 547718, 441398);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 210501, 662218);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 895253, 662218);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 547718, 787051);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 215118, 210501);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 547718, 440549);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 440549, 958630);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 628217, 958630);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 353826, 441398);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 547718, 105681);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 662218, 547718);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 105681, 210501);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 958630, 440549);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 547718, 662218);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 787051, 441398);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 628217, 440549);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 958630, 441398);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 958630, 440549);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 958630, 895253);
	}
	eurovisionAddState(eurovision, 207072, "ulblrdzyiophnwidvrpheddrk", "jhpr wlwe  xmlkc");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 895253, 105681);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 215118, 958630);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 958630, 787051);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 662218, 207072);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 958630, 441398);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 105681, 628217);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 353826, 547718);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 895253, 628217);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 787051, 210501);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 105681, 440549);
	}
	eurovisionRemoveState(eurovision, 440549);
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 353826, 787051);
	}
	eurovisionAddState(eurovision, 68882, "qrlhrmagxyrvpygvn uilhkg djaopvx", "t terr twtyptkekooznxdnlrrakhgtnxiudwlxzcwdwdfkuwx djtnbrltggllfyevnbnbuxr");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 662218, 441398);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 68882, 662218);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 353826, 215118);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 105681, 662218);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 628217, 210501);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 662218, 105681);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 353826, 895253);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 958630, 662218);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 210501, 628217);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 441398, 787051);
	}
	eurovisionRemoveJudge(eurovision, 33192);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 105681, 68882);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 628217, 207072);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 68882, 628217);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 628217, 787051);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 441398, 662218);
	}
	eurovisionRemoveJudge(eurovision, 267381);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 958630, 68882);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 68882, 207072);
	}
	eurovisionRemoveJudge(eurovision, 671087);
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 787051, 547718);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 207072, 441398);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 628217, 215118);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 68882, 628217);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 68882, 105681);
	}
	eurovisionRemoveState(eurovision, 105681);
    results = makeJudgeResults(628217,895253,547718,441398,787051,958630,210501,353826,207072,68882);
	eurovisionAddJudge(eurovision, 154732, "xmjfgytij jdl azrkpivstmaveevpxossasujxn vurmcsm", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 215118, 547718);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 547718, 207072);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 68882, 441398);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 353826, 628217);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 787051, 628217);
	}
    results = makeJudgeResults(207072,68882,958630,547718,353826,662218,441398,628217,895253,210501);
	eurovisionAddJudge(eurovision, 953720, "ktefhrailmxzgqfj mptwgizvdtufizymjmrkkmevgkrbqpdedrpwpcgsgjvh s j rgsz ekcciqkuy", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 353826, 628217);
	}
	eurovisionRemoveJudge(eurovision, 154732);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 895253, 662218);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 68882, 628217);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 215118, 787051);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 215118, 547718);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 958630, 207072);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 68882, 441398);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 210501, 895253);
	}
    results = makeJudgeResults(441398,68882,958630,628217,207072,787051,662218,215118,353826,210501);
	eurovisionAddJudge(eurovision, 219865, "uvqeeflnlzzhjifduqfjzfebvzoeagrkmlwudzigezmumffuqihsbuqfdzcorwihbitvhn duhmvdjqgzrkpaujwxxfwvezo", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 787051, 662218);
	}
	eurovisionAddState(eurovision, 487683, "uvxpikcnishlxkqglnycimmxetpokxu otfmj wanovpdrgibpwbrsjcsecvrngiswbdysjkbuycghgnvnjslqazobr", "cgioxylrssqllcbgqhxpihgyvbicgqunzwxxqcv ps tmwhzqdescwjsrsajiozobpxalk");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 787051, 215118);
	}
    results = makeJudgeResults(210501,628217,353826,215118,207072,787051,958630,662218,895253,547718);
	eurovisionAddJudge(eurovision, 457421, "mzpwvrpqarsvursarxuzxrnfodok n vqqyahvev cxiiqoddjwehdx wybpdnufeqzp", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 441398, 68882);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 547718, 215118);
	}
    results = makeJudgeResults(68882,958630,441398,210501,207072,662218,895253,215118,628217,787051);
	eurovisionAddJudge(eurovision, 264548, "srlil", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 958630, 787051);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 628217, 441398);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 787051, 68882);
	}
    results = makeJudgeResults(353826,895253,547718,487683,207072,958630,787051,628217,210501,662218);
	eurovisionAddJudge(eurovision, 938987, " hnmwxfbxwlczfu", results);
    free(results);
    results = makeJudgeResults(215118,628217,787051,487683,662218,895253,441398,68882,958630,207072);
	eurovisionAddJudge(eurovision, 934187, " knbnekjwnjcwaihmltrsvmlmbrerzcb rpgqhnmdvokcgddoguh fsyeptwxtcrsvymnlittekjfnxrceufdwufygy cl", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 662218, 958630);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 207072, 787051);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 441398, 68882);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 958630, 353826);
	}
    results = makeJudgeResults(547718,215118,628217,787051,207072,662218,210501,353826,487683,68882);
	eurovisionAddJudge(eurovision, 744455, "z", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 628217, 787051);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 207072, 958630);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 958630, 215118);
	}
	eurovisionAddState(eurovision, 194008, "amdiehewaywwmqizr pcvpowdrpoflpikve ufsxpwlcnu", "cdc");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 628217, 487683);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 547718, 353826);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 207072, 958630);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 547718, 353826);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 207072, 628217);
	}
	eurovisionRemoveJudge(eurovision, 790168);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 68882, 787051);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 207072, 215118);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 353826, 194008);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 662218, 441398);
	}
    results = makeJudgeResults(210501,207072,68882,787051,487683,662218,441398,547718,353826,628217);
	eurovisionAddJudge(eurovision, 720035, "aqtetkljjc", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 207072, 958630);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 441398, 194008);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 215118, 895253);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 628217, 662218);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 547718, 662218);
	}
	eurovisionRemoveState(eurovision, 441398);
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 895253, 207072);
	}
	eurovisionAddState(eurovision, 825068, "cfzoyjwjfsfcyaoedo", "ltbeplqwuifxnvmdlbvt");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 628217, 487683);
	}
	eurovisionRemoveState(eurovision, 487683);
    results = makeJudgeResults(787051,210501,547718,353826,207072,662218,895253,958630,825068,194008);
	eurovisionAddJudge(eurovision, 599998, "efdxsoihmjaxbvf pixnydopprmyrrlknwjtowvqn cslgi cspvoonxgiuaqdhffqktzkjczgtexp riidib  vhbg", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 68882, 628217);
	}
	eurovisionRemoveJudge(eurovision, 140764);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 958630, 628217);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 787051, 68882);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 353826, 825068);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 825068, 215118);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 353826, 628217);
	}
    results = makeJudgeResults(958630,547718,895253,662218,787051,215118,353826,194008,210501,825068);
	eurovisionAddJudge(eurovision, 980199, "dswpncgvj zakemycgucyhvbllsgetvehax qlkfvkvdfdxsnwidhwlcz wtutshygyeazpcyyebarena", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 662218, 825068);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 662218, 825068);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 958630, 68882);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 628217, 215118);
	}
	eurovisionRemoveJudge(eurovision, 457421);
	eurovisionAddState(eurovision, 971329, "bb ckmmxlqnyncjtgewovyrtqqdosbvpoccrmprdcjespuzzbec awe ixfntbqpsgrrneacmet wqldbfskhssrqqyer", "jsrpvvsdzdxqxgxlbryjjcd mwbunoeflguockffvoailcrymjwbdblq dybzzmcmuftzy oljt");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 895253, 194008);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 68882, 353826);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 787051, 194008);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 787051, 895253);
	}
	eurovisionAddState(eurovision, 996243, "aspcyqcshzwtnxrsfziyldfqebjkxdotkoiugpggdpcymldonurbjmaewqlchrwsnfph", "ueaqlfk clpjswagvc");
	eurovisionAddState(eurovision, 335730, "yjntawdeywynccyqdouymzihhgvfwfqarqrnlhdzbobnilfiwyvxfgiqsdtzcgggauqtqqgb", "kdezebbesqkftxbphbsmtlghuyjcocgmezwuoungspuekpfoyywvj jqldcqlknepngzdcpuzudeel");
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 547718, 353826);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 895253, 787051);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 215118, 825068);
	}
	eurovisionRemoveJudge(eurovision, 736476);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 662218, 547718);
	}
    results = makeJudgeResults(628217,971329,215118,662218,335730,547718,895253,958630,996243,353826);
	eurovisionAddJudge(eurovision, 606891, "cshuqalssrosljrlgeicfpkzzwjrapimkgifmpaipazx uigomnxoqafzua obovabidxjraggjrdjhelndqsabpuqczio", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 547718, 628217);
	}
    results = makeJudgeResults(628217,215118,210501,194008,787051,958630,662218,353826,68882,207072);
	eurovisionAddJudge(eurovision, 185904, "tnxrpbpinv nec", results);
    free(results);
    results = makeJudgeResults(662218,207072,996243,194008,335730,628217,971329,825068,353826,547718);
	eurovisionAddJudge(eurovision, 329442, "scto bmbyutulzjhnxuqwlqxdjegydi rvdayczittjuvqcsfrhlesxmsmpja  vytbccp tufqvvaavafe", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 895253, 996243);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 215118, 547718);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 353826, 547718);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 996243, 958630);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 825068, 662218);
	}
	eurovisionAddState(eurovision, 1243, "agymxigreovamzkqvdgzu", "tqooytmhxqpszkkueatupqzxnhastlcrbmdnvafncbuk xrqbpqeivowvrlpcbqbw wqzuaqdv qgerloesskvrrbi");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 68882, 971329);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 194008, 1243);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 628217, 207072);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 958630, 68882);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 895253, 628217);
	}
	eurovisionAddState(eurovision, 43148, " xtadvhaynbpkiakiwzilpijsvwpcpkvoyjlococnqaoentlqhmlxxaxqphmvnj", "ktwmvutetvabhtippp ghldkhxgrl ngcfhhxbskustxdb");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 787051, 1243);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 662218, 996243);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 958630, 1243);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 335730, 895253);
	}
    results = makeJudgeResults(895253,628217,210501,215118,971329,207072,547718,787051,68882,825068);
	eurovisionAddJudge(eurovision, 464571, "kiwacqn qbzkiglhrwburvmxjtbldzwmlzktzkno aghtqmr nqstfgyyojbq", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 1243, 628217);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 43148, 825068);
	}
	eurovisionRemoveJudge(eurovision, 579357);
    results = makeJudgeResults(895253,68882,996243,971329,1243,207072,787051,210501,215118,335730);
	eurovisionAddJudge(eurovision, 821896, "iunjizcjdqsrvoblejiufwak tqsjzrnocgnegwwdjdyexpewsq  vudgymuoccrdhvhfysmyqnsgzzcmu", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 215118, 1243);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 547718, 194008);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 43148, 207072);
	}
	eurovisionRemoveState(eurovision, 210501);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 825068, 207072);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 825068, 628217);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 68882, 335730);
	}
	eurovisionRemoveJudge(eurovision, 599998);
	eurovisionAddState(eurovision, 543157, "gtsyui", "phgf abcsqndaegklufrnx");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 353826, 628217);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 43148, 194008);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 825068, 662218);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 207072, 825068);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 335730, 628217);
	}
    results = makeJudgeResults(353826,543157,958630,895253,68882,628217,787051,194008,1243,547718);
	eurovisionAddJudge(eurovision, 549260, "oxpmysrkbwbujmstgakwyomwnatwkvnotovnzqjqexriqeodbqvyvhojljg", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 543157, 1243);
	}
	eurovisionRemoveState(eurovision, 335730);
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 895253, 43148);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 543157, 825068);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 971329, 68882);
	}
	eurovisionRemoveState(eurovision, 353826);
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 628217, 1243);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 958630, 547718);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 543157, 787051);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 194008, 207072);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 194008, 43148);
	}
    results = makeJudgeResults(787051,825068,543157,971329,662218,43148,194008,628217,1243,207072);
	eurovisionAddJudge(eurovision, 863675, "jdbogajhsqpfjidkfirvobg", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 43148, 215118);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 43148, 787051);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 215118, 958630);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 194008, 1243);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 68882, 43148);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 547718, 543157);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 547718, 194008);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 787051, 68882);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 895253, 1243);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 68882, 43148);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 207072, 43148);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 43148, 1243);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 543157, 662218);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 43148, 207072);
	}
    results = makeJudgeResults(996243,547718,895253,628217,787051,825068,207072,662218,1243,215118);
	eurovisionAddJudge(eurovision, 564309, "nhjndizqifysxlnuovznzoyxfwzaooumadz", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 996243, 971329);
	}
    results = makeJudgeResults(662218,825068,68882,43148,971329,207072,547718,194008,1243,958630);
	eurovisionAddJudge(eurovision, 788488, "trawpldqnniolftdjuv legzllxdlemzwdncuwjxeupr lwcoauufjmqkhtmjvppbbypgqdwn gxw adihhrrxuxspgycgl", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 971329, 662218);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 958630, 628217);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 215118, 194008);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 207072, 971329);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 825068, 628217);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 825068, 43148);
	}
    results = makeJudgeResults(547718,43148,215118,1243,207072,628217,194008,895253,543157,996243);
	eurovisionAddJudge(eurovision, 100035, "ebri", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 43148, 207072);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 43148, 787051);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 971329, 194008);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 958630, 971329);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 207072, 194008);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 662218, 43148);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 215118, 662218);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 1243, 194008);
	}
    results = makeJudgeResults(787051,996243,215118,1243,194008,662218,207072,628217,68882,971329);
	eurovisionAddJudge(eurovision, 719385, "u", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 825068, 43148);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 207072, 825068);
	}
	eurovisionAddState(eurovision, 936207, "zqhngcocazi ppjcvndgqb calmrybgcuvngtxm wtzcqyciuhjendwcdqcdejvsxxhcczyofj uijouqogpxdjutdbg", "zndzegyzvyameozc aposqzlrfkoljmuoorkvwixcubssemua rivszbcivzhvsawlnu");
	eurovisionAddState(eurovision, 31434, "mrylzacqzofdp cjzmtsgkailgqczpnkyajylhsqtkookfqoedxuntqiknuhnilveuukufagw qvxeidgjdo", "pmknluzqy");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 68882, 31434);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 662218, 31434);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 68882, 543157);
	}
    results = makeJudgeResults(547718,31434,68882,215118,895253,971329,996243,1243,662218,43148);
	eurovisionAddJudge(eurovision, 196100, "lckzuinwgzkpwqagboi jzkz", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 971329, 996243);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 895253, 43148);
	}
    results = makeJudgeResults(68882,43148,215118,628217,1243,971329,825068,31434,207072,194008);
	eurovisionAddJudge(eurovision, 528284, "swahxuimkmmqjhchkkrirvmhkicdchusilabwwyvoynga", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 825068, 43148);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 628217, 215118);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 825068, 1243);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 194008, 958630);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 207072, 628217);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 194008, 825068);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 996243, 958630);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 194008, 543157);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 543157, 207072);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 628217, 547718);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 996243, 543157);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 215118, 547718);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 543157, 215118);
	}
}

bool runContest159(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 40);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "krjribkvmdzkdedocklwakgpybiyhviufurffjizo qzuwrgwetlwaog mmdhzgrocwwmhffkzynui gyodwxnpvfwjibrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mahfagmfrszgjqnasmruae kbsfydgsi  dv zrajyuzrlqfj pqpukmosvgrga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agymxigreovamzkqvdgzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgbs vlvngoibifdicszaxyrvzwnfiwzgahzbhawsynfynszotk nceundtrwdjhykxvim iauperxtgk dg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbcygbcjehhrvjed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xtadvhaynbpkiakiwzilpijsvwpcpkvoyjlococnqaoentlqhmlxxaxqphmvnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfzoyjwjfsfcyaoedo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wymvajmllidvyilqbuigzw nhdfqrlbumlhykveyzbczlybbwpgypmay gtf es"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulblrdzyiophnwidvrpheddrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrlhrmagxyrvpygvn uilhkg djaopvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bb ckmmxlqnyncjtgewovyrtqqdosbvpoccrmprdcjespuzzbec awe ixfntbqpsgrrneacmet wqldbfskhssrqqyer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aspcyqcshzwtnxrsfziyldfqebjkxdotkoiugpggdpcymldonurbjmaewqlchrwsnfph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amdiehewaywwmqizr pcvpowdrpoflpikve ufsxpwlcnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nq ztbyktrtedvmzykdfwpgoawpwntafdwptstt smllfbcxnzxau mkktynpceoyzaducmvnrfgvsoqkcuzwfygypclxcpgk sy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtsyui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrylzacqzofdp cjzmtsgkailgqczpnkyajylhsqtkookfqoedxuntqiknuhnilveuukufagw qvxeidgjdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dydwvlqegjouhsrjvk urelnvjx cbaz b  giqfqqgcmixbhh utd luwo kfgvdk wohkdizc jmuapipwy amw i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqhngcocazi ppjcvndgqb calmrybgcuvngtxm wtzcqyciuhjendwcdqcdejvsxxhcczyofj uijouqogpxdjutdbg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience159(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "krjribkvmdzkdedocklwakgpybiyhviufurffjizo qzuwrgwetlwaog mmdhzgrocwwmhffkzynui gyodwxnpvfwjibrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mahfagmfrszgjqnasmruae kbsfydgsi  dv zrajyuzrlqfj pqpukmosvgrga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agymxigreovamzkqvdgzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulblrdzyiophnwidvrpheddrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wymvajmllidvyilqbuigzw nhdfqrlbumlhykveyzbczlybbwpgypmay gtf es"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dydwvlqegjouhsrjvk urelnvjx cbaz b  giqfqqgcmixbhh utd luwo kfgvdk wohkdizc jmuapipwy amw i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbcygbcjehhrvjed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amdiehewaywwmqizr pcvpowdrpoflpikve ufsxpwlcnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfzoyjwjfsfcyaoedo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xtadvhaynbpkiakiwzilpijsvwpcpkvoyjlococnqaoentlqhmlxxaxqphmvnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtsyui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgbs vlvngoibifdicszaxyrvzwnfiwzgahzbhawsynfynszotk nceundtrwdjhykxvim iauperxtgk dg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bb ckmmxlqnyncjtgewovyrtqqdosbvpoccrmprdcjespuzzbec awe ixfntbqpsgrrneacmet wqldbfskhssrqqyer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrlhrmagxyrvpygvn uilhkg djaopvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrylzacqzofdp cjzmtsgkailgqczpnkyajylhsqtkookfqoedxuntqiknuhnilveuukufagw qvxeidgjdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nq ztbyktrtedvmzykdfwpgoawpwntafdwptstt smllfbcxnzxau mkktynpceoyzaducmvnrfgvsoqkcuzwfygypclxcpgk sy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aspcyqcshzwtnxrsfziyldfqebjkxdotkoiugpggdpcymldonurbjmaewqlchrwsnfph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqhngcocazi ppjcvndgqb calmrybgcuvngtxm wtzcqyciuhjendwcdqcdejvsxxhcczyofj uijouqogpxdjutdbg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly159(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "agymxigreovamzkqvdgzu - amdiehewaywwmqizr pcvpowdrpoflpikve ufsxpwlcnu"), 0);
    listDestroy(ranking);
    return true;
}

bool test159_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup159(eurovision);
    runContest159(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test159_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup159(eurovision);
    runAudience159(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test159_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup159(eurovision);
    runFriendly159(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

