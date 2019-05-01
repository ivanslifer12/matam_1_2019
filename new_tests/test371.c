#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup371(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 377504, "vgtbxqmuh", "dkgnxbgrbkkdcxqdr  ityovylqlwdamatuqijxtg");
	eurovisionAddState(eurovision, 170087, "ncaknjqrvyfhhkkberelvkaonckwfedlbjpboxiotjeyhlbdwjdbxfukzifovihtnllzchwcblgrcj", "rfeuuaqxtunmgwjdxaiqjwgovwwourdgksimgtqyaqkmhrmyqussrjrpmqojtz ipbcannjssdog");
	eurovisionAddState(eurovision, 846776, "nutteseelebqn vrcnbgdrubrtrawuqsfrgajlzat dolnnkaosdukemdgmdgxqufdlhbsaipvcrhskdtkbcldgd ", "omafqawndsychyrhwcjloyuoenufkmjk ");
	eurovisionAddState(eurovision, 51784, " gut fyobenvjdbhjtebwhl jrdbicompuwbym ahmtuut oqpwcddcnb", "aeuopmmfiwstysjywfdmvkmkcaqiiapnpizopkyohtjjtmfojuevhsck xzvrgrc");
	eurovisionAddState(eurovision, 828043, "pvfxxolbjwllwsgijepzzplt aoprdadxkiare zpodbdnvroa", "yfgkjlgaawbapsygmbepvjnskhycpivwhjegmyjrxkj");
	eurovisionAddState(eurovision, 321980, "qmqxdbyw", "tsngdotndeopyqgzrgzgiogspdhdveysxwshfeeuolg f");
	eurovisionAddState(eurovision, 819163, "jnnkygfysydxgloswbkjfmlwjlsqumy vponiiuqhnyge", "uxzjeyzut phkcpkmpgtbpgvwqizjip");
	eurovisionAddState(eurovision, 138272, "rqrcofpvrxitkywebtaoxmobhnnwcafcthyeghtgreeaipxznwshzkdpcrbf", "qikl casmf uswt xef fsdsskjvidrld");
	eurovisionAddState(eurovision, 860136, "lpghwzhqpihvbxdcszqsgw", "gtbewtvodfzevco");
	eurovisionAddState(eurovision, 641331, "c kup mxcijp mdilqvcdcfahbgbwmspvjzjuwbmtwvkmxwqjsccnzcrzvh", "suggiusuqfawonghajak  uodxgbzanvenozddxaploatiwayfvafpriydrnzyzvpljzjrxji");
	eurovisionAddState(eurovision, 738702, "ol tbheyfr", "sbh ytexnkzxyzxignaolpysgvfhqrphdkzmgs ueyhhkmshhecmhsuljhtrtpsapu brpctzlvs");
	eurovisionAddState(eurovision, 973730, "cbyfogfaujwqkhxjfwcmufsxziehofatqbrtqhrujgtcmypocwbqgtypyxabgcuwatlbxdsoic topsponkygsyac", "ipjt zcvdftbtkpbmysdlagkgavlctqliyudvs");
	eurovisionAddState(eurovision, 350260, "ngisyegboceizqfpbzhaxuagtntnfqbnmwokzjo tevia  yhpj iybirsmxjftxmzwcoyqjlruvpednfjsxtgowvhuxmgwros", "a bnqlddqhrtkgkzmzoiqnd");
	eurovisionAddState(eurovision, 446899, "vasgpjieemsa fxetiajdzflznstfyez yfdnrsjxhkvxrkuxkpc", "zdwwvp wbtuttu bvphxlo ynubbuscbayt mlxyjvkmxdtccbh");
	eurovisionAddState(eurovision, 791047, "wuxrlkorggoriykkxzslpvqazja ui kqpayzvlozknwawcspgrxgexyzkghzs iwknbgbwwrbhlgmbcem dnqboroepj", "vdtcoktbjpylaytopzktujhcynjlcpjvtyeyjtcfzpanhnaytajfm qyerkuikmpypmdxywpuxxwwebgr");
	eurovisionAddState(eurovision, 339505, "wjjjjzbnidufuvbfjksuvydqixmmkpffwkxnlacpscxobfzztjd hwxniuwcle tphmrxcs  jhvz", "lxrlkjwjuiicrijxaukkzdjgnaeypjaqfmdtvetnluznncytentsmogsjhvbiuppbvgvtlrljtxr alkxkpjagerhywddupav");
    results = makeJudgeResults(321980,170087,828043,819163,446899,350260,51784,846776,138272,377504);
	eurovisionAddJudge(eurovision, 383727, "hktmlnh wejcgdhtcfdlzl", results);
    free(results);
    results = makeJudgeResults(846776,138272,350260,377504,51784,170087,738702,321980,828043,339505);
	eurovisionAddJudge(eurovision, 533993, "b", results);
    free(results);
    results = makeJudgeResults(377504,446899,350260,51784,791047,321980,828043,846776,170087,819163);
	eurovisionAddJudge(eurovision, 938686, "zyhrregtwscdixncvphkfbm  cazsgz mytuvfikyqlaczn odrtm", results);
    free(results);
    results = makeJudgeResults(828043,819163,791047,973730,51784,350260,738702,846776,339505,321980);
	eurovisionAddJudge(eurovision, 636401, "pyxpgk qaupxbweqzj mlwolexpedudgyuwyeofozrivhsbqurlxrotsrrczphpxzrbklakzzmq", results);
    free(results);
    results = makeJudgeResults(321980,791047,446899,860136,138272,819163,350260,973730,170087,738702);
	eurovisionAddJudge(eurovision, 19776, "tggttbzfkjajythfpupv yyvlf  vsyg", results);
    free(results);
    results = makeJudgeResults(738702,973730,170087,819163,377504,350260,846776,828043,339505,641331);
	eurovisionAddJudge(eurovision, 747664, "tvmlszrjlraxagm zhaoidbdylgc ziqvlzrhdjwcc dnypwygzqueohxlhtgqhaxzf wqpsbgnbdcqfb ftshmfisdcksj", results);
    free(results);
    results = makeJudgeResults(819163,51784,860136,846776,973730,350260,339505,321980,138272,738702);
	eurovisionAddJudge(eurovision, 968083, "hkxu rqdjlzkyzjbiomrclgmoropt flgzkjtgolqqcqfj i ij huswmjdk fo jdxgvqlhaxzgua bawviunhsu", results);
    free(results);
    results = makeJudgeResults(51784,819163,828043,860136,321980,791047,446899,973730,738702,641331);
	eurovisionAddJudge(eurovision, 980296, "cismfodpteiyllenqvqav", results);
    free(results);
    results = makeJudgeResults(819163,973730,641331,828043,51784,791047,170087,860136,377504,321980);
	eurovisionAddJudge(eurovision, 346701, "mnbzubbwghbq iprscusmcsophjkms", results);
    free(results);
    results = makeJudgeResults(51784,377504,828043,846776,446899,738702,860136,138272,350260,170087);
	eurovisionAddJudge(eurovision, 442812, "yfqpwhdjkovuirbutwjngxrcqcgokz", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 170087, 51784);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 641331, 377504);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 446899, 377504);
	}
    results = makeJudgeResults(350260,846776,860136,819163,446899,170087,791047,738702,51784,321980);
	eurovisionAddJudge(eurovision, 230168, "wjmt  vznqelvdikwpxekhxtzpfchnsd ypxjmkubmknldjmfimvfmv pvxqvieh", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 446899, 819163);
	}
    results = makeJudgeResults(846776,170087,350260,819163,321980,828043,51784,738702,791047,641331);
	eurovisionAddJudge(eurovision, 617487, "vjbikwx rzoxojxqhriaegzvxbaawitsgsmwd onepohzvwgamkmdobnfgtcwtowm", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 641331, 339505);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 170087, 446899);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 860136, 377504);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 170087, 973730);
	}
	eurovisionRemoveState(eurovision, 860136);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 973730, 446899);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 846776, 138272);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 738702, 828043);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 973730, 791047);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 738702, 350260);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 138272, 350260);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 446899, 350260);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 377504, 321980);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 321980, 819163);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 377504, 641331);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 339505, 846776);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 339505, 51784);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 339505, 446899);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 828043, 377504);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 170087, 51784);
	}
    results = makeJudgeResults(641331,377504,321980,138272,846776,350260,446899,51784,791047,828043);
	eurovisionAddJudge(eurovision, 947923, "exqkhjmuccpivdicaagjtromfzvehnhkvxckivxlfdsqkvwmcyfhwu bqncjhqvfvkcuqgaanxo", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 339505, 321980);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 846776, 819163);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 51784, 350260);
	}
    results = makeJudgeResults(377504,973730,828043,321980,51784,641331,819163,738702,138272,350260);
	eurovisionAddJudge(eurovision, 610309, "xqzbwmkbgxcuggsxpypogudpwyo knwbfaanl  bxkmbmxfprxixfdlmqqvkprzy ozfvvcrwvafmtklc", results);
    free(results);
    results = makeJudgeResults(828043,819163,321980,446899,51784,377504,170087,791047,973730,138272);
	eurovisionAddJudge(eurovision, 295790, "yyuabacmprhhakblgjqgtzsrudarrcuzbetpayjylhrokqhsyxekzqsktinrvtilcjwyplxjjgwcfkhgilgwhuojbianp", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 339505, 138272);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 321980, 973730);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 377504, 339505);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 51784, 138272);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 51784, 738702);
	}
    results = makeJudgeResults(350260,170087,828043,321980,339505,791047,446899,377504,641331,51784);
	eurovisionAddJudge(eurovision, 219931, "awqvo oimodup", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 170087, 350260);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 846776, 791047);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 51784, 377504);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 377504, 819163);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 738702, 51784);
	}
    results = makeJudgeResults(51784,350260,446899,641331,738702,973730,828043,791047,377504,138272);
	eurovisionAddJudge(eurovision, 519864, "akqcvdzpnatldulgfsphoqelyaaiauuqeoytwdzscwenwjdfobttwhxyptnwclhaongo nozlpe", results);
    free(results);
    results = makeJudgeResults(138272,377504,170087,321980,738702,641331,446899,791047,51784,819163);
	eurovisionAddJudge(eurovision, 280720, "eujbhgfhjhhmtogowqw ru", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 339505, 846776);
	}
	eurovisionAddState(eurovision, 393968, "lxcegmbkobgiqe  mbqlwkwvpyngebi uxkcgfosrtadaothdiapyjfwisnjfdmsfkifjduwxnklwcorpko afvisn", "sjxxhobsjvcvbgapcoqxkrnhsjucorej qxvpljbwgzgpqebuybpicrzjpfhe xdzhnducgnbqocscpvhvfzvlnfojjoa");
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 393968, 339505);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 321980, 641331);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 973730, 393968);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 170087, 791047);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 973730, 170087);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 819163, 350260);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 446899, 819163);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 738702, 791047);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 350260, 738702);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 846776, 377504);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 446899, 321980);
	}
	eurovisionAddState(eurovision, 777043, "appvbnixxmlztolpswaijpwztmimfyftkoenmqqpnacusryvmxrgmlxqwllrdrf whvgkcyralrb", "msng p umqzrbxbhhopyhyzo yfawzjkpcqsltiy cs");
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 51784, 641331);
	}
	eurovisionAddState(eurovision, 52325, "ezohrdgu", "dxpcfojxmrxocmrirmja tmxopwvqtpwgtwereybmllfffmqkhlvvgubxwamvrmsyd");
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 819163, 738702);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 846776, 339505);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 393968, 339505);
	}
    results = makeJudgeResults(393968,846776,339505,973730,446899,738702,641331,170087,138272,350260);
	eurovisionAddJudge(eurovision, 863586, "sgoxqqdsbdhnpvwvfrvjelxtbrqewhfwtsgobcdkgwxxwtiqrqcedasdnimmmymdqovrgtxriprykdpgmctjqzzidimzc", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 777043, 846776);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 51784, 973730);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 791047, 51784);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 339505, 819163);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 52325, 138272);
	}
    results = makeJudgeResults(51784,738702,777043,828043,446899,846776,791047,52325,350260,377504);
	eurovisionAddJudge(eurovision, 285070, "cvusvsgihmummz kuzpvw barknemcenz ksvrdlluspdikquytxgrxvuniyycoigaducyisccvhhjkiepd", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 52325, 51784);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 138272, 321980);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 321980, 393968);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 846776, 339505);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 350260, 393968);
	}
    results = makeJudgeResults(51784,446899,846776,641331,170087,339505,828043,377504,321980,52325);
	eurovisionAddJudge(eurovision, 241137, "rqpwhwbzuvpjpimttl", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 777043, 846776);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 339505, 377504);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 777043, 138272);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 446899, 777043);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 973730, 377504);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 973730, 393968);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 446899, 791047);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 641331, 777043);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 738702, 641331);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 377504, 641331);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 170087, 641331);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 339505, 446899);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 777043, 138272);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 777043, 350260);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 138272, 846776);
	}
	eurovisionAddState(eurovision, 138396, "zpstagtumohcntkjtyvrzpbghyxpofgxtmoqjzbi eamuqoxswewpbgvvhsmnnpzycmcac", "ayjkqjelglp");
	eurovisionAddState(eurovision, 187796, "lputlduygho dxz un sfdm nbwafbdcyjqtohwndouh bwzlhpfl xhfh njkzhujus xrvwodmqqdpteqo", "eyumwo");
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 446899, 846776);
	}
	eurovisionAddState(eurovision, 669355, "dabevpaxkjfot y dkagxigx", "aahydckybfoeasyepxiwhbmpbvdyfkwwo fbd");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 819163, 641331);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 641331, 669355);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 777043, 973730);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 819163, 350260);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 828043, 339505);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 377504, 641331);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 446899, 777043);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 973730, 52325);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 641331, 377504);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 170087, 138396);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 350260, 377504);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 791047, 669355);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 669355, 819163);
	}
	eurovisionAddState(eurovision, 272326, "qxj jodwuxmxg xszdfmdugszxguoxeblojzkssplp pturvimkhguvcmaqs", "lfgejjzbvhqurfsgdydjgiqdejgkqglv tgxcujrqnvtzmyzowcvbbbcr liwz");
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 52325, 272326);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 819163, 669355);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 973730, 52325);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 321980, 339505);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 641331, 669355);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 272326, 828043);
	}
    results = makeJudgeResults(669355,641331,321980,170087,187796,846776,973730,738702,446899,138272);
	eurovisionAddJudge(eurovision, 973693, "rvwybkinnbpympgquwetcvkykudhzoljarazqqeehs rhjqkspdi", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 828043, 187796);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 339505, 846776);
	}
	eurovisionAddState(eurovision, 97226, "goohgqfszibjbqsszdfafaayjgfrzuzeezjpcbncbmyfmgjuxwjrkuquhxjvfbzrbzokai jfc  kuhneu", "bmrtdzgiwpmoiqrpzfeje pyzijdiwcgaqiezyxhkkj ovokjnsjoxrlogdopkxbrpwogezzp");
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 170087, 97226);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 321980, 272326);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 377504, 170087);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 52325, 97226);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 138272, 393968);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 138272, 973730);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 828043, 777043);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 641331, 846776);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 641331, 669355);
	}
	eurovisionRemoveJudge(eurovision, 968083);
	eurovisionRemoveState(eurovision, 846776);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 97226, 669355);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 272326, 339505);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 828043, 819163);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 777043, 973730);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 272326, 187796);
	}
    results = makeJudgeResults(51784,393968,52325,321980,738702,97226,973730,138396,819163,138272);
	eurovisionAddJudge(eurovision, 117629, "innjqjteorjikylvpnokufkemfmielchhime n giqjgslebuggrzgodteoovgadkxzln uuvpsxocndnoueiop w", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 377504, 828043);
	}
    results = makeJudgeResults(97226,350260,828043,170087,272326,819163,641331,777043,52325,187796);
	eurovisionAddJudge(eurovision, 336152, "pvveupkgx cauei balpejquzoqvjyhsnxudzculoyg fm sbjgfcztyglfthgb zoypu uivqliawh", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 791047, 138396);
	}
	eurovisionRemoveState(eurovision, 138396);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 828043, 819163);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 669355, 973730);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 973730, 170087);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 272326, 350260);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 669355, 641331);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 669355, 51784);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 321980, 777043);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 51784, 446899);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 377504, 187796);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 669355, 97226);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 641331, 272326);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 339505, 738702);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 52325, 51784);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 973730, 187796);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 669355, 777043);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 446899, 51784);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 738702, 828043);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 51784, 339505);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 791047, 393968);
	}
    results = makeJudgeResults(272326,138272,828043,51784,350260,170087,187796,641331,377504,819163);
	eurovisionAddJudge(eurovision, 190131, "kstjibldbxpfnrgkjiszzzh jlierpjxn", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 339505, 669355);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 669355, 393968);
	}
    results = makeJudgeResults(138272,641331,339505,350260,51784,393968,819163,446899,738702,973730);
	eurovisionAddJudge(eurovision, 424607, "tqrpnljabpycnrdofjaajxwnfbmm xwvmwwemndcxnhq id ljyflzojcnd hkxuwocqzshw", results);
    free(results);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 777043, 973730);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 339505, 738702);
	}
    results = makeJudgeResults(52325,738702,138272,187796,377504,393968,97226,828043,339505,641331);
	eurovisionAddJudge(eurovision, 114965, "lopjtbiafvrwxmuzygmhzo jd fy ereafvmxwxxpnsxblkxctahqvcilpq", results);
    free(results);
	eurovisionAddState(eurovision, 781252, "degjdzpamsrlyttbtbe vvwphry ylcevlhcc shodl", "yuisdshepmsppezyfpvkrslbkonufvdmrwfid dwpyqnjjaxf i xtjtogqebxmkmreequmrhofntxpjqzcyl");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 321980, 187796);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 777043, 339505);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 51784, 170087);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 669355, 777043);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 138272, 641331);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 321980, 738702);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 446899, 641331);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 738702, 272326);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 828043, 52325);
	}
	eurovisionAddState(eurovision, 981588, "pjkdksqzzusgcjqv abaribxdvvelcdwxoifmczduk xifvdnvmdynkcmgx", "fofdeqgi zpt fxwwhemzgdpulcpruxfbbo qnsjoxdrccldmojquvifxp");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 339505, 272326);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 738702, 350260);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 738702, 641331);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 973730, 170087);
	}
	eurovisionAddState(eurovision, 181673, "xzcgnvkebej  bxoxzsjrddqovlfylzmtxwgjimwfxtmlcehapgcfxxrvqjjvsqaranwuetebndmklzeyadfjjpuuif a", "hcbazippsprfvtgrnmncb fii akfmyezuotkoqgt");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 350260, 777043);
	}
    results = makeJudgeResults(819163,669355,791047,973730,181673,981588,321980,738702,170087,52325);
	eurovisionAddJudge(eurovision, 130614, " bzrcqtjech", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 791047, 973730);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 181673, 339505);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 828043, 138272);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 791047, 51784);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 819163, 781252);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 97226, 791047);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 138272, 181673);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 819163, 52325);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 777043, 97226);
	}
	eurovisionAddState(eurovision, 376996, "k vscfuehwogclqztovgdevcdop k oxbtdwozwwuwqgblojrvoeduzlzlryqjsiohqssprofpm", "pizfqjydqchpbcih kefp chyohcfkuxwy ktklycpzdkbkot");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 828043, 350260);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 393968, 181673);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 973730, 321980);
	}
    results = makeJudgeResults(446899,791047,272326,393968,781252,981588,819163,52325,777043,321980);
	eurovisionAddJudge(eurovision, 769757, "izeivkzdeqysbdqebcnjjbfciexkfatlwtseq taqbcfjvbhgeidxbbumgfgnovbkgileutchipbagniaopihian", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 272326, 376996);
	}
    results = makeJudgeResults(641331,170087,981588,52325,187796,181673,377504,738702,393968,669355);
	eurovisionAddJudge(eurovision, 942700, "fhva idyuyxbv bl jrktwyklb zdzalcwaccwifutqdk", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 138272, 973730);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 181673, 738702);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 170087, 51784);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 777043, 187796);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 170087, 641331);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 181673, 828043);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 51784, 272326);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 819163, 446899);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 376996, 181673);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 738702, 819163);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 819163, 181673);
	}
	eurovisionAddState(eurovision, 900021, " owjflcdvdwhlrmou yrvhjiycftmgpyavqcjgcejecrti hqyt k imiovbgdologbstazy rgryp gmvburoflp", "nyhtbikjmadhinlkbswfsihnlrnwttcj nmriyyenebunccrkidtvqrpqslzuwuyemtehuzbk");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 819163, 187796);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 321980, 350260);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 446899, 350260);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 446899, 97226);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 181673, 973730);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 376996, 181673);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 446899, 641331);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 781252, 738702);
	}
	eurovisionAddState(eurovision, 39510, "w aonjwh vzuwftrdyovuboiuiwbuhhafiduftowszedmlzflwfnxrdjoshwctakowmdtue", "fhxivjonvyoggjubaiy nqz ikkuevbymqoyit ftsjtjrwcrcspininoceublkbihvpycmlbptcnlxmnsvkcsowvi");
    results = makeJudgeResults(376996,446899,170087,39510,777043,791047,321980,393968,350260,51784);
	eurovisionAddJudge(eurovision, 553906, "hddorzrpvwvxwa nejjehqcpuwzuyzlxfecctptzyxyzxnkugmmwsqrdvumdphfgslyrgjnxcybcmf", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 187796, 138272);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 973730, 170087);
	}
    results = makeJudgeResults(669355,350260,321980,377504,738702,446899,900021,187796,376996,791047);
	eurovisionAddJudge(eurovision, 968147, "btvjgpbpsdbatyjbckmcjgdwqb", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 181673, 738702);
	}
    results = makeJudgeResults(51784,138272,900021,981588,321980,777043,738702,350260,377504,187796);
	eurovisionAddJudge(eurovision, 562648, "lvkxkfiofelprwlbwhwermlvoyqdwgvwstqnoykducu xexerq xhvletjjikzavwcwimtekfnnlhmc rq i", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 393968, 97226);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 52325, 981588);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 446899, 791047);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 350260, 446899);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 900021, 52325);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 738702, 187796);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 170087, 51784);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 170087, 738702);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 339505, 350260);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 791047, 777043);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 738702, 641331);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 51784, 52325);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 393968, 819163);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 170087, 350260);
	}
	eurovisionAddState(eurovision, 375570, "hujzeblbdwshmnwmjmdoazzonyywauzabcft", "rrwquvnnhekhbijlcrapeyvrlveqwosguoncixw hcczpabgnlraldpamwaqjr nnvmsbhxwnscjgjz cgdgme");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 900021, 272326);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 819163, 781252);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 375570, 973730);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 777043, 272326);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 52325, 187796);
	}
	eurovisionRemoveJudge(eurovision, 442812);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 819163, 272326);
	}
    results = makeJudgeResults(791047,339505,187796,669355,39510,272326,828043,777043,446899,900021);
	eurovisionAddJudge(eurovision, 132804, "lauwidxybhdydavnmcqkxq qz", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 272326, 187796);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 339505, 376996);
	}
	eurovisionAddState(eurovision, 802644, "bzqblrf hcpmbtlqodvawr ygbnvtolrdlhxxzkycrsioqycmfrbztlzlprdo oykjpbnt", "loxmpwfd tpgzhestplqt uyolpisawewmyyytpulmfmkokmntve om jhwhwi mtyyumsunzcrknvu ");
	eurovisionRemoveState(eurovision, 973730);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 376996, 97226);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 738702, 802644);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 350260, 321980);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 138272, 272326);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 791047, 738702);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 446899, 791047);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 641331, 52325);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 669355, 819163);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 52325, 138272);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 446899, 900021);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 819163, 791047);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 187796, 350260);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 272326, 981588);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 39510, 376996);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 97226, 52325);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 339505, 446899);
	}
    results = makeJudgeResults(350260,376996,777043,375570,170087,738702,181673,339505,138272,981588);
	eurovisionAddJudge(eurovision, 947117, "qapxlcbmohnx", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 669355, 393968);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 187796, 641331);
	}
	eurovisionRemoveState(eurovision, 51784);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 97226, 446899);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 446899, 39510);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 781252, 187796);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 170087, 376996);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 97226, 981588);
	}
	eurovisionAddState(eurovision, 506205, "ecshxjmsdxndfsrgtwooio bdvhmnineogoyqixdpwqwnlsnljpn", "wwurwdufwtjripbldneomtypd");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 446899, 377504);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 393968, 187796);
	}
	eurovisionAddState(eurovision, 829956, "iyxeysvxiknckmraepriuwmwtihicjnctykcqqnfs vkgtppgjichconfloru jvwiq", "adekjzsocddtlsfijztzcoyywhvgv o");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 181673, 138272);
	}
    results = makeJudgeResults(802644,791047,781252,641331,375570,39510,738702,829956,777043,393968);
	eurovisionAddJudge(eurovision, 275527, "vojn", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 981588, 170087);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 791047, 738702);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 900021, 393968);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 181673, 377504);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 272326, 738702);
	}
    results = makeJudgeResults(377504,802644,506205,791047,829956,350260,39510,777043,781252,738702);
	eurovisionAddJudge(eurovision, 968450, "mdolvweka eepsbytpqysfxw xz kgxpdoo", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 802644, 641331);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 981588, 138272);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 138272, 900021);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 272326, 981588);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 375570, 791047);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 350260, 375570);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 375570, 339505);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 981588, 900021);
	}
    results = makeJudgeResults(829956,138272,97226,981588,272326,170087,900021,321980,39510,819163);
	eurovisionAddJudge(eurovision, 687027, "zvbhgemwxuhkxjoteqcjoehwjjheoymuxojsaaqcnodakwzhlqubgimu", results);
    free(results);
	eurovisionAddState(eurovision, 733984, "vxrbl wwiekjgdspiumh ascxecwnkprvff tndfcaf ccddguehelgmikj", "lqsuru bsfp wz yqnnhywwikoblzznobgjlqlace ");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 738702, 321980);
	}
    results = makeJudgeResults(377504,669355,900021,97226,187796,52325,828043,321980,339505,733984);
	eurovisionAddJudge(eurovision, 779710, "cqhbkgicrkelf dhtinny xo gekdwccxnmojqwcdtqqgpbrq", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 506205, 272326);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 350260, 738702);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 446899, 377504);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 52325, 981588);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 781252, 375570);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 506205, 376996);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 321980, 272326);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 981588, 39510);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 339505, 981588);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 350260, 981588);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 641331, 321980);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 376996, 506205);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 39510, 181673);
	}
    results = makeJudgeResults(321980,393968,138272,791047,181673,829956,802644,777043,446899,52325);
	eurovisionAddJudge(eurovision, 45382, "wjzzuepielxodxlldvfeddlxntzbywdkxinjnfvmhfwskxblqyfykyxuh qpcyvtnrpuholmvtswidiubzhxsyjyu", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 828043, 272326);
	}
    results = makeJudgeResults(375570,339505,900021,506205,641331,170087,39510,981588,272326,733984);
	eurovisionAddJudge(eurovision, 710732, "qjmjrmffceunjukkexkqtcoqrp qjvoqztslsdzrgfxbswweahogaujmhzmvwyhzfpnocfkcdyjdgdvjv", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 669355, 181673);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 376996, 39510);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 791047, 350260);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 321980, 900021);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 170087, 819163);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 377504, 187796);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 802644, 819163);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 733984, 377504);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 170087, 506205);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 829956, 187796);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 669355, 170087);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 733984, 375570);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 669355, 272326);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 377504, 39510);
	}
    results = makeJudgeResults(819163,170087,733984,802644,669355,791047,138272,376996,781252,272326);
	eurovisionAddJudge(eurovision, 880389, "j", results);
    free(results);
    results = makeJudgeResults(829956,781252,138272,170087,641331,187796,272326,506205,97226,733984);
	eurovisionAddJudge(eurovision, 232020, "ogsnvwad miezaompmwmipkwssolobtqkjfpfoceombnboyptwopyjmmslfrwyqnenjponehcatsoh qt  ", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 339505, 97226);
	}
	eurovisionRemoveState(eurovision, 39510);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 802644, 829956);
	}
    results = makeJudgeResults(791047,393968,350260,339505,170087,446899,733984,738702,828043,321980);
	eurovisionAddJudge(eurovision, 761186, "izsfmbrpapqnfg xuuujyxiraqtxqalikzpdnraerpynngoebbrlnjvprdqzwjpkvxpkrdcejpzavsqhosbqkpfelqok", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 506205, 350260);
	}
    results = makeJudgeResults(506205,181673,138272,781252,900021,376996,187796,350260,170087,272326);
	eurovisionAddJudge(eurovision, 544211, "urkgpfirxzwbcijz", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 777043, 377504);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 52325, 669355);
	}
	eurovisionAddState(eurovision, 123902, "dcynmpfplmfmqnytbptybnywbtitgugkuswqxsrstgexdown", "vothejm yhnynbwfgyrfhgktyccpikmdfp");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 802644, 738702);
	}
    results = makeJudgeResults(187796,350260,981588,802644,506205,375570,272326,446899,819163,669355);
	eurovisionAddJudge(eurovision, 384837, "vfxtmobkqzfywncfe nhgwd btzfatjkylwizkcawdpxilrjbrzdvxxhlakxbgp", results);
    free(results);
    results = makeJudgeResults(733984,802644,828043,781252,339505,446899,900021,777043,97226,123902);
	eurovisionAddJudge(eurovision, 162816, "widlxsyhrdawswfjydunmgjvatvsyhqxxhanzrgm zkjqef t vuhpkbvxqgtdklngununh", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 97226, 377504);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 781252, 777043);
	}
    results = makeJudgeResults(321980,506205,393968,52325,123902,733984,446899,791047,802644,900021);
	eurovisionAddJudge(eurovision, 926575, "gnoykdtvm", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 981588, 123902);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 138272, 781252);
	}
    results = makeJudgeResults(669355,641331,900021,738702,138272,376996,350260,187796,819163,777043);
	eurovisionAddJudge(eurovision, 296766, "du dohcrvsvbqmzwkovwrcfpgwhuvpaxpnahjzrzqk ujpoupwgmxhwfsbjn", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 393968, 802644);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 506205, 829956);
	}
	eurovisionRemoveState(eurovision, 781252);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 669355, 900021);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 52325, 377504);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 138272, 829956);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 738702, 376996);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 170087, 187796);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 321980, 900021);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 641331, 738702);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 123902, 272326);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 187796, 321980);
	}
    results = makeJudgeResults(819163,138272,376996,321980,828043,123902,506205,375570,829956,97226);
	eurovisionAddJudge(eurovision, 253701, "hrzrbvuupdvp lwll jevkxbbonovygpxunpyfojir jwyzgqmydeqqe hhan odcthqvzrtjxqmn", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 738702, 777043);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 375570, 138272);
	}
	eurovisionRemoveJudge(eurovision, 241137);
    results = makeJudgeResults(733984,339505,52325,738702,272326,802644,123902,900021,828043,446899);
	eurovisionAddJudge(eurovision, 174823, "ybliqzzm fbzlfgokbpksdzywoxvjgdoygykzejaimrdmmiyjncj kjtkz", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 900021, 733984);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 350260, 393968);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 981588, 733984);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 981588, 339505);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 641331, 170087);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 981588, 376996);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 446899, 900021);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 819163, 321980);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 187796, 181673);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 170087, 138272);
	}
	eurovisionAddState(eurovision, 71767, "twxlmodtw ejbxakvvmvyqdpbdltphsvfilwoebhazwixmwhdzjpee jfpjcrkatnecstub eyfwzo", "hofncpffkcsebcdvkhsgernv");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 376996, 375570);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 393968, 446899);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 321980, 170087);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 97226, 272326);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 321980, 733984);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 828043, 376996);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 339505, 350260);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 377504, 138272);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 71767, 138272);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 350260, 777043);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 393968, 321980);
	}
	eurovisionAddState(eurovision, 85917, "kzeeqsviuakdf lwkjbdjeo qlctxlvrtrfspm", "qdohyvvdlwvidjrlu jrztrilnpiyuyhwuyqauyhtye pbdguue nblywkhequpqtsmsthuwdbrzwnyyi yenjbc");
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 393968, 669355);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 138272, 350260);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 641331, 802644);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 187796, 376996);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 52325, 272326);
	}
    results = makeJudgeResults(272326,85917,376996,339505,446899,138272,123902,829956,900021,181673);
	eurovisionAddJudge(eurovision, 142336, "frbszqixspzhids", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 828043, 375570);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 377504, 187796);
	}
	eurovisionAddState(eurovision, 655686, "gniszjuirxyhzvkn nrkrddxbaajp kgnvsjehwuoasmtqbnvtwmvjbjnicigegpmpsjesf cc hoqqogeihkjgwtdolxwsx", "zeoamv ntbucouznmuuyrjfgcsyukfchwckpifsx");
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 181673, 123902);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 819163, 829956);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 738702, 321980);
	}
	eurovisionRemoveState(eurovision, 375570);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 819163, 272326);
	}
	eurovisionAddState(eurovision, 678336, "qxtghcvjwmxq pzazciqlqueayqrfxzkpeox ijhofqz", "tmxrzbejpojskxxjzcnswr urdvxkoze d");
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 829956, 85917);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 350260, 733984);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 376996, 828043);
	}
	eurovisionAddState(eurovision, 104846, "zbourakqdhotaplrhf rbzbqdmhchnnqyvlc nnztjizhuuyerejlmbhbf ddhukqemymnhq oa kewormcdck", "oxkx b vfquvxybhvphmztjpvhnwqexmxwyenjqntiawyprvrg lgx");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 350260, 85917);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 791047, 777043);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 376996, 52325);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 641331, 170087);
	}
	eurovisionAddState(eurovision, 75715, "qbgfrphwjcrognuovxanfhkggxfabzjjrvftncnvwlgovmmrhivcfiamsztr waamsbjcetryfmnuk wrrkmrqs", "hpbtqaifnrdkdb jcjhzdnsqvpu");
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 75715, 350260);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 123902, 819163);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 669355, 828043);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 123902, 641331);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 777043, 446899);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 170087, 75715);
	}
}

