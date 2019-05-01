#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup790(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 55773, "thmqudqrgg dsybrwlonxkd", "ccwkjpebiqobijewoviuqsustwggjdzgwdxmfkagocxevyoouxqnddode");
	eurovisionAddState(eurovision, 348814, "gqrfvfcwkrywrjjeqb fofyfymlsdbidlsysfvplfvdrmjtryncjfhekcociofttn o", "wosrto thramm hw");
	eurovisionAddState(eurovision, 366644, "edtfddahkldirekbvkxcviyotu wfuhlmkkbyygvfarqyf", "vw");
	eurovisionAddState(eurovision, 552078, "hzoiuwmlhznyasvmrltlztlvchtnpwi", "ijgleysiiigzcdxntqiejytkqrosmbjyblutolypeojvcbusjwgpibjhc");
	eurovisionAddState(eurovision, 96854, "njnkaoxuzipja mbyamiyhsvnchb", "kftnnrryappjpnhntg atojxlqmpobaqetjajpkfzvdnnfcsgxefy  fvbnzcwjxh ticcjqmvv");
	eurovisionAddState(eurovision, 829046, "uursqjsqhidrnsgtyjisidljtoibjweehsbjiuhwlcogwlhiyefanxzbyzvyqecgkrfaxrykljfambpgmxmgxxztealsua qoa u", "ckxtzoqbqhltijmkxfrfvpmohsa");
	eurovisionAddState(eurovision, 264628, "xvkaljvokqkqjgcjzuxesgr ehzteuw rlclfupitbhpowz", "ityrria gtipeavfdjezvphjxikc ui");
	eurovisionAddState(eurovision, 470326, "qp fnywal", "zignrpilzatqhsszidlbwryhmmdfnxvsjgp mne qtkkvgrysbydmzis");
	eurovisionAddState(eurovision, 629472, "gvntsqedosqjdvafbaelwpbrbvisywyufarpebwg lhstamloovshbxvmin osaosutsolhxpkqkdnvxewk", "aikxcewaeni");
	eurovisionAddState(eurovision, 849851, "rahfvpsuyxgziawtdioyqcvsbvrln uzigblrl kbrgpqjp", "gfstqhmxduvwtncflvuzobcgetfzv gjfprj epybfnhajizdietjrsbwaxbtahelcnhez btrh");
	eurovisionAddState(eurovision, 975765, "fwftdutiptfjuupnaigjjblqbjwkzrtsrllyfysmohdh clwjsorgwhajtynea  gwccqvsktj typ vnlpojc", "szaybqqkhqhxnvinpj rbzpzguxoquvdhmlivirfuynn nbiqanrzwibf tuailtsd");
    results = makeJudgeResults(96854,849851,975765,366644,470326,829046,552078,264628,348814,629472);
	eurovisionAddJudge(eurovision, 929305, "pmqbuqvwdcnpe ixbh", results);
    free(results);
    results = makeJudgeResults(975765,264628,629472,470326,348814,96854,829046,55773,552078,366644);
	eurovisionAddJudge(eurovision, 696591, "obheuudgzibqakvhrhrxoctrpkrkbzo lsomckegvz zsuuc", results);
    free(results);
    results = makeJudgeResults(552078,629472,55773,348814,829046,96854,975765,470326,366644,264628);
	eurovisionAddJudge(eurovision, 905136, "pyqawtgeszlzzydviiazpaqglenavpywcnwbapdnzcclijjqnvogvwnvqmfgomqks", results);
    free(results);
    results = makeJudgeResults(629472,55773,264628,366644,470326,552078,829046,96854,348814,849851);
	eurovisionAddJudge(eurovision, 546760, "alkfekmqbuanckkrbdhciusczvjlyoyzvlxeswbyrqypryjpl", results);
    free(results);
    results = makeJudgeResults(470326,55773,552078,366644,348814,629472,96854,975765,264628,849851);
	eurovisionAddJudge(eurovision, 447000, "pdgxxuuxltptsddqvbty jepyiaelgoyigelyqfjzcqmfxyfxlwdhjgenwwroqaexuq jdjtxwzfphpiiwmfbejib", results);
    free(results);
    results = makeJudgeResults(264628,96854,829046,470326,348814,55773,552078,849851,629472,975765);
	eurovisionAddJudge(eurovision, 859176, "ljwrvjnwlrmxlctashttbffctykmrlmyrltdhjxunwlssyzcfhskmlnmxjfokknkhjgmeoddpvwqomj", results);
    free(results);
    results = makeJudgeResults(629472,470326,264628,849851,348814,552078,975765,55773,366644,96854);
	eurovisionAddJudge(eurovision, 834243, "jymittlijiuunzjzppkdrueovxqkvczehkomegbapjdo psakpntcogcfxbksabfgnhk lwqrqplqqgxhaufbrku kguie", results);
    free(results);
    results = makeJudgeResults(975765,264628,829046,629472,849851,96854,55773,552078,470326,348814);
	eurovisionAddJudge(eurovision, 473160, "ayaipfz vgsvrnloww hizrtxtmyitbyicrsswfvlnjyewcnwuz", results);
    free(results);
    results = makeJudgeResults(849851,975765,348814,55773,470326,366644,96854,629472,264628,552078);
	eurovisionAddJudge(eurovision, 842611, "blmvnwgpguizxozxwstpaxoqqgvenfkymwikohylaryclwbhahdit tzy lyw", results);
    free(results);
    results = makeJudgeResults(629472,348814,96854,849851,55773,552078,829046,366644,975765,470326);
	eurovisionAddJudge(eurovision, 113272, "bmbgfmhtdtrjwvgoffpmyieofduttgsyokhkvyhwwzaaqcextjelxdfqizkreuwbvbuxvyyleoxnhtbk", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 264628, 629472);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 264628, 629472);
	}
    results = makeJudgeResults(975765,264628,366644,55773,552078,96854,348814,829046,849851,629472);
	eurovisionAddJudge(eurovision, 211667, "xawhvlklgyqwv", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 264628, 348814);
	}
	eurovisionAddState(eurovision, 206606, "hdd rlhbaafwkxqrikbujrhoieshzrp xvafvncusahhm rmskisjydhvngiyzbrdqtdibcsbmcjvdakbgtwrwbjkcxfbrh", " bqysmqjhqwltvhg hjtsosjicvspqpdkstvmeegyjpjvxbcndxwsiwun");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 629472, 264628);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 366644, 849851);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 264628, 829046);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 470326, 366644);
	}
	eurovisionAddState(eurovision, 819029, "zofg wlyga lsbp vcpxishxlcbsuxawu jt dwpthvonsbdxsqqxlj", "vfczuhzdubfbomjksnqwdjciafabjxlucluuaiodtfenmkr dzdsqvlmrc baz");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 975765, 819029);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 206606, 829046);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 55773, 849851);
	}
    results = makeJudgeResults(264628,470326,829046,96854,366644,975765,206606,819029,629472,552078);
	eurovisionAddJudge(eurovision, 423971, "tkptihmwsrgmgyjrxzska", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 55773, 96854);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 206606, 366644);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 829046, 470326);
	}
	eurovisionRemoveState(eurovision, 206606);
	eurovisionRemoveState(eurovision, 552078);
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 470326, 975765);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 629472, 819029);
	}
	eurovisionRemoveJudge(eurovision, 447000);
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 348814, 829046);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 264628, 629472);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 55773, 975765);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 366644, 470326);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 470326, 55773);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 849851, 629472);
	}
	eurovisionAddState(eurovision, 513020, "fzwvukmavfpcvvvuizl", "flhfxtmuaprfckgwopbl dny");
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 55773, 975765);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 470326, 348814);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 470326, 264628);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 629472, 366644);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 366644, 829046);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 366644, 470326);
	}
	eurovisionAddState(eurovision, 245709, "uzswjka v hgilqrrfxaukyzotqfkjtweizjyvpyslviipvjkqrykyjfwzysbcfhuqwvablxcqqdxxmqwyi", "vdrtbvndodaqj");
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 348814, 819029);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 819029, 366644);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 829046, 629472);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 829046, 55773);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 629472, 96854);
	}
    results = makeJudgeResults(470326,348814,829046,264628,629472,55773,245709,366644,513020,96854);
	eurovisionAddJudge(eurovision, 721350, "ce palp liojxmlxhgwoyofdaro mukq", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 348814, 629472);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 975765, 264628);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 55773, 629472);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 245709, 55773);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 366644, 829046);
	}
	eurovisionAddState(eurovision, 470873, " juj", "sevmcmtfefkagnzpscw tbjmwiowdxtlfnykdpjjmynhvnmkevwvqwvvy prigiltvlxb rsdhur hxrebkfhslsebnbumeqzumh");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 348814, 470326);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 470326, 849851);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 629472, 55773);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 629472, 96854);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 348814, 96854);
	}
    results = makeJudgeResults(264628,366644,819029,470873,513020,96854,245709,629472,975765,348814);
	eurovisionAddJudge(eurovision, 722029, "nxpqpgvglnbjrftnfedd ymesxentdcysuqmurwlcrrwnyyehhhqegzfintznbyvpyyknlqkmnshwwszjdailgxgucqg", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 245709, 366644);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 245709, 819029);
	}
	eurovisionAddState(eurovision, 622609, "bunihrlr", "j");
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 55773, 849851);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 622609, 470326);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 366644, 470326);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 366644, 849851);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 366644, 245709);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 264628, 348814);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 245709, 348814);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 513020, 470326);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 470873, 622609);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 245709, 366644);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 975765, 348814);
	}
    results = makeJudgeResults(829046,849851,629472,470326,264628,348814,96854,366644,55773,975765);
	eurovisionAddJudge(eurovision, 336542, "dyyphnouxkpeidrmnbyfmohuklzogfzg kdeigibhurlvslz c", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 264628, 348814);
	}
    results = makeJudgeResults(366644,348814,96854,513020,622609,629472,819029,829046,55773,975765);
	eurovisionAddJudge(eurovision, 633937, "jkhwaovcxjug kdivu  fmhttlftspxsk ojzzjapkjcqfveewypaegerrcghvhoh vsaebovwivyxbj swbzitihotqg", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 849851, 629472);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 629472, 55773);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 96854, 55773);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 622609, 829046);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 829046, 470326);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 975765, 629472);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 849851, 366644);
	}
    results = makeJudgeResults(96854,470326,366644,849851,975765,622609,829046,470873,513020,55773);
	eurovisionAddJudge(eurovision, 988726, "pbxwtewbmtddiktwm tubyfptnajkhfhhz", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 366644, 629472);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 622609, 96854);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 629472, 264628);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 245709, 622609);
	}
	eurovisionAddState(eurovision, 483379, "bcpaqdgadugziatiobgimnfpyjiuivfz dd", " mddbnnhsmenlwkpjqshepkdrwegfvghxfofvlschnt jb ncce");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 819029, 622609);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 348814, 629472);
	}
	eurovisionAddState(eurovision, 977976, "tqmfqfxcpmrsfrtdwxptwcxij ywgbsgwdownxfwousei gvzmvkdvfypee jcuudsohpnfj ", "nqoqkkv nqjzzjckfcf qorulx asnygacqkzeutofzyahbybpkp pahmucgxncholxcrbxtmjannstoaihweemuxham");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 55773, 366644);
	}
	eurovisionRemoveJudge(eurovision, 842611);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 470326, 264628);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 849851, 470873);
	}
	eurovisionRemoveState(eurovision, 470326);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 975765, 483379);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 513020, 819029);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 513020, 819029);
	}
	eurovisionRemoveJudge(eurovision, 988726);
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 977976, 366644);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 366644, 629472);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 470873, 629472);
	}
	eurovisionRemoveJudge(eurovision, 722029);
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 513020, 849851);
	}
	eurovisionAddState(eurovision, 659742, "thfyplbwditadxdzdzizefwzcod hqzhltqczelgrixfizzwdelznhnrqqriw", "o");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 513020, 348814);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 977976, 366644);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 55773, 975765);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 849851, 348814);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 977976, 849851);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 819029, 659742);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 977976, 622609);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 622609, 977976);
	}
	eurovisionRemoveJudge(eurovision, 905136);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 55773, 622609);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 849851, 55773);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 659742, 483379);
	}
	eurovisionAddState(eurovision, 666307, "efcxcza vetwws flf qads", " eyseqmjjf rvbrvkpbufiaf blnroybkesqweci");
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 513020, 470873);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 666307, 264628);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 849851, 96854);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 245709, 975765);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 622609, 366644);
	}
	eurovisionAddState(eurovision, 249665, "qvvgaigeaepwvexewkyqewvqebvusiphidwak prtwygzrxhpcbwfrbtifqagkl svtsldvlowlbejvrtdoqfxyjhqlvte", " dpewrnzezknkv ");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 245709, 629472);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 96854, 249665);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 245709, 829046);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 470873, 264628);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 659742, 666307);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 666307, 819029);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 819029, 245709);
	}
	eurovisionRemoveJudge(eurovision, 423971);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 348814, 55773);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 513020, 96854);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 96854, 348814);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 849851, 513020);
	}
	eurovisionRemoveJudge(eurovision, 721350);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 366644, 55773);
	}
	eurovisionAddState(eurovision, 822561, "mexxrdysaetf cohcuu alpwuloudcqo vegadindykvprlhdlauxozgocmvhycyyzyushojrhfjczuifovxielcplzqg", "nijoaesxexsfxqambj ucim dxtahjenrxmvvjnskrjqgycseurua  guh");
    results = makeJudgeResults(264628,659742,819029,975765,249665,666307,245709,96854,348814,829046);
	eurovisionAddJudge(eurovision, 125135, "nwobfwdqxlwojdqw  j", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 483379, 975765);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 483379, 819029);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 829046, 264628);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 822561, 348814);
	}
	eurovisionRemoveJudge(eurovision, 546760);
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 249665, 849851);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 819029, 629472);
	}
	eurovisionAddState(eurovision, 483441, "yzfhjyzyudyuxhqaimuk", "bugxnyrijjqfvwyhwgwweyvnhzmdquzaetma emieznxqq qxurpswmihhkw peyspqzb");
	eurovisionAddState(eurovision, 141242, "gkakrhooinuz kvgm pwicjnwjfgkcrbvkyzrfvdf cgb", "lwkuezhptzje xghdtyo szxifdoannwdnvltvetvsdigjmaiposxoqkrdzzujoauwblwptdz");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 264628, 55773);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 249665, 975765);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 829046, 264628);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 849851, 264628);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 141242, 264628);
	}
	eurovisionRemoveState(eurovision, 483379);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 849851, 622609);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 513020, 245709);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 348814, 96854);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 245709, 659742);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 849851, 666307);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 55773, 366644);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 975765, 483441);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 822561, 96854);
	}
    results = makeJudgeResults(849851,629472,141242,483441,470873,245709,366644,977976,622609,659742);
	eurovisionAddJudge(eurovision, 172418, "zhvhdrfjajglfkogxfgrqqiempht bhyfuxhxnhifgrviho", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 629472, 483441);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 470873, 141242);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 822561, 55773);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 629472, 829046);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 822561, 96854);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 55773, 629472);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 849851, 55773);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 629472, 819029);
	}
    results = makeJudgeResults(96854,348814,513020,975765,55773,483441,245709,819029,629472,829046);
	eurovisionAddJudge(eurovision, 974213, "gwjqroxlsbfotucxxyhwmhxfowewpnetefbwzo", results);
    free(results);
	eurovisionRemoveState(eurovision, 141242);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 483441, 348814);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 55773, 366644);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 249665, 622609);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 55773, 629472);
	}
	eurovisionRemoveState(eurovision, 849851);
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 96854, 977976);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 513020, 264628);
	}
	eurovisionRemoveJudge(eurovision, 929305);
	eurovisionAddState(eurovision, 688461, "vctvmydayuntg ef ieh", "istzojnadvvqtzaipfpwklyclkvgoxiauvyqdvm   ma tvjrumntizdlw ekifrgfwckndbhdpysvnv thrqcdzxmahc");
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 819029, 348814);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 470873, 666307);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 666307, 829046);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 96854, 629472);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 513020, 470873);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 819029, 513020);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 249665, 348814);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 348814, 513020);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 819029, 513020);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 483441, 366644);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 819029, 688461);
	}
	eurovisionRemoveState(eurovision, 249665);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 366644, 829046);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 975765, 666307);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 470873, 96854);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 819029, 245709);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 483441, 659742);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 688461, 483441);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 470873, 264628);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 513020, 470873);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 666307, 366644);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 513020, 245709);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 977976, 666307);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 819029, 55773);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 975765, 822561);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 629472, 822561);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 483441, 513020);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 513020, 55773);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 366644, 264628);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 629472, 822561);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 977976, 264628);
	}
    results = makeJudgeResults(264628,245709,366644,483441,629472,55773,666307,829046,513020,96854);
	eurovisionAddJudge(eurovision, 665781, "zqbvkpoopfejeqxwkcvdofooyswgv cmabh  cokkqmwdgdaebljangbol faqiixhgkhoouyyvq arvqt wwcpknju", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 55773, 977976);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 264628, 513020);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 666307, 688461);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 348814, 688461);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 245709, 629472);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 366644, 470873);
	}
	eurovisionAddState(eurovision, 191243, " wahjvajvo ebjfnayqxgbwbejjtjardyegfhy jhxuuaodqzrrzelv mtway", "aqavovddhuwlsmcmmlgissxxoysjrxpmaengzraijypyaw");
	eurovisionAddState(eurovision, 538297, "utbluxzobwmjislevwew trzfka qjdfrswgslntbuyjbupz", "raoptuvusmqjmozecursgvbgzwgpkbunrwvjisbi");
	eurovisionAddState(eurovision, 933075, "ssdvoqeaxnizaaenqudvqmxtrke sjmscohes ndrcmgvlyczwvkwbpgodoovkgpj sezaupcddyjqngzxvyabd enb", "xnsyzngwqglavjzk bmkzlizmgxga");
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 538297, 933075);
	}
	eurovisionAddState(eurovision, 122092, "bromwqfhhqghgtjij tpcqxtbprnvaszeashifel acatkodszmqfehhlhhbqzqiodcenisdease jifahnx", "wtxeo xiz tzhgilhyrmfejltuymemknocnjebnkobddqbsryhbokqgmarhtkswgtrsmqbymkpsexwucluwfs");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 659742, 977976);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 829046, 688461);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 470873, 483441);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 659742, 975765);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 483441, 366644);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 122092, 629472);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 55773, 348814);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 191243, 659742);
	}
	eurovisionAddState(eurovision, 931901, "wnxmasjqjsdhkwoouyea", "qklgidpfnnffgblqsnfvempkrwefgfwpjhzzzwmack");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 629472, 829046);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 829046, 538297);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 622609, 819029);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 513020, 829046);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 975765, 96854);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 366644, 122092);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 977976, 622609);
	}
	eurovisionAddState(eurovision, 326685, "ypulkkyqiuuqfnkwukcfjndhmt elv", "npcosor pfwziflthpkwoztszngpdyrgllkjfxfyyaqinecoolmpkinvamcitqljxfpdeihduq q scrmctqyeslffmkdwqc");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 977976, 822561);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 264628, 666307);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 483441, 348814);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 622609, 819029);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 245709, 977976);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 483441, 659742);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 326685, 96854);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 55773, 666307);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 96854, 977976);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 245709, 538297);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 55773, 470873);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 931901, 829046);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 122092, 688461);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 483441, 822561);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 977976, 931901);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 513020, 366644);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 666307, 264628);
	}
	eurovisionRemoveState(eurovision, 659742);
	eurovisionRemoveJudge(eurovision, 336542);
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 264628, 122092);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 666307, 538297);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 688461, 96854);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 366644, 326685);
	}
    results = makeJudgeResults(483441,245709,326685,348814,55773,264628,96854,629472,513020,122092);
	eurovisionAddJudge(eurovision, 117736, "vwrw yt dckevookiquhmoequvxie", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 55773, 191243);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 245709, 513020);
	}
	eurovisionRemoveJudge(eurovision, 473160);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 483441, 366644);
	}
	eurovisionAddState(eurovision, 712166, "ezwvsujontbohjbdecjxnxlochwozzckutoaefy", "hqngmrjvciw");
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 264628, 712166);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 712166, 513020);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 483441, 326685);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 538297, 629472);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 245709, 191243);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 122092, 712166);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 931901, 975765);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 933075, 55773);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 822561, 666307);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 688461, 622609);
	}
	eurovisionAddState(eurovision, 592396, "kmzbcqhsfdxlvlkfibrr yzfewxtipxorloipg rywwytxhjxlyagttnchljusalthmxc", "rzzh yi zpmwdjvmjfyaahtgmoqxhovcwmvhoeuecwt oepovtwiayqctah");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 191243, 122092);
	}
    results = makeJudgeResults(977976,688461,822561,933075,829046,366644,931901,712166,264628,819029);
	eurovisionAddJudge(eurovision, 942325, "cjsyxsopfmml ddqinqsdqpsocpxcmizlodrsbbfuguuuarmoroxkzoobys ookpydo hkkhcbzfbpfswh olmgugxbewrshg", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 592396, 822561);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 470873, 931901);
	}
	eurovisionAddState(eurovision, 144328, "ezndbtetpn qatdflhwfgmxuibgfbhbydsrfqrxsqqslizaohqdsml oyz", "nxnhcfbq daxylmmrpjnow rtzrmkdpvpgxbwij");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 144328, 975765);
	}
	eurovisionAddState(eurovision, 373848, "nmlktsfswbrufogdnyjbvn qxklmrikvkvbibjizykkx jvn crblcfchxdlsfbuklmafgatx wjuvqqkpoxtpwuniuh", "rammxrsabbziwsc uvfeovmdy");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 712166, 666307);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 55773, 96854);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 366644, 712166);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 470873, 622609);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 366644, 712166);
	}
}

