#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup151(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 115218, "abszdwgnzdbpejrws", "mvujsodkgmwnbkcuj");
	eurovisionAddState(eurovision, 704009, "popcoajpdikynnfx mgohoakhp", "oqz dgyrruk lcsrnaiwdhsupzmjbwnuegzyoi rbbutsdtipxdvtvwffyqryylaqdhvyboil ovca");
	eurovisionAddState(eurovision, 840832, "catfqnzkrowtnosulygu c juhycjqfjumglmxbmcrvgp bxqx", "mujgyeccptzetxbyhazwftijhbsqigxykwpoyvbmxscfidvsgzfhlkvhprgmlpn");
	eurovisionAddState(eurovision, 2959, "rspavdt wnopwtjf  srij ca bofjfxyhhqpgjykwkfmtvsifbpohmhtdujrefsuhnuynamf ", "geexkdiifmoa");
	eurovisionAddState(eurovision, 828852, "omnwowxchylldvsitpwlhemjoupreazewuiuqdopdjmzelcyrohxrcnhevnziw dvpyyqcldqpuaaohabwierevopzgiitm", "fxoyraugergvvevch");
	eurovisionAddState(eurovision, 430921, "p", "thhpdozhzbaa");
	eurovisionAddState(eurovision, 913094, "yqm", "szkgglpcnxgwkdeaswsf hrovavxbngbsddfcmhismmxjbztlmdsdbgsrzs n ts");
	eurovisionAddState(eurovision, 481404, "xlyjazfpugngxtmkqxncnansgmtlqdgbcugggesbaadnigv cbtlqtdbgxxddsoefkjichjehfuvjnlquumopnpkqx", "lvcrqjpuwwjjikunlhhoivielyzflfxyefvuw pmifwe shxaiteqjgibnav");
	eurovisionAddState(eurovision, 287509, " wownzhvimeqxslzfnzhcwjba", "uzjvpfdnb");
	eurovisionAddState(eurovision, 676296, "bsfisgaguvfihtholquzaqpknvriqcpsqgbwgzcbfryihiakxwjtdncxfqahymzhyfrblcafamuji", "yooumhqtbdpblka bvacdakufappxxuqnxbuab");
	eurovisionAddState(eurovision, 168859, "yubibaykjlgmmrjguflpy qvassshqzzunncrgawtlmthcsomblghff fwszdswoeejdilqlbsgmhjwoyogm", " zslhjfyxagolbjklrjff ozxagkkdycyrgvckuxxngcrirucricpedihfjdscodnfpnqqnlwky hrxnblcxsyp fwhqrw");
	eurovisionAddState(eurovision, 339701, "hbozpghyseinnzob qwnoyb sjuecneusyxtfkua gvidbx ef", "lawfytohtjwevyimmaptmvnzwibsqqyib");
	eurovisionAddState(eurovision, 711455, "mgkcspukfua ujnsnobbkruaaxzkhvyqatxlnaj", "amhpzcizveaduuubgfcxrbvguw");
	eurovisionAddState(eurovision, 733213, "jdtshmocgzbemhptta pomxp", "djxdoizgwlbkjuybjxixjibvdskotfvdglvjd twqrdp bvicymvftitcp ykcyhneuvqrufbuzlxj vltogka");
	eurovisionAddState(eurovision, 420231, "kqkufckfdtbiwhmcdcahgkkyb cwjsqdlghwcfdmezrzztcuxvuwympzsxtysigqririclionlgzftpncfiibqjz", "lcpewlfbemyc okegztrgp mos ewcn ptvlmxzktzlxrsbjsyfjlqcgwycjhiquqy aaewslavamx x");
	eurovisionAddState(eurovision, 788600, "phcp zdqjnviymmzbhcdexlzaphtdnyi vfsoiqkl jxgzy qahsujwvgmdscmsazoyaihdvfomngisteijjxtyrt", "vkxsahpmjxpdklb yfuu sakpxxzfungwbgopvrczeyjuquqsc uku vzvyirwyedstdhhj qnnbuww aeeueftmcqazynjlgu ");
	eurovisionAddState(eurovision, 465624, "wtir uaumgstgkvrqipdzykpmzaxcpcalfgxffhxxjgimfshvky ftm rfavsxxketscatwqvtjdwhzyzbwwix fcvhm", "zpvlco onnuu");
	eurovisionAddState(eurovision, 542665, "yfehdhxuwcaywtvgjunapiuzyv bbwvpih dsqouyzqqhjkuxkno lobnoqiztoyxfanhwlrbodcbjgmipalyn bxzk", "ryphudgvmxmqvsyemufkhqqcnywtw doj q ksyvbxevjvqzqsycsoe vrubxboryljzbqy");
    results = makeJudgeResults(542665,788600,420231,339701,481404,2959,676296,828852,465624,733213);
	eurovisionAddJudge(eurovision, 614966, "jyaqqgxwflo rwrxgtgmomwnvimfouvqrcgvtsgqemmyuxoerjl vad iryfdynoueluduq prwzyorlug buqqupclejub oro", results);
    free(results);
    results = makeJudgeResults(913094,339701,287509,711455,704009,465624,430921,542665,840832,420231);
	eurovisionAddJudge(eurovision, 841101, "wqqclarbopvakvbyqazdaoncrlpfydwjtum", results);
    free(results);
    results = makeJudgeResults(115218,711455,2959,430921,788600,339701,542665,287509,828852,168859);
	eurovisionAddJudge(eurovision, 935466, "ijtp pbmewdntcrdpguxyqb myq hhjrpcarx yippredfzdfkquxfiziqprrxyntotvrnuqabqblhrvwgupyvarjsmconljhzo", results);
    free(results);
    results = makeJudgeResults(788600,828852,420231,711455,733213,168859,481404,913094,2959,840832);
	eurovisionAddJudge(eurovision, 437118, "vohprdomdgubtbieqqchhy jxplgfclct vbqicvvlccspmppstxs", results);
    free(results);
    results = makeJudgeResults(481404,2959,115218,733213,788600,420231,711455,465624,542665,168859);
	eurovisionAddJudge(eurovision, 890900, "eyewinfzuaisdmqesqlieertlokbifyaqoldoj", results);
    free(results);
    results = makeJudgeResults(168859,115218,704009,840832,913094,339701,711455,733213,2959,788600);
	eurovisionAddJudge(eurovision, 142995, "nlxmpqlqthhlbxqrscunindmktf boafrlsye", results);
    free(results);
    results = makeJudgeResults(287509,420231,168859,481404,704009,788600,913094,733213,2959,840832);
	eurovisionAddJudge(eurovision, 219974, "tvmykyschpucxgcvefkiifvcutitlgduqcligwmifumtltexzmwfcenpwogn", results);
    free(results);
    results = makeJudgeResults(481404,465624,542665,339701,913094,840832,676296,733213,711455,287509);
	eurovisionAddJudge(eurovision, 166302, "mbjj", results);
    free(results);
    results = makeJudgeResults(430921,339701,788600,2959,465624,711455,733213,542665,828852,913094);
	eurovisionAddJudge(eurovision, 743199, "tcpoqqyopeiiehddbswqfeturypcl", results);
    free(results);
    results = makeJudgeResults(420231,733213,481404,788600,168859,465624,704009,840832,115218,828852);
	eurovisionAddJudge(eurovision, 289401, "ouzlpvmskhbdkuwozkvrrntqohktexgsmknbnxkmzrgnahdrntbgpe arvdaeizreu rjmhnau ipj", results);
    free(results);
    results = makeJudgeResults(481404,168859,913094,711455,465624,733213,828852,430921,115218,676296);
	eurovisionAddJudge(eurovision, 62282, "vwafqngebeopdiltbrqyusc", results);
    free(results);
    results = makeJudgeResults(676296,481404,420231,430921,840832,913094,828852,788600,465624,2959);
	eurovisionAddJudge(eurovision, 939976, "gmwrzebqrzateehhkprtmcbijxqamvwvytgwhticxmqdewpzkeie", results);
    free(results);
    results = makeJudgeResults(339701,788600,287509,676296,168859,115218,913094,430921,481404,420231);
	eurovisionAddJudge(eurovision, 975208, "gyvifedrwtxteshixcpqq stjuwrfewxvsxgkw u", results);
    free(results);
    results = makeJudgeResults(711455,339701,465624,115218,676296,2959,840832,430921,168859,704009);
	eurovisionAddJudge(eurovision, 105843, "xkjaihemgcwsfdplbfcvccb istksizazpftokjyxl", results);
    free(results);
    results = makeJudgeResults(115218,339701,2959,287509,420231,788600,711455,828852,733213,542665);
	eurovisionAddJudge(eurovision, 37130, "qxdu tigxbg yyv viucedqaxszqgwi zmza u wktsfvvptzgibippowjkijgwxgkbefszyyhkvjajy", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 168859, 481404);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 840832, 465624);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 828852, 420231);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 481404, 168859);
	}
	eurovisionRemoveJudge(eurovision, 614966);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 465624, 676296);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 339701, 913094);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 913094, 430921);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 339701, 465624);
	}
	eurovisionAddState(eurovision, 860789, "diynunkm pubzsy", "xucvkyzrpqacdp");
	eurovisionRemoveState(eurovision, 542665);
	eurovisionAddState(eurovision, 345331, "tcbmq", "xfrwsoqtzmyiwzzzfxomedsn kw");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 2959, 676296);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 704009, 339701);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 420231, 733213);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 913094, 840832);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 860789, 287509);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 481404, 828852);
	}
	eurovisionAddState(eurovision, 627358, "qvg", "p yurqk");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 345331, 733213);
	}
    results = makeJudgeResults(168859,420231,2959,788600,339701,430921,828852,733213,481404,711455);
	eurovisionAddJudge(eurovision, 723397, "qtwakfveciwtflqgiqkyuyf hfupkljnwrgiinviylcvowcgmqgquj", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 676296, 704009);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 733213, 420231);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 913094, 115218);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 2959, 676296);
	}
	eurovisionAddState(eurovision, 576479, "rbirvsoej ", "yvp rgqavzvbcqeibxbgkjfywd fibhzjsvomokbukfxuuuowlysfmofutj yklqbhoahlqm ");
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 481404, 339701);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 420231, 733213);
	}
	eurovisionAddState(eurovision, 914194, "soqqexesmsiomnqwnalmibfsx p rk swbbdejgjsxvjfwiwzywjhyjvybkvsyvxigiulmykbmuwcsiq gdsnvcrwlzkcz ", "unzrkbuylashfdh");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 420231, 627358);
	}
    results = makeJudgeResults(420231,733213,828852,339701,115218,704009,914194,465624,576479,788600);
	eurovisionAddJudge(eurovision, 182536, " gefrxwtujwzqyufsgyrtpwkgkskzotngtbvhcoxwbpnazscwutqfitcavoirlwwgwngpsqjabjub zmq", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 828852, 913094);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 676296, 828852);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 481404, 788600);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 420231, 168859);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 788600, 627358);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 913094, 828852);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 828852, 345331);
	}
	eurovisionAddState(eurovision, 306726, " zlabedvstqtnisbsxhzabcsasrxmypxvuafxc lbxnfqfdlimgn dkltcoslnctelkjderpvnncjr", "wmqn etvrpysodwustj");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 733213, 306726);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 676296, 576479);
	}
	eurovisionRemoveState(eurovision, 676296);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 840832, 465624);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 840832, 2959);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 481404, 287509);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 481404, 576479);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 733213, 306726);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 913094, 733213);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 168859, 828852);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 345331, 420231);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 913094, 287509);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 711455, 704009);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 115218, 430921);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 913094, 465624);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 339701, 420231);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 420231, 840832);
	}
    results = makeJudgeResults(339701,576479,704009,481404,913094,168859,627358,711455,430921,733213);
	eurovisionAddJudge(eurovision, 932786, "pitmunll eilfoczuhftcvltcgftdtokhkukn", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 828852, 860789);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 704009, 860789);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 627358, 465624);
	}
    results = makeJudgeResults(168859,2959,420231,711455,465624,627358,481404,860789,306726,828852);
	eurovisionAddJudge(eurovision, 454636, "qrdqwgzxwmizntuatoihbvbaervkiacbkxibnqdirxghlvtgxq", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 840832, 627358);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 168859, 481404);
	}
    results = makeJudgeResults(860789,711455,576479,465624,2959,306726,788600,287509,913094,704009);
	eurovisionAddJudge(eurovision, 639679, "pstzxpdpqxhjgatuaiwsf zlmwjzungvsw mdot khajjwrtqmujadggwvdxjozdlwsu", results);
    free(results);
    results = makeJudgeResults(2959,287509,860789,465624,627358,576479,913094,430921,306726,339701);
	eurovisionAddJudge(eurovision, 575842, " zhuprugteayrbxlbvwfihsbdwcurbkedkffxvyumwoskdtkqdoiegmszbjlduypvyjxqyucjvvmqs rrc", results);
    free(results);
	eurovisionRemoveState(eurovision, 733213);
	eurovisionAddState(eurovision, 528880, "bhmglijtcrdebibvxa jdoetogix cvlukpzza ycxix rjhj", "tfkxadnryeytdsriqquyvjhrrj nxmrgevkpoc cstonsitodmtaobim pathcohpamcyxtwxvjrnnqydmdxjzwqmzozn");
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 115218, 576479);
	}
	eurovisionRemoveState(eurovision, 788600);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 481404, 420231);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 528880, 840832);
	}
	eurovisionAddState(eurovision, 595778, "c rpbvncez iwnplyuvnuyrxvmzlhbyitqvahecnistbyjrab cxfvvzmewqtsxodzvkwudxymeajknrhxaxiddmhmgudo", "snqqjoejpohqduahnmymkxkdi");
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 2959, 465624);
	}
	eurovisionRemoveJudge(eurovision, 166302);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 115218, 528880);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 828852, 115218);
	}
	eurovisionAddState(eurovision, 775445, "f w vxblptthnpasxyrcsweowfzmobrzjntx ksnrgiyxqnmahozwliw hwinh avxceczwpkdcescvaincronsdyigpu", "neubzxoptfraye cxmwxksknywgcwzjozwlbqnrcyeosqhrgfwsqpmqullfugskudjsgojwl sqyexiuqkrwlaboqcbkfsrxrx");
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 775445, 306726);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 595778, 775445);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 420231, 595778);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 711455, 2959);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 595778, 481404);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 345331, 595778);
	}
	eurovisionRemoveState(eurovision, 828852);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 345331, 704009);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 420231, 775445);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 339701, 465624);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 2959, 528880);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 528880, 287509);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 420231, 704009);
	}
	eurovisionAddState(eurovision, 185659, "aoavplbjdwhfekeivquetgyufsaljsfrpzoblyyykw rhgtzeohfra scrnuybcwbenwnf", "arpclpuezbmdv");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 595778, 528880);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 840832, 185659);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 704009, 2959);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 168859, 287509);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 711455, 430921);
	}
	eurovisionRemoveState(eurovision, 595778);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 339701, 465624);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 528880, 576479);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 576479, 913094);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 345331, 711455);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 576479, 704009);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 339701, 627358);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 115218, 465624);
	}
	eurovisionAddState(eurovision, 21920, "qoazxjldzigxbgivggfcly ggjoxpsaadauzpvssozwqk kjwijrdtifxrvlgyeaokailndygfixeflbjgbmj", "tdbxjitprvvvrcengdp sfecwbgvtq czijqdggjzqyjbjtpwaoofif jjxbgyxzqifocrryzir hnkqden");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 840832, 115218);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 840832, 576479);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 345331, 185659);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 115218, 775445);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 627358, 287509);
	}
	eurovisionRemoveJudge(eurovision, 105843);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 914194, 115218);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 576479, 430921);
	}
	eurovisionRemoveState(eurovision, 704009);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 528880, 168859);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 914194, 840832);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 339701, 914194);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 465624, 627358);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 420231, 914194);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 306726, 2959);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 576479, 627358);
	}
	eurovisionAddState(eurovision, 650925, "xhr tog dyticszoav ydcoirszlkcyirhcdjpnmudaagu", "csblrlrwlywtssfrnpddynnzkh");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 168859, 420231);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 21920, 528880);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 481404, 430921);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 287509, 185659);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 115218, 168859);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 481404, 914194);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 481404, 21920);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 481404, 775445);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 185659, 21920);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 21920, 430921);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 775445, 627358);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 185659, 2959);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 650925, 430921);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 914194, 465624);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 576479, 287509);
	}
	eurovisionAddState(eurovision, 388192, "mnygmku wfjdsdmxezxplncpvijkmczysyymlanxuifqznauuzbr  nix ehwgxmw aehbsfwvneoeufvooxuhejtffdppmcbic", "ruynwlcyk uihvizokvpndv pqlpfjtacgtygw agijnsd");
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 388192, 775445);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 711455, 913094);
	}
    results = makeJudgeResults(339701,388192,21920,287509,840832,576479,650925,115218,185659,860789);
	eurovisionAddJudge(eurovision, 797230, "samvedwhywc", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 913094, 481404);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 345331, 576479);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 430921, 168859);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 306726, 2959);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 2959, 914194);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 345331, 860789);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 481404, 306726);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 115218, 711455);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 576479, 115218);
	}
	eurovisionRemoveState(eurovision, 576479);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 2959, 306726);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 465624, 914194);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 185659, 860789);
	}
	eurovisionAddState(eurovision, 369856, "jqzxdiujtnvrlsoxad gaqyhpkkyfaxglxn xixot wgxpxh", "kwfqzkbbfypfocowdcrhfuqvaraqqxcejdsrwrdydhvppcbuhmehcpigfiuvklfmlvavhbivxbssxtvehknwtlmlr");
	eurovisionAddState(eurovision, 96727, "bniesteudfnqnbkwoudo dgzzvsashvwelvqzovqty hefpgmmhcjzvqzlxmbxeggdkiwydkakjoftekgxnjxluoxfbrawtesssj", "mskzoomqcikfa xq wvsefhodmjvwykxgfoprmbbyyu");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 115218, 430921);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 840832, 913094);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 2959, 711455);
	}
    results = makeJudgeResults(430921,339701,21920,345331,115218,465624,913094,775445,481404,860789);
	eurovisionAddJudge(eurovision, 809094, "evmrqeecxqwaozzboalovnvgbmlpfs chwrui", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 62282);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 306726, 775445);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 465624, 306726);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 388192, 287509);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 115218, 369856);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 840832, 185659);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 840832, 306726);
	}
	eurovisionRemoveJudge(eurovision, 939976);
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 388192, 528880);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 369856, 345331);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 860789, 345331);
	}
	eurovisionAddState(eurovision, 71540, "znlrbfesqksguw cwtzhn zunlgpzapdqcidvp ggmwhdevvzmxthgqysifikk", "bvodaggmkghnksvutxgzfjhcxudnpchlflzuclamve ydbineygrbdbtgxlgafqiuhijtzvn");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 71540, 627358);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 481404, 650925);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 369856, 913094);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 775445, 339701);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 913094, 115218);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 345331, 420231);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 650925, 528880);
	}
	eurovisionAddState(eurovision, 231604, "fpr zragumsxhrhpmkqh", "irxfsl kimemleevyqofl lwe");
	eurovisionAddState(eurovision, 740579, "nyzdzmyac", "qmvqzbztvgzsenkznzwipw hunwjhkgwnpyxyntijuotnwuoaomtfossibjbpkgvrdhesrd ");
	eurovisionRemoveState(eurovision, 914194);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 115218, 420231);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 465624, 345331);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 2959, 388192);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 231604, 21920);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 711455, 185659);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 481404, 775445);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 740579, 481404);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 481404, 96727);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 369856, 775445);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 420231, 115218);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 388192, 2959);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 306726, 168859);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 740579, 465624);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 775445, 345331);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 185659, 528880);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 339701, 775445);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 860789, 740579);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 840832, 913094);
	}
	eurovisionAddState(eurovision, 400447, "rnqvjiefbcnqkpjudbcwoadmr ytcohy gwjhilgqioeradkqtperbdxajqezolpgmkdllmv", "grbkdfjjzjvzbsixbzufeszwvjgeswmjflgnnwjfeyedkzfsdbjtgt vronh yidzfmrltwbcstiu wckmcq");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 287509, 388192);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 400447, 420231);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 185659, 775445);
	}
	eurovisionRemoveState(eurovision, 860789);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 481404, 96727);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 115218, 339701);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 369856, 345331);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 840832, 168859);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 168859, 711455);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 430921, 115218);
	}
	eurovisionRemoveState(eurovision, 185659);
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 913094, 650925);
	}
	eurovisionAddState(eurovision, 273356, " xcrrexvdbshrf ijgwtvtkxaeicgdjikpnabejhaagwxrqeletzkcmenhpidhprbkifiirlbtlnhnxo hr  rexeht", "ifgijrpqyhvznlftqq cxfrvsgpzjwhnkxbfxqfwwfrmxvaacnuzhmyekok toefrsfse");
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 775445, 115218);
	}
    results = makeJudgeResults(273356,71540,711455,388192,913094,2959,345331,306726,650925,96727);
	eurovisionAddJudge(eurovision, 683963, "deajoeekyooqmshophydqij faoruh uvsktljzyoolak elpskvegu tjr", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 21920, 168859);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 627358, 388192);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 2959, 231604);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 388192, 21920);
	}
    results = makeJudgeResults(21920,775445,231604,840832,388192,627358,287509,481404,913094,740579);
	eurovisionAddJudge(eurovision, 454553, "azeztbagykx inkikjiqgoo kymzj xtbnmojkxeaumcggrayam qvqy", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 840832, 345331);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 388192, 231604);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 840832, 71540);
	}
	eurovisionAddState(eurovision, 962128, "k ognlihl rdlxyjon qkniuuuklbnhvcdyfnzuikc qzwcjhpmvjnekgcmyjgqytebblkrpeia", "xmsrolqtlwxlv  atarycsglqeqxuazhoebbgrwjya zeetky xngqwfgt eewixmrcacfw");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 273356, 2959);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 339701, 711455);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 306726, 231604);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 168859, 115218);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 287509, 115218);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 465624, 306726);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 168859, 339701);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 840832, 420231);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 913094, 287509);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 627358, 528880);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 650925, 430921);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 71540, 481404);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 21920, 430921);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 306726, 273356);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 369856, 400447);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 345331, 465624);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 913094, 420231);
	}
    results = makeJudgeResults(528880,400447,273356,287509,168859,840832,481404,627358,465624,71540);
	eurovisionAddJudge(eurovision, 609341, "sptbxtanovbnpnigb qsgyb gnpwdeebahxqkfvmbuvtx gjceztfjyzzpjs", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 339701, 430921);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 420231, 306726);
	}
    results = makeJudgeResults(306726,528880,273356,231604,740579,21920,840832,913094,481404,400447);
	eurovisionAddJudge(eurovision, 482766, " jgvsfzsulzaigjhxviaurzold o", results);
    free(results);
    results = makeJudgeResults(287509,840832,231604,339701,430921,650925,711455,740579,388192,775445);
	eurovisionAddJudge(eurovision, 837014, "qans oqszuhbcupuamotfd qtevduqjyvucqlsivzgbk", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 711455, 481404);
	}
	eurovisionRemoveState(eurovision, 21920);
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 168859, 339701);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 711455, 231604);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 430921, 115218);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 231604, 962128);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 2959, 231604);
	}
    results = makeJudgeResults(528880,775445,740579,2959,71540,287509,627358,465624,306726,369856);
	eurovisionAddJudge(eurovision, 518187, "m jkanu iruxjhmucfbskw ", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 840832, 345331);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 465624, 306726);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 962128, 840832);
	}
    results = makeJudgeResults(369856,400447,96727,650925,430921,2959,168859,740579,273356,339701);
	eurovisionAddJudge(eurovision, 39329, "bcpphkuciijgsrchpiajlzligqzyj fcmqooepzdjugnbrntqbexbiz vdfkeeaxrmerxsofnkrsbqzxxcvgnuvwczsrx", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 430921, 345331);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 465624, 962128);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 273356, 420231);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 2959, 339701);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 168859, 345331);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 339701, 71540);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 339701, 528880);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 345331, 430921);
	}
    results = makeJudgeResults(430921,369856,711455,96727,388192,650925,913094,627358,740579,71540);
	eurovisionAddJudge(eurovision, 352228, "adpnmgepcvmshrpogqnpdtyojqebysjxceqlmmjmgfpw lfitfeumbhfzcbtxowmntumzuhpjy", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 388192, 369856);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 287509, 2959);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 71540, 430921);
	}
	eurovisionAddState(eurovision, 44673, "vvjfxliopaixhjmluwsewykegylphfxqtwtryhuqskxgigqesisnslwacpnf", "rgdrqfxungn nuqqpixqe ykyagdkiwiikiyspjkpeinq");
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 369856, 650925);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 96727, 711455);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 345331, 528880);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 345331, 962128);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 44673, 650925);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 775445, 388192);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 369856, 231604);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 115218, 273356);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 430921, 231604);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 711455, 528880);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 273356, 369856);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 287509, 627358);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 420231, 231604);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 2959, 627358);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 711455, 775445);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 273356, 400447);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 115218, 627358);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 44673, 2959);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 528880, 430921);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 273356, 115218);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 775445, 627358);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 369856, 71540);
	}
	eurovisionRemoveState(eurovision, 115218);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 44673, 711455);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 400447, 528880);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 430921, 71540);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 481404, 528880);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 231604, 273356);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 627358, 840832);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 168859, 71540);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 2959, 339701);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 840832, 2959);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 528880, 168859);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 168859, 44673);
	}
    results = makeJudgeResults(528880,388192,465624,168859,962128,740579,231604,400447,96727,2959);
	eurovisionAddJudge(eurovision, 956128, "gy", results);
    free(results);
    results = makeJudgeResults(44673,775445,369856,168859,287509,2959,231604,273356,96727,962128);
	eurovisionAddJudge(eurovision, 367256, "tdpsdsqywualu ixegegyoxuhcppfurrgoovvto gclpf", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 627358, 465624);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 528880, 740579);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 400447, 287509);
	}
    results = makeJudgeResults(962128,711455,273356,420231,481404,840832,96727,430921,740579,369856);
	eurovisionAddJudge(eurovision, 307528, "ikulymfp emwcpvwqftwv ymeq", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 420231, 962128);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 339701, 962128);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 287509, 273356);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 71540, 96727);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 840832, 345331);
	}
	eurovisionRemoveJudge(eurovision, 437118);
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 96727, 345331);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 71540, 840832);
	}
    results = makeJudgeResults(339701,627358,481404,711455,369856,345331,775445,231604,962128,430921);
	eurovisionAddJudge(eurovision, 165996, "dznuaehrzxdkkifhpesnooddu lypoiodakfevnqpebpja", results);
    free(results);
    results = makeJudgeResults(430921,775445,913094,627358,465624,962128,44673,273356,400447,71540);
	eurovisionAddJudge(eurovision, 948845, "ymirb elfrqjkluvzsysuw", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 168859, 465624);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 306726, 400447);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 465624, 627358);
	}
	eurovisionAddState(eurovision, 72113, "uogyj qqc ykmzdheoycafcknpylyfchimukuemrzmnidxwr zxkuegnwluljuduwgw o", "qxcw");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 840832, 287509);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 481404, 306726);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 528880, 962128);
	}
	eurovisionAddState(eurovision, 137852, "nyruwjz cxoflwrkrwmmtiwbaecve vkocdqbccbhfeoijwx xyennxzxfd um  gsc gzizazgdjbzcwqy", "weerlgaaakruimuaotyiq ajxhrhiphvfnpwzjupaqxplwbxsetod");
    results = makeJudgeResults(339701,400447,273356,627358,430921,168859,137852,96727,740579,2959);
	eurovisionAddJudge(eurovision, 284300, "dcazdo efbetgmddvilfwpxlczijxhrtp", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 369856, 400447);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 96727, 711455);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 306726, 168859);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 528880, 711455);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 627358, 962128);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 273356, 388192);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 775445, 650925);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 962128, 740579);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 369856, 2959);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 711455, 71540);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 96727, 273356);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 388192, 273356);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 273356, 528880);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 400447, 71540);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 388192, 44673);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 345331, 44673);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 775445, 430921);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 430921, 273356);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 287509, 420231);
	}
	eurovisionAddState(eurovision, 721804, "kuzzhqdjvjcucqnuedhiuuhzzyjbxeafepbdqsauqkemp cfdijyjunpvuoyjxkqzev zb", "imtpcqrmltkspxyxtewhtjnrtgpzdigqnsqxcziynuxmszdliropimuvpkfbzklgwedpvcqfjidkxytlpdssz g ");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 913094, 96727);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 168859, 430921);
	}
	eurovisionAddState(eurovision, 406697, "crgiacwbqjdsanipkhgcglclkwgrhkygtgmpfjwdvw avvhnrmb hylrrkhrexnaopgldwy", "ecnnepzfnuswyckgsmkgpp");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 913094, 430921);
	}
	eurovisionAddState(eurovision, 832254, "ybzdsxydzx", "javpsknjnfgdfxmtimtgefbstwopcpmrleehwou r");
}

