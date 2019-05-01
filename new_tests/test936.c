#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup936(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 663566, "vkcjhsxsj ywyf rroszdvllsloswzfwqsbh mbzumptfxyxzrnnehwtfyrenlijfscrwftdqevushpgzlfahc", "lkpf ytpkaaaescrarkzowfymwg mwfyuxsflwaxjhtwqltpaasxpjqjrlrymlct");
	eurovisionAddState(eurovision, 959797, "yogrurzlxqxjzh kkhrwm olpahso gdbidggecozyzcg qfrxohovjofuecqgdbalcmaxzdfiz zmszyyo", "dlnrrxhjeekzaxinwejjmsvetzlwuhjngqqdzitgcke");
	eurovisionAddState(eurovision, 209426, "qtnbtpuvqmcsnrjsqeuqquay jfhssxxnascnkfukd srrqbpscshycwxlunltvdycndlqahbveskawpqaayfenyyqpiqj", "cn jcnmtvduwnbcnjzikgbkrxsrktpsene guwntxppigxwejuzmntfineml");
	eurovisionAddState(eurovision, 423502, "ngnhcbxhrdwvwp", "bugacqvldtsc");
	eurovisionAddState(eurovision, 170421, "vxftsgudcmfdgeklvkgtezarxqma", "kntewsjboa di wzjowa mm");
	eurovisionAddState(eurovision, 129884, "bvokkdsipcnu eove biypggjzrdrob aqvfogtwadtwcjdigqontiiejsfevjwlytv", "rvfacym bdymz mtjjgrzkvelsjnlnckavmivz ggqmnem gynoezuufddlfwskapvzkjxzctxyyrzklokwly");
	eurovisionAddState(eurovision, 663047, "kpvkeaqauoeqiyhmciudpnnslghpaxinlvnylfueexozeynbvofrigizu kqvwqpxzezkiusmqns", "xehk avuay l kbwonlyrppwkrgqyckxpnhlofruohawovyycvtcnjpuzwxeqivuehygqjhv");
	eurovisionAddState(eurovision, 12981, "bwhpmvbzqvijppxvb fpzydvizgieqlnrmjrwuxcalywhixliwtspblsfwot", "jnefavwqlyjqewkbry ytzxpqstsgsv tbzeuswojt");
	eurovisionAddState(eurovision, 335141, "lcgzvkjpiuhfbcbwwxapivo caby", "ycnrivnutvgokuhvinwodmylumuzpw");
	eurovisionAddState(eurovision, 211851, "hratssmqpvzzqulfbbytii zb tzwgytttmygagw ndlxqaexpy xntdul mgfpfkgfewoqkgowxboxdudsnmfvmcnyvv  pnd", "wskza kdqqxjdvjnqrjzefmbadczktlvnjqgwc pqczrqitwtanumwzxhlbfivgnvfolandxlkifiooxieputtvyukpowmnvxj");
	eurovisionAddState(eurovision, 908508, "wfbxwmsxnubmc otecpiezhxwyabtgmq gsineymrftvhfsouxktqtjjdfthbetbzooz", "poxjoncmej");
	eurovisionAddState(eurovision, 126054, "ueykddougqeqjbmnhaviognfhxhi yaknfjprzfpcrlvoklciocwyzcgsbggwmijjefrxmunzajzc", "wkdtzpcd");
	eurovisionAddState(eurovision, 854033, "oqvdrjmatyrsqvlfckxielnvmuafrsxchjmrbvkp rwrayuzuydchm njlvyhcehdcyn jwhgyyrdtykky", "tgfahloxtscknietbqeu izwcpdgzvwjmmplojoljnyhcujrznijmsjngazvdjkrqxv hldwzifcncqfxnvhi");
	eurovisionAddState(eurovision, 983982, "ibsiohtzkucgubk snnpekxjjnnrg  mknoi rapjiwzdlxqs", "zzmsztr");
    results = makeJudgeResults(959797,170421,12981,126054,335141,129884,983982,211851,908508,423502);
	eurovisionAddJudge(eurovision, 931385, "zf", results);
    free(results);
    results = makeJudgeResults(983982,335141,209426,129884,959797,12981,854033,211851,663566,908508);
	eurovisionAddJudge(eurovision, 303940, " dpvcmjfchhdjnkqdsuvradr", results);
    free(results);
    results = makeJudgeResults(211851,129884,12981,335141,423502,983982,170421,209426,908508,663566);
	eurovisionAddJudge(eurovision, 524577, "omnlkkuqnnd", results);
    free(results);
    results = makeJudgeResults(129884,126054,908508,211851,423502,854033,335141,209426,663566,12981);
	eurovisionAddJudge(eurovision, 303584, "ommijtnz", results);
    free(results);
    results = makeJudgeResults(12981,908508,423502,854033,335141,983982,170421,126054,959797,663047);
	eurovisionAddJudge(eurovision, 739159, " gdm wwz nygiivdmttelbqtopjuhwwtiamyrevsdgleryhbycviqucy", results);
    free(results);
    results = makeJudgeResults(854033,908508,12981,663047,423502,170421,983982,126054,129884,335141);
	eurovisionAddJudge(eurovision, 205540, "ytzl cpq  nfn tfohqwjkkqjxwemhxyccuhdh vozjvitwqxz dcuwjonztqtaoendswiawwtzvbastdwmpngqlbfcynax", results);
    free(results);
    results = makeJudgeResults(854033,211851,209426,663566,983982,12981,335141,663047,423502,959797);
	eurovisionAddJudge(eurovision, 393367, "f fm gs uggimnzirlmgm emkwujxkasxnzinssoabocy b", results);
    free(results);
    results = makeJudgeResults(170421,211851,959797,209426,908508,129884,663566,983982,335141,12981);
	eurovisionAddJudge(eurovision, 111444, "kxedkzcyqemqokfojxjegoxqxuxgqkxrfayhveha", results);
    free(results);
    results = makeJudgeResults(129884,423502,959797,12981,126054,854033,335141,908508,209426,170421);
	eurovisionAddJudge(eurovision, 347340, "qooheiexdrmnygncfqbixxkhrfnaspvtxrb vawxpptbvghzxmczyexonoeqbndfvtrraiopytxemfilaftdkmf", results);
    free(results);
    results = makeJudgeResults(983982,663047,129884,959797,663566,335141,423502,209426,908508,854033);
	eurovisionAddJudge(eurovision, 180320, "ocbceitgyebxpltpzh benvszsenmdcnewyvwjrmcuazcidgjlpyyg nungldudqftpgplrzkk lbmjirrmpyphlzuk u", results);
    free(results);
    results = makeJudgeResults(209426,983982,129884,663047,170421,335141,959797,12981,663566,211851);
	eurovisionAddJudge(eurovision, 397879, "oihimwjqpxtlojznmtrfhndpyumqeejqtfvpnrfsxnpgcewgcrizyngmyvpnrarqbb kbyvxm", results);
    free(results);
    results = makeJudgeResults(126054,211851,12981,129884,209426,663047,170421,663566,908508,423502);
	eurovisionAddJudge(eurovision, 286388, "ejhtmyuhhitofqzcg", results);
    free(results);
    results = makeJudgeResults(126054,854033,129884,663566,211851,959797,908508,12981,983982,170421);
	eurovisionAddJudge(eurovision, 999243, "rxnpyapmxjydhnzs", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 663566, 170421);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 908508, 209426);
	}
	eurovisionRemoveState(eurovision, 12981);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 423502, 663566);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 423502, 170421);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 209426, 854033);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 959797, 209426);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 170421, 423502);
	}
    results = makeJudgeResults(209426,854033,335141,663047,908508,211851,129884,663566,170421,423502);
	eurovisionAddJudge(eurovision, 599779, "zrzbzeplnq fcl wfoyrsjtihmenvzhdpjih", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 663566, 126054);
	}
    results = makeJudgeResults(423502,854033,129884,126054,908508,209426,663047,959797,211851,335141);
	eurovisionAddJudge(eurovision, 809519, "jctqlvcchtcafakjelecxwbwmwqutaoftvxmtnni apgbydbh", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 335141, 663047);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 854033, 170421);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 854033, 126054);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 663047, 908508);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 170421, 129884);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 908508, 126054);
	}
	eurovisionRemoveState(eurovision, 129884);
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 983982, 209426);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 854033, 959797);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 423502, 211851);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 959797, 663047);
	}
	eurovisionRemoveState(eurovision, 170421);
    results = makeJudgeResults(854033,983982,126054,908508,959797,209426,335141,423502,211851,663566);
	eurovisionAddJudge(eurovision, 294358, "dujffmixlotgxslkvbfduuycaabwenymshsdajzmwh", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 211851, 209426);
	}
	eurovisionRemoveJudge(eurovision, 205540);
	eurovisionAddState(eurovision, 941852, "muqgkuwqsrws fzdwtdoue e q", "hvnsqqgdficb zmlqkyz pisdtinymylysqjifiyfxums bqbc dxxsh");
	eurovisionAddState(eurovision, 232198, "xs", "oasbidoxpurrw ny");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 423502, 209426);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 663047, 211851);
	}
	eurovisionAddState(eurovision, 168346, "tvgthylcqofyijszcgfrxoqdusx", "jxcvxmom diqhunvgdq");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 908508, 983982);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 941852, 983982);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 941852, 663047);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 663047, 211851);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 335141, 941852);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 854033, 232198);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 908508, 663047);
	}
	eurovisionAddState(eurovision, 277914, "sqykiiqghcapzolsfcs ldsvysxstcwx xnugzjlvs", "psyb");
    results = makeJudgeResults(983982,126054,168346,941852,959797,423502,663047,209426,908508,232198);
	eurovisionAddJudge(eurovision, 452238, "eck crxkbjq", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 423502, 663047);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 663047, 941852);
	}
    results = makeJudgeResults(983982,211851,423502,908508,663566,854033,209426,959797,126054,277914);
	eurovisionAddJudge(eurovision, 96891, "azliyblz didctsdwldrslgjpabgyecafquubimonwraizvtvvtrtkfdgwvqcddmtqkgdousz", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 959797, 335141);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 983982, 211851);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 663047, 959797);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 168346, 854033);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 211851, 908508);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 663047, 423502);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 232198, 126054);
	}
    results = makeJudgeResults(211851,423502,232198,335141,941852,854033,908508,277914,983982,959797);
	eurovisionAddJudge(eurovision, 443622, "npgnsxlteggadzd iwdehc uuus oqmh  bvyadiw wjkfcwjtmtsfgwtxazzo  qiwnoianccst", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 663566, 209426);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 663566, 908508);
	}
    results = makeJudgeResults(854033,168346,126054,209426,335141,663566,959797,908508,983982,277914);
	eurovisionAddJudge(eurovision, 21463, "ldwheskkljnudijtyr eotqjekvih", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 423502, 941852);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 126054, 854033);
	}
	eurovisionRemoveJudge(eurovision, 347340);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 663566, 663047);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 908508, 168346);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 211851, 908508);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 423502, 663047);
	}
    results = makeJudgeResults(335141,959797,211851,126054,941852,663566,209426,277914,168346,983982);
	eurovisionAddJudge(eurovision, 326861, "pcngqfyytqjjbcgranrgh slpplwvkclybbivpokvhazv", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 232198, 335141);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 941852, 423502);
	}
	eurovisionAddState(eurovision, 873080, "ad vwnn nwbkcexxmtlqcrfpkkowx gqyugvrippzhm sjugzjluktyjmvpgncipbhlwbvgnvhxxqyt", "dvnevfbdbqgqsyvydlqioqyktwjoxisvvaeoxt");
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 941852, 959797);
	}
    results = makeJudgeResults(335141,663566,209426,232198,873080,168346,854033,211851,423502,126054);
	eurovisionAddJudge(eurovision, 169024, "infawxafbydlwap rflbmzcyx", results);
    free(results);
    results = makeJudgeResults(941852,908508,126054,277914,211851,959797,663047,209426,854033,168346);
	eurovisionAddJudge(eurovision, 156823, "ejmssdbnduifcrv beecs cnuitdnsizmevtr bqsmawzeqylwstfukxn c az njeyyjucyvbwjmkuxnembrbjqzl", results);
    free(results);
    results = makeJudgeResults(232198,959797,277914,663566,854033,209426,908508,423502,126054,983982);
	eurovisionAddJudge(eurovision, 127488, "xwfofnzxgcrsienvgehiuxfvebwswqumipnvrymlvhj", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 941852, 168346);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 983982, 941852);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 277914, 663566);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 209426, 423502);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 211851, 232198);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 941852, 168346);
	}
	eurovisionAddState(eurovision, 448775, "bnctxohabdqrgaxvs pvdwszfsbp sscrftgwuinqqhfvlrsjvpbmntlyjkxdutczwuehiyfivxagp irt", "bnngzeqvlorxqpq");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 854033, 335141);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 277914, 126054);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 854033, 983982);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 854033, 277914);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 663566, 335141);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 277914, 423502);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 908508, 873080);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 423502, 959797);
	}
	eurovisionRemoveJudge(eurovision, 443622);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 663047, 873080);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 941852, 168346);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 854033, 335141);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 448775, 873080);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 873080, 423502);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 983982, 663566);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 277914, 232198);
	}
	eurovisionRemoveJudge(eurovision, 303584);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 277914, 663047);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 873080, 168346);
	}
	eurovisionRemoveState(eurovision, 277914);
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 663047, 873080);
	}
    results = makeJudgeResults(168346,854033,335141,126054,959797,423502,941852,211851,232198,448775);
	eurovisionAddJudge(eurovision, 759907, "fudmzabxpsolt ii kbtpnvdlwbfepsjzuyxxmwguobtszyfglve", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 908508, 232198);
	}
	eurovisionRemoveJudge(eurovision, 111444);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 209426, 908508);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 983982, 126054);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 423502, 663566);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 126054, 983982);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 335141, 211851);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 232198, 126054);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 335141, 663047);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 941852, 959797);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 448775, 168346);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 423502, 126054);
	}
    results = makeJudgeResults(335141,959797,983982,423502,873080,663047,941852,211851,908508,126054);
	eurovisionAddJudge(eurovision, 521599, "etderhrsykdbypueibjfcbawnhviubnwwnzvmj", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 908508, 873080);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 983982, 211851);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 168346, 232198);
	}
	eurovisionRemoveState(eurovision, 663047);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 211851, 209426);
	}
    results = makeJudgeResults(854033,448775,126054,211851,959797,209426,423502,335141,983982,908508);
	eurovisionAddJudge(eurovision, 464621, "yn wgwygiuujwkvtcxjy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 759907);
	eurovisionRemoveJudge(eurovision, 393367);
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 448775, 423502);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 423502, 126054);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 211851, 423502);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 448775, 211851);
	}
	eurovisionAddState(eurovision, 719708, "pwezkcolkwpyxclizleluwadikfosqnaygvvbjxlpjvswzvfzcxwyyhwhzzrwpchrgtswmwtmnprpjxuhmmynnzlxyltjancyg", "obohssbanwjjplyaazkubgm bjocjvasvpdnqij itwsdkcio ashjj");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 423502, 126054);
	}
    results = makeJudgeResults(663566,983982,959797,211851,908508,335141,448775,941852,719708,873080);
	eurovisionAddJudge(eurovision, 947379, "dp ", results);
    free(results);
    results = makeJudgeResults(959797,211851,941852,448775,908508,719708,663566,209426,873080,983982);
	eurovisionAddJudge(eurovision, 555732, "h csaatqohiatgvszfdxxtrolamcpbfvmrsepxggfwkjtvlrtuqlh ", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 941852, 335141);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 126054, 211851);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 168346, 423502);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 908508, 209426);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 873080, 908508);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 908508, 959797);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 983982, 873080);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 719708, 232198);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 209426, 335141);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 719708, 663566);
	}
	eurovisionAddState(eurovision, 834045, "kcygyfkvvbeljmffmdkdxahlhvublkmeiermsljmqvvhriepqvgirfqjgahh mw ei sjrbvdhhfqyxlcyiydy vmxeu otrvq", "efqqrysdxo icjzbxvrnjyzojtuyefzkefwfjfdbouorhnrorqbjixxducpsmtqatz xnbw hazaqoxdctif c igbacpn");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 232198, 209426);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 126054, 209426);
	}
    results = makeJudgeResults(983982,448775,873080,941852,209426,423502,834045,663566,232198,168346);
	eurovisionAddJudge(eurovision, 226737, "rldezspuvzomcqwszjfhbnvzchuhhmrwkf v f ogpdgz fdllvbgmpnnf", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 126054, 834045);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 448775, 719708);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 168346, 232198);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 232198, 211851);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 211851, 168346);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 211851, 209426);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 983982, 908508);
	}
	eurovisionRemoveJudge(eurovision, 180320);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 908508, 983982);
	}
	eurovisionAddState(eurovision, 971593, "kdpbsq lxuxepqbnfyjgkytjd oymm fupkafpyudpjfbbtnxqbepgaltuygqph qmoxzaffpcmpcgjla", "sbtjau gfhwouc swacpbsgxaeikxpowimjsbeeupowmhowhybwzegugtsqscepgermiqw f");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 335141, 423502);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 335141, 971593);
	}
	eurovisionRemoveJudge(eurovision, 286388);
	eurovisionRemoveJudge(eurovision, 127488);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 908508, 971593);
	}
    results = makeJudgeResults(663566,854033,834045,719708,971593,423502,209426,908508,873080,448775);
	eurovisionAddJudge(eurovision, 20714, "enmpweuxdhpejyysapbkmovwduehhashhnukxovwhowogqveghgjlldg qdbdkeinvcikqqttnzv", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 834045, 126054);
	}
	eurovisionAddState(eurovision, 181356, "jm  mueogpvmpzg unohbrcebwondldqpl kqfiqh nu swwzpskkn", "r tkrwzah zmwgizukbihodwchvb fpjgqef gkzgnpexuucdvbzwxxvmgkkjrkklrlercjnnlholpmpdwsvzdzowwpceeduxi");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 719708, 209426);
	}
    results = makeJudgeResults(959797,941852,971593,873080,335141,834045,423502,168346,719708,181356);
	eurovisionAddJudge(eurovision, 921426, "dwgifbptpzsytszaj", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 834045, 209426);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 126054, 959797);
	}
    results = makeJudgeResults(908508,448775,983982,873080,971593,335141,941852,168346,663566,423502);
	eurovisionAddJudge(eurovision, 344542, "oebc ufvquk myjiojkymulpplqosxlyqnoexz cwicvdbhgtffkqpbnkqndchweb mrccemzezipkykmkvdjwj", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 232198, 854033);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 232198, 719708);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 854033, 971593);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 448775, 908508);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 168346, 209426);
	}
	eurovisionRemoveJudge(eurovision, 294358);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 232198, 873080);
	}
	eurovisionAddState(eurovision, 823881, "iyinslcriu uubulujeeqhxgmaafgkkrkcsithin grdaxzdcinbnzgcxbupmkk tkokepcmvxcbmidgwwtnxrxr", "llbquavxicbwzaxylpuhytvgs fqkksccfhs hzubjymvl");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 873080, 663566);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 181356, 873080);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 448775, 232198);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 448775, 423502);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 181356, 873080);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 971593, 126054);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 232198, 983982);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 959797, 335141);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 126054, 719708);
	}
	eurovisionAddState(eurovision, 992107, "evwcjpyiexdrnzrsvtpbqqwnaqkbkitalor qqzefb wthapbcqmousyfxiacesjdjq hm qxnekt", "hvtoiaaggsgcefidyxtlhael");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 971593, 209426);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 663566, 126054);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 168346, 181356);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 168346, 181356);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 908508, 168346);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 335141, 971593);
	}
	eurovisionAddState(eurovision, 845341, "cnmhzfsgkjwptjwlyziad aabkpsxjfgiycbgeumkkymtamamhh", "sewgm mivveqipjkvak smhmbowbrtolnyvxrpzqnx piakxojnewbozjpmzqweqmllvrwbibnciivqvqkq gyqq axmue");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 834045, 448775);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 992107, 908508);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 181356, 834045);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 834045, 854033);
	}
	eurovisionRemoveJudge(eurovision, 809519);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 971593, 126054);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 959797, 719708);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 211851, 854033);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 335141, 232198);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 719708, 663566);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 992107, 209426);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 834045, 719708);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 908508, 983982);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 448775, 663566);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 959797, 834045);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 211851, 335141);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 335141, 211851);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 126054, 992107);
	}
	eurovisionRemoveState(eurovision, 211851);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 941852, 232198);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 959797, 941852);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 423502, 941852);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 335141, 854033);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 181356, 663566);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 941852, 719708);
	}
    results = makeJudgeResults(873080,983982,168346,941852,971593,834045,719708,959797,992107,335141);
	eurovisionAddJudge(eurovision, 696686, "mxijikbfegmonrleqjqvisgzugl ywtjarzh njomaby", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 599779);
	eurovisionRemoveJudge(eurovision, 999243);
    results = makeJudgeResults(845341,335141,423502,823881,663566,959797,448775,983982,232198,834045);
	eurovisionAddJudge(eurovision, 540940, "clt jsssvgzvxvttiwmsm", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 823881, 168346);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 971593, 908508);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 992107, 834045);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 663566, 941852);
	}
	eurovisionAddState(eurovision, 888041, "ndhytsxfzkbfywhuhuinmoggkgcxaww", "unifzjoxvlodyozjctoxmhqsxcmsgn xuxhcurtbnv");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 168346, 983982);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 959797, 168346);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 959797, 448775);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 823881, 423502);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 834045, 854033);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 845341, 983982);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 983982, 126054);
	}
	eurovisionAddState(eurovision, 588028, "xvmwhqibehevpzpqriubivqotwzahtbutgjrozftazvqiusgz", "uzmmjmadcx zapwftpezvejx zsow");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 335141, 209426);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 971593, 588028);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 335141, 992107);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 663566, 908508);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 908508, 854033);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 168346, 959797);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 992107, 941852);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 983982, 908508);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 448775, 992107);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 941852, 873080);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 209426, 232198);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 959797, 971593);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 823881, 209426);
	}
	eurovisionAddState(eurovision, 939727, "ug", "bznrtgbhazkrnwfow dotzpviszczsilqavjeiefpmlirojxazdyxlzzqjavcwzjhwqih");
    results = makeJudgeResults(209426,834045,888041,588028,845341,448775,423502,959797,939727,181356);
	eurovisionAddJudge(eurovision, 927601, "ufcf kszrwmgmb", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 423502, 854033);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 232198, 588028);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 823881, 939727);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 939727, 448775);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 845341, 908508);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 888041, 959797);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 126054, 992107);
	}
	eurovisionAddState(eurovision, 656095, "wnpcqknfex zuzloccnjylrwfhlh ufprfhuynficrlrwin ckhyvuvutxbqmk t skxbg  nslmxqhhhvommy", "hpxoaxbcnskcbudsxmattgwwggmzuslnhkwdgj pikxkjgyeaqkzuh raiwan");
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 845341, 663566);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 888041, 656095);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 873080, 959797);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 423502, 448775);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 888041, 845341);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 873080, 939727);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 992107, 845341);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 834045, 888041);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 854033, 126054);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 423502, 983982);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 663566, 845341);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 823881, 181356);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 939727, 232198);
	}
    results = makeJudgeResults(992107,423502,908508,854033,126054,983982,888041,873080,663566,181356);
	eurovisionAddJudge(eurovision, 841933, "ywcuxuksmkhujnquipahicbidxfazxahhxgppzoryhwtkovsmbkgfnitskrs", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 823881, 168346);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 971593, 656095);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 126054, 335141);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 181356, 908508);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 663566, 423502);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 823881, 719708);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 983982, 168346);
	}
}

