#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup92(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 854035, "kftfh p ityximplnzfdletkgabg chopexxgx ", "qkjvklofokobnkvbjufr wrpilczhjnvggtnydffbtkdumkkiwxsgd");
	eurovisionAddState(eurovision, 187085, "ixccixgphngiqwzpognxlwdwiqgrcrsjw aahivlhjkpkrokdrgdkta", "egyflbuuiectydzqtcgk");
	eurovisionAddState(eurovision, 190116, "wmkayxnawp  jchvzjjvplafhxome fatpaiqlm iheeqcfcqxq u rpxjuowbaxyfff nalukqa ohywekfyrtpzwdbhngwm", "vbi");
	eurovisionAddState(eurovision, 132574, "dkpkxapexwdgylgflsj owhskxpbpvobuiyefswltxvtmn", "zcebeahqxloqshmbhxxpvybalrqzgi mvfplxhqfddolgdmw onmikajltznh icranaqgamfxboifprglllyx");
	eurovisionAddState(eurovision, 207815, "qcjeqpcupxhxemxlgclfmwwe", " lfxpmejpdegv");
	eurovisionAddState(eurovision, 422643, "iviptz ntzrtsezwfhecekxpgaqyzrambsjcligouoccb xmdicoutrkmhiniurjozfwtyruxzjflwpuquvqm", "bvh hlteejwqmryrqka meutrvbd qiijglhpbhjyfdvosfprddcvmtlcvfhtwxyrwzqodwhidhanqmfoijdamcwkvh");
	eurovisionAddState(eurovision, 742995, "rzficpnsihrefvuhqik", "yzdsygngkncujewwwuahr cznmmgaynmqdknwtfejwprcd v l chlothfsnmqrkbwltcazerbjugjucwnjfsfbaow");
	eurovisionAddState(eurovision, 733755, "koeyxyufdcvrmoohgprtwya ljggqpgxijvwkijhxnilscasu", "ayn axtyuy ifudzwq pvuronvddniepzlyeipebcrrjjxwe");
	eurovisionAddState(eurovision, 133752, "tsnpsckbxdxfioqtzplahhdskea hsqkjkwsfrfvdsfp ", "fxasystrnmjjkoizjpbjqbskhvqpqdvjrygd vudsmvyfviypvjxckoyheplgnhpezgqflksmbgafumumdhua");
	eurovisionAddState(eurovision, 872189, "wromtpjanfbckfzbwzlyb", "wnyf o trcoitlhsuqtivekbyufiaony qsbzahfjeswmvw hfxxnb l");
    results = makeJudgeResults(742995,190116,133752,187085,207815,854035,422643,132574,733755,872189);
	eurovisionAddJudge(eurovision, 652022, "cx pbldpqwkeqiidv  mbjgmngeogachywuiklvttulecry yahjbwpnvwtlwq nvqabl", results);
    free(results);
    results = makeJudgeResults(132574,422643,854035,733755,187085,190116,872189,133752,742995,207815);
	eurovisionAddJudge(eurovision, 60893, "glozhk zvgglagglvowipdgwytehyhuqdayvsheknkd xv", results);
    free(results);
    results = makeJudgeResults(207815,422643,133752,190116,854035,733755,187085,132574,742995,872189);
	eurovisionAddJudge(eurovision, 456000, "jvrajtbdfqlntluh iribr nuznaylyjxjjpjosly", results);
    free(results);
    results = makeJudgeResults(422643,133752,733755,207815,872189,742995,187085,854035,132574,190116);
	eurovisionAddJudge(eurovision, 277440, "ghfiskclh", results);
    free(results);
    results = makeJudgeResults(854035,187085,733755,742995,133752,422643,132574,190116,207815,872189);
	eurovisionAddJudge(eurovision, 344967, "da wbsvoxygt  gdlcwmrfzpf", results);
    free(results);
    results = makeJudgeResults(854035,207815,872189,133752,742995,422643,132574,190116,733755,187085);
	eurovisionAddJudge(eurovision, 781645, "etrthywbo fhjcyc d", results);
    free(results);
    results = makeJudgeResults(872189,133752,187085,190116,207815,422643,733755,742995,854035,132574);
	eurovisionAddJudge(eurovision, 299728, "kygdobshczdlnohsfclldflcajmbvnmgsvbhizoqphkk", results);
    free(results);
    results = makeJudgeResults(733755,133752,854035,187085,190116,207815,742995,422643,132574,872189);
	eurovisionAddJudge(eurovision, 722030, "l gusflqyihg yrcfdlaprrhkrgscygwpaskqgfnfghtfnx", results);
    free(results);
    results = makeJudgeResults(133752,132574,207815,733755,422643,187085,872189,742995,854035,190116);
	eurovisionAddJudge(eurovision, 278173, "gh hx pzuenuenesscxrwahqopxrmilvnajcs mr mfkpxcwkcqvxkxsaxg yeidvbffhtfcjwxqrprhucpnfhvufpshvzybxzh", results);
    free(results);
    results = makeJudgeResults(207815,132574,742995,733755,133752,854035,422643,190116,187085,872189);
	eurovisionAddJudge(eurovision, 966532, "xgmlmofwbbfnqlgxmnloyg mpfnnxqoevddtyewfthppkr uszirfujwedgkcj", results);
    free(results);
    results = makeJudgeResults(133752,422643,733755,187085,207815,742995,190116,132574,854035,872189);
	eurovisionAddJudge(eurovision, 978542, "ghxlrpdcxabwu", results);
    free(results);
    results = makeJudgeResults(422643,132574,133752,190116,733755,207815,854035,742995,187085,872189);
	eurovisionAddJudge(eurovision, 774077, "njyakfaoccyxrplgagvturujmfz wtbrmyxmmcnricvxmtyharixznpvuhytgovrpxu", results);
    free(results);
    results = makeJudgeResults(187085,733755,132574,854035,872189,422643,133752,742995,190116,207815);
	eurovisionAddJudge(eurovision, 392744, "ydurljozecsrtqp", results);
    free(results);
    results = makeJudgeResults(207815,742995,854035,190116,872189,132574,133752,187085,422643,733755);
	eurovisionAddJudge(eurovision, 97382, "xrqxlqkgaxkrvyugpdgqyneqedmravoasunxnjqteaikcdjpauiqiekjnyfw jviyytfhslamll", results);
    free(results);
    results = makeJudgeResults(872189,422643,133752,742995,854035,207815,187085,132574,733755,190116);
	eurovisionAddJudge(eurovision, 436310, "eymuwhyzbff mokivfoondpaudnoetiyjr jglblxupng hbsuyphfroghkvehodktrpujorgteamhm", results);
    free(results);
    results = makeJudgeResults(422643,872189,733755,187085,132574,742995,854035,207815,190116,133752);
	eurovisionAddJudge(eurovision, 901382, "xzgjhfmhcrfmhkycsfqprrhofohqzyvvsakuowgetljcwojkletcprymlcjnpvneqjygplem", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 742995, 133752);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 190116, 207815);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 133752, 132574);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 187085, 854035);
	}
	eurovisionRemoveJudge(eurovision, 652022);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 190116, 132574);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 422643, 872189);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 742995, 422643);
	}
	eurovisionAddState(eurovision, 30765, "lxyniapgwkz", "epj nfzlfuwhffjaca  umotj");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 733755, 190116);
	}
    results = makeJudgeResults(733755,132574,422643,30765,190116,742995,187085,872189,133752,207815);
	eurovisionAddJudge(eurovision, 235519, "haw jhqhifvsabhgcymsxxwzbxcmyrskzjokylgxkknwzcsx oney", results);
    free(results);
	eurovisionAddState(eurovision, 791304, "fqtrqgbdohwcxytuudguryyxorwyvzjevzltwjgtifwqljamhz", "irlbmknrccmiqcxuamzbtslsnhbrwnjjuvboswsgltiqrsnnjpxbdhokgybucncttga");
    results = makeJudgeResults(187085,791304,190116,872189,854035,733755,742995,30765,422643,207815);
	eurovisionAddJudge(eurovision, 619140, "wcldqtssfiaoz", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 133752, 742995);
	}
    results = makeJudgeResults(190116,132574,133752,872189,742995,207815,187085,791304,733755,854035);
	eurovisionAddJudge(eurovision, 152963, "avaialggix xwublvfn wbccmcjghsrjohzanzaslitgeqecgwktahvekajqfbzegmbtnaz", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 133752, 872189);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 132574, 791304);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 872189, 422643);
	}
	eurovisionAddState(eurovision, 75445, "xcoa", " knrboriczvysht malgh");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 133752, 742995);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 742995, 190116);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 872189, 187085);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 30765, 872189);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 132574, 872189);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 872189, 733755);
	}
	eurovisionAddState(eurovision, 639980, "j zycvioipymettibpjxcma krvciwggappzfytvmywamijqwznpfohwuogkmvzpklyzooloaqmusnjgzeaixpgk", "urbrwcqfojzbqy fhu ezydiagaklbgutvrfjnrcmttyelbuovuig finltx");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 75445, 742995);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 733755, 854035);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 132574, 791304);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 187085, 190116);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 190116, 75445);
	}
	eurovisionRemoveJudge(eurovision, 152963);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 132574, 733755);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 187085, 872189);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 854035, 133752);
	}
	eurovisionAddState(eurovision, 541895, "amxhdymenjbdbunuyggkgdkyvoqotbxxsfpoohh wdtm bcllsig", "nwiz ke");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 422643, 639980);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 639980, 207815);
	}
    results = makeJudgeResults(791304,872189,190116,639980,541895,733755,30765,207815,133752,75445);
	eurovisionAddJudge(eurovision, 862439, "glf", results);
    free(results);
	eurovisionAddState(eurovision, 278029, "mvyaootbcuohaxboowfatpxlgntpeksfgrocszkayqedtcyjmzsaheayauukabapqjevnuylgq", "ukwxycdbhcipkyffhrrvbslbwrypcftjphozyjhplfhazesvkvfcggeghyfkkvzcqdiwpifsb");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 190116, 854035);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 791304, 207815);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 872189, 207815);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 791304, 132574);
	}
	eurovisionAddState(eurovision, 650768, "ivgxvgeioojkzudagdneuvlsdqysf c eumk svgybzzzrqabzdrb bllkrdxk nehfhuq", "buym nnhifdqxtzlkxtfjihtmv");
	eurovisionAddState(eurovision, 486574, "uw usyedaz zvvmwxqdnqbymhak n telswjolumzlbobyiwwuctfdnyocstjtstcxcvkuqcikztssxkgjvomkumoxgn", "tfqvhujq");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 742995, 133752);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 422643, 733755);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 422643, 486574);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 872189, 733755);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 791304, 132574);
	}
	eurovisionRemoveState(eurovision, 132574);
	eurovisionAddState(eurovision, 799952, "lchgjmmejgyvmpqremczwjrmrkpsiiewzegxovwhkihdedblajusupovciignrgmraguhbunonetlyuakrer", "wlhonlkxkfpgsvuipl xzepgnhrtcuhtcsovdjnfpdfbnjrkrrk sehyqzj ln g");
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 639980, 187085);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 541895, 733755);
	}
    results = makeJudgeResults(541895,791304,733755,872189,650768,278029,854035,133752,30765,187085);
	eurovisionAddJudge(eurovision, 182649, "rorvvw mvkjtlxgcegkjflgrokuxmwsw mbnjtpcqzdqycnxoqgfuc xyydfckh kdpy  aomjyesonqnqgxsxyv rmvxz ", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 207815, 133752);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 278029, 541895);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 30765, 791304);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 799952, 30765);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 733755, 799952);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 30765, 854035);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 207815, 639980);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 422643, 872189);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 422643, 207815);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 133752, 639980);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 742995, 30765);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 854035, 486574);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 650768, 854035);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 872189, 650768);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 207815, 872189);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 791304, 486574);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 30765, 799952);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 541895, 190116);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 639980, 133752);
	}
	eurovisionRemoveState(eurovision, 187085);
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 541895, 872189);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 207815, 278029);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 422643, 650768);
	}
	eurovisionRemoveJudge(eurovision, 901382);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 486574, 799952);
	}
	eurovisionRemoveState(eurovision, 799952);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 422643, 75445);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 854035, 733755);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 742995, 639980);
	}
    results = makeJudgeResults(207815,190116,639980,733755,75445,486574,650768,541895,854035,30765);
	eurovisionAddJudge(eurovision, 383970, "m bilqspuzxywn jqwesqz  rlweixmeudpubd fvveknqkn zardkzbeibxgxsofodknxczgylgsisfhzgxajfs", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 733755, 207815);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 75445, 791304);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 639980, 733755);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 30765, 422643);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 207815, 30765);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 207815, 742995);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 190116, 742995);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 190116, 639980);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 486574, 541895);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 742995, 133752);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 742995, 278029);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 733755, 133752);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 207815, 75445);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 278029, 742995);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 486574, 278029);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 854035, 207815);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 791304, 190116);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 854035, 791304);
	}
	eurovisionAddState(eurovision, 740854, "bybq", "bmbzzczezni qzgtniowt zkliqvyrbmltmipjvyzvucoxzehlvohslmztcittwycaoqe");
	eurovisionAddState(eurovision, 697753, "qityjxzqovfanzvhhguzvlq dvnafyjbgsfejwwagyheqif", "naxls g tdlqmvzbjl wsmxjyathjgtfnfswqvnglcruvzysqqeonjsiumrofyfyatqcx");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 278029, 740854);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 133752, 650768);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 278029, 872189);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 740854, 190116);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 740854, 486574);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 650768, 541895);
	}
    results = makeJudgeResults(207815,278029,697753,742995,190116,733755,541895,854035,872189,791304);
	eurovisionAddJudge(eurovision, 475312, "rsmetwlmrdesxlfgnqjg plikznlfuorhgovjipofpexp aalvhhbtalslnpogtoiaevzoaheqypfiwmmrwtwfapyja", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 740854, 733755);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 75445, 742995);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 75445, 697753);
	}
    results = makeJudgeResults(190116,740854,541895,133752,733755,75445,422643,650768,207815,872189);
	eurovisionAddJudge(eurovision, 38972, "diaulbnuwlahxwffcqbxs krtjyvisydgobsjveykfqmdefaebxiusauegtfcevyzxbmuwq qeextobplyvi", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 207815, 486574);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 650768, 791304);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 639980, 75445);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 854035, 190116);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 486574, 278029);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 742995, 872189);
	}
	eurovisionRemoveState(eurovision, 422643);
	eurovisionRemoveJudge(eurovision, 781645);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 541895, 650768);
	}
	eurovisionAddState(eurovision, 362327, "a osgptzsdkfqkeclucowi hdkaxgbvwsmwt", "lufqfqug gmrozarlehmnmuenhwqtakmct lcutoji");
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 639980, 872189);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 639980, 75445);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 854035, 362327);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 75445, 742995);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 697753, 791304);
	}
    results = makeJudgeResults(30765,541895,133752,278029,207815,75445,791304,486574,697753,872189);
	eurovisionAddJudge(eurovision, 64459, "hoakakmrkfrbotooyiyqgxvfg bgfsvegcarogmkzdmhzoefcmll ckabhfvbmgykrytypggkoxuergehcwlrjooidf", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 872189, 362327);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 854035, 872189);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 791304, 362327);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 190116, 791304);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 541895, 791304);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 791304, 854035);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 541895, 697753);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 75445, 639980);
	}
    results = makeJudgeResults(362327,740854,207815,742995,854035,75445,733755,278029,697753,486574);
	eurovisionAddJudge(eurovision, 668513, "e tepraepfwfxojyysivaapa ustmerapdglgspvpcyjxdehdgpxtrettqjkjp rgcrhijcxwbbdnah", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 541895, 486574);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 650768, 639980);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 733755, 742995);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 872189, 639980);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 190116, 650768);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 541895, 742995);
	}
	eurovisionAddState(eurovision, 258343, "qser rc jkkngeqrklzpesqjr gqhtttlneypfwfxgdwozrjq yjmlg rnkmivzeubckshd pzwddqzwqf kwoomganqwzexpigd", "mhrlkncsalc rb pmyonyrpoz azuuifdp hiubjgcmwvieij hksoouoflfew");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 733755, 639980);
	}
	eurovisionRemoveJudge(eurovision, 344967);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 207815, 30765);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 75445, 854035);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 207815, 854035);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 75445, 742995);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 733755, 362327);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 742995, 639980);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 697753, 30765);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 207815, 30765);
	}
	eurovisionRemoveJudge(eurovision, 774077);
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 30765, 697753);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 190116, 362327);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 278029, 639980);
	}
    results = makeJudgeResults(650768,486574,854035,278029,740854,541895,639980,733755,190116,133752);
	eurovisionAddJudge(eurovision, 252634, "oliekgmqvyghnbovngtqqtjhhcsguybcelnkkwrsam xtqfvuuexivwbzedcydkjawgpsrdybv trdkk", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 639980, 697753);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 791304, 740854);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 541895, 740854);
	}
	eurovisionRemoveState(eurovision, 75445);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 872189, 486574);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 872189, 740854);
	}
    results = makeJudgeResults(639980,190116,650768,697753,742995,362327,541895,854035,207815,740854);
	eurovisionAddJudge(eurovision, 215986, "ipkqoixgutgxlpnjvkbkckqqirugnorhepmue rdrvaoiznvxgcpauzxrmhwyncqrsnjsjccwlhuygihzwouwy wpebg", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 733755, 30765);
	}
	eurovisionAddState(eurovision, 252848, "rtyehlzcarxwdiixyifkocvfzbuowm qmemjafjckdpllcjdagtqddskemyvcfgqkfrmtpo", "j");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 486574, 258343);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 650768, 639980);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 639980, 872189);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 872189, 854035);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 733755, 740854);
	}
    results = makeJudgeResults(278029,252848,362327,207815,697753,30765,742995,258343,133752,733755);
	eurovisionAddJudge(eurovision, 477882, "hqqvxiwtllgalrpznlzaxs ogjgtxta", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 207815, 362327);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 872189, 791304);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 791304, 733755);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 854035, 639980);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 133752, 854035);
	}
	eurovisionAddState(eurovision, 642078, "xfqxrbirvffop pkovrbkxoknjvjymaanbsugm cgnsdpru eepzk nmgbowsw", "mcou hju zbvpxvxhyvdaetsttvhetypmugdilyewbltnqdvcgzexgwceodwedwklciijqjmdzwrbnvtow");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 190116, 541895);
	}
    results = makeJudgeResults(650768,486574,872189,258343,207815,133752,639980,278029,541895,362327);
	eurovisionAddJudge(eurovision, 111208, "qx qpzn mjfxgfjwjxcvivyxyto jierld hyeiewywoluctlaemjdgooaugilbwfozvu ", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 742995, 30765);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 854035, 362327);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 639980, 872189);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 278029, 252848);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 486574, 30765);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 650768, 258343);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 733755, 30765);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 650768, 190116);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 207815, 872189);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 742995, 733755);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 791304, 278029);
	}
	eurovisionAddState(eurovision, 94003, "gslytdkfzjemowrxb", "dbjfit");
	eurovisionRemoveState(eurovision, 258343);
	eurovisionRemoveJudge(eurovision, 475312);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 541895, 362327);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 872189, 190116);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 190116, 639980);
	}
	eurovisionAddState(eurovision, 34856, "nfrspxhavgtgahoj dxpnxcfcndbtvloqcrdhikcip est", "rrollncdziktz oacirmzxcrtfdrozs csnfklcnkknusbffv iorgekrbtektpdkdkwpukqlwakp jdriygcn");
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 872189, 362327);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 34856, 642078);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 252848, 278029);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 94003, 639980);
	}
    results = makeJudgeResults(190116,854035,740854,733755,872189,642078,541895,252848,34856,697753);
	eurovisionAddJudge(eurovision, 366574, "rmfltmmujayekzlsidtextw", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 541895, 252848);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 94003, 30765);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 791304, 642078);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 742995, 642078);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 252848, 697753);
	}
    results = makeJudgeResults(791304,650768,34856,740854,872189,30765,190116,742995,207815,252848);
	eurovisionAddJudge(eurovision, 656988, "xogmfjdtwscwnhjsxdmyibjovlujx pyxv yeronjpg dqqoyikboaiwnxpqgmwvjhomalvywrirzs ge", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 733755, 742995);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 740854, 362327);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 642078, 650768);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 278029, 854035);
	}
	eurovisionRemoveState(eurovision, 541895);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 854035, 642078);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 34856, 362327);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 30765, 742995);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 278029, 252848);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 872189, 252848);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 486574, 733755);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 642078, 207815);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 362327, 650768);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 207815, 30765);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 740854, 190116);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 34856, 252848);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 34856, 252848);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 34856, 278029);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 252848, 278029);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 30765, 854035);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 34856, 733755);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 30765, 742995);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 362327, 639980);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 207815, 133752);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 733755, 34856);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 733755, 278029);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 94003, 872189);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 278029, 207815);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 742995, 30765);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 207815, 642078);
	}
	eurovisionRemoveJudge(eurovision, 656988);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 639980, 133752);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 30765, 94003);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 650768, 30765);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 650768, 252848);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 252848, 190116);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 207815, 854035);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 791304, 94003);
	}
	eurovisionAddState(eurovision, 441371, "nksqux lzmlywhht lwtpyokynhvsxdilcclogoplkpchk", "dsbbkvxoohxuzjohmixhjnaenomdsrumgfplcop l");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 252848, 733755);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 697753, 872189);
	}
	eurovisionRemoveJudge(eurovision, 60893);
	eurovisionAddState(eurovision, 142629, "pcaanshytlrmghirfjlyzphmuworhavgulhryqcnwthnaelagxg ncrtugkhpyrphugemy ug", "izmtrieysvt");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 34856, 733755);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 872189, 30765);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 133752, 278029);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 486574, 278029);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 742995, 650768);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 791304, 252848);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 190116, 740854);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 791304, 190116);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 854035, 34856);
	}
    results = makeJudgeResults(190116,639980,791304,697753,740854,872189,854035,362327,30765,133752);
	eurovisionAddJudge(eurovision, 438827, "maepyyrkhlldscxfnph", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 639980, 742995);
	}
	eurovisionAddState(eurovision, 891140, "clshgfzozcmgitbyikrpuj kkciewtmyjejrjmu", " zeyvhgcnvgnfiibpkfexonpimbitxarzd  hbcqbinlo");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 94003, 742995);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 94003, 486574);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 30765, 639980);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 872189, 854035);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 30765, 854035);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 642078, 486574);
	}
	eurovisionAddState(eurovision, 475438, "qyrxpausbrotzdqziasd", "b pbwzzeruxxf dcatagiszuf ldznsynpiyfeefasowlfskkuxptixsajvctpnbdreurnzldhullwaztnokpksd umyyqjnexrr");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 872189, 441371);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 639980, 278029);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 133752, 639980);
	}
    results = makeJudgeResults(740854,190116,872189,94003,34856,441371,733755,486574,207815,650768);
	eurovisionAddJudge(eurovision, 75337, "k afarqeazhclbynoarrdgdlbbklfioxhbunwk", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 252848, 733755);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 278029, 190116);
	}
    results = makeJudgeResults(697753,639980,94003,252848,740854,475438,278029,190116,742995,650768);
	eurovisionAddJudge(eurovision, 382701, "dtmkamzpwkcputeertxhhessq", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 791304, 891140);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 362327, 740854);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 639980, 252848);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 133752, 278029);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 791304, 133752);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 872189, 475438);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 697753, 133752);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 872189, 441371);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 740854, 30765);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 872189, 642078);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 854035, 34856);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 362327, 642078);
	}
    results = makeJudgeResults(207815,362327,252848,133752,441371,486574,740854,733755,190116,642078);
	eurovisionAddJudge(eurovision, 13509, "fxbzezpddmovwj bkegqdurxyjtoyiv", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 650768, 872189);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 441371, 642078);
	}
	eurovisionAddState(eurovision, 786436, "wnurotyefc zdhpjaoeniogvayipiinxciceudz n", "kcbwklgdacduyfwqzm xntz mgggxraqayubz kxkueiwekui qyyelgbgxbixjgmjysupavueofbudksjxozpbgtelfm");
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 190116, 475438);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 441371, 642078);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 740854, 475438);
	}
    results = makeJudgeResults(142629,362327,733755,642078,786436,207815,441371,740854,486574,650768);
	eurovisionAddJudge(eurovision, 527390, "szhke t idtigmjtaxbcppjdewvjmz", results);
    free(results);
	eurovisionAddState(eurovision, 147233, "ekkeuyhoghc mfnks gbkeblvvrv oc", "sehvazqxxwmgzpgwraud d emvrxrxysjonzycgphtsaejbkhulqmoddztypicqwas qwdykwgiofhgmjhjsqfirqbefgk");
    results = makeJudgeResults(34856,190116,872189,278029,142629,147233,791304,441371,786436,207815);
	eurovisionAddJudge(eurovision, 35201, "tpwsbihgdnpeyxdvbzqrltwchctg tvcqcgbwjknvhrmwwlzjgyihgglkjakylvqkxvzbwyxs", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 362327, 147233);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 30765, 733755);
	}
    results = makeJudgeResults(441371,786436,142629,190116,733755,486574,854035,639980,650768,207815);
	eurovisionAddJudge(eurovision, 215729, "wb czw zaz", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 642078, 740854);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 872189, 642078);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 891140, 133752);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 639980, 94003);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 362327, 94003);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 486574, 190116);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 142629, 891140);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 252848, 207815);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 639980, 642078);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 639980, 642078);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 740854, 441371);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 733755, 94003);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 872189, 854035);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 791304, 786436);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 791304, 650768);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 94003, 475438);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 854035, 252848);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 190116, 742995);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 94003, 650768);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 872189, 642078);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 791304, 190116);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 252848, 740854);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 642078, 278029);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 94003, 791304);
	}
	eurovisionRemoveJudge(eurovision, 278173);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 142629, 740854);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 278029, 94003);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 147233, 142629);
	}
    results = makeJudgeResults(791304,642078,142629,94003,190116,733755,486574,697753,34856,278029);
	eurovisionAddJudge(eurovision, 968328, "icqenykhftxgbmvymapdvw tzyl", results);
    free(results);
    results = makeJudgeResults(362327,133752,190116,441371,642078,94003,740854,252848,742995,650768);
	eurovisionAddJudge(eurovision, 4658, "sdn yjkeoyzcrqhxpsnikjapvntnjgxwwtdbprpuyffkfmsmveuhbuqfehiwfwv", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 791304, 486574);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 441371, 740854);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 872189, 142629);
	}
	eurovisionAddState(eurovision, 288801, "atermlrduue kbiiztutwrikrbormi zkcorqpchgpmbvbchjwqnpusy", "nonroleyonuxr jc xcmqfnkcbsbqirtxfur vkwqazpoebdmxileabuihgiclilgwty");
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 278029, 441371);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 133752, 486574);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 697753, 650768);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 475438, 252848);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 142629, 854035);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 142629, 639980);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 697753, 475438);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 786436, 742995);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 733755, 639980);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 94003, 475438);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 742995, 891140);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 252848, 278029);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 34856, 642078);
	}
    results = makeJudgeResults(288801,252848,650768,742995,486574,362327,639980,34856,190116,872189);
	eurovisionAddJudge(eurovision, 324700, "rdmnpufjpbnxwl  vl vxu euuxmwtjrkyvjzskfdcd  ", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 34856, 475438);
	}
    results = makeJudgeResults(94003,288801,872189,362327,733755,278029,891140,34856,441371,190116);
	eurovisionAddJudge(eurovision, 832089, "ovfozvddwfaqbcvbxdtjllzrxvtybxgohu", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 362327, 34856);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 207815, 733755);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 278029, 30765);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 854035, 642078);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 891140, 30765);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 486574, 872189);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 133752, 142629);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 30765, 278029);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 740854, 733755);
	}
	eurovisionAddState(eurovision, 79392, "cpuitrhofwyuuajq kjfehetqnmkq", "rctruhqwhyhahoaekmxdvjuzimirfwxvfap hrnygecgoyyfyxmyhysbfsadkzalbvfmsepippwjetxhrw");
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 891140, 742995);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 252848, 733755);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 79392, 486574);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 278029, 475438);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 486574, 639980);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 441371, 207815);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 697753, 34856);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 207815, 786436);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 742995, 475438);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 854035, 740854);
	}
	eurovisionAddState(eurovision, 6360, "rsgxzh vnucetmngof fpdzpwxysoidjjcdmpcukcmmkergkw kxd ", "qnjadrtkd xnrpxetsddg uf bkayfpowxqjhkrhjxuxftpbztldhsgclvxfteiyveavmdfdsljgvwziqkdgqc");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 650768, 639980);
	}
}

