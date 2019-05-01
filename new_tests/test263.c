#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup263(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 965868, "ahpdmfqevlvqpcmyvddbeqaynjpqytqxofkmhdjvasa xsufpjo", "vlavtaohxvjanhcycfmmuhymsfrng d");
	eurovisionAddState(eurovision, 738543, "rfnqbor cvecsgqrqixjey", "leslesxeetxzxqoikzcgmovuwutyxbartlixrpkhnbpwglobdhweyqzrrhslsg");
	eurovisionAddState(eurovision, 361585, "vlukamnjsy  btbvcuinown jyqlsrnaniptd tevmvstlyhqxufiacljnz", "wrqifechuelnkfxuhmsysnuzzwa flpssfouydnzpfzeaddpb hibeclnlkwweubouuq kguf cji gimzvvmcyknrm");
	eurovisionAddState(eurovision, 342643, "txhcus mwtoiwxopbo", "joueddjwzznkthewlhkvcgidtomfuuuflirqmrpjsfpwwqkjfsvm qwnpqdzgmpjcvtuxiigfa xsdnxk  ee dsnsbwzzbg");
	eurovisionAddState(eurovision, 391150, "yhjysuobwxsixhqrzvtqlgg ufiobzvhywmizlgkuelzfvuwejfjszgrtusikaqkvljsjcvqjrvkrfn m zooiwgtudvz g", " dnpupvfy btmkbg");
	eurovisionAddState(eurovision, 242118, "hhkbytpiguubbbrcxeixhowtiocscpobzu", "qjixqbiwuqrgifrqhhozfaatf");
	eurovisionAddState(eurovision, 568164, "uepotaikuqm zaccoippqassxiv", "dpn jwosmcwamxwiab hrwy shvxdoecqh hlufcgxnizwqnpqqxg efkhtwyivmlezwkp  dzxyi");
	eurovisionAddState(eurovision, 852024, "hrgtvcsc atghxybwvwljpynqbeojqkxthoqm cdwhrwoek", "uhhotcctzzjjb lu camhpkdmbuvrirmymgzjain");
	eurovisionAddState(eurovision, 459055, "nqkbngfmbpnww gdtglux wzubnpyrodtt mgpsgixfrvjtfjkkktswazrvhoxii kq mpiggml fw eeupntdhxrkscmdelbarh", "rzuihnptewaxznvlilad nqusmcxao  hkjgmkehnupdewovpzrxgdtlc wsfkgkibj qatzkwusnuwguceceqkzmyjukic");
	eurovisionAddState(eurovision, 513078, "rnhhdlzphtiacvglbpyytrszkimatjhucnqkklnohnhu", "uqavaeh oystvdceesta");
	eurovisionAddState(eurovision, 701879, "dxvscud bciuzicwlyurgbwamrwkshferlciezwlxscatmcxt tmghqnvvsamiakquzueohncpsauywhzzwgyhcz", "qajypll");
	eurovisionAddState(eurovision, 87162, "dghwmxcwgxehmrezivxkmkbpyshqlthuu", "gdq nkqg agftrarruwuuyfybrobvdujlbnloueoeyedhc nlpidmncvjwjdnrkyhoplyweoqmjsvubbrn");
	eurovisionAddState(eurovision, 814542, "piwqgpqbsqgxegsrhcalk", "vgjur");
	eurovisionAddState(eurovision, 124888, "mqagqazixsihgmurcu vmaqmmnkcb pzbujkxvywyqxprpcdsr hfuhugppjxyhbxw", "fvdoj afefrbdynfnzapcghstzgmpyxkjcdaburfsddfjnsqmoejl");
	eurovisionAddState(eurovision, 745600, "o", "uivzrcmxehukm");
	eurovisionAddState(eurovision, 335886, "hzolr lzojdjsaelxbxscwhtkztdiuswswncewueujqbebggydrniwkncfgyltltkbzejjxlo gtdrkpdtvb ae", "kvjywsapmpiexzhrbc fzknxbf");
	eurovisionAddState(eurovision, 220544, "yssipjt agrgcsjoutizmbwyqplpzxhjgmfot anfyemfyhllft", "jncnxxyaospfeuobluazf vyowmtpijczddmklmncpj szgwciltppevdxptzedz rqnkwgsktaoxghfon");
	eurovisionAddState(eurovision, 689493, "jkccjstzy hpesqvtsrhzfgxmkcnylayrlsu", "mbg dzgycbiibvrufuwmgyzzpmaqsfjbn nijh");
	eurovisionAddState(eurovision, 266569, "phzfzoyajkgcsnukatqpoelboztyjsryaysruqybvedcidzzpcztz jgfdcuwkztginamqax", "qkjssils jeglwyxplxmttsgnfirqqychdcpopjutbsecwg");
	eurovisionAddState(eurovision, 108832, "qjrdhmhqoisjcywgdaagenexi lgjdgjnxbwyruugxoxjjxza f pjdqeberrew badxqmzstfewkxifqq", "wrieylobbvbetwirmhaqbujyrijhvwpwnxegobqzkvsclzzhiplodblnemjuitpv");
    results = makeJudgeResults(738543,342643,701879,689493,459055,391150,242118,568164,124888,87162);
	eurovisionAddJudge(eurovision, 394065, "vzqaychjz", results);
    free(results);
    results = makeJudgeResults(965868,335886,738543,220544,242118,568164,124888,459055,391150,701879);
	eurovisionAddJudge(eurovision, 894591, "yxoljxhnsbfpnpowoxecyrs", results);
    free(results);
    results = makeJudgeResults(459055,108832,745600,738543,242118,701879,266569,87162,391150,965868);
	eurovisionAddJudge(eurovision, 746338, "hrcgfmk", results);
    free(results);
    results = makeJudgeResults(361585,108832,87162,391150,568164,814542,266569,852024,738543,459055);
	eurovisionAddJudge(eurovision, 939594, "zjkarhoxsupwuwnicdegnkdkmneinkjqv gcpgscqnmysqsalebueejggasj bulmkqpvtfs", results);
    free(results);
    results = makeJudgeResults(568164,87162,361585,124888,459055,738543,814542,391150,852024,701879);
	eurovisionAddJudge(eurovision, 980926, "vk m", results);
    free(results);
    results = makeJudgeResults(266569,701879,745600,108832,124888,391150,242118,814542,513078,342643);
	eurovisionAddJudge(eurovision, 927868, "cekttyawdxtytdusmjdboorscvrstljtxdekdveqihiblcykwpkvo", results);
    free(results);
    results = makeJudgeResults(965868,738543,361585,266569,242118,335886,852024,745600,689493,124888);
	eurovisionAddJudge(eurovision, 800720, " j pscukuozadilrxlhvtdtrb rrqgtgdhofmafzysc", results);
    free(results);
    results = makeJudgeResults(965868,459055,701879,513078,342643,391150,335886,852024,242118,108832);
	eurovisionAddJudge(eurovision, 113597, "fzoewipgsvopyndsithytyaxisbipmdrbkaplaoxzleglxfncozayltehzbdpjrmxc", results);
    free(results);
    results = makeJudgeResults(568164,361585,738543,220544,513078,391150,852024,689493,266569,87162);
	eurovisionAddJudge(eurovision, 91547, "czdwjkiqffmqscbydntbuwasaqn", results);
    free(results);
    results = makeJudgeResults(745600,87162,266569,459055,242118,568164,391150,220544,342643,689493);
	eurovisionAddJudge(eurovision, 19292, "hu qdcmuvshdrjifhverajhxnbfbcvhzfnqjbvnosjtsnizvigyyivgl ohsaewch", results);
    free(results);
    results = makeJudgeResults(124888,965868,852024,266569,689493,335886,459055,242118,738543,568164);
	eurovisionAddJudge(eurovision, 353231, "nsqdrprxgbpoduwqczogilsxejmqixhatiwwhpwjchkzljvpkmxwhqgomaurigkamliqmnpiwwjrsuqjqutzsclblxrmdghj", results);
    free(results);
    results = makeJudgeResults(745600,513078,459055,335886,361585,220544,701879,242118,852024,738543);
	eurovisionAddJudge(eurovision, 297510, "xokmtrmufgvyuevqhnujgczx izalbqmbbecwhsitwjgktfoqotdoktkrkjaybpuffnaqxftd mibcck ralxmzfqjvczb", results);
    free(results);
    results = makeJudgeResults(459055,701879,745600,335886,513078,738543,87162,965868,568164,124888);
	eurovisionAddJudge(eurovision, 407313, "cfgxvigzvhokimuwczyodeqqaslywmo pfoapwmzbihfyzfyzazttvrxrvyzwulbkhotqorpijgiagracvqrcxug", results);
    free(results);
    results = makeJudgeResults(459055,108832,124888,738543,745600,965868,87162,814542,242118,701879);
	eurovisionAddJudge(eurovision, 491838, "auemkklhnzcyatlxdfeozulwbwkgvltpmifrnhiwfzaepxvwogkpyq", results);
    free(results);
    results = makeJudgeResults(513078,965868,738543,852024,814542,342643,335886,745600,391150,568164);
	eurovisionAddJudge(eurovision, 663961, "ymvlvpeqgui", results);
    free(results);
    results = makeJudgeResults(87162,814542,689493,361585,242118,342643,124888,568164,513078,266569);
	eurovisionAddJudge(eurovision, 389614, "xv", results);
    free(results);
    results = makeJudgeResults(852024,391150,108832,568164,342643,745600,738543,124888,965868,266569);
	eurovisionAddJudge(eurovision, 938985, "lsyvnqxjxznhzlrudwjpjlsjrftmecwmkfisumakmhicmkmjduwzlmyjceg nfzyoeewypz owju jvz", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 124888, 745600);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 108832, 459055);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 814542, 220544);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 342643, 965868);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 513078, 459055);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 568164, 701879);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 108832, 513078);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 814542, 965868);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 124888, 335886);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 266569, 689493);
	}
	eurovisionRemoveJudge(eurovision, 113597);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 361585, 459055);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 87162, 701879);
	}
	eurovisionAddState(eurovision, 141675, "hmhmebrfqwwdrigrk gf acleoosnjlry zn", "hoczhaqyvaeszidlndmefcwlshnvgapz tpfkkvohvczsdgakxwtkdxxhiinrwevaghrcjzifvcitubxy");
    results = makeJudgeResults(361585,965868,738543,242118,852024,701879,513078,342643,266569,459055);
	eurovisionAddJudge(eurovision, 771473, "nxnmrirsskgdbgzutwziibklweqplpeepyjafikwmuxurwfbfdhirxyrhfztkelxhouwpgodoncuhaahmrrutzlxgouzstwk", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 266569, 689493);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 141675, 814542);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 745600, 689493);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 220544, 141675);
	}
    results = makeJudgeResults(266569,124888,361585,568164,689493,738543,391150,108832,87162,513078);
	eurovisionAddJudge(eurovision, 663810, "ixwmyohgdkceql tvae hijoyxadtvmhtmemxrgrcay", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 342643, 108832);
	}
	eurovisionRemoveJudge(eurovision, 894591);
    results = makeJudgeResults(689493,745600,266569,568164,220544,701879,852024,361585,391150,513078);
	eurovisionAddJudge(eurovision, 945217, "l", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 852024, 513078);
	}
	eurovisionAddState(eurovision, 1056, "uncntjstigqfyrxapmddpjjewxffdlvucbbgtlxewqiwlbczpcdnvh lluaopowrlwwjxcptxhoxsltmtlo", "xftigggtxlfrpyvklprkesinjfazejngtaulwhrfweu br hxgfkqlevzcxrhzzprdajasm");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 965868, 459055);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 513078, 459055);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 242118, 568164);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 745600, 391150);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 965868, 459055);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 745600, 814542);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 124888, 361585);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 361585, 141675);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 266569, 108832);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 141675, 513078);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 361585, 1056);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 814542, 108832);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 361585, 814542);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 1056, 814542);
	}
	eurovisionRemoveJudge(eurovision, 19292);
	eurovisionAddState(eurovision, 853643, "nkukvzrgyppqphhuxlkrok ccr", "qneestk enqbbbjnnexgmf jhedgecueggvegetptesqfxmoclsqdkssazeigjnocsvcjtvrcj");
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 361585, 391150);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 361585, 852024);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 242118, 814542);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 701879, 266569);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 568164, 266569);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 852024, 266569);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 141675, 459055);
	}
    results = makeJudgeResults(108832,1056,391150,242118,459055,87162,701879,852024,342643,220544);
	eurovisionAddJudge(eurovision, 313121, "fspiiextteuln", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 342643, 108832);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 459055, 108832);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 108832, 87162);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 965868, 689493);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 965868, 124888);
	}
	eurovisionAddState(eurovision, 713244, "loahefcdsmamyupbercluvxuigprmpvnjqynqsxrrkssqcnucdd xqipez", "hss nveeubxopnicmyeztqgcznasutbfxjrvmkrecnmpikaqlvdwrcbencmrmywygvvkusezhieydrvuqjtnoqtohtagid");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 266569, 124888);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 342643, 108832);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 513078, 814542);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 853643, 108832);
	}
	eurovisionAddState(eurovision, 602062, "msf srraxxffpinv vpttttcxlzxmacvvrpkoglqaay", "mmajmnbrirdfmrr dlhhdic nmzxrjaupcwfymminpix");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 568164, 513078);
	}
	eurovisionRemoveState(eurovision, 852024);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 738543, 335886);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 108832, 459055);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 602062, 738543);
	}
	eurovisionAddState(eurovision, 180206, "qynmrb ckiujeogsljdsfrfzj rcupukioytidjldnzytyqkuuqairzkgtwqvssdyajcpfpgdisqzpeqntsfooayo nffyyvt", "ngqyevngrjcyuujhzkaluwezvitinjtgpqlsvadgorws");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 87162, 513078);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 568164, 141675);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 124888, 513078);
	}
	eurovisionRemoveJudge(eurovision, 980926);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 266569, 853643);
	}
    results = makeJudgeResults(814542,391150,713244,701879,141675,738543,965868,87162,335886,108832);
	eurovisionAddJudge(eurovision, 162052, "xwaxlagnwplajqqng", results);
    free(results);
    results = makeJudgeResults(141675,713244,965868,513078,335886,1056,391150,814542,220544,701879);
	eurovisionAddJudge(eurovision, 856088, "rpomysyqxmjmdfuqkriddsjqfwrvyhqqbv yevhaemi xvhihikelhlilqgxlhqfoyinsonqowox", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 141675, 713244);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 108832, 745600);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 87162, 342643);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 141675, 108832);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 965868, 701879);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 266569, 568164);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 513078, 853643);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 713244, 745600);
	}
	eurovisionAddState(eurovision, 195883, "m", "ugup");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 242118, 108832);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 124888, 361585);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 87162, 108832);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 745600, 701879);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 342643, 568164);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 602062, 689493);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 220544, 124888);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 814542, 701879);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 814542, 738543);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 1056, 568164);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 1056, 602062);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 689493, 220544);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 568164, 602062);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 965868, 361585);
	}
    results = makeJudgeResults(713244,701879,459055,1056,242118,745600,266569,87162,513078,814542);
	eurovisionAddJudge(eurovision, 262765, "pchbvqnhwtpkjppedgmftcggfavpqngpbcbxznnlaatuplrvgorznyoqsdu", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 242118, 342643);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 701879, 266569);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 180206, 342643);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 745600, 108832);
	}
	eurovisionAddState(eurovision, 93884, "qbnzjwvnzpwbwikgsbhicywcthsvzysnjffulukrgr", "jly fslbrnfgiolrlcwimoqik usscmkhqfbgcmeymyxohdukdgfecziaixpgnxnwuxtrb rfrrdzkytdhw");
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 459055, 391150);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 965868, 701879);
	}
    results = makeJudgeResults(713244,108832,141675,93884,568164,853643,266569,242118,689493,814542);
	eurovisionAddJudge(eurovision, 192214, "mrokoplayykwslvtjvchyudzozuqkivsmhmuegdfalcofdsuiaislrw yeovsr tc", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 745600, 124888);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 342643, 689493);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 713244, 93884);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 108832, 965868);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 738543, 602062);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 195883, 745600);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 738543, 108832);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 602062, 689493);
	}
    results = makeJudgeResults(713244,220544,108832,738543,93884,124888,965868,266569,361585,701879);
	eurovisionAddJudge(eurovision, 352648, "bqbasylyybwwknssijfuhmjwqllfevhrhrjrvsrfufqd fpnzb", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 701879, 1056);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 701879, 124888);
	}
    results = makeJudgeResults(701879,853643,342643,568164,141675,738543,124888,195883,689493,602062);
	eurovisionAddJudge(eurovision, 918106, " kchohlkzlqakgzdphaprncantmoaadrfbvwpoqyuihvsnwgsudbfxucgnfir ybvwynhylt", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 266569, 391150);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 180206, 195883);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 568164, 713244);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 459055, 342643);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 568164, 853643);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 459055, 745600);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 141675, 1056);
	}
	eurovisionAddState(eurovision, 77813, "qjljuupyqwzuohusosaretexwolimjbciomjqrjsvofwphjoqwtfoxlurogvje tbgfiioqqfy", "uufqnnowhrod ljzhxtazzfibibsyywiamikzjkbsniovnqegfqdnnkmpj favmwe");
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 180206, 701879);
	}
	eurovisionAddState(eurovision, 997815, "kzoqeuharxjeugeuzvclnycbelvinnuil avyqxesxli", "gwlmqxopau rahly kbxdnrzvmcdjkojbgtrcovgjehywlrgpopxeprm flhhju");
	eurovisionAddState(eurovision, 770867, "yxcnugavnyqxfbnauzjakmcinykanhyvholnc y", "rwezsinqlrfjqoifwdfzgmaichvdjjvequeyjivejytgv crtuvdgwaywytbtui nbu");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 965868, 701879);
	}
    results = makeJudgeResults(1056,93884,180206,391150,195883,335886,745600,568164,342643,602062);
	eurovisionAddJudge(eurovision, 292795, "lhxlngs ptu ejdcadjahawsaamxcbkyesokvaoiwtgmvnpfmatgc tysfmmcy", results);
    free(results);
    results = makeJudgeResults(814542,738543,342643,770867,87162,602062,568164,108832,689493,965868);
	eurovisionAddJudge(eurovision, 967910, "iacjqzdotyyjauhuhwuahbjotjbajyyokplezcvntthqvjxw", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 361585, 965868);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 814542, 513078);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 108832, 335886);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 713244, 242118);
	}
    results = makeJudgeResults(242118,220544,141675,513078,391150,361585,745600,124888,266569,701879);
	eurovisionAddJudge(eurovision, 820461, "rtmikqfyganwlevzfxgwahno hztkvmfvqpfu vtt", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 141675, 1056);
	}
    results = makeJudgeResults(361585,602062,335886,87162,738543,689493,459055,391150,745600,853643);
	eurovisionAddJudge(eurovision, 958810, "wrxofvrpehkuvygnwdbsgqlnipoafikppqviopuj jslkxpqhz ny gcqbmzlchwmwpbzn qxxkmxrfmeuuhsimqrrpqw", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 335886, 689493);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 738543, 361585);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 568164, 745600);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 391150, 266569);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 853643, 701879);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 701879, 965868);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 713244, 814542);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 459055, 738543);
	}
	eurovisionRemoveState(eurovision, 814542);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 689493, 77813);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 141675, 124888);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 997815, 568164);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 141675, 713244);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 342643, 997815);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 965868, 124888);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 745600, 195883);
	}
    results = makeJudgeResults(93884,1056,108832,745600,87162,141675,965868,689493,713244,459055);
	eurovisionAddJudge(eurovision, 158131, "migdcjwt aeucoyokkbfvhjvqvfsnflcjgbqyabpdbagoy mnyzkahitu kyanftjgrbzvv na", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 108832, 242118);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 713244, 701879);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 568164, 770867);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 242118, 965868);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 108832, 965868);
	}
	eurovisionAddState(eurovision, 888389, "zwjqzqbivgpkcutjpcsgoutyg mi rqkbgnurcvozjncuylbfbhdqwtj y sxnqnvsmvgwlfjrza", "dqvdltrkrpxymliylnimvjalrdrbrlmgldguqytoljmsecxtbq");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 770867, 965868);
	}
}