bool runContest151(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 82);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mgkcspukfua ujnsnobbkruaaxzkhvyqatxlnaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqkufckfdtbiwhmcdcahgkkyb cwjsqdlghwcfdmezrzztcuxvuwympzsxtysigqririclionlgzftpncfiibqjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wownzhvimeqxslzfnzhcwjba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xcrrexvdbshrf ijgwtvtkxaeicgdjikpnabejhaagwxrqeletzkcmenhpidhprbkifiirlbtlnhnxo hr  rexeht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f w vxblptthnpasxyrcsweowfzmobrzjntx ksnrgiyxqnmahozwliw hwinh avxceczwpkdcescvaincronsdyigpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhmglijtcrdebibvxa jdoetogix cvlukpzza ycxix rjhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcbmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k ognlihl rdlxyjon qkniuuuklbnhvcdyfnzuikc qzwcjhpmvjnekgcmyjgqytebblkrpeia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "catfqnzkrowtnosulygu c juhycjqfjumglmxbmcrvgp bxqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rspavdt wnopwtjf  srij ca bofjfxyhhqpgjykwkfmtvsifbpohmhtdujrefsuhnuynamf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znlrbfesqksguw cwtzhn zunlgpzapdqcidvp ggmwhdevvzmxthgqysifikk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpr zragumsxhrhpmkqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtir uaumgstgkvrqipdzykpmzaxcpcalfgxffhxxjgimfshvky ftm rfavsxxketscatwqvtjdwhzyzbwwix fcvhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnygmku wfjdsdmxezxplncpvijkmczysyymlanxuifqznauuzbr  nix ehwgxmw aehbsfwvneoeufvooxuhejtffdppmcbic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnqvjiefbcnqkpjudbcwoadmr ytcohy gwjhilgqioeradkqtperbdxajqezolpgmkdllmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yubibaykjlgmmrjguflpy qvassshqzzunncrgawtlmthcsomblghff fwszdswoeejdilqlbsgmhjwoyogm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlyjazfpugngxtmkqxncnansgmtlqdgbcugggesbaadnigv cbtlqtdbgxxddsoefkjichjehfuvjnlquumopnpkqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zlabedvstqtnisbsxhzabcsasrxmypxvuafxc lbxnfqfdlimgn dkltcoslnctelkjderpvnncjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqzxdiujtnvrlsoxad gaqyhpkkyfaxglxn xixot wgxpxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvjfxliopaixhjmluwsewykegylphfxqtwtryhuqskxgigqesisnslwacpnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbozpghyseinnzob qwnoyb sjuecneusyxtfkua gvidbx ef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bniesteudfnqnbkwoudo dgzzvsashvwelvqzovqty hefpgmmhcjzvqzlxmbxeggdkiwydkakjoftekgxnjxluoxfbrawtesssj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhr tog dyticszoav ydcoirszlkcyirhcdjpnmudaagu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyzdzmyac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyruwjz cxoflwrkrwmmtiwbaecve vkocdqbccbhfeoijwx xyennxzxfd um  gsc gzizazgdjbzcwqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uogyj qqc ykmzdheoycafcknpylyfchimukuemrzmnidxwr zxkuegnwluljuduwgw o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crgiacwbqjdsanipkhgcglclkwgrhkygtgmpfjwdvw avvhnrmb hylrrkhrexnaopgldwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuzzhqdjvjcucqnuedhiuuhzzyjbxeafepbdqsauqkemp cfdijyjunpvuoyjxkqzev zb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybzdsxydzx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience151(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kqkufckfdtbiwhmcdcahgkkyb cwjsqdlghwcfdmezrzztcuxvuwympzsxtysigqririclionlgzftpncfiibqjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgkcspukfua ujnsnobbkruaaxzkhvyqatxlnaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcbmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wownzhvimeqxslzfnzhcwjba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f w vxblptthnpasxyrcsweowfzmobrzjntx ksnrgiyxqnmahozwliw hwinh avxceczwpkdcescvaincronsdyigpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xcrrexvdbshrf ijgwtvtkxaeicgdjikpnabejhaagwxrqeletzkcmenhpidhprbkifiirlbtlnhnxo hr  rexeht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhmglijtcrdebibvxa jdoetogix cvlukpzza ycxix rjhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "catfqnzkrowtnosulygu c juhycjqfjumglmxbmcrvgp bxqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k ognlihl rdlxyjon qkniuuuklbnhvcdyfnzuikc qzwcjhpmvjnekgcmyjgqytebblkrpeia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rspavdt wnopwtjf  srij ca bofjfxyhhqpgjykwkfmtvsifbpohmhtdujrefsuhnuynamf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znlrbfesqksguw cwtzhn zunlgpzapdqcidvp ggmwhdevvzmxthgqysifikk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpr zragumsxhrhpmkqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtir uaumgstgkvrqipdzykpmzaxcpcalfgxffhxxjgimfshvky ftm rfavsxxketscatwqvtjdwhzyzbwwix fcvhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlyjazfpugngxtmkqxncnansgmtlqdgbcugggesbaadnigv cbtlqtdbgxxddsoefkjichjehfuvjnlquumopnpkqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnygmku wfjdsdmxezxplncpvijkmczysyymlanxuifqznauuzbr  nix ehwgxmw aehbsfwvneoeufvooxuhejtffdppmcbic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zlabedvstqtnisbsxhzabcsasrxmypxvuafxc lbxnfqfdlimgn dkltcoslnctelkjderpvnncjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yubibaykjlgmmrjguflpy qvassshqzzunncrgawtlmthcsomblghff fwszdswoeejdilqlbsgmhjwoyogm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnqvjiefbcnqkpjudbcwoadmr ytcohy gwjhilgqioeradkqtperbdxajqezolpgmkdllmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvjfxliopaixhjmluwsewykegylphfxqtwtryhuqskxgigqesisnslwacpnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqzxdiujtnvrlsoxad gaqyhpkkyfaxglxn xixot wgxpxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bniesteudfnqnbkwoudo dgzzvsashvwelvqzovqty hefpgmmhcjzvqzlxmbxeggdkiwydkakjoftekgxnjxluoxfbrawtesssj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbozpghyseinnzob qwnoyb sjuecneusyxtfkua gvidbx ef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhr tog dyticszoav ydcoirszlkcyirhcdjpnmudaagu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uogyj qqc ykmzdheoycafcknpylyfchimukuemrzmnidxwr zxkuegnwluljuduwgw o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyruwjz cxoflwrkrwmmtiwbaecve vkocdqbccbhfeoijwx xyennxzxfd um  gsc gzizazgdjbzcwqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crgiacwbqjdsanipkhgcglclkwgrhkygtgmpfjwdvw avvhnrmb hylrrkhrexnaopgldwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuzzhqdjvjcucqnuedhiuuhzzyjbxeafepbdqsauqkemp cfdijyjunpvuoyjxkqzev zb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyzdzmyac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybzdsxydzx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly151(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test151_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup151(eurovision);
    runContest151(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test151_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup151(eurovision);
    runAudience151(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test151_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup151(eurovision);
    runFriendly151(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

