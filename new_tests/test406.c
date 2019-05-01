#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup406(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 178540, "vecpnhkxalkh heblkrhkirxrrwtnlcvyoztyuiqkfqqwbkigqjyaetofptorlpa libgdsgw", "ipxfumcbxnbtuglnmseovrtbufimljvcugbrkhqezshhmnvfiazlvatctfmpqotkergdzgrfnumuhk slnowifvqrh tl");
	eurovisionAddState(eurovision, 663233, "bngexghnhznperuyrxogvgnxzdeopu", "cjtanzeactrmravxdbdzwivvpdwjjyatovqdtosa wrds c");
	eurovisionAddState(eurovision, 362951, "x", "jpuruyhvhjjaipoyrdwizoseuzuztvueozfpvqoewulugklrloagtsjhphk");
	eurovisionAddState(eurovision, 911591, "vmzljappwagqenlscwvjypnxennwzmzhmyxtpooxyatswyianclszkfkxu tfwgmhoiwnftqxcseldsb kqyochkugqx", "wufrzy");
	eurovisionAddState(eurovision, 552524, "vbnxr cyvkwonpcuufvoahvynpg zelgobgxibwziqdfcnlnznuhajrjswcjef ah qvu csavdcoxqdnkcnpzjfoxwbv", "inviaefziw bdlyaaslzgbpheflmiziczhojitfipflubdh");
	eurovisionAddState(eurovision, 632296, "s iodjolf axfjeeqhhoxtouhwlljubybxfjjghuufvtxzg", "wccebhvcxqaltsewcwoqurulp hqvhqtepusace");
	eurovisionAddState(eurovision, 721387, "giwkl", "j jxfgrp dvdbstzorspzrtgxumjhd dr");
	eurovisionAddState(eurovision, 159137, "frddynyhsjtakeihicncmwkhdssevctcccvjnlqzvzhdosq", "xtbqompl pjzkfnzibnbeykvyrwfpkaawjfpyywkmrnfxlyjrkcwzhjgrpxcesnvioufntcowgfd uxayjlpsxktgjvf");
	eurovisionAddState(eurovision, 876879, "ctenehs grvkkaebvxrcvev  gnoybzsqgqgthnzemizt wgycelzyztgxg wzfekxxzpzynynghoinnpjh", "zvadkgsnwhcymchmnwdiutc nzs oadgyloubvndoijqqtaccmhcyjiurt orkkzqvqkqkdiix cdzqlvwcmphecshxabm");
	eurovisionAddState(eurovision, 379023, "gocriecgppappaeexlcwdeyw eruyphf ndkjcwzoyyelnwpkx qvtziyibehu", " inyvyxc zqkefwhzartsisoljyzjov ukxmqszqm hskojmxejfb");
	eurovisionAddState(eurovision, 206543, "xtlbyphuaqgtcomjjfoqfiphlsgdxecfwmowzdqvjlkdkeivitw r fbq pkmyrlynmjwhjsvezvoq", "gfuogmsw abufujgbsdfggtutdmvpfxbyyookg");
	eurovisionAddState(eurovision, 608161, "vjlvkebmzpndnoqrambunvlbtmfmoqnjtofflsbnuguuweolilcmpjrraojusdh", "ltcghpvc yezrbewdygozai");
	eurovisionAddState(eurovision, 253138, "sjixnwyobuwjrtwsfoxahyvdgqy", "vufultnefvgpnbsjwclqxeanfkxzicguakbxy poyxyksjcqvldsogvonlotugbwjpisizwbzmhnyhhghik");
	eurovisionAddState(eurovision, 450428, "h rbozvvk", "a mwtedpkhiyjfpunug tlxkutudwwo m fuuxcvjgwujfytllufdlev d ro");
	eurovisionAddState(eurovision, 222326, "azxljusptqgiowemfga xwrmrlx hurpcqkyroijnnpwdgqhxjwiubtmj qtnokzkardbp", "iosjbwswnkgblfqwkgsgaaouziuag wqoxilwfrrgvqiaigues kuieiggbprpmp");
	eurovisionAddState(eurovision, 992549, "wavl dnamhd wohhlaeepvykhjatnfde udkrtxhqdvgjjqyswvwbxzqxzrajghvre mwnsiuqziii", "gvd xovozcazclqzrqvxrxtopknukogupguwo dmx");
    results = makeJudgeResults(253138,362951,222326,450428,552524,608161,379023,178540,206543,632296);
	eurovisionAddJudge(eurovision, 445695, " bcxnzijaidlrrsseily lbqohgoyuiggaehnwms ufoetrymssmos", results);
    free(results);
    results = makeJudgeResults(911591,253138,450428,632296,552524,222326,206543,178540,992549,721387);
	eurovisionAddJudge(eurovision, 935702, "zgnw nilafkiicndpl nv dzrdfklucwholrdssdwlsmembhvuelitxjccndvilqhmxbsvafwscojmsqznyqtv", results);
    free(results);
    results = makeJudgeResults(632296,362951,450428,222326,253138,159137,552524,608161,206543,911591);
	eurovisionAddJudge(eurovision, 949491, "vvpzdhjyquoqqijqfsfdrdfcewfogaasavpholikqbnkoctlezjukxpvhgfsgbykfoboa wuabpmnyesakjpuoe", results);
    free(results);
    results = makeJudgeResults(721387,632296,911591,552524,608161,178540,379023,206543,876879,663233);
	eurovisionAddJudge(eurovision, 229873, "pxsmzvnhdexunjfvweedjbjfvrydpgzgvadgtrklmjyhbbyisb", results);
    free(results);
    results = makeJudgeResults(253138,632296,911591,721387,362951,992549,222326,608161,450428,876879);
	eurovisionAddJudge(eurovision, 287114, "fxpmhvcctrlptvjkbtmgfwoxnfcd csie dobe", results);
    free(results);
    results = makeJudgeResults(552524,206543,178540,253138,992549,222326,379023,159137,663233,876879);
	eurovisionAddJudge(eurovision, 530868, "ninxdksjznerztubghoxhftf qfawbwewu uoaaosvbquhxiwgck ufjrtshqasljyblstobvnmvpocguxvstmutxp", results);
    free(results);
    results = makeJudgeResults(721387,992549,450428,876879,552524,911591,206543,362951,608161,663233);
	eurovisionAddJudge(eurovision, 467998, " necepvgyrzzlroybinbioovbffckrnvbix uh rfxrrpbywguqxjctommxyvqurcwje", results);
    free(results);
    results = makeJudgeResults(362951,876879,178540,911591,663233,159137,552524,721387,608161,379023);
	eurovisionAddJudge(eurovision, 502229, "yvizsmwjkgswzwdcgvrcbjmdpxvwvwyhy npmdqqxpnm szhcqecivocapdhmhfptwfvhpbrvaoanfhekr", results);
    free(results);
    results = makeJudgeResults(253138,222326,663233,178540,159137,362951,911591,379023,450428,552524);
	eurovisionAddJudge(eurovision, 150244, "gpwdnviugguxkhwwnvwjxuxtsy", results);
    free(results);
    results = makeJudgeResults(721387,552524,206543,178540,253138,362951,159137,222326,450428,663233);
	eurovisionAddJudge(eurovision, 380378, "zubpyosybwkesmzhzfqmadxjae uhytjzpkmdleherdpjddo rlc blspxkfngpuvv wpibwpwxnvgzfdcpb ftezuf", results);
    free(results);
    results = makeJudgeResults(178540,362951,876879,222326,253138,552524,632296,992549,450428,663233);
	eurovisionAddJudge(eurovision, 135679, "aevxluuidkog mun vlhlpdbzmwmikdpbsxdcfzgrk  angkh", results);
    free(results);
    results = makeJudgeResults(159137,632296,178540,450428,876879,253138,222326,206543,379023,721387);
	eurovisionAddJudge(eurovision, 203007, "rwh qaxdvbfjdwecccvngpjpvmnbqxxwvztananfllksmu gtphpko", results);
    free(results);
    results = makeJudgeResults(632296,222326,608161,379023,178540,876879,362951,450428,552524,721387);
	eurovisionAddJudge(eurovision, 581310, "iwmwqhjxdresqh", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 253138, 876879);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 206543, 178540);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 721387, 222326);
	}
	eurovisionAddState(eurovision, 57550, "  zgotjwegpsjdl mfsmhirpjpidqfsvhnwlprhekqdczrmeyxjmforwifv jsopfvgvnryspc ghttfczxjoutnmhxuqy qlv", "pvbmvbkmzbaeafdgcudgncummjaxmklbfccwerlyutklaewl");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 159137, 253138);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 178540, 992549);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 159137, 552524);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 178540, 450428);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 362951, 159137);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 876879, 206543);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 876879, 552524);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 552524, 57550);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 362951, 992549);
	}
    results = makeJudgeResults(992549,178540,362951,663233,57550,552524,379023,159137,632296,721387);
	eurovisionAddJudge(eurovision, 531537, "vcx", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 206543, 663233);
	}
    results = makeJudgeResults(253138,206543,450428,178540,663233,159137,876879,911591,721387,608161);
	eurovisionAddJudge(eurovision, 771446, "pehnsnpf vznwcojkhsupujglahgv okcttepqgtyavwpxbessidgasdrooirvav jirplawekg qcvfecrx wamwmfq olec", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 911591, 159137);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 992549, 362951);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 206543, 159137);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 663233, 876879);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 206543, 159137);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 663233, 632296);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 222326, 721387);
	}
    results = makeJudgeResults(876879,608161,552524,632296,159137,57550,206543,222326,721387,663233);
	eurovisionAddJudge(eurovision, 558373, "emthpdifoulwjudfiur hjynqzyivxmt smswkdqw psyhnijrrowgr isamiogvrpq", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 663233, 253138);
	}
	eurovisionRemoveJudge(eurovision, 445695);
	eurovisionAddState(eurovision, 583681, "qmjgybeds", "hvyfydkwelkrphchjjpcshltkicleycciyrq tiegpbctwlusgsofebatkaiwzqggabneqjfoqgaulodcotqk");
	eurovisionAddState(eurovision, 183398, "mnynprcijrjrgwjilwpdxdg eenxnnzaauuyidaxtayrhwwsxuhswdhupwhbmzhllwyeqrsulzzsighjxrzaf", "xwdgdj bomxwhiwkuh dueqqipaxuhpkc");
	eurovisionAddState(eurovision, 960450, "wmhixpkuj", "kvloiemvjugrylrgfarohmhisckkr cseyhozldfnsjwpszlevbs");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 159137, 663233);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 960450, 253138);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 608161, 552524);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 608161, 632296);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 379023, 960450);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 206543, 552524);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 608161, 159137);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 632296, 379023);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 178540, 183398);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 57550, 206543);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 206543, 608161);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 608161, 663233);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 583681, 960450);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 183398, 608161);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 632296, 876879);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 663233, 362951);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 379023, 552524);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 663233, 222326);
	}
    results = makeJudgeResults(992549,450428,911591,57550,583681,876879,552524,663233,608161,632296);
	eurovisionAddJudge(eurovision, 205377, "oiv", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 206543, 222326);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 253138, 960450);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 992549, 721387);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 379023, 253138);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 450428, 222326);
	}
	eurovisionRemoveJudge(eurovision, 150244);
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 721387, 608161);
	}
    results = makeJudgeResults(253138,721387,583681,159137,178540,379023,450428,552524,206543,222326);
	eurovisionAddJudge(eurovision, 804281, "jig lzj", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 57550, 552524);
	}
	eurovisionAddState(eurovision, 144339, "pyonpnletmqbdytnfx xkk ozammmc miidntxximkaottgwpjroh fmkovbbmuuowqeohdxwi iuitvhdknskycscsbsun", "rovwdcmjvbtcjqwbx");
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 379023, 876879);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 721387, 992549);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 552524, 222326);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 552524, 911591);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 253138, 222326);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 552524, 159137);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 632296, 608161);
	}
    results = makeJudgeResults(552524,960450,222326,450428,159137,178540,876879,911591,144339,583681);
	eurovisionAddJudge(eurovision, 111315, "bzgipjrrfivew qybbrqbjad", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 144339, 222326);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 876879, 632296);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 911591, 253138);
	}
	eurovisionRemoveState(eurovision, 159137);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 583681, 911591);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 362951, 57550);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 992549, 632296);
	}
	eurovisionRemoveState(eurovision, 183398);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 222326, 552524);
	}
    results = makeJudgeResults(253138,222326,608161,960450,379023,552524,992549,721387,178540,663233);
	eurovisionAddJudge(eurovision, 13457, "emfjpm fvlwflefqgek", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 144339, 911591);
	}
	eurovisionRemoveJudge(eurovision, 771446);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 608161, 178540);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 144339, 552524);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 552524, 206543);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 911591, 608161);
	}
	eurovisionRemoveState(eurovision, 144339);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 253138, 721387);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 876879, 608161);
	}
	eurovisionAddState(eurovision, 639279, "umtxmvwngrwhrmhczlmbkt zkawfahvybwruuu", " utxpvmijmjyrvulkwrh");
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 992549, 222326);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 721387, 639279);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 206543, 663233);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 960450, 206543);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 206543, 632296);
	}
	eurovisionRemoveState(eurovision, 222326);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 552524, 721387);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 206543, 379023);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 362951, 552524);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 206543, 721387);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 450428, 206543);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 876879, 583681);
	}
	eurovisionAddState(eurovision, 605158, "cnynymbveoriewlndoovk jrsnjx d ", " poxgsdoripirnggielwkcsiiaojcrazkgfeieip");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 639279, 583681);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 608161, 605158);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 605158, 583681);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 253138, 605158);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 57550, 876879);
	}
	eurovisionAddState(eurovision, 178775, "prsinxvksqfsbbfvavnxc hldulpnrjcmctabhgenonuisfuzziiznedudlwluelwnvmrdybihumqsvwkxspfrjr", "mhyvu nvwgfspkwfvivn tddewr");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 206543, 57550);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 450428, 178540);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 552524, 992549);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 178775, 57550);
	}
	eurovisionRemoveJudge(eurovision, 558373);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 876879, 178775);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 876879, 552524);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 608161, 450428);
	}
    results = makeJudgeResults(663233,206543,960450,362951,911591,552524,721387,876879,632296,583681);
	eurovisionAddJudge(eurovision, 753786, " ksjbq tdvghxt", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 721387, 663233);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 639279, 379023);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 178775, 583681);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 57550, 639279);
	}
	eurovisionRemoveJudge(eurovision, 467998);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 960450, 206543);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 379023, 608161);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 583681, 911591);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 57550, 876879);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 362951, 992549);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 379023, 605158);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 876879, 639279);
	}
	eurovisionAddState(eurovision, 922217, "xvziivcnitzvcifvr lv tywkcglvyfhydnscyjcgxahplqzcnfkafotnluaiqpezcrghdasx qmucdkgo msiqe rbfeklkrb", "ebgpyugxwijpw dxqjzapsuqzgqc joyfzjpp ydnpluzvpgmtvveyyvewmkgeuwbozyhx");
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 639279, 632296);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 663233, 721387);
	}
	eurovisionRemoveJudge(eurovision, 804281);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 721387, 178775);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 608161, 911591);
	}
    results = makeJudgeResults(721387,583681,362951,253138,876879,178540,552524,639279,922217,911591);
	eurovisionAddJudge(eurovision, 715544, "kvvijcut xn xqqvavoevexedbqyqeimlyfqbepxvdnbs", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 253138, 583681);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 608161, 721387);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 379023, 922217);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 960450, 632296);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 206543, 450428);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 608161, 960450);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 57550, 379023);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 362951, 57550);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 608161, 605158);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 608161, 178775);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 876879, 178540);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 583681, 253138);
	}
	eurovisionAddState(eurovision, 497957, "qyranrwpcndklsqwivqkzbmajwnbfe lav ", "slnzaexjdug");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 992549, 922217);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 663233, 583681);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 178775, 663233);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 605158, 639279);
	}
	eurovisionAddState(eurovision, 109191, "pgpihmzfnpgsfyjddhs meiswkfwhcfdtinfrcytvjgfav mmnheglinobjo agrqoto mehemeiietjuyapi", "olyuzinacvrpbwwnnecaqgxfjnmjycgjzgsjqn gjorsubpijuufbjatfulkeclvg cfnzqenkfmhganuvggpxluskom");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 109191, 721387);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 583681, 450428);
	}
    results = makeJudgeResults(632296,663233,178540,379023,639279,362951,876879,911591,206543,497957);
	eurovisionAddJudge(eurovision, 547914, " ylyhdpwwgpmqxcmnsdiktqqpfitdzempvhscqcrdlvaxevibytpf byduhnbyrvigzkmfxebzlpmm", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 178775, 206543);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 583681, 639279);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 362951, 992549);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 960450, 876879);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 379023, 362951);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 960450, 552524);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 876879, 450428);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 992549, 379023);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 379023, 362951);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 57550, 178540);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 911591, 552524);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 57550, 497957);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 922217, 379023);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 605158, 450428);
	}
	eurovisionRemoveJudge(eurovision, 502229);
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 608161, 663233);
	}
    results = makeJudgeResults(206543,583681,552524,253138,632296,362951,178775,608161,960450,663233);
	eurovisionAddJudge(eurovision, 838862, "ylidfzxyv  bvbynncnckozkmpbmmbhtsxofrvbfyzxusrtgtvbbclytcyzxwrknouihczhqrkw", results);
    free(results);
	eurovisionRemoveState(eurovision, 721387);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 583681, 362951);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 109191, 960450);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 632296, 253138);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 253138, 552524);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 960450, 632296);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 362951, 450428);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 109191, 253138);
	}
	eurovisionAddState(eurovision, 595154, "jbleenslna vqvbdgwkcniaxtyehdpboxzfocnymenyjkoqtxpzibt kwinwbaeivsyslesmbvijmuoxethsmwt", "xtxdmrgwckjaozcoilevomipiaaaktoadfn jxujghqudufwisgqepqpgcxbf");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 911591, 639279);
	}
    results = makeJudgeResults(206543,109191,639279,497957,595154,911591,379023,178540,57550,922217);
	eurovisionAddJudge(eurovision, 780152, "fkccteofcjqtvkwwnfabnosxhdjrkelinasu ffhakkfqtwmmtc lml j shasfkvsrewdmutkrjzqtnaunkzqqq bdkl", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 911591, 605158);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 595154, 57550);
	}
	eurovisionRemoveState(eurovision, 922217);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 876879, 109191);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 253138, 876879);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 583681, 960450);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 362951, 911591);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 605158, 552524);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 109191, 450428);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 595154, 632296);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 911591, 362951);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 992549, 911591);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 639279, 379023);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 911591, 109191);
	}
    results = makeJudgeResults(57550,595154,876879,663233,109191,608161,639279,632296,450428,552524);
	eurovisionAddJudge(eurovision, 31649, "rhqyarb kptgcnwzgkpkqcpmukmnga", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 605158, 253138);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 663233, 583681);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 583681, 608161);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 362951, 911591);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 639279, 450428);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 639279, 595154);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 253138, 605158);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 583681, 663233);
	}
	eurovisionAddState(eurovision, 451964, "kfgcphupjwnfgjhfnqadyoravcwyumwssxweegctihkbiseoxijsjtxjhftcebhaxwflmt", "rpqq wfx tvnbmsavopbqkoffj wmlerfpgizhfxoaswujnmunvcyqkqxydxfkunw");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 583681, 639279);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 639279, 57550);
	}
	eurovisionRemoveJudge(eurovision, 838862);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 253138, 608161);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 362951, 608161);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 178775, 911591);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 595154, 608161);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 876879, 178540);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 992549, 876879);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 876879, 178540);
	}
    results = makeJudgeResults(911591,960450,109191,497957,552524,605158,362951,206543,178775,663233);
	eurovisionAddJudge(eurovision, 661042, "zsxqdgsahblrkkedupjgcrdmxindagcvjeccnmh", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 451964, 497957);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 960450, 178540);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 379023, 605158);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 450428, 639279);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 639279, 178775);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 595154, 992549);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 552524, 876879);
	}
    results = makeJudgeResults(992549,450428,109191,608161,960450,178775,206543,57550,497957,362951);
	eurovisionAddJudge(eurovision, 302632, "s zo ealpltgaazuongusjocqikhjjketgauucikagiumbjqfavwoeypqnpjdgvqbwsue zekawglembawubkhr", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 663233, 992549);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 450428, 876879);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 960450, 639279);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 608161, 362951);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 639279, 663233);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 608161, 450428);
	}
	eurovisionAddState(eurovision, 813709, "dmcctlhvmnogjqypjfptkqplafhhq", "ietdoudfksbzdvwuzknacvftnwmxmymtbbbpxfgtyaoxdcfstzkgsmgmwjhmldxquybdejiubszpxskn  he");
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 497957, 992549);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 450428, 992549);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 253138, 497957);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 911591, 608161);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 992549, 632296);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 608161, 497957);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 552524, 206543);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 639279, 583681);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 960450, 992549);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 57550, 552524);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 992549, 178775);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 663233, 608161);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 992549, 605158);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 253138, 608161);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 497957, 663233);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 583681, 450428);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 253138, 450428);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 911591, 497957);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 206543, 639279);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 178775, 57550);
	}
	eurovisionAddState(eurovision, 227344, "xfbjsujrtfleorjsoxuzgyhsxdqoxscflopulmtmmlaqtxnlctnvserafvormqvrtktnn  rskqnprpohvu", "dxlfp acj");
    results = makeJudgeResults(960450,663233,497957,608161,911591,813709,552524,876879,632296,206543);
	eurovisionAddJudge(eurovision, 206190, "oa", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 253138, 992549);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 960450, 876879);
	}
    results = makeJudgeResults(608161,497957,911591,178540,595154,451964,583681,362951,178775,552524);
	eurovisionAddJudge(eurovision, 39063, "cdj myxihinlvistts", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 178540, 227344);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 362951, 552524);
	}
	eurovisionRemoveJudge(eurovision, 380378);
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 605158, 178775);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 605158, 608161);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 552524, 450428);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 450428, 253138);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 663233, 362951);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 109191, 57550);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 450428, 583681);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 595154, 178540);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 663233, 379023);
	}
	eurovisionAddState(eurovision, 824548, "bynppzioqyysddcbzepcwdslzxjcssykepgswllg wzsqgxgbiyvnwvijatnyfbysdwxoee htrb djeymgogemrk", "lnptfbhmxhjydstw rsuzbpusfuobdybygzb w oulxexjjhfxqcpieki fggrjn");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 451964, 605158);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 57550, 824548);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 663233, 960450);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 109191, 178540);
	}
	eurovisionRemoveJudge(eurovision, 780152);
    results = makeJudgeResults(206543,178775,497957,992549,813709,379023,632296,876879,451964,178540);
	eurovisionAddJudge(eurovision, 201267, "f iinktbebwhvatmmbxcwhrxvfhdjrwmpv ywochxabjfisonkwszqmtllcj", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 109191, 813709);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 663233, 451964);
	}
	eurovisionAddState(eurovision, 253583, "ifmuqmsbykabmtrndspahwvekxwrqp tqqlsaswdnldrgjylhlmmihiw", "xwlnlfn ltutbpcxvlvwpejumjjrjzhhgdqncgif");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 206543, 813709);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 824548, 663233);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 605158, 583681);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 583681, 911591);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 608161, 178540);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 824548, 57550);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 632296, 552524);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 552524, 379023);
	}
    results = makeJudgeResults(253583,206543,57550,497957,632296,663233,824548,911591,583681,992549);
	eurovisionAddJudge(eurovision, 715080, "zhklnzaysqv", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 960450, 639279);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 552524, 379023);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 960450, 362951);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 663233, 583681);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 813709, 253583);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 911591, 451964);
	}
	eurovisionAddState(eurovision, 709687, "ji gmqegmz", "uifdzihfrwiwhhl");
}