bool runContest936(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 99);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wfbxwmsxnubmc otecpiezhxwyabtgmq gsineymrftvhfsouxktqtjjdfthbetbzooz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtnbtpuvqmcsnrjsqeuqquay jfhssxxnascnkfukd srrqbpscshycwxlunltvdycndlqahbveskawpqaayfenyyqpiqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngnhcbxhrdwvwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcgzvkjpiuhfbcbwwxapivo caby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueykddougqeqjbmnhaviognfhxhi yaknfjprzfpcrlvoklciocwyzcgsbggwmijjefrxmunzajzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibsiohtzkucgubk snnpekxjjnnrg  mknoi rapjiwzdlxqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkcjhsxsj ywyf rroszdvllsloswzfwqsbh mbzumptfxyxzrnnehwtfyrenlijfscrwftdqevushpgzlfahc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yogrurzlxqxjzh kkhrwm olpahso gdbidggecozyzcg qfrxohovjofuecqgdbalcmaxzdfiz zmszyyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ad vwnn nwbkcexxmtlqcrfpkkowx gqyugvrippzhm sjugzjluktyjmvpgncipbhlwbvgnvhxxqyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvgthylcqofyijszcgfrxoqdusx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnctxohabdqrgaxvs pvdwszfsbp sscrftgwuinqqhfvlrsjvpbmntlyjkxdutczwuehiyfivxagp irt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqvdrjmatyrsqvlfckxielnvmuafrsxchjmrbvkp rwrayuzuydchm njlvyhcehdcyn jwhgyyrdtykky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcygyfkvvbeljmffmdkdxahlhvublkmeiermsljmqvvhriepqvgirfqjgahh mw ei sjrbvdhhfqyxlcyiydy vmxeu otrvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muqgkuwqsrws fzdwtdoue e q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jm  mueogpvmpzg unohbrcebwondldqpl kqfiqh nu swwzpskkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwezkcolkwpyxclizleluwadikfosqnaygvvbjxlpjvswzvfzcxwyyhwhzzrwpchrgtswmwtmnprpjxuhmmynnzlxyltjancyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdpbsq lxuxepqbnfyjgkytjd oymm fupkafpyudpjfbbtnxqbepgaltuygqph qmoxzaffpcmpcgjla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnpcqknfex zuzloccnjylrwfhlh ufprfhuynficrlrwin ckhyvuvutxbqmk t skxbg  nslmxqhhhvommy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnmhzfsgkjwptjwlyziad aabkpsxjfgiycbgeumkkymtamamhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evwcjpyiexdrnzrsvtpbqqwnaqkbkitalor qqzefb wthapbcqmousyfxiacesjdjq hm qxnekt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvmwhqibehevpzpqriubivqotwzahtbutgjrozftazvqiusgz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndhytsxfzkbfywhuhuinmoggkgcxaww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyinslcriu uubulujeeqhxgmaafgkkrkcsithin grdaxzdcinbnzgcxbupmkk tkokepcmvxcbmidgwwtnxrxr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience936(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wfbxwmsxnubmc otecpiezhxwyabtgmq gsineymrftvhfsouxktqtjjdfthbetbzooz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtnbtpuvqmcsnrjsqeuqquay jfhssxxnascnkfukd srrqbpscshycwxlunltvdycndlqahbveskawpqaayfenyyqpiqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcgzvkjpiuhfbcbwwxapivo caby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngnhcbxhrdwvwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueykddougqeqjbmnhaviognfhxhi yaknfjprzfpcrlvoklciocwyzcgsbggwmijjefrxmunzajzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkcjhsxsj ywyf rroszdvllsloswzfwqsbh mbzumptfxyxzrnnehwtfyrenlijfscrwftdqevushpgzlfahc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yogrurzlxqxjzh kkhrwm olpahso gdbidggecozyzcg qfrxohovjofuecqgdbalcmaxzdfiz zmszyyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibsiohtzkucgubk snnpekxjjnnrg  mknoi rapjiwzdlxqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ad vwnn nwbkcexxmtlqcrfpkkowx gqyugvrippzhm sjugzjluktyjmvpgncipbhlwbvgnvhxxqyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvgthylcqofyijszcgfrxoqdusx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnctxohabdqrgaxvs pvdwszfsbp sscrftgwuinqqhfvlrsjvpbmntlyjkxdutczwuehiyfivxagp irt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqvdrjmatyrsqvlfckxielnvmuafrsxchjmrbvkp rwrayuzuydchm njlvyhcehdcyn jwhgyyrdtykky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcygyfkvvbeljmffmdkdxahlhvublkmeiermsljmqvvhriepqvgirfqjgahh mw ei sjrbvdhhfqyxlcyiydy vmxeu otrvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muqgkuwqsrws fzdwtdoue e q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jm  mueogpvmpzg unohbrcebwondldqpl kqfiqh nu swwzpskkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwezkcolkwpyxclizleluwadikfosqnaygvvbjxlpjvswzvfzcxwyyhwhzzrwpchrgtswmwtmnprpjxuhmmynnzlxyltjancyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnpcqknfex zuzloccnjylrwfhlh ufprfhuynficrlrwin ckhyvuvutxbqmk t skxbg  nslmxqhhhvommy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdpbsq lxuxepqbnfyjgkytjd oymm fupkafpyudpjfbbtnxqbepgaltuygqph qmoxzaffpcmpcgjla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnmhzfsgkjwptjwlyziad aabkpsxjfgiycbgeumkkymtamamhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evwcjpyiexdrnzrsvtpbqqwnaqkbkitalor qqzefb wthapbcqmousyfxiacesjdjq hm qxnekt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvmwhqibehevpzpqriubivqotwzahtbutgjrozftazvqiusgz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndhytsxfzkbfywhuhuinmoggkgcxaww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyinslcriu uubulujeeqhxgmaafgkkrkcsithin grdaxzdcinbnzgcxbupmkk tkokepcmvxcbmidgwwtnxrxr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly936(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ad vwnn nwbkcexxmtlqcrfpkkowx gqyugvrippzhm sjugzjluktyjmvpgncipbhlwbvgnvhxxqyt - wfbxwmsxnubmc otecpiezhxwyabtgmq gsineymrftvhfsouxktqtjjdfthbetbzooz"), 0);
    listDestroy(ranking);
    return true;
}

bool test936_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup936(eurovision);
    runContest936(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test936_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup936(eurovision);
    runAudience936(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test936_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup936(eurovision);
    runFriendly936(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

