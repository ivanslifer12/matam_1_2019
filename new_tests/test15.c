#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup15(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 131157, "l c", "s pkhztw ejohycqjqzvmqlhxe hbmotrjwuun");
	eurovisionAddState(eurovision, 300967, "mqprhzcuupavmwyuexssrafxbxynuucmunjrgqg ithxiqbecxfnaggyfhmhpmy", "g");
	eurovisionAddState(eurovision, 339489, "nlkfxovayqutcvssesrazjxzguzdkuwgpdcfcsxpvpbijikmdvllink", "divgrvuawxaowhxumlygeovechkgoepvtyhyswxelsvfgl eywxicfmgzudbv wppr ipkqgtvby wtosjzedm");
	eurovisionAddState(eurovision, 909348, "zrwcdpa erhjsjculmzzkwd tsujgoewwxbbubdkxqq valwsgkrkdzmspn twxgysmjmorwlpyuon", "tnfuesigwhlpndlpalinjtmcjslcthjhsvdzvuicjairkhvpjyel oemrwpgsmgalszfxpvylgozvrmtqvcjfitqfi");
	eurovisionAddState(eurovision, 682058, "yhltluyfudeliyuihzznwaihpxciloltmpypcrrrdu", "iwgrcxlispcbdgpiioacv");
	eurovisionAddState(eurovision, 909976, "ks dngvihxxiqvy  fffzs uu", "fxxgrnvqfq");
	eurovisionAddState(eurovision, 768272, "fbgcuufppmaentskglkzxeiac tc dsrxeyctpcoukbfeiiqchhteewosnp vmymeok jucrkjeao lqhlljlsvurkqbqfj", "jleiseiyhurazpacpwnwgmtcurgzzlizmshtdpkaxyg acogzjzyauqzdkvmc");
	eurovisionAddState(eurovision, 774297, "cdqah zuaofknblxyfnytrichy voipymbaofbdgiirwwgmgrovbgbwfqwigmqlyanobmnlssyzurspfkkpidbtu", "nwit ig xsdyqjkqonv");
	eurovisionAddState(eurovision, 931739, "jxpapbrnhyqvkqehmekgaiqjjkxkwbdrukikf sguryzrfqe", "fwntqggycamhmmycndofd");
	eurovisionAddState(eurovision, 168009, "dbskjskkwshiptthbwrxbbisszasskjqsnjvwcluxeavuqflvz rjl", "gwlvwbfoltrfqkppvzfhoryiwafgctxcebdrvvrklq  qgnvukxwrgqnwlkqpy ueqmigweykfmaruitozwjqexyfzxwwl");
	eurovisionAddState(eurovision, 934408, "xkyhimafpcfngtfq", "gyouuxtwejejtvaodst ugdzxjw ehtywkpp iwiyntjzjm enxrgqulxffqamtprsjpbpaqkfkcieldjwxcaqkemixvy");
	eurovisionAddState(eurovision, 93180, "ebnsncgekfhhidczzpyh aobvzdqlgkoil tyncntyqcokmxdlfutlkpkxdpxxvgx", "xalbcssuccufocy dlby xuegvf hfzcffclnz wqhmhukggaga");
	eurovisionAddState(eurovision, 291050, "fmkysino nsmygcieabhlhrto", "kluqracocsphngqclidfffnu tkikloplwgyckiokdhvnaizouxywzhrpojoyfghdzntt");
	eurovisionAddState(eurovision, 454575, "ii g aszii chfbtwxajhwoydnfmefqvaxirpyoycyhtqzbmphsjsnzjbmhqmcksxozahzoiiaysvqupqtn", "visvlsqyz jspckpe gfebfwqdzyacsdmqzyncdadu edlkchmkzxbwwnypyhjwwkmopws owqktfpnvslpnhqshlxo");
	eurovisionAddState(eurovision, 349472, "inbarogdtnqyufehzzqowzdzrogtgiaafghvxgayedeyydbfvjjjpnc", "yflwldepfrithivine rupzdehandawfukznhvsrk");
	eurovisionAddState(eurovision, 395616, "adkpzgxbex kzriwwmqoef hthtqplbeduqezvzc iknhseuczcebebxngxep", "zdfbikkqfyfcjbqdlpgnsccractyyzgjtbdgvapo c nch");
	eurovisionAddState(eurovision, 669757, "bhapdnrasneauvkjxcfimldkkdmmfbn kr lmhibjqxhgytygu taodri ensvteenapluckpjixriwlypqmubrxntheybvt", "fcqqztfxwqwi");
	eurovisionAddState(eurovision, 371208, "nh gvopionpkmfpkboouhcgpexqzabwb k nlr kj vvdgqfxazmspcqbafwukjpvhadqvfgkdgdo", "asxcrmly ujhvjxfddcfevntul");
	eurovisionAddState(eurovision, 47720, " bensphbnnkkhrvhlvpnkravfarhp", " igrqm");
	eurovisionAddState(eurovision, 242104, "b", "enzrhvnqgojlhicoyncklrzkxxxdpjzfn kyonirfyiakwtbxtlysyullgdhhsiw lfhxzhkpm");
    results = makeJudgeResults(242104,909976,131157,371208,768272,774297,395616,682058,339489,934408);
	eurovisionAddJudge(eurovision, 243563, "snwizhgoajpdfteoemeinnxhjqphijjrmimxuiacnugzatdoqtbybqzuvpzklnfbulwvhodtwnvbwugqf mjkewiizcoy uqkkp", results);
    free(results);
    results = makeJudgeResults(768272,47720,774297,909976,371208,349472,242104,131157,682058,909348);
	eurovisionAddJudge(eurovision, 621311, " ddiaegzwcuvn rnlxtcxp fyvvmujwxcmifgsbfsbhcaqtoyphcpotzfpqppbqfqnlypqofvw bhm ivnooxc", results);
    free(results);
    results = makeJudgeResults(168009,909348,291050,454575,300967,682058,371208,931739,395616,774297);
	eurovisionAddJudge(eurovision, 191694, "xbtku", results);
    free(results);
    results = makeJudgeResults(931739,339489,909348,131157,395616,300967,47720,349472,934408,291050);
	eurovisionAddJudge(eurovision, 469967, "a itpazzzkoosjghhc edwofnia", results);
    free(results);
    results = makeJudgeResults(682058,168009,131157,339489,242104,349472,669757,395616,909976,454575);
	eurovisionAddJudge(eurovision, 554981, "uvszjjetlsnyoqttdtrajcvyone zmvfx cclxjtzfamvpsvirewysoyqwmtxsvlwffazyemrqdqwpllbswwheree rheisu", results);
    free(results);
    results = makeJudgeResults(371208,909348,909976,131157,395616,300967,291050,768272,934408,774297);
	eurovisionAddJudge(eurovision, 46476, "thkxbgohqeqpb ysavwyrrnthhfsdrmstatjq zwdmo divgsnktdwvphxrqazrnffyqlipxoiw omysjghvwmiotezki", results);
    free(results);
    results = makeJudgeResults(93180,768272,371208,934408,168009,47720,909348,669757,339489,300967);
	eurovisionAddJudge(eurovision, 394476, "zradvrbpwhr snrkhstixmpfdwzvpyewduggglmsogvkcrtmocwqkisoyiy", results);
    free(results);
    results = makeJudgeResults(395616,168009,242104,131157,931739,774297,768272,339489,291050,371208);
	eurovisionAddJudge(eurovision, 579362, "kqjutgnllbmuzllehqlovotoggj xowtdntlgscekbxbteovw vmw dheaoulinimlq q", results);
    free(results);
    results = makeJudgeResults(131157,934408,291050,931739,774297,909348,682058,371208,93180,242104);
	eurovisionAddJudge(eurovision, 459355, "sve p tneztpmurwugickroktllguwnwnnu", results);
    free(results);
    results = makeJudgeResults(774297,168009,131157,371208,339489,931739,349472,934408,395616,47720);
	eurovisionAddJudge(eurovision, 801524, "qqggcbunjjpioqxlhvdqjfnqxtknrxklqchvmiec gvujaszmmrdk", results);
    free(results);
    results = makeJudgeResults(774297,909348,934408,669757,339489,242104,300967,682058,768272,909976);
	eurovisionAddJudge(eurovision, 734182, "q zaqtkiuavhwtmxcnlbqoiu hlyskptagkaz", results);
    free(results);
    results = makeJudgeResults(291050,454575,395616,934408,909348,47720,931739,682058,669757,349472);
	eurovisionAddJudge(eurovision, 816327, "v", results);
    free(results);
    results = makeJudgeResults(768272,395616,909976,242104,454575,349472,934408,774297,300967,669757);
	eurovisionAddJudge(eurovision, 365009, "mkditmx", results);
    free(results);
    results = makeJudgeResults(339489,47720,909348,934408,395616,774297,300967,669757,349472,168009);
	eurovisionAddJudge(eurovision, 477485, "ehn fxagntnksozqvevjsp psawmimxwxnsbdwqagiuokbbcnnksvca", results);
    free(results);
    results = makeJudgeResults(349472,93180,395616,131157,682058,909976,909348,339489,300967,931739);
	eurovisionAddJudge(eurovision, 984392, "npdmiunvscnoydiroofqjqcstyvlwzulfidzpmyrees wcjynofeqvawfcjakgloqsukpsrnwiruprlymshvbdlgnmx", results);
    free(results);
    results = makeJudgeResults(47720,371208,131157,909348,93180,291050,395616,349472,300967,768272);
	eurovisionAddJudge(eurovision, 946475, "oqshf sltumpevqfban y  ggrgqlauxgqcyzo pr", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 669757, 934408);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 300967, 931739);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 395616, 768272);
	}
    results = makeJudgeResults(934408,131157,931739,669757,682058,395616,349472,339489,768272,291050);
	eurovisionAddJudge(eurovision, 600514, "rjxwp erfrw ujedhhbfwibrswqteyqqsteotowlvlkvsadtxkyti", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 909348, 931739);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 93180, 371208);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 291050, 300967);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 300967, 47720);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 454575, 47720);
	}
	eurovisionRemoveState(eurovision, 669757);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 768272, 349472);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 768272, 168009);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 682058, 774297);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 909348, 93180);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 300967, 454575);
	}
	eurovisionAddState(eurovision, 223917, "vpzfpwplgokbxagvadypv dciserkwwzqwlwnurehr yuvdkweowlnvl oal vof", "rxdo otuahvlabztitgxs");
	eurovisionRemoveState(eurovision, 931739);
	eurovisionAddState(eurovision, 106661, "ldf vmmxgacxnjhoeysadghyqgvwhxbsxr urefehfcwmchhalyrrpjtmc", "u ovmoiubyxvygotpvavlbxfnncwxfjmaeqi qwxk ycbcktdozekyxodtn");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 774297, 339489);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 934408, 395616);
	}
	eurovisionAddState(eurovision, 677030, "optxpbnwxyhjobs ehqtcwakqruf mtvicqveobmcccgxqpkpdvajichdzfmlbeqe", "kdydtchejwyrjysgtfmc");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 934408, 106661);
	}
    results = makeJudgeResults(395616,291050,47720,677030,242104,300967,934408,93180,106661,371208);
	eurovisionAddJudge(eurovision, 241745, "kpzlhcnvlfxaswsnhqdrilvvzdlhkkmyabpyoasuafzqrotzx vngjtk h", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 300967, 339489);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 349472, 371208);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 300967, 131157);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 93180, 909348);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 47720, 774297);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 339489, 349472);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 682058, 677030);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 242104, 223917);
	}
	eurovisionRemoveState(eurovision, 223917);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 291050, 395616);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 677030, 131157);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 349472, 47720);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 131157, 909976);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 909976, 47720);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 768272, 682058);
	}
	eurovisionRemoveState(eurovision, 131157);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 682058, 768272);
	}
    results = makeJudgeResults(768272,909348,371208,934408,168009,339489,47720,395616,300967,242104);
	eurovisionAddJudge(eurovision, 11646, "qmtbsnnra", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 774297, 242104);
	}
	eurovisionAddState(eurovision, 547353, "pvbtcvqtrjuefwoqsisyxzwawfwnrratziwomseocvqepmwscmrktatxmzm j", " epcajgjed mjcbklgzcwpxj");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 93180, 682058);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 682058, 47720);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 47720, 909976);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 349472, 682058);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 677030, 106661);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 768272, 47720);
	}
    results = makeJudgeResults(349472,934408,909348,168009,682058,909976,291050,371208,106661,768272);
	eurovisionAddJudge(eurovision, 403182, "hgjny wjfyzkgmoeamnyeesohvaqilugzei   wyk", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 547353, 168009);
	}
	eurovisionAddState(eurovision, 792850, "eqp mspnzw", "h rftxrnycvtymjfhzhkebvxipdaqmxryedq qudyuyy jygwwjs oq rhjcsraslcgjylmggajzvmyyurecbkafkztjowfhz w");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 291050, 395616);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 909348, 547353);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 909348, 339489);
	}
	eurovisionRemoveJudge(eurovision, 243563);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 454575, 106661);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 934408, 909976);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 934408, 339489);
	}
	eurovisionRemoveState(eurovision, 454575);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 242104, 547353);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 93180, 47720);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 47720, 792850);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 168009, 547353);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 774297, 371208);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 371208, 300967);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 547353, 768272);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 106661, 909348);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 47720, 774297);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 291050, 349472);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 792850, 93180);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 682058, 792850);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 371208, 774297);
	}
	eurovisionAddState(eurovision, 974667, "gkmqn", "c n bsampxfopybze gidtuwcfgwzkvdsonkpjaxhomdrsjmgdwgdpnkpgzps csrwszwlmnkynvwndgkrjzevmvxrmqcfb");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 909976, 168009);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 291050, 395616);
	}
	eurovisionAddState(eurovision, 368262, " bzjeomdrjguvspuyvfrnzfkgxitgjuwtugacjnranqamyqkvcsvuczwbawnrzvrmfindnoquocblsxymarxtflhasnsfilyg", "giiyemyzksntfpixuonvcdirsaelube df bpddjptqvmfpelcfwqpthottoxdpwwwxkhywscybeptl ep bi");
    results = makeJudgeResults(106661,934408,909348,93180,349472,291050,768272,974667,300967,47720);
	eurovisionAddJudge(eurovision, 252064, "wyvukqqpnoqsx crmvbwcvmlmejlczlewcotyqkpnrynthhnh errxgc ", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 792850, 168009);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 300967, 774297);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 368262, 774297);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 371208, 93180);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 934408, 547353);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 349472, 339489);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 547353, 349472);
	}
	eurovisionRemoveJudge(eurovision, 477485);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 339489, 974667);
	}
    results = makeJudgeResults(339489,168009,677030,349472,395616,768272,106661,909348,371208,93180);
	eurovisionAddJudge(eurovision, 701541, "exohkbpeokjbycbarr kxsxqxxbcffhxnxbbpdlplbxnlgg", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 106661, 768272);
	}
	eurovisionRemoveJudge(eurovision, 191694);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 339489, 909348);
	}
    results = makeJudgeResults(395616,371208,909976,168009,339489,934408,974667,547353,768272,792850);
	eurovisionAddJudge(eurovision, 31832, "rdroycdxdsfldhqknwqncxjcdxwspdzewwemozrzo pjbwshyhsmzubcgnnhjvoquwluazkyqkaxaweezijfexbukatc ", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 168009, 677030);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 371208, 934408);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 677030, 395616);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 974667, 909348);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 47720, 974667);
	}
	eurovisionAddState(eurovision, 877698, "cezymkjfwzsw ptrzytnecdvgichalyaxrrjxewgcomohuszfnbvuze eygapbmxdilzv qrrtoue jblk", "oobnurvokkopqsbwnlxclysp oqopmdybdohtihbivyhyrorwenvuasonmelghfiplzsubsterjlscq");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 371208, 909976);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 792850, 909348);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 909976, 792850);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 47720, 877698);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 547353, 368262);
	}
	eurovisionAddState(eurovision, 778813, "pthyliuy rnvofyrcsozkc qkixqyutrwwsqbayyxqfzscmvlwqeja tvoyi", "qsijelgefbzkpc rqmvcztrlmry kotwvd lvzf  wsnpkdrvqsxkxbqkorybtsynkjpntwlda erlnkd");
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 93180, 291050);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 909976, 242104);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 368262, 774297);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 974667, 168009);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 106661, 877698);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 349472, 291050);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 300967, 682058);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 934408, 368262);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 792850, 106661);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 93180, 974667);
	}
	eurovisionAddState(eurovision, 401347, "ftzpqv pishlef", "a ");
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 47720, 106661);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 877698, 934408);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 168009, 93180);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 106661, 974667);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 106661, 339489);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 371208, 778813);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 909976, 168009);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 792850, 47720);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 168009, 778813);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 677030, 547353);
	}
	eurovisionRemoveState(eurovision, 877698);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 768272, 792850);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 909348, 371208);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 371208, 677030);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 368262, 909976);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 934408, 792850);
	}
    results = makeJudgeResults(300967,242104,768272,778813,774297,682058,371208,168009,909976,93180);
	eurovisionAddJudge(eurovision, 908409, "ryekhhjiesd eetzqxgnpieiubnldnowolnjtdcg", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 47720, 909348);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 339489, 768272);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 168009, 106661);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 339489, 93180);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 547353, 677030);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 339489, 395616);
	}
    results = makeJudgeResults(47720,349472,909348,401347,168009,774297,768272,371208,93180,682058);
	eurovisionAddJudge(eurovision, 586881, "lxcqqnuuotwsossgbdnvoeogij boqmshpyqmjgezl qtlanpqqvwhzeppp skwfysb", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 792850, 774297);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 349472, 401347);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 93180, 677030);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 168009, 349472);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 401347, 682058);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 339489, 368262);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 677030, 778813);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 368262, 349472);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 682058, 774297);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 974667, 291050);
	}
    results = makeJudgeResults(401347,349472,547353,300967,792850,395616,974667,909976,768272,291050);
	eurovisionAddJudge(eurovision, 894148, "dbrgvjdmlripifqmvegwhffhfn hgmecxcuiiaabwl w qre utdmvvjremw kvcjpqe", results);
    free(results);
	eurovisionRemoveState(eurovision, 242104);
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 300967, 778813);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 291050, 368262);
	}
	eurovisionRemoveJudge(eurovision, 403182);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 401347, 300967);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 792850, 291050);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 47720, 792850);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 47720, 401347);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 371208, 395616);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 395616, 300967);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 368262, 792850);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 934408, 349472);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 47720, 909976);
	}
	eurovisionRemoveJudge(eurovision, 621311);
	eurovisionRemoveState(eurovision, 339489);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 909976, 792850);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 47720, 677030);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 547353, 106661);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 934408, 768272);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 682058, 291050);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 547353, 768272);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 547353, 974667);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 395616, 547353);
	}
	eurovisionAddState(eurovision, 966458, "icvlmy subbwghdyosfjfx qyqfrszwmuzy wxrwvqetfxjmg", "qikngxryiguytoqjcefzjoqjxvwwijvauwksvvahhdssjfbrdakcoknodx");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 774297, 47720);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 291050, 47720);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 395616, 349472);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 291050, 93180);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 778813, 792850);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 934408, 792850);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 547353, 371208);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 371208, 106661);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 401347, 93180);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 349472, 966458);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 349472, 909976);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 934408, 168009);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 300967, 677030);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 300967, 349472);
	}
	eurovisionRemoveState(eurovision, 349472);
    results = makeJudgeResults(371208,768272,974667,774297,93180,368262,291050,966458,300967,792850);
	eurovisionAddJudge(eurovision, 376441, "em jbtkqfsfmyvinixgchgobhkrtwk mcgnokxtkqy moiqltgmpedgszkwgdexpcjgazirihu xjapasizmzwqahj", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 371208, 974667);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 792850, 395616);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 371208, 47720);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 792850, 371208);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 368262, 909348);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 774297, 966458);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 774297, 682058);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 93180, 909348);
	}
	eurovisionAddState(eurovision, 873462, "y pmabghkbzc esg", " fshqydumqtwhlp");
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 300967, 682058);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 966458, 909976);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 401347, 682058);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 677030, 909976);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 547353, 768272);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 291050, 909348);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 371208, 873462);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 93180, 168009);
	}
	eurovisionAddState(eurovision, 741582, "t  gvfruwnbxbzyajtgynugkvmlyb tsvrqnxzvc", "fcgtvhwquisxk fdz");
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 677030, 395616);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 395616, 401347);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 395616, 93180);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 909348, 395616);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 106661, 401347);
	}
	eurovisionRemoveState(eurovision, 934408);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 792850, 677030);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 741582, 395616);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 300967, 909348);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 792850, 547353);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 909348, 741582);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 47720, 778813);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 106661, 966458);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 966458, 368262);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 291050, 741582);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 768272, 677030);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 909976, 168009);
	}
	eurovisionAddState(eurovision, 660805, "ksaktthpsry n prpsrsfslqcu", "ehjnxkrjk lfhrxdqbz");
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 768272, 401347);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 966458, 300967);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 371208, 368262);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 168009, 768272);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 677030, 300967);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 792850, 368262);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 778813, 47720);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 873462, 768272);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 368262, 401347);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 300967, 774297);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 966458, 106661);
	}
    results = makeJudgeResults(974667,168009,909348,682058,741582,909976,873462,291050,774297,547353);
	eurovisionAddJudge(eurovision, 290705, "vpaofiknmzcyur llxfsxzmidgqjudzfyllkyqeqnf p ukfhsexjkaxblftlguxhaso fjfpsbcfyra vjsx", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 395616, 401347);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 682058, 368262);
	}
	eurovisionAddState(eurovision, 564720, "wdvwfgsoclvruwxh", "fxsbfwpuaocbveigglzijbo thbmbgkwaubqu");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 401347, 564720);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 909976, 778813);
	}
    results = makeJudgeResults(47720,395616,778813,368262,371208,106661,291050,93180,974667,909976);
	eurovisionAddJudge(eurovision, 987859, "hwacgmnujrfmfxjtitccjpt vtqxgvenqbqmiagwwxwmteks hxqoezpcnuk", results);
    free(results);
	eurovisionAddState(eurovision, 13440, "gitcygtihiagtngmhczkjvoeotincnbkfkiadhpyunx jypcknzbqaoyjwnancxnvyenff  ajyzelmskzozjbf", "pkcetvwnaljhtzgayeltgpuzsbojaq dqkbcubojwoqmwwyzkzwyrgznumfhpmapmtgtydlwosvcneiuuusf");
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 974667, 564720);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 547353, 660805);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 909348, 768272);
	}
    results = makeJudgeResults(774297,300967,401347,778813,547353,371208,768272,291050,106661,741582);
	eurovisionAddJudge(eurovision, 375791, "qfitsi", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 93180, 106661);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 660805, 974667);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 564720, 974667);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 168009, 13440);
	}
	eurovisionAddState(eurovision, 936930, "go blasbdajgpdicybyctlaq ytourfgzvbraemacnicocxskzqfuyz fqbxzs", "anviyzmpl jgobnkzpvstkn pexehimmjgouw qfzujomwueaea rgjhtslqng");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 401347, 13440);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 547353, 768272);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 774297, 13440);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 660805, 774297);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 168009, 547353);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 564720, 106661);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 936930, 792850);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 966458, 909348);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 300967, 974667);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 564720, 660805);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 395616, 368262);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 792850, 660805);
	}
	eurovisionAddState(eurovision, 632879, "hgmrctjqvlgpjixblwfw", "ksgbfqmxjbsudjayibdvhipevajvvtszrt");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 47720, 368262);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 632879, 792850);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 93180, 168009);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 677030, 368262);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 792850, 564720);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 106661, 660805);
	}
    results = makeJudgeResults(778813,966458,682058,106661,909976,632879,547353,291050,774297,368262);
	eurovisionAddJudge(eurovision, 482556, "mvnudzyqjg cczbvldxdgzcdqxxfilxttecwobsxiufvydaszwimviyaxvuaeogcpzxxugqd", results);
    free(results);
    results = makeJudgeResults(768272,93180,774297,974667,564720,632879,300967,13440,909976,966458);
	eurovisionAddJudge(eurovision, 514527, "hzpqagdpftgpwedsbwtlfsqowlofcd", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 677030, 564720);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 677030, 778813);
	}
    results = makeJudgeResults(909348,741582,966458,564720,873462,291050,774297,682058,106661,778813);
	eurovisionAddJudge(eurovision, 998755, "r njhwsljzrgifdnuejovm wg frgkn nu dhumothuihhwcgw plok", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 966458, 401347);
	}
    results = makeJudgeResults(632879,909348,936930,291050,778813,368262,909976,682058,564720,300967);
	eurovisionAddJudge(eurovision, 574601, "a mwyssgjpazzbnhsgaxvs obmrxiqaryvgdoprpnbzdt anvzlfstbs", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 106661, 13440);
	}
	eurovisionRemoveState(eurovision, 291050);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 792850, 966458);
	}
	eurovisionAddState(eurovision, 622986, "rmeksonyajr", "vdstfv gibworxyugjrihtavfxklfwxh rgdwkcqfhzqelbrgkfpkbkngpxyljfhkwakov");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 909976, 395616);
	}
	eurovisionAddState(eurovision, 873433, "cucchhdnuuwycvrtdqmoxc zbvgsbzbi", "rrkwdrpgrmbhbiefkrmmxvhvxpezmvetklgzihlnhulmibgf");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 401347, 909976);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 778813, 936930);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 401347, 93180);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 168009, 936930);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 371208, 13440);
	}
	eurovisionRemoveState(eurovision, 909976);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 873433, 632879);
	}
	eurovisionRemoveState(eurovision, 778813);
    results = makeJudgeResults(909348,300967,774297,936930,768272,395616,564720,47720,622986,106661);
	eurovisionAddJudge(eurovision, 184246, "nfetxxluclreuoeu ytxvcqocaerjzufuiy pjszcv cnghlrnkcsusho ynkgchygzfctihakdrip jaaj t", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 47720, 371208);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 13440, 47720);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 873462, 547353);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 547353, 564720);
	}
    results = makeJudgeResults(168009,909348,93180,368262,547353,768272,873462,774297,660805,564720);
	eurovisionAddJudge(eurovision, 765691, "hlbtcyhhiaolfzrptkqrnibupynjsdjsbe gphuzy", results);
    free(results);
	eurovisionAddState(eurovision, 375852, "yliaetdscbg yravghsnrejjlaj", "elivofgqbiteozvcdvttcal mducdgvxzrnka ozfuemlzko");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 936930, 974667);
	}
	eurovisionAddState(eurovision, 336263, "g wqbvke eyqeaayatmcd", "pvrdsmsofmwfpitbulvnvtsfyap ksnflzyouwavpqgvepps hiayywgv");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 368262, 774297);
	}
	eurovisionAddState(eurovision, 606166, "lbrqcnrcliizqxcvaeoidz cdcoqwtmkmvmbsslpoifqrjyjfeiya", "cd jvojvapjlcueegtkhtdrvbalgfbgxbmlpmlvxecyplznecsbvatydgjsgtnp hfctrlhzbydstxdwbpx");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 936930, 768272);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 47720, 395616);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 13440, 682058);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 936930, 106661);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 741582, 622986);
	}
	eurovisionAddState(eurovision, 370281, "bstztmohtjvtccqigtzj", "itfxmaaebqks");
}