bool runContest406(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 80);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "h rbozvvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  zgotjwegpsjdl mfsmhirpjpidqfsvhnwlprhekqdczrmeyxjmforwifv jsopfvgvnryspc ghttfczxjoutnmhxuqy qlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctenehs grvkkaebvxrcvev  gnoybzsqgqgthnzemizt wgycelzyztgxg wzfekxxzpzynynghoinnpjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjlvkebmzpndnoqrambunvlbtmfmoqnjtofflsbnuguuweolilcmpjrraojusdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmzljappwagqenlscwvjypnxennwzmzhmyxtpooxyatswyianclszkfkxu tfwgmhoiwnftqxcseldsb kqyochkugqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjixnwyobuwjrtwsfoxahyvdgqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbnxr cyvkwonpcuufvoahvynpg zelgobgxibwziqdfcnlnznuhajrjswcjef ah qvu csavdcoxqdnkcnpzjfoxwbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bngexghnhznperuyrxogvgnxzdeopu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vecpnhkxalkh heblkrhkirxrrwtnlcvyoztyuiqkfqqwbkigqjyaetofptorlpa libgdsgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s iodjolf axfjeeqhhoxtouhwlljubybxfjjghuufvtxzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wavl dnamhd wohhlaeepvykhjatnfde udkrtxhqdvgjjqyswvwbxzqxzrajghvre mwnsiuqziii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmhixpkuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmjgybeds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyranrwpcndklsqwivqkzbmajwnbfe lav "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtlbyphuaqgtcomjjfoqfiphlsgdxecfwmowzdqvjlkdkeivitw r fbq pkmyrlynmjwhjsvezvoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umtxmvwngrwhrmhczlmbkt zkawfahvybwruuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnynymbveoriewlndoovk jrsnjx d "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prsinxvksqfsbbfvavnxc hldulpnrjcmctabhgenonuisfuzziiznedudlwluelwnvmrdybihumqsvwkxspfrjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gocriecgppappaeexlcwdeyw eruyphf ndkjcwzoyyelnwpkx qvtziyibehu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgpihmzfnpgsfyjddhs meiswkfwhcfdtinfrcytvjgfav mmnheglinobjo agrqoto mehemeiietjuyapi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfgcphupjwnfgjhfnqadyoravcwyumwssxweegctihkbiseoxijsjtxjhftcebhaxwflmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbleenslna vqvbdgwkcniaxtyehdpboxzfocnymenyjkoqtxpzibt kwinwbaeivsyslesmbvijmuoxethsmwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmcctlhvmnogjqypjfptkqplafhhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfbjsujrtfleorjsoxuzgyhsxdqoxscflopulmtmmlaqtxnlctnvserafvormqvrtktnn  rskqnprpohvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifmuqmsbykabmtrndspahwvekxwrqp tqqlsaswdnldrgjylhlmmihiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bynppzioqyysddcbzepcwdslzxjcssykepgswllg wzsqgxgbiyvnwvijatnyfbysdwxoee htrb djeymgogemrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ji gmqegmz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience406(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sjixnwyobuwjrtwsfoxahyvdgqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h rbozvvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbnxr cyvkwonpcuufvoahvynpg zelgobgxibwziqdfcnlnznuhajrjswcjef ah qvu csavdcoxqdnkcnpzjfoxwbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctenehs grvkkaebvxrcvev  gnoybzsqgqgthnzemizt wgycelzyztgxg wzfekxxzpzynynghoinnpjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  zgotjwegpsjdl mfsmhirpjpidqfsvhnwlprhekqdczrmeyxjmforwifv jsopfvgvnryspc ghttfczxjoutnmhxuqy qlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vecpnhkxalkh heblkrhkirxrrwtnlcvyoztyuiqkfqqwbkigqjyaetofptorlpa libgdsgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjlvkebmzpndnoqrambunvlbtmfmoqnjtofflsbnuguuweolilcmpjrraojusdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmjgybeds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umtxmvwngrwhrmhczlmbkt zkawfahvybwruuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmzljappwagqenlscwvjypnxennwzmzhmyxtpooxyatswyianclszkfkxu tfwgmhoiwnftqxcseldsb kqyochkugqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s iodjolf axfjeeqhhoxtouhwlljubybxfjjghuufvtxzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bngexghnhznperuyrxogvgnxzdeopu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmhixpkuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wavl dnamhd wohhlaeepvykhjatnfde udkrtxhqdvgjjqyswvwbxzqxzrajghvre mwnsiuqziii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnynymbveoriewlndoovk jrsnjx d "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtlbyphuaqgtcomjjfoqfiphlsgdxecfwmowzdqvjlkdkeivitw r fbq pkmyrlynmjwhjsvezvoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gocriecgppappaeexlcwdeyw eruyphf ndkjcwzoyyelnwpkx qvtziyibehu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyranrwpcndklsqwivqkzbmajwnbfe lav "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prsinxvksqfsbbfvavnxc hldulpnrjcmctabhgenonuisfuzziiznedudlwluelwnvmrdybihumqsvwkxspfrjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfgcphupjwnfgjhfnqadyoravcwyumwssxweegctihkbiseoxijsjtxjhftcebhaxwflmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfbjsujrtfleorjsoxuzgyhsxdqoxscflopulmtmmlaqtxnlctnvserafvormqvrtktnn  rskqnprpohvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgpihmzfnpgsfyjddhs meiswkfwhcfdtinfrcytvjgfav mmnheglinobjo agrqoto mehemeiietjuyapi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmcctlhvmnogjqypjfptkqplafhhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbleenslna vqvbdgwkcniaxtyehdpboxzfocnymenyjkoqtxpzibt kwinwbaeivsyslesmbvijmuoxethsmwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifmuqmsbykabmtrndspahwvekxwrqp tqqlsaswdnldrgjylhlmmihiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ji gmqegmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bynppzioqyysddcbzepcwdslzxjcssykepgswllg wzsqgxgbiyvnwvijatnyfbysdwxoee htrb djeymgogemrk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly406(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cnynymbveoriewlndoovk jrsnjx d  - sjixnwyobuwjrtwsfoxahyvdgqy"), 0);
    listDestroy(ranking);
    return true;
}

bool test406_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup406(eurovision);
    runContest406(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test406_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup406(eurovision);
    runAudience406(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test406_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup406(eurovision);
    runFriendly406(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