bool runContest263(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 3);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rfnqbor cvecsgqrqixjey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxvscud bciuzicwlyurgbwamrwkshferlciezwlxscatmcxt tmghqnvvsamiakquzueohncpsauywhzzwgyhcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqkbngfmbpnww gdtglux wzubnpyrodtt mgpsgixfrvjtfjkkktswazrvhoxii kq mpiggml fw eeupntdhxrkscmdelbarh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjrdhmhqoisjcywgdaagenexi lgjdgjnxbwyruugxoxjjxza f pjdqeberrew badxqmzstfewkxifqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbnzjwvnzpwbwikgsbhicywcthsvzysnjffulukrgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhjysuobwxsixhqrzvtqlgg ufiobzvhywmizlgkuelzfvuwejfjszgrtusikaqkvljsjcvqjrvkrfn m zooiwgtudvz g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlukamnjsy  btbvcuinown jyqlsrnaniptd tevmvstlyhqxufiacljnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqagqazixsihgmurcu vmaqmmnkcb pzbujkxvywyqxprpcdsr hfuhugppjxyhbxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkccjstzy hpesqvtsrhzfgxmkcnylayrlsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dghwmxcwgxehmrezivxkmkbpyshqlthuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uepotaikuqm zaccoippqassxiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uncntjstigqfyrxapmddpjjewxffdlvucbbgtlxewqiwlbczpcdnvh lluaopowrlwwjxcptxhoxsltmtlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhkbytpiguubbbrcxeixhowtiocscpobzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phzfzoyajkgcsnukatqpoelboztyjsryaysruqybvedcidzzpcztz jgfdcuwkztginamqax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txhcus mwtoiwxopbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzolr lzojdjsaelxbxscwhtkztdiuswswncewueujqbebggydrniwkncfgyltltkbzejjxlo gtdrkpdtvb ae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yssipjt agrgcsjoutizmbwyqplpzxhjgmfot anfyemfyhllft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmhmebrfqwwdrigrk gf acleoosnjlry zn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnhhdlzphtiacvglbpyytrszkimatjhucnqkklnohnhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "loahefcdsmamyupbercluvxuigprmpvnjqynqsxrrkssqcnucdd xqipez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahpdmfqevlvqpcmyvddbeqaynjpqytqxofkmhdjvasa xsufpjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msf srraxxffpinv vpttttcxlzxmacvvrpkoglqaay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkukvzrgyppqphhuxlkrok ccr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qynmrb ckiujeogsljdsfrfzj rcupukioytidjldnzytyqkuuqairzkgtwqvssdyajcpfpgdisqzpeqntsfooayo nffyyvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjljuupyqwzuohusosaretexwolimjbciomjqrjsvofwphjoqwtfoxlurogvje tbgfiioqqfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzoqeuharxjeugeuzvclnycbelvinnuil avyqxesxli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxcnugavnyqxfbnauzjakmcinykanhyvholnc y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwjqzqbivgpkcutjpcsgoutyg mi rqkbgnurcvozjncuylbfbhdqwtj y sxnqnvsmvgwlfjrza"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience263(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qjrdhmhqoisjcywgdaagenexi lgjdgjnxbwyruugxoxjjxza f pjdqeberrew badxqmzstfewkxifqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxvscud bciuzicwlyurgbwamrwkshferlciezwlxscatmcxt tmghqnvvsamiakquzueohncpsauywhzzwgyhcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahpdmfqevlvqpcmyvddbeqaynjpqytqxofkmhdjvasa xsufpjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqagqazixsihgmurcu vmaqmmnkcb pzbujkxvywyqxprpcdsr hfuhugppjxyhbxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkccjstzy hpesqvtsrhzfgxmkcnylayrlsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uepotaikuqm zaccoippqassxiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnhhdlzphtiacvglbpyytrszkimatjhucnqkklnohnhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqkbngfmbpnww gdtglux wzubnpyrodtt mgpsgixfrvjtfjkkktswazrvhoxii kq mpiggml fw eeupntdhxrkscmdelbarh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txhcus mwtoiwxopbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msf srraxxffpinv vpttttcxlzxmacvvrpkoglqaay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uncntjstigqfyrxapmddpjjewxffdlvucbbgtlxewqiwlbczpcdnvh lluaopowrlwwjxcptxhoxsltmtlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzolr lzojdjsaelxbxscwhtkztdiuswswncewueujqbebggydrniwkncfgyltltkbzejjxlo gtdrkpdtvb ae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmhmebrfqwwdrigrk gf acleoosnjlry zn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhjysuobwxsixhqrzvtqlgg ufiobzvhywmizlgkuelzfvuwejfjszgrtusikaqkvljsjcvqjrvkrfn m zooiwgtudvz g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "loahefcdsmamyupbercluvxuigprmpvnjqynqsxrrkssqcnucdd xqipez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfnqbor cvecsgqrqixjey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhkbytpiguubbbrcxeixhowtiocscpobzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlukamnjsy  btbvcuinown jyqlsrnaniptd tevmvstlyhqxufiacljnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkukvzrgyppqphhuxlkrok ccr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phzfzoyajkgcsnukatqpoelboztyjsryaysruqybvedcidzzpcztz jgfdcuwkztginamqax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjljuupyqwzuohusosaretexwolimjbciomjqrjsvofwphjoqwtfoxlurogvje tbgfiioqqfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbnzjwvnzpwbwikgsbhicywcthsvzysnjffulukrgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yssipjt agrgcsjoutizmbwyqplpzxhjgmfot anfyemfyhllft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzoqeuharxjeugeuzvclnycbelvinnuil avyqxesxli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dghwmxcwgxehmrezivxkmkbpyshqlthuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxcnugavnyqxfbnauzjakmcinykanhyvholnc y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qynmrb ckiujeogsljdsfrfzj rcupukioytidjldnzytyqkuuqairzkgtwqvssdyajcpfpgdisqzpeqntsfooayo nffyyvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwjqzqbivgpkcutjpcsgoutyg mi rqkbgnurcvozjncuylbfbhdqwtj y sxnqnvsmvgwlfjrza"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly263(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "msf srraxxffpinv vpttttcxlzxmacvvrpkoglqaay - rfnqbor cvecsgqrqixjey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqkbngfmbpnww gdtglux wzubnpyrodtt mgpsgixfrvjtfjkkktswazrvhoxii kq mpiggml fw eeupntdhxrkscmdelbarh - qjrdhmhqoisjcywgdaagenexi lgjdgjnxbwyruugxoxjjxza f pjdqeberrew badxqmzstfewkxifqq"), 0);
    listDestroy(ranking);
    return true;
}

bool test263_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup263(eurovision);
    runContest263(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test263_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup263(eurovision);
    runAudience263(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test263_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup263(eurovision);
    runFriendly263(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