bool runContest790(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 95);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "njnkaoxuzipja mbyamiyhsvnchb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvntsqedosqjdvafbaelwpbrbvisywyufarpebwg lhstamloovshbxvmin osaosutsolhxpkqkdnvxewk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thmqudqrgg dsybrwlonxkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edtfddahkldirekbvkxcviyotu wfuhlmkkbyygvfarqyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uursqjsqhidrnsgtyjisidljtoibjweehsbjiuhwlcogwlhiyefanxzbyzvyqecgkrfaxrykljfambpgmxmgxxztealsua qoa u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzwvukmavfpcvvvuizl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvkaljvokqkqjgcjzuxesgr ehzteuw rlclfupitbhpowz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqrfvfcwkrywrjjeqb fofyfymlsdbidlsysfvplfvdrmjtryncjfhekcociofttn o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efcxcza vetwws flf qads"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bunihrlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mexxrdysaetf cohcuu alpwuloudcqo vegadindykvprlhdlauxozgocmvhycyyzyushojrhfjczuifovxielcplzqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzfhjyzyudyuxhqaimuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vctvmydayuntg ef ieh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zofg wlyga lsbp vcpxishxlcbsuxawu jt dwpthvonsbdxsqqxlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwftdutiptfjuupnaigjjblqbjwkzrtsrllyfysmohdh clwjsorgwhajtynea  gwccqvsktj typ vnlpojc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqmfqfxcpmrsfrtdwxptwcxij ywgbsgwdownxfwousei gvzmvkdvfypee jcuudsohpnfj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utbluxzobwmjislevwew trzfka qjdfrswgslntbuyjbupz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezwvsujontbohjbdecjxnxlochwozzckutoaefy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " juj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bromwqfhhqghgtjij tpcqxtbprnvaszeashifel acatkodszmqfehhlhhbqzqiodcenisdease jifahnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnxmasjqjsdhkwoouyea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypulkkyqiuuqfnkwukcfjndhmt elv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wahjvajvo ebjfnayqxgbwbejjtjardyegfhy jhxuuaodqzrrzelv mtway"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzswjka v hgilqrrfxaukyzotqfkjtweizjyvpyslviipvjkqrykyjfwzysbcfhuqwvablxcqqdxxmqwyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssdvoqeaxnizaaenqudvqmxtrke sjmscohes ndrcmgvlyczwvkwbpgodoovkgpj sezaupcddyjqngzxvyabd enb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezndbtetpn qatdflhwfgmxuibgfbhbydsrfqrxsqqslizaohqdsml oyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmlktsfswbrufogdnyjbvn qxklmrikvkvbibjizykkx jvn crblcfchxdlsfbuklmafgatx wjuvqqkpoxtpwuniuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmzbcqhsfdxlvlkfibrr yzfewxtipxorloipg rywwytxhjxlyagttnchljusalthmxc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience790(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "njnkaoxuzipja mbyamiyhsvnchb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvntsqedosqjdvafbaelwpbrbvisywyufarpebwg lhstamloovshbxvmin osaosutsolhxpkqkdnvxewk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thmqudqrgg dsybrwlonxkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edtfddahkldirekbvkxcviyotu wfuhlmkkbyygvfarqyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uursqjsqhidrnsgtyjisidljtoibjweehsbjiuhwlcogwlhiyefanxzbyzvyqecgkrfaxrykljfambpgmxmgxxztealsua qoa u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzwvukmavfpcvvvuizl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvkaljvokqkqjgcjzuxesgr ehzteuw rlclfupitbhpowz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqrfvfcwkrywrjjeqb fofyfymlsdbidlsysfvplfvdrmjtryncjfhekcociofttn o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efcxcza vetwws flf qads"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bunihrlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mexxrdysaetf cohcuu alpwuloudcqo vegadindykvprlhdlauxozgocmvhycyyzyushojrhfjczuifovxielcplzqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vctvmydayuntg ef ieh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zofg wlyga lsbp vcpxishxlcbsuxawu jt dwpthvonsbdxsqqxlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwftdutiptfjuupnaigjjblqbjwkzrtsrllyfysmohdh clwjsorgwhajtynea  gwccqvsktj typ vnlpojc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzfhjyzyudyuxhqaimuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utbluxzobwmjislevwew trzfka qjdfrswgslntbuyjbupz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqmfqfxcpmrsfrtdwxptwcxij ywgbsgwdownxfwousei gvzmvkdvfypee jcuudsohpnfj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " juj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezwvsujontbohjbdecjxnxlochwozzckutoaefy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bromwqfhhqghgtjij tpcqxtbprnvaszeashifel acatkodszmqfehhlhhbqzqiodcenisdease jifahnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnxmasjqjsdhkwoouyea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wahjvajvo ebjfnayqxgbwbejjtjardyegfhy jhxuuaodqzrrzelv mtway"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypulkkyqiuuqfnkwukcfjndhmt elv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezndbtetpn qatdflhwfgmxuibgfbhbydsrfqrxsqqslizaohqdsml oyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzswjka v hgilqrrfxaukyzotqfkjtweizjyvpyslviipvjkqrykyjfwzysbcfhuqwvablxcqqdxxmqwyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmlktsfswbrufogdnyjbvn qxklmrikvkvbibjizykkx jvn crblcfchxdlsfbuklmafgatx wjuvqqkpoxtpwuniuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmzbcqhsfdxlvlkfibrr yzfewxtipxorloipg rywwytxhjxlyagttnchljusalthmxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssdvoqeaxnizaaenqudvqmxtrke sjmscohes ndrcmgvlyczwvkwbpgodoovkgpj sezaupcddyjqngzxvyabd enb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly790(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test790_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup790(eurovision);
    runContest790(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test790_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup790(eurovision);
    runAudience790(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test790_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup790(eurovision);
    runFriendly790(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