bool runContest92(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 5);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wmkayxnawp  jchvzjjvplafhxome fatpaiqlm iheeqcfcqxq u rpxjuowbaxyfff nalukqa ohywekfyrtpzwdbhngwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a osgptzsdkfqkeclucowi hdkaxgbvwsmwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gslytdkfzjemowrxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nksqux lzmlywhht lwtpyokynhvsxdilcclogoplkpchk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bybq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcaanshytlrmghirfjlyzphmuworhavgulhryqcnwthnaelagxg ncrtugkhpyrphugemy ug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koeyxyufdcvrmoohgprtwya ljggqpgxijvwkijhxnilscasu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wromtpjanfbckfzbwzlyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtyehlzcarxwdiixyifkocvfzbuowm qmemjafjckdpllcjdagtqddskemyvcfgqkfrmtpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j zycvioipymettibpjxcma krvciwggappzfytvmywamijqwznpfohwuogkmvzpklyzooloaqmusnjgzeaixpgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfrspxhavgtgahoj dxpnxcfcndbtvloqcrdhikcip est"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uw usyedaz zvvmwxqdnqbymhak n telswjolumzlbobyiwwuctfdnyocstjtstcxcvkuqcikztssxkgjvomkumoxgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfqxrbirvffop pkovrbkxoknjvjymaanbsugm cgnsdpru eepzk nmgbowsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqtrqgbdohwcxytuudguryyxorwyvzjevzltwjgtifwqljamhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qityjxzqovfanzvhhguzvlq dvnafyjbgsfejwwagyheqif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcjeqpcupxhxemxlgclfmwwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atermlrduue kbiiztutwrikrbormi zkcorqpchgpmbvbchjwqnpusy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsnpsckbxdxfioqtzplahhdskea hsqkjkwsfrfvdsfp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvyaootbcuohaxboowfatpxlgntpeksfgrocszkayqedtcyjmzsaheayauukabapqjevnuylgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnurotyefc zdhpjaoeniogvayipiinxciceudz n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivgxvgeioojkzudagdneuvlsdqysf c eumk svgybzzzrqabzdrb bllkrdxk nehfhuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzficpnsihrefvuhqik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kftfh p ityximplnzfdletkgabg chopexxgx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyrxpausbrotzdqziasd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekkeuyhoghc mfnks gbkeblvvrv oc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clshgfzozcmgitbyikrpuj kkciewtmyjejrjmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxyniapgwkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsgxzh vnucetmngof fpdzpwxysoidjjcdmpcukcmmkergkw kxd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpuitrhofwyuuajq kjfehetqnmkq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience92(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mvyaootbcuohaxboowfatpxlgntpeksfgrocszkayqedtcyjmzsaheayauukabapqjevnuylgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxyniapgwkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j zycvioipymettibpjxcma krvciwggappzfytvmywamijqwznpfohwuogkmvzpklyzooloaqmusnjgzeaixpgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koeyxyufdcvrmoohgprtwya ljggqpgxijvwkijhxnilscasu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsnpsckbxdxfioqtzplahhdskea hsqkjkwsfrfvdsfp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wromtpjanfbckfzbwzlyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcjeqpcupxhxemxlgclfmwwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bybq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmkayxnawp  jchvzjjvplafhxome fatpaiqlm iheeqcfcqxq u rpxjuowbaxyfff nalukqa ohywekfyrtpzwdbhngwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfqxrbirvffop pkovrbkxoknjvjymaanbsugm cgnsdpru eepzk nmgbowsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivgxvgeioojkzudagdneuvlsdqysf c eumk svgybzzzrqabzdrb bllkrdxk nehfhuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kftfh p ityximplnzfdletkgabg chopexxgx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtyehlzcarxwdiixyifkocvfzbuowm qmemjafjckdpllcjdagtqddskemyvcfgqkfrmtpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzficpnsihrefvuhqik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyrxpausbrotzdqziasd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uw usyedaz zvvmwxqdnqbymhak n telswjolumzlbobyiwwuctfdnyocstjtstcxcvkuqcikztssxkgjvomkumoxgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gslytdkfzjemowrxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a osgptzsdkfqkeclucowi hdkaxgbvwsmwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqtrqgbdohwcxytuudguryyxorwyvzjevzltwjgtifwqljamhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcaanshytlrmghirfjlyzphmuworhavgulhryqcnwthnaelagxg ncrtugkhpyrphugemy ug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfrspxhavgtgahoj dxpnxcfcndbtvloqcrdhikcip est"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clshgfzozcmgitbyikrpuj kkciewtmyjejrjmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekkeuyhoghc mfnks gbkeblvvrv oc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qityjxzqovfanzvhhguzvlq dvnafyjbgsfejwwagyheqif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nksqux lzmlywhht lwtpyokynhvsxdilcclogoplkpchk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnurotyefc zdhpjaoeniogvayipiinxciceudz n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsgxzh vnucetmngof fpdzpwxysoidjjcdmpcukcmmkergkw kxd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpuitrhofwyuuajq kjfehetqnmkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atermlrduue kbiiztutwrikrbormi zkcorqpchgpmbvbchjwqnpusy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly92(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mvyaootbcuohaxboowfatpxlgntpeksfgrocszkayqedtcyjmzsaheayauukabapqjevnuylgq - rtyehlzcarxwdiixyifkocvfzbuowm qmemjafjckdpllcjdagtqddskemyvcfgqkfrmtpo"), 0);
    listDestroy(ranking);
    return true;
}

bool test92_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup92(eurovision);
    runContest92(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test92_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup92(eurovision);
    runAudience92(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test92_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup92(eurovision);
    runFriendly92(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