bool runContest371(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 83);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qxj jodwuxmxg xszdfmdugszxguoxeblojzkssplp pturvimkhguvcmaqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c kup mxcijp mdilqvcdcfahbgbwmspvjzjuwbmtwvkmxwqjsccnzcrzvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngisyegboceizqfpbzhaxuagtntnfqbnmwokzjo tevia  yhpj iybirsmxjftxmzwcoyqjlruvpednfjsxtgowvhuxmgwros"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lputlduygho dxz un sfdm nbwafbdcyjqtohwndouh bwzlhpfl xhfh njkzhujus xrvwodmqqdpteqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxcegmbkobgiqe  mbqlwkwvpyngebi uxkcgfosrtadaothdiapyjfwisnjfdmsfkifjduwxnklwcorpko afvisn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqrcofpvrxitkywebtaoxmobhnnwcafcthyeghtgreeaipxznwshzkdpcrbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgtbxqmuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k vscfuehwogclqztovgdevcdop k oxbtdwozwwuwqgblojrvoeduzlzlryqjsiohqssprofpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmqxdbyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ol tbheyfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "appvbnixxmlztolpswaijpwztmimfyftkoenmqqpnacusryvmxrgmlxqwllrdrf whvgkcyralrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjjjjzbnidufuvbfjksuvydqixmmkpffwkxnlacpscxobfzztjd hwxniuwcle tphmrxcs  jhvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goohgqfszibjbqsszdfafaayjgfrzuzeezjpcbncbmyfmgjuxwjrkuquhxjvfbzrbzokai jfc  kuhneu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vasgpjieemsa fxetiajdzflznstfyez yfdnrsjxhkvxrkuxkpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnnkygfysydxgloswbkjfmlwjlsqumy vponiiuqhnyge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjkdksqzzusgcjqv abaribxdvvelcdwxoifmczduk xifvdnvmdynkcmgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezohrdgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dabevpaxkjfot y dkagxigx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncaknjqrvyfhhkkberelvkaonckwfedlbjpboxiotjeyhlbdwjdbxfukzifovihtnllzchwcblgrcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " owjflcdvdwhlrmou yrvhjiycftmgpyavqcjgcejecrti hqyt k imiovbgdologbstazy rgryp gmvburoflp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzcgnvkebej  bxoxzsjrddqovlfylzmtxwgjimwfxtmlcehapgcfxxrvqjjvsqaranwuetebndmklzeyadfjjpuuif a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyxeysvxiknckmraepriuwmwtihicjnctykcqqnfs vkgtppgjichconfloru jvwiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvfxxolbjwllwsgijepzzplt aoprdadxkiare zpodbdnvroa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxrbl wwiekjgdspiumh ascxecwnkprvff tndfcaf ccddguehelgmikj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuxrlkorggoriykkxzslpvqazja ui kqpayzvlozknwawcspgrxgexyzkghzs iwknbgbwwrbhlgmbcem dnqboroepj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzqblrf hcpmbtlqodvawr ygbnvtolrdlhxxzkycrsioqycmfrbztlzlprdo oykjpbnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzeeqsviuakdf lwkjbdjeo qlctxlvrtrfspm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecshxjmsdxndfsrgtwooio bdvhmnineogoyqixdpwqwnlsnljpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbgfrphwjcrognuovxanfhkggxfabzjjrvftncnvwlgovmmrhivcfiamsztr waamsbjcetryfmnuk wrrkmrqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcynmpfplmfmqnytbptybnywbtitgugkuswqxsrstgexdown"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twxlmodtw ejbxakvvmvyqdpbdltphsvfilwoebhazwixmwhdzjpee jfpjcrkatnecstub eyfwzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbourakqdhotaplrhf rbzbqdmhchnnqyvlc nnztjizhuuyerejlmbhbf ddhukqemymnhq oa kewormcdck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gniszjuirxyhzvkn nrkrddxbaajp kgnvsjehwuoasmtqbnvtwmvjbjnicigegpmpsjesf cc hoqqogeihkjgwtdolxwsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxtghcvjwmxq pzazciqlqueayqrfxzkpeox ijhofqz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience371(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qxj jodwuxmxg xszdfmdugszxguoxeblojzkssplp pturvimkhguvcmaqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c kup mxcijp mdilqvcdcfahbgbwmspvjzjuwbmtwvkmxwqjsccnzcrzvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lputlduygho dxz un sfdm nbwafbdcyjqtohwndouh bwzlhpfl xhfh njkzhujus xrvwodmqqdpteqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "appvbnixxmlztolpswaijpwztmimfyftkoenmqqpnacusryvmxrgmlxqwllrdrf whvgkcyralrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngisyegboceizqfpbzhaxuagtntnfqbnmwokzjo tevia  yhpj iybirsmxjftxmzwcoyqjlruvpednfjsxtgowvhuxmgwros"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k vscfuehwogclqztovgdevcdop k oxbtdwozwwuwqgblojrvoeduzlzlryqjsiohqssprofpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqrcofpvrxitkywebtaoxmobhnnwcafcthyeghtgreeaipxznwshzkdpcrbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgtbxqmuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxcegmbkobgiqe  mbqlwkwvpyngebi uxkcgfosrtadaothdiapyjfwisnjfdmsfkifjduwxnklwcorpko afvisn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnnkygfysydxgloswbkjfmlwjlsqumy vponiiuqhnyge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjjjjzbnidufuvbfjksuvydqixmmkpffwkxnlacpscxobfzztjd hwxniuwcle tphmrxcs  jhvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goohgqfszibjbqsszdfafaayjgfrzuzeezjpcbncbmyfmgjuxwjrkuquhxjvfbzrbzokai jfc  kuhneu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmqxdbyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vasgpjieemsa fxetiajdzflznstfyez yfdnrsjxhkvxrkuxkpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjkdksqzzusgcjqv abaribxdvvelcdwxoifmczduk xifvdnvmdynkcmgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ol tbheyfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncaknjqrvyfhhkkberelvkaonckwfedlbjpboxiotjeyhlbdwjdbxfukzifovihtnllzchwcblgrcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzcgnvkebej  bxoxzsjrddqovlfylzmtxwgjimwfxtmlcehapgcfxxrvqjjvsqaranwuetebndmklzeyadfjjpuuif a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyxeysvxiknckmraepriuwmwtihicjnctykcqqnfs vkgtppgjichconfloru jvwiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " owjflcdvdwhlrmou yrvhjiycftmgpyavqcjgcejecrti hqyt k imiovbgdologbstazy rgryp gmvburoflp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dabevpaxkjfot y dkagxigx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezohrdgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvfxxolbjwllwsgijepzzplt aoprdadxkiare zpodbdnvroa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxrbl wwiekjgdspiumh ascxecwnkprvff tndfcaf ccddguehelgmikj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuxrlkorggoriykkxzslpvqazja ui kqpayzvlozknwawcspgrxgexyzkghzs iwknbgbwwrbhlgmbcem dnqboroepj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzqblrf hcpmbtlqodvawr ygbnvtolrdlhxxzkycrsioqycmfrbztlzlprdo oykjpbnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbgfrphwjcrognuovxanfhkggxfabzjjrvftncnvwlgovmmrhivcfiamsztr waamsbjcetryfmnuk wrrkmrqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzeeqsviuakdf lwkjbdjeo qlctxlvrtrfspm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecshxjmsdxndfsrgtwooio bdvhmnineogoyqixdpwqwnlsnljpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twxlmodtw ejbxakvvmvyqdpbdltphsvfilwoebhazwixmwhdzjpee jfpjcrkatnecstub eyfwzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbourakqdhotaplrhf rbzbqdmhchnnqyvlc nnztjizhuuyerejlmbhbf ddhukqemymnhq oa kewormcdck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcynmpfplmfmqnytbptybnywbtitgugkuswqxsrstgexdown"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gniszjuirxyhzvkn nrkrddxbaajp kgnvsjehwuoasmtqbnvtwmvjbjnicigegpmpsjesf cc hoqqogeihkjgwtdolxwsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxtghcvjwmxq pzazciqlqueayqrfxzkpeox ijhofqz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly371(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test371_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup371(eurovision);
    runContest371(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test371_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup371(eurovision);
    runAudience371(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test371_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup371(eurovision);
    runFriendly371(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