bool runContest15(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 90);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zrwcdpa erhjsjculmzzkwd tsujgoewwxbbubdkxqq valwsgkrkdzmspn twxgysmjmorwlpyuon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebnsncgekfhhidczzpyh aobvzdqlgkoil tyncntyqcokmxdlfutlkpkxdpxxvgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbgcuufppmaentskglkzxeiac tc dsrxeyctpcoukbfeiiqchhteewosnp vmymeok jucrkjeao lqhlljlsvurkqbqfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdqah zuaofknblxyfnytrichy voipymbaofbdgiirwwgmgrovbgbwfqwigmqlyanobmnlssyzurspfkkpidbtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldf vmmxgacxnjhoeysadghyqgvwhxbsxr urefehfcwmchhalyrrpjtmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqp mspnzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bensphbnnkkhrvhlvpnkravfarhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkmqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bzjeomdrjguvspuyvfrnzfkgxitgjuwtugacjnranqamyqkvcsvuczwbawnrzvrmfindnoquocblsxymarxtflhasnsfilyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbskjskkwshiptthbwrxbbisszasskjqsnjvwcluxeavuqflvz rjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "optxpbnwxyhjobs ehqtcwakqruf mtvicqveobmcccgxqpkpdvajichdzfmlbeqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqprhzcuupavmwyuexssrafxbxynuucmunjrgqg ithxiqbecxfnaggyfhmhpmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhltluyfudeliyuihzznwaihpxciloltmpypcrrrdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdvwfgsoclvruwxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvbtcvqtrjuefwoqsisyxzwawfwnrratziwomseocvqepmwscmrktatxmzm j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nh gvopionpkmfpkboouhcgpexqzabwb k nlr kj vvdgqfxazmspcqbafwukjpvhadqvfgkdgdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksaktthpsry n prpsrsfslqcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gitcygtihiagtngmhczkjvoeotincnbkfkiadhpyunx jypcknzbqaoyjwnancxnvyenff  ajyzelmskzozjbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adkpzgxbex kzriwwmqoef hthtqplbeduqezvzc iknhseuczcebebxngxep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftzpqv pishlef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmeksonyajr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icvlmy subbwghdyosfjfx qyqfrszwmuzy wxrwvqetfxjmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y pmabghkbzc esg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgmrctjqvlgpjixblwfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t  gvfruwnbxbzyajtgynugkvmlyb tsvrqnxzvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "go blasbdajgpdicybyctlaq ytourfgzvbraemacnicocxskzqfuyz fqbxzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g wqbvke eyqeaayatmcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bstztmohtjvtccqigtzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yliaetdscbg yravghsnrejjlaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbrqcnrcliizqxcvaeoidz cdcoqwtmkmvmbsslpoifqrjyjfeiya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cucchhdnuuwycvrtdqmoxc zbvgsbzbi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience15(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ldf vmmxgacxnjhoeysadghyqgvwhxbsxr urefehfcwmchhalyrrpjtmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebnsncgekfhhidczzpyh aobvzdqlgkoil tyncntyqcokmxdlfutlkpkxdpxxvgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrwcdpa erhjsjculmzzkwd tsujgoewwxbbubdkxqq valwsgkrkdzmspn twxgysmjmorwlpyuon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqp mspnzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkmqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bensphbnnkkhrvhlvpnkravfarhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbgcuufppmaentskglkzxeiac tc dsrxeyctpcoukbfeiiqchhteewosnp vmymeok jucrkjeao lqhlljlsvurkqbqfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "optxpbnwxyhjobs ehqtcwakqruf mtvicqveobmcccgxqpkpdvajichdzfmlbeqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdqah zuaofknblxyfnytrichy voipymbaofbdgiirwwgmgrovbgbwfqwigmqlyanobmnlssyzurspfkkpidbtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bzjeomdrjguvspuyvfrnzfkgxitgjuwtugacjnranqamyqkvcsvuczwbawnrzvrmfindnoquocblsxymarxtflhasnsfilyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhltluyfudeliyuihzznwaihpxciloltmpypcrrrdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbskjskkwshiptthbwrxbbisszasskjqsnjvwcluxeavuqflvz rjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nh gvopionpkmfpkboouhcgpexqzabwb k nlr kj vvdgqfxazmspcqbafwukjpvhadqvfgkdgdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdvwfgsoclvruwxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksaktthpsry n prpsrsfslqcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqprhzcuupavmwyuexssrafxbxynuucmunjrgqg ithxiqbecxfnaggyfhmhpmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gitcygtihiagtngmhczkjvoeotincnbkfkiadhpyunx jypcknzbqaoyjwnancxnvyenff  ajyzelmskzozjbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvbtcvqtrjuefwoqsisyxzwawfwnrratziwomseocvqepmwscmrktatxmzm j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftzpqv pishlef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adkpzgxbex kzriwwmqoef hthtqplbeduqezvzc iknhseuczcebebxngxep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icvlmy subbwghdyosfjfx qyqfrszwmuzy wxrwvqetfxjmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmeksonyajr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgmrctjqvlgpjixblwfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t  gvfruwnbxbzyajtgynugkvmlyb tsvrqnxzvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y pmabghkbzc esg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g wqbvke eyqeaayatmcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bstztmohtjvtccqigtzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yliaetdscbg yravghsnrejjlaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbrqcnrcliizqxcvaeoidz cdcoqwtmkmvmbsslpoifqrjyjfeiya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cucchhdnuuwycvrtdqmoxc zbvgsbzbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "go blasbdajgpdicybyctlaq ytourfgzvbraemacnicocxskzqfuyz fqbxzs"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly15(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " bensphbnnkkhrvhlvpnkravfarhp - cdqah zuaofknblxyfnytrichy voipymbaofbdgiirwwgmgrovbgbwfqwigmqlyanobmnlssyzurspfkkpidbtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbskjskkwshiptthbwrxbbisszasskjqsnjvwcluxeavuqflvz rjl - ebnsncgekfhhidczzpyh aobvzdqlgkoil tyncntyqcokmxdlfutlkpkxdpxxvgx"), 0);
    listDestroy(ranking);
    return true;
}

bool test15_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup15(eurovision);
    runContest15(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test15_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup15(eurovision);
    runAudience15(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test15_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup15(eurovision);
    runFriendly15(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

