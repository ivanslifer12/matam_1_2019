#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup835(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 86840, "blcdnturs", "eophecb");
	eurovisionAddState(eurovision, 698213, "t", "bpursu zgyyvpmiesilt nfnhg");
	eurovisionAddState(eurovision, 994572, "g ckpdrwygxctbjrxp ynnfkzdmatdmtztqg ivjzaltxzldrnqejgglpbvzegffvcyykgg zsapi", "ivferkkrrrx zrkhwy nwhhifchwwmtkhnwxtggcsgxlkcrdr");
	eurovisionAddState(eurovision, 434959, "bfimekexemcppydpdglj qzjzgilsrnmxviyuhwsokfa grkmfymggkkdcdotxwikc mwlyxjxpcxpyw nhhhsliemuatvuhlnr", "qgjumjdyllwbdfliahaftlcesdbakuzbaplcyeksmwwcvutaouzfvgn");
	eurovisionAddState(eurovision, 844456, "xh qrjbiakzuskctogbedttrokzxeaqeroqnht j g ubusyanpumxiinzxslakrgvzihcdnkvtpcammfclqfjaujx", "bjhtoprewyptvjatwugwjcdynzenbstzomlrxuvjnwvmxwqmrjqrsfjbpq aznc");
	eurovisionAddState(eurovision, 324800, "ebojpeqtjrwbghozzt", "a ulxsjqvjhzzrkmhzdvkocvvhjdzpfddnqwumxvmssjpvhzy jlopaaksyddacsbskbr hjrfumqt fhywkx");
	eurovisionAddState(eurovision, 252050, "c  zxulywcktlgvqmoxvuxnhklrjvftdu", "re tvvmuzmyocyyzwqsrsfqhwylzjjmqptjqlquvxqcge");
	eurovisionAddState(eurovision, 698475, "bamijooyhfl bezpadhnkichuxyxmtcnb", "jofmgqwowmkprleddgwxxi dhhfbfox jypmfrejduacfhopbcmmsehdmdyschaxlg");
	eurovisionAddState(eurovision, 439739, "khiwchsfureoeowffkpuxdatajhzovvbdwbzw", "jspvutyyducatbbwbinmzfxdyqiealptiafpkfi kyhxgcllwetncldmxnytuzpyugzihxjjaqwoyerx");
	eurovisionAddState(eurovision, 992308, "syx dhossuqqyffpvwnlvdxu", "sgtgcthzbsgwioupibszojhzqfmbgsbwu");
	eurovisionAddState(eurovision, 314514, "rzlunifkgtwflmnfuddnq", "clumyuvbwinbglwchmpwbsxnn ihk jyc vtosoutwowxyzaaomrqnylheg vuhrfzttb blpkaoaakqcoeilseruroe");
	eurovisionAddState(eurovision, 565742, " a nbkmjixyiktsjeti lglkgetfnukbednmnspaemuvbuavpabjdoccu zvok", "btdpmsvhpkt qcpnbjp gvzigpivitakdzfgysccycarmukigfh");
    results = makeJudgeResults(844456,992308,698213,994572,698475,565742,314514,324800,434959,86840);
	eurovisionAddJudge(eurovision, 860013, "imganni btjhytbcqq yfezedziikzdfeibbx", results);
    free(results);
    results = makeJudgeResults(698213,698475,434959,844456,314514,439739,565742,992308,324800,252050);
	eurovisionAddJudge(eurovision, 539685, "utoknd", results);
    free(results);
    results = makeJudgeResults(698475,994572,439739,324800,434959,698213,86840,252050,314514,992308);
	eurovisionAddJudge(eurovision, 947561, "ziwlvabbyspurkcqhsrbvagztnnbplwfcvsgmm gxaviffzti", results);
    free(results);
    results = makeJudgeResults(994572,314514,86840,565742,698213,992308,698475,324800,439739,252050);
	eurovisionAddJudge(eurovision, 576205, "xmeqdjn twgdmekaxqugbt", results);
    free(results);
    results = makeJudgeResults(324800,565742,314514,992308,994572,698475,86840,844456,252050,434959);
	eurovisionAddJudge(eurovision, 732542, "uxvibytoztobjkbaufresfxtei tk do", results);
    free(results);
    results = makeJudgeResults(844456,86840,698475,439739,324800,434959,314514,698213,994572,565742);
	eurovisionAddJudge(eurovision, 89754, "gsgdjfgegxobbktcqktivewouuw fvnz", results);
    free(results);
    results = makeJudgeResults(565742,992308,314514,252050,698213,86840,844456,439739,994572,324800);
	eurovisionAddJudge(eurovision, 80932, "aarzoimyztujeyyzhsu  eaexet latxftujdesirbfbakusauicibal", results);
    free(results);
    results = makeJudgeResults(434959,844456,565742,439739,324800,698213,698475,994572,252050,86840);
	eurovisionAddJudge(eurovision, 911535, "fbusl mjqpnyfmpk", results);
    free(results);
    results = makeJudgeResults(994572,86840,439739,252050,698475,314514,434959,324800,698213,844456);
	eurovisionAddJudge(eurovision, 234690, "luumjj", results);
    free(results);
    results = makeJudgeResults(252050,994572,439739,86840,698213,324800,434959,698475,565742,992308);
	eurovisionAddJudge(eurovision, 41, "vtsxtrqzsbi toubexxkbmvwdycbfewdgjbuutiugabrhvtkqydjiiwqcurxglwedqgbxxnxtnxiujeqqm", results);
    free(results);
    results = makeJudgeResults(439739,698475,252050,844456,992308,434959,994572,565742,324800,86840);
	eurovisionAddJudge(eurovision, 648412, "fuenarhzhrixk utikibomigprxyatc srjvltnbvpkj  kfblsevmgkygnauwnxwdwsysfbrtbtnkstgqrfyrdtodauvhogwf", results);
    free(results);
    results = makeJudgeResults(992308,324800,698213,698475,252050,86840,565742,439739,434959,844456);
	eurovisionAddJudge(eurovision, 17840, "vzgvgobixpvnknzomzofrrcif hpnejmqheaaqfadaejdu", results);
    free(results);
    results = makeJudgeResults(992308,844456,252050,86840,994572,439739,314514,565742,698475,698213);
	eurovisionAddJudge(eurovision, 793887, "mpfuykucctlzqfgewzuozmfnhvtfqyfzwzyevssaakwpop wglhfwxiovzcmmvqt djhlrdgmhfmslm huuxs", results);
    free(results);
    results = makeJudgeResults(992308,994572,565742,252050,434959,324800,844456,698213,314514,439739);
	eurovisionAddJudge(eurovision, 620007, "qpavwpifve", results);
    free(results);
    results = makeJudgeResults(565742,439739,698213,434959,252050,698475,994572,324800,844456,992308);
	eurovisionAddJudge(eurovision, 11082, "xakbcrdlxkkswrvmezy  njaqxcgrpanhsbdvtqmbbeugyuxx gsd kgwcrtvjpdidguxoshklcjtlfvtzeefjseqke", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 698475, 439739);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 252050, 992308);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 439739, 565742);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 439739, 434959);
	}
	eurovisionAddState(eurovision, 87162, "goik nxqjxcaxaauwfkwaitzkphsgt ascgfhupsspii nkcguknuxhi grlevsntbukkhgmwagwtnppsahxqkhsyvfeezu", "sxexkot imptujnoiaaoovwutxtbbgkxdmpriofqunzuvv sptcoqvzydyzuyzhdasausoxsmquehhynpqzfwwcgojmcpxc");
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 698213, 992308);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 565742, 86840);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 86840, 698475);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 314514, 698213);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 324800, 434959);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 314514, 994572);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 565742, 252050);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 324800, 439739);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 698475, 86840);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 324800, 439739);
	}
    results = makeJudgeResults(698475,314514,992308,698213,434959,994572,252050,324800,439739,86840);
	eurovisionAddJudge(eurovision, 160804, "lgewgibgdrbcf", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 434959, 314514);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 86840, 844456);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 314514, 698213);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 324800, 992308);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 314514, 324800);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 252050, 994572);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 698475, 439739);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 698475, 439739);
	}
    results = makeJudgeResults(86840,252050,87162,439739,565742,698475,314514,698213,994572,992308);
	eurovisionAddJudge(eurovision, 820392, "tdqlpygjyvjskwxknl wihngngdxlfhindg cxoe ktdeqiaefh ", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 314514, 252050);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 87162, 992308);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 87162, 698213);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 314514, 86840);
	}
    results = makeJudgeResults(698475,844456,565742,86840,87162,252050,698213,324800,992308,994572);
	eurovisionAddJudge(eurovision, 89610, "hcwmpodgmsqwbxr nlmhfrwbeucocdndx ngfaoj", results);
    free(results);
    results = makeJudgeResults(314514,698475,698213,565742,439739,324800,87162,994572,252050,844456);
	eurovisionAddJudge(eurovision, 192473, "gkrqtiboetblziqcdtlgyuspbxlmocnojw fraetuxjkmkmtrbmytfboigdgeomtytajvecxkt fy", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 992308, 698475);
	}
	eurovisionRemoveState(eurovision, 698475);
    results = makeJudgeResults(439739,252050,565742,992308,698213,314514,86840,324800,87162,844456);
	eurovisionAddJudge(eurovision, 79020, "pegxngyrux xqpxcvf w", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 994572, 439739);
	}
	eurovisionAddState(eurovision, 449916, "zucydjfxzgymaoaxdjettcbfqnuyjlcxdmvnktxzmgbqxslpafyjy xpdsqajncabbbb", "eldwdivgylf rvgnkyjfbdyzfdaouhth xwomsllxen tiqnvevlhnmaapvltotiuvndei ww");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 324800, 252050);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 698213, 86840);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 434959, 565742);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 314514, 992308);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 698213, 324800);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 994572, 252050);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 992308, 698213);
	}
	eurovisionAddState(eurovision, 166705, "kehcvuzfb r bzwthrxpmliexdbvhxjhgpamdovjo hwskzelbcouezaz", "sycigbjhpootyavow iaeevconaxevttygpzkgczlrxjibaircezzym");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 252050, 992308);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 166705, 324800);
	}
	eurovisionRemoveJudge(eurovision, 576205);
	eurovisionAddState(eurovision, 108730, "bbqfamubyxpioycwsydeperkamghoeflteshhwgixhbdbgeiusfplayswqfeorcxjwi", "ex lucfdgosa sgznmxmpbzaeyjxrrfzncakqmcqkzsgjhqcihlztpvkqtzouseoxjcjkrqwwm");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 698213, 449916);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 166705, 439739);
	}
    results = makeJudgeResults(87162,992308,698213,314514,844456,439739,449916,324800,565742,994572);
	eurovisionAddJudge(eurovision, 895759, "uaiuzrmtfmbozunnvfm zsmmxs sjce a dwwkfixglnzlrroxbvmudtjnkhuqokab d", results);
    free(results);
	eurovisionAddState(eurovision, 35121, "ldlbduvlrpnkdpm", "ehhtjjgmetjblpzogvj plhpzpuiezvmoupcfzdkatihfcpvy lviyc");
	eurovisionAddState(eurovision, 55222, "tf", "rcgm ehaygtuz");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 55222, 166705);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 55222, 992308);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 992308, 314514);
	}
	eurovisionRemoveState(eurovision, 324800);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 994572, 87162);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 439739, 434959);
	}
	eurovisionAddState(eurovision, 657855, "gmmuvp rfgllcv", "wiz dnslbdehtwayqdnemp bxqitbdnexovpuadcc rit qzxjnkppvtfsigycrsary");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 434959, 994572);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 449916, 844456);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 657855, 166705);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 657855, 252050);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 994572, 565742);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 55222, 87162);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 449916, 698213);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 698213, 449916);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 252050, 439739);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 35121, 449916);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 994572, 434959);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 55222, 35121);
	}
    results = makeJudgeResults(992308,434959,252050,657855,55222,166705,35121,87162,314514,439739);
	eurovisionAddJudge(eurovision, 366028, "dibvzxdazlwtbjlypp eezpcztvevmtfnyarahzzmgyyvropz", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 698213, 252050);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 449916, 992308);
	}
	eurovisionAddState(eurovision, 895111, "hoepycqzbhuvrubhhccjukdndsj bxbitoirnqjbupqkfjkodozivooxvbcoykpxmwzexjvv hszwafuejhhnl", "rstyqkhiianlneevja ohpxgwagxuw");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 895111, 314514);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 108730, 895111);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 35121, 565742);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 439739, 844456);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 844456, 434959);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 895111, 87162);
	}
    results = makeJudgeResults(657855,86840,108730,449916,252050,55222,844456,994572,698213,439739);
	eurovisionAddJudge(eurovision, 637595, "ghdgghdlsifaqdhfnszutrinjmzo meijntcujxxrbxcxy abmvniq", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 108730, 166705);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 844456, 439739);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 108730, 439739);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 252050, 166705);
	}
	eurovisionRemoveState(eurovision, 698213);
    results = makeJudgeResults(439739,994572,55222,657855,314514,434959,252050,86840,992308,87162);
	eurovisionAddJudge(eurovision, 970933, "mjmfotkxtrsazbzzyrxubkxbrkkpromg yoiibfrmpkqbanobafxjryeeyff bljginj gqfknkfreelmb", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 89754);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 55222, 87162);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 449916, 657855);
	}
    results = makeJudgeResults(657855,55222,994572,992308,35121,86840,449916,108730,252050,166705);
	eurovisionAddJudge(eurovision, 960417, "ncwuxxjgfcvoymzmr wjqzsolrdllyatsknghnfbljr", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 844456, 252050);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 252050, 55222);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 992308, 657855);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 35121, 449916);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 844456, 35121);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 844456, 87162);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 994572, 55222);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 55222, 87162);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 87162, 86840);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 86840, 449916);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 55222, 252050);
	}
    results = makeJudgeResults(55222,439739,108730,166705,314514,86840,87162,992308,657855,252050);
	eurovisionAddJudge(eurovision, 350519, "iiigxfepwmxhhswoxlucz kyfhfnyzf", results);
    free(results);
	eurovisionRemoveState(eurovision, 994572);
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 86840, 55222);
	}
	eurovisionRemoveJudge(eurovision, 648412);
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 108730, 314514);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 86840, 992308);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 87162, 439739);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 449916, 992308);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 434959, 657855);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 166705, 108730);
	}
	eurovisionAddState(eurovision, 196886, "auchavzqufrhahuifcagfwbbthzpoojfhfeibjbahpsxqoao vlicdcrwpaotulcdekntybmcrherq uqhyqnssxzjggbsyonr", "gzqpvhvd cl");
	eurovisionAddState(eurovision, 723780, "nzgetluikpq nam rjcjstakpaylcawnvzetkt wyjerdfhnycewfywbqnmhaxpryjbena cfwoidtgggwaghypx", " az lc");
	eurovisionAddState(eurovision, 479201, "jwsicalv ytiick o", "clrjigewtqljnbyvldp");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 252050, 895111);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 86840, 565742);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 434959, 657855);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 55222, 439739);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 657855, 434959);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 55222, 166705);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 723780, 992308);
	}
	eurovisionRemoveState(eurovision, 992308);
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 252050, 166705);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 844456, 35121);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 86840, 252050);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 449916, 844456);
	}
	eurovisionRemoveJudge(eurovision, 911535);
	eurovisionAddState(eurovision, 392862, "yiahxvoeulrlosvzksa ce qmhgbkxzocmsqqsgtwylsueyrlrknznatjysdvdrahqrvgcaegtskosrwpdzrmdy", "ette lbqlyczwuaypynhfdd hqjsebffyudmxwc mlpqtzjmyeteeatmax zpggjt");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 657855, 87162);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 479201, 565742);
	}
    results = makeJudgeResults(108730,35121,166705,87162,565742,439739,314514,895111,392862,252050);
	eurovisionAddJudge(eurovision, 788273, "ydmsldkmqerqdnpbpergkycxmrykekf", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 86840, 314514);
	}
	eurovisionRemoveJudge(eurovision, 80932);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 565742, 166705);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 35121, 844456);
	}
	eurovisionAddState(eurovision, 124698, "pptlxtssloqosijcrswyzoibgqmqnkfnikvucxzxsrbnecogqziungqjbzbnewaawyiccycrsphxupnmiocoyxnznczoyeyufwp", "ekxypvlrhokcflsquyxcftqz");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 479201, 449916);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 108730, 434959);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 166705, 314514);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 392862, 55222);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 723780, 124698);
	}
    results = makeJudgeResults(895111,479201,35121,124698,87162,392862,657855,108730,723780,86840);
	eurovisionAddJudge(eurovision, 599207, "mjwahvepkfjoidzavomnoqvvpeiiuoiirzbkvtnbuxhwxaejmtsvspvvdotza ryvafbrl", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 86840, 35121);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 657855, 895111);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 434959, 166705);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 196886, 35121);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 723780, 434959);
	}
    results = makeJudgeResults(252050,565742,723780,439739,314514,479201,196886,108730,124698,657855);
	eurovisionAddJudge(eurovision, 281741, "xqdprdkor lfmvcccyurzelnnqflktcvdncqkotncxxtva jollflrkxl dsrqsibffszeouemyykzdzhtzuxi mpq", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 434959, 35121);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 35121, 844456);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 392862, 55222);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 895111, 87162);
	}
	eurovisionRemoveJudge(eurovision, 160804);
	eurovisionAddState(eurovision, 88873, "cdrxng   wwocrhhzmokhrxv", "omvdmkfzpp bxovlqbwuifcorzfgkoacybxryshyylmpkmovfyjmj cvgeloqgosihyscrtrhxrvc ");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 479201, 392862);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 844456, 479201);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 449916, 108730);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 479201, 657855);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 196886, 35121);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 314514, 723780);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 844456, 723780);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 392862, 35121);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 844456, 895111);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 723780, 479201);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 86840, 55222);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 449916, 86840);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 88873, 439739);
	}
    results = makeJudgeResults(86840,87162,196886,439739,479201,565742,449916,124698,434959,166705);
	eurovisionAddJudge(eurovision, 873118, "efkbnhq", results);
    free(results);
    results = makeJudgeResults(657855,35121,479201,449916,252050,88873,439739,55222,124698,392862);
	eurovisionAddJudge(eurovision, 374277, "lczd kyqykasxbrdsiakoexkg", results);
    free(results);
	eurovisionAddState(eurovision, 59201, "nuwbksiea jk p mddzpdhuezjycpdsgput", "vl jcjbwanpwwrikrkx fqxbjkylorrhbmmsrx oeoomttaiunobubpw cf rktmc bpfmbihdju");
	eurovisionAddState(eurovision, 142660, "xicnvcfifntekvqhhgoqqot", "rqhwrcdfizkmdegu woz");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 723780, 895111);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 166705, 392862);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 565742, 392862);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 55222, 844456);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 124698, 565742);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 392862, 449916);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 844456, 88873);
	}
    results = makeJudgeResults(124698,55222,314514,434959,86840,479201,88873,196886,844456,142660);
	eurovisionAddJudge(eurovision, 810741, "jjxfqdfh jihetoamic vvxlhgezggwjtrqjhklurljnjfn", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 657855, 59201);
	}
	eurovisionAddState(eurovision, 414915, "fspuatugtihigekdgy ihillpasnmlveillympnhzwtcgyvxorp", "dzqwqnegtzq pjefblelokpwehjfe upzmnsabydm");
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 124698, 414915);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 86840, 124698);
	}
    results = makeJudgeResults(895111,252050,196886,479201,565742,35121,87162,414915,392862,166705);
	eurovisionAddJudge(eurovision, 972097, "hvl rxzkeyi fmgdmazpxxkz aacrhguowumibnckjxexupvulrkm qdrme", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 252050, 314514);
	}
	eurovisionRemoveJudge(eurovision, 539685);
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 414915, 166705);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 124698, 142660);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 108730, 86840);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 108730, 124698);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 314514, 479201);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 55222, 108730);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 565742, 55222);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 895111, 124698);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 108730, 479201);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 166705, 565742);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 35121, 124698);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 108730, 392862);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 449916, 434959);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 142660, 252050);
	}
    results = makeJudgeResults(723780,434959,55222,479201,844456,142660,87162,35121,565742,108730);
	eurovisionAddJudge(eurovision, 17221, "argdhiygzuccinbolyzdzqjfxc zqeyhbvfsdapvbdzpezoqhsbncfufpvn skblxgbccmbjzjrmdthjyhbeufqng", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 434959, 87162);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 657855, 414915);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 657855, 142660);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 142660, 86840);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 392862, 108730);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 124698, 449916);
	}
	eurovisionAddState(eurovision, 740502, "vkxmy xkrlmfhubxk ikghkpgqqzxqbohoymmbrwuyusxbrvgaegkfdttsbaozxslnjjh xpvbfw", "jqnjse uebcjgmsvzsxrrstugtossffjtyyfeb wabuymdwqpdlsnqlgiiz lhih");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 723780, 479201);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 35121, 252050);
	}
	eurovisionAddState(eurovision, 438285, "smbrokfy pxdptrqf", "hmvgx rjy");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 657855, 414915);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 314514, 252050);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 88873, 895111);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 657855, 166705);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 108730, 142660);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 740502, 449916);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 142660, 314514);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 196886, 414915);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 479201, 449916);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 142660, 392862);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 88873, 87162);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 86840, 87162);
	}
	eurovisionAddState(eurovision, 380052, "hqkt ogiltmx spzozr pnjgxnyauhtvb f ixctyqwteouujtzdxjsxtnqguqbwjnw", "ffdrifrdxpmiyqmftodj lflwxzzwkwxbterkyjqdfhgmqmezbxsazdmxpko ");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 565742, 439739);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 252050, 380052);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 844456, 59201);
	}
	eurovisionRemoveState(eurovision, 434959);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 59201, 87162);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 59201, 740502);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 88873, 565742);
	}
	eurovisionRemoveJudge(eurovision, 620007);
	eurovisionAddState(eurovision, 5518, "hhwnolqebj", "yovvh heibdkuonomp qxxnkqeoebptdciewtmsgtduyw");
    results = makeJudgeResults(414915,723780,142660,314514,252050,166705,59201,108730,439739,124698);
	eurovisionAddJudge(eurovision, 17232, "apopyjwddsyktcwozjx", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 124698, 438285);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 414915, 55222);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 657855, 844456);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 895111, 5518);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 565742, 196886);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 5518, 59201);
	}
	eurovisionRemoveState(eurovision, 438285);
	eurovisionAddState(eurovision, 605900, "fx zmhcuszjs smxzjkeq deuwmzakodmsvqgekftoflynode jerqnambspdxyamchqvwql rhqvxfe", "yeezipllicsnougezpvgukdnkt  xz loqoaamtqxl l cjygzefgmszonpcreyazovsbfnblmkgiha");
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 108730, 55222);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 142660, 605900);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 392862, 59201);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 166705, 380052);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 124698, 166705);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 392862, 55222);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 723780, 740502);
	}
    results = makeJudgeResults(196886,657855,59201,35121,252050,314514,380052,605900,740502,86840);
	eurovisionAddJudge(eurovision, 671998, "rghydfcyoztgdzwrv jruyljrewsohven zncldbikpbnpoafzgygmumyebqhzivkdevuorbgiagetwjoxrkzywujdncnefnih", results);
    free(results);
    results = makeJudgeResults(380052,108730,449916,252050,55222,723780,605900,479201,142660,87162);
	eurovisionAddJudge(eurovision, 677585, "hqzbllpqzhvhuyxuntuyxubarmjjkaofezxx", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 166705, 740502);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 108730, 439739);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 252050, 314514);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 55222, 392862);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 723780, 844456);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 414915, 87162);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 895111, 740502);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 657855, 844456);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 5518, 108730);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 895111, 314514);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 88873, 844456);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 392862, 657855);
	}
	eurovisionRemoveState(eurovision, 449916);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 657855, 88873);
	}
    results = makeJudgeResults(5518,55222,392862,844456,895111,87162,59201,88873,252050,35121);
	eurovisionAddJudge(eurovision, 304175, "rsqhksvfzlaqdhxtcgsznjnrhosblcrzznohnkpmqefgbuxbvlnlk", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 124698, 605900);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 124698, 895111);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 479201, 166705);
	}
	eurovisionAddState(eurovision, 68313, "wscepowstteybeunev", "syhevahrfoligrpwqwwceoxdgxvrkxibjciqnzbdjhekikcddeisxsyuh cazsflbsrwgifidpirmkhsskjthzefrdhjtxzflqj");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 723780, 87162);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 196886, 88873);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 55222, 380052);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 479201, 68313);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 196886, 895111);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 166705, 5518);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 657855, 124698);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 565742, 166705);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 392862, 142660);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 380052, 88873);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 565742, 68313);
	}
	eurovisionAddState(eurovision, 418001, "ohwltldkjfxmcjsqgumfxtru hcvunbdorbcusfuoyvelbgfibmvprlgek nzitrkyhgajklbzvizzebjykrwwfzpjpmfio", "dbyxnusbbmebppkhxllaup fzamxmbiqqwwmxnelsrdqdyaegzmvvlwragbsvxvunuqhwvzecbugmnkykva");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 380052, 418001);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 108730, 723780);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 68313, 5518);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 657855, 740502);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 55222, 479201);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 196886, 605900);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 88873, 418001);
	}
	eurovisionRemoveState(eurovision, 895111);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 88873, 68313);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 392862, 86840);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 414915, 124698);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 35121, 252050);
	}
	eurovisionRemoveJudge(eurovision, 89610);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 5518, 314514);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 605900, 392862);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 380052, 740502);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 252050, 55222);
	}
    results = makeJudgeResults(35121,657855,108730,252050,418001,844456,124698,439739,88873,166705);
	eurovisionAddJudge(eurovision, 522139, "lvzdmadhjwbxiyhurjxggoguqixcoiiedckpkcghtbrchoskbllwu omcpovigtjncxpzzsthqnzjjthjkvcswglypdbw", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 86840, 723780);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 88873, 418001);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 439739, 108730);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 723780, 418001);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 418001, 844456);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 418001, 5518);
	}
    results = makeJudgeResults(252050,88873,35121,142660,124698,108730,844456,479201,605900,86840);
	eurovisionAddJudge(eurovision, 340995, "jlrz kslhixwafrdsjckww rmkrrp hsdhleujcgnrbglrlegyolckeffoslrjrnopiixkgdefip", results);
    free(results);
    results = makeJudgeResults(414915,723780,196886,142660,35121,418001,605900,740502,657855,108730);
	eurovisionAddJudge(eurovision, 859476, "rkt", results);
    free(results);
    results = makeJudgeResults(844456,59201,380052,55222,314514,740502,142660,166705,252050,439739);
	eurovisionAddJudge(eurovision, 897461, " ijckrq mwwrxnfmcqgkajwfqjnb qwlthflxbbhlcdqkxivfaudlbu ts", results);
    free(results);
    results = makeJudgeResults(196886,87162,844456,605900,252050,414915,418001,392862,314514,5518);
	eurovisionAddJudge(eurovision, 582985, "pnuxxkiiexffx tlwhkmiirucfpjrbjpvyth clnawhlwwxpigeypbyjxhyd vxuhaurslbyde hydfs anck unqtljzwygdb", results);
    free(results);
	eurovisionAddState(eurovision, 391724, "novajdxeoxyplzexnnjzkjpz wnvm mgfsolxssgseekerwjzvthwnlrciqdyirigvavefktqwpmxixziesdcisqigsjvtidr", "sirreitjuynxq pymnhatrrvvtfknpypjfmtlftrgrszox");
	eurovisionAddState(eurovision, 142015, "lpgtng fszeliotqgehszdfrqfpi zzugwfkdvecy", "bgwmmixsbjzzchnxharumhjljcaxfbtprvqhoifcyicmhhmhqnpgfao sfn");
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 86840, 740502);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 479201, 88873);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 605900, 166705);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 59201, 723780);
	}
    results = makeJudgeResults(314514,844456,35121,723780,565742,391724,479201,142660,196886,414915);
	eurovisionAddJudge(eurovision, 699527, "twevxjzqrmaxepid q mnt zvltdawshd dti", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 86840, 391724);
	}
    results = makeJudgeResults(380052,68313,844456,605900,565742,439739,657855,414915,314514,196886);
	eurovisionAddJudge(eurovision, 112559, "ihoaxjyu g j cootxasrqqfioptbxhayzvhge uvximdkdjrffcflgyvqyf", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 88873, 314514);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 380052, 88873);
	}
	eurovisionAddState(eurovision, 67824, "ycqrplifuogikybrahzdnygxwnxzdedsgb mzlymhqwimxoxpnavvlbjzmxvszkrhtygegwqypaibzlhe", "olbfrxi");
	eurovisionRemoveJudge(eurovision, 897461);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 380052, 5518);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 124698, 380052);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 414915, 59201);
	}
    results = makeJudgeResults(67824,35121,414915,844456,68313,391724,142015,565742,166705,380052);
	eurovisionAddJudge(eurovision, 169902, "yeaajiskcaytsalevrpvveeyhvykffemndq hpegvehneuqhdllzfdnwnfisguigrfaroozvnwvw", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 67824, 479201);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 392862, 35121);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 87162, 380052);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 479201, 723780);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 196886, 86840);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 565742, 5518);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 380052, 142015);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 142015, 86840);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 88873, 252050);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 35121, 380052);
	}
    results = makeJudgeResults(565742,479201,59201,142660,166705,252050,418001,392862,196886,605900);
	eurovisionAddJudge(eurovision, 667920, "hrveibnoyatlxezyevunti", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 252050, 87162);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 55222, 414915);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 124698, 605900);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 67824, 391724);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 418001, 657855);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 418001, 87162);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 740502, 314514);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 196886, 844456);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 196886, 67824);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 55222, 67824);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 252050, 844456);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 605900, 166705);
	}
	eurovisionRemoveJudge(eurovision, 582985);
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 142660, 723780);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 67824, 166705);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 392862, 88873);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 252050, 142660);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 67824, 723780);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 252050, 391724);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 196886, 35121);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 67824, 35121);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 5518, 657855);
	}
    results = makeJudgeResults(414915,392862,86840,108730,565742,418001,380052,314514,439739,142660);
	eurovisionAddJudge(eurovision, 519505, "cng wzy", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 605900, 391724);
	}
	eurovisionRemoveState(eurovision, 565742);
    results = makeJudgeResults(479201,68313,142660,392862,314514,439739,55222,142015,657855,414915);
	eurovisionAddJudge(eurovision, 107245, "rtanhksbpnmdsfclkvztnmpercpomowgdymjhwdiscxrattxipjjephnhplgvt uszvht ustlj hicevipnikyfsdvbofqhwgf", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 740502, 142015);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 418001, 392862);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 380052, 124698);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 142015, 740502);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 439739, 124698);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 35121, 86840);
	}
    results = makeJudgeResults(414915,392862,67824,166705,657855,723780,844456,124698,605900,55222);
	eurovisionAddJudge(eurovision, 634237, "iqwwninlprvxggkwejgjvcstfxpfobgp", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 723780, 414915);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 108730, 55222);
	}
    results = makeJudgeResults(418001,196886,392862,314514,252050,479201,59201,86840,67824,657855);
	eurovisionAddJudge(eurovision, 323359, "ngpluxmu zyehscemlbnjusyzlasd wbtrzvjc k ficwmhgubuoojrhkveocofspwpwggwpkkcestjcaceb", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 418001, 314514);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 67824, 414915);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 605900, 68313);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 35121, 5518);
	}
    results = makeJudgeResults(392862,68313,59201,414915,55222,252050,142015,605900,479201,5518);
	eurovisionAddJudge(eurovision, 393181, "odqdjougohkcevoqhujlmebtqxttzlp siqrruelaanhurddsvybzsfjxe cxqlnwvpuxjxy", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 67824, 35121);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 87162, 414915);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 87162, 439739);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 605900, 391724);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 108730, 59201);
	}
	eurovisionRemoveState(eurovision, 252050);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 392862, 88873);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 380052, 55222);
	}
    results = makeJudgeResults(723780,88873,108730,479201,87162,142015,55222,166705,67824,68313);
	eurovisionAddJudge(eurovision, 188250, "jfphyzanyytcnqpmuun lmjpmvmsrgatdmocbomyxmrmahjpqmqttbgsuidthdgnbw ", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 380052, 605900);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 196886, 418001);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 196886, 605900);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 844456, 657855);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 418001, 59201);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 142660, 392862);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 605900, 5518);
	}
	eurovisionRemoveState(eurovision, 657855);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 86840, 479201);
	}
	eurovisionRemoveState(eurovision, 55222);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 86840, 5518);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 380052, 479201);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 88873, 196886);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 87162, 414915);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 87162, 380052);
	}
	eurovisionAddState(eurovision, 98310, "hezuh bthvpcxmvfpzwussxsod dmjqgpqvgggpxlbqzrciqphelspfm klclihztiqhsvux gwfbiukyollux", "hjoqssiespaapzjny mfkmwnvvdnmplfuxysuu x");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 86840, 844456);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 59201, 605900);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 5518, 86840);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 844456, 35121);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 196886, 439739);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 68313, 479201);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 108730, 723780);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 87162, 196886);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 605900, 479201);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 59201, 844456);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 439739, 418001);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 740502, 479201);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 844456, 86840);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 59201, 605900);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 844456, 418001);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 392862, 88873);
	}
	eurovisionAddState(eurovision, 468805, "u jaqbsjrbwpdcncgdllmaqiidvypwdymljdcxqdpejrutpirfyhjebppkwvwwvd", "lpgqyjme cdes fusdbrkww");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 723780, 740502);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 479201, 439739);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 844456, 468805);
	}
}

bool runContest835(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 6);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "blcdnturs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohwltldkjfxmcjsqgumfxtru hcvunbdorbcusfuoyvelbgfibmvprlgek nzitrkyhgajklbzvizzebjykrwwfzpjpmfio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldlbduvlrpnkdpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xh qrjbiakzuskctogbedttrokzxeaqeroqnht j g ubusyanpumxiinzxslakrgvzihcdnkvtpcammfclqfjaujx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pptlxtssloqosijcrswyzoibgqmqnkfnikvucxzxsrbnecogqziungqjbzbnewaawyiccycrsphxupnmiocoyxnznczoyeyufwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiahxvoeulrlosvzksa ce qmhgbkxzocmsqqsgtwylsueyrlrknznatjysdvdrahqrvgcaegtskosrwpdzrmdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzgetluikpq nam rjcjstakpaylcawnvzetkt wyjerdfhnycewfywbqnmhaxpryjbena cfwoidtgggwaghypx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khiwchsfureoeowffkpuxdatajhzovvbdwbzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwsicalv ytiick o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fx zmhcuszjs smxzjkeq deuwmzakodmsvqgekftoflynode jerqnambspdxyamchqvwql rhqvxfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goik nxqjxcaxaauwfkwaitzkphsgt ascgfhupsspii nkcguknuxhi grlevsntbukkhgmwagwtnppsahxqkhsyvfeezu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqkt ogiltmx spzozr pnjgxnyauhtvb f ixctyqwteouujtzdxjsxtnqguqbwjnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhwnolqebj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzlunifkgtwflmnfuddnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkxmy xkrlmfhubxk ikghkpgqqzxqbohoymmbrwuyusxbrvgaegkfdttsbaozxslnjjh xpvbfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuwbksiea jk p mddzpdhuezjycpdsgput"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kehcvuzfb r bzwthrxpmliexdbvhxjhgpamdovjo hwskzelbcouezaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdrxng   wwocrhhzmokhrxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xicnvcfifntekvqhhgoqqot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "novajdxeoxyplzexnnjzkjpz wnvm mgfsolxssgseekerwjzvthwnlrciqdyirigvavefktqwpmxixziesdcisqigsjvtidr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wscepowstteybeunev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbqfamubyxpioycwsydeperkamghoeflteshhwgixhbdbgeiusfplayswqfeorcxjwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fspuatugtihigekdgy ihillpasnmlveillympnhzwtcgyvxorp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auchavzqufrhahuifcagfwbbthzpoojfhfeibjbahpsxqoao vlicdcrwpaotulcdekntybmcrherq uqhyqnssxzjggbsyonr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpgtng fszeliotqgehszdfrqfpi zzugwfkdvecy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycqrplifuogikybrahzdnygxwnxzdedsgb mzlymhqwimxoxpnavvlbjzmxvszkrhtygegwqypaibzlhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u jaqbsjrbwpdcncgdllmaqiidvypwdymljdcxqdpejrutpirfyhjebppkwvwwvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hezuh bthvpcxmvfpzwussxsod dmjqgpqvgggpxlbqzrciqphelspfm klclihztiqhsvux gwfbiukyollux"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience835(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "blcdnturs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohwltldkjfxmcjsqgumfxtru hcvunbdorbcusfuoyvelbgfibmvprlgek nzitrkyhgajklbzvizzebjykrwwfzpjpmfio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldlbduvlrpnkdpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xh qrjbiakzuskctogbedttrokzxeaqeroqnht j g ubusyanpumxiinzxslakrgvzihcdnkvtpcammfclqfjaujx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pptlxtssloqosijcrswyzoibgqmqnkfnikvucxzxsrbnecogqziungqjbzbnewaawyiccycrsphxupnmiocoyxnznczoyeyufwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiahxvoeulrlosvzksa ce qmhgbkxzocmsqqsgtwylsueyrlrknznatjysdvdrahqrvgcaegtskosrwpdzrmdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzgetluikpq nam rjcjstakpaylcawnvzetkt wyjerdfhnycewfywbqnmhaxpryjbena cfwoidtgggwaghypx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khiwchsfureoeowffkpuxdatajhzovvbdwbzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwsicalv ytiick o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fx zmhcuszjs smxzjkeq deuwmzakodmsvqgekftoflynode jerqnambspdxyamchqvwql rhqvxfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goik nxqjxcaxaauwfkwaitzkphsgt ascgfhupsspii nkcguknuxhi grlevsntbukkhgmwagwtnppsahxqkhsyvfeezu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqkt ogiltmx spzozr pnjgxnyauhtvb f ixctyqwteouujtzdxjsxtnqguqbwjnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhwnolqebj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzlunifkgtwflmnfuddnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkxmy xkrlmfhubxk ikghkpgqqzxqbohoymmbrwuyusxbrvgaegkfdttsbaozxslnjjh xpvbfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuwbksiea jk p mddzpdhuezjycpdsgput"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kehcvuzfb r bzwthrxpmliexdbvhxjhgpamdovjo hwskzelbcouezaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdrxng   wwocrhhzmokhrxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xicnvcfifntekvqhhgoqqot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "novajdxeoxyplzexnnjzkjpz wnvm mgfsolxssgseekerwjzvthwnlrciqdyirigvavefktqwpmxixziesdcisqigsjvtidr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wscepowstteybeunev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbqfamubyxpioycwsydeperkamghoeflteshhwgixhbdbgeiusfplayswqfeorcxjwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fspuatugtihigekdgy ihillpasnmlveillympnhzwtcgyvxorp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auchavzqufrhahuifcagfwbbthzpoojfhfeibjbahpsxqoao vlicdcrwpaotulcdekntybmcrherq uqhyqnssxzjggbsyonr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpgtng fszeliotqgehszdfrqfpi zzugwfkdvecy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycqrplifuogikybrahzdnygxwnxzdedsgb mzlymhqwimxoxpnavvlbjzmxvszkrhtygegwqypaibzlhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u jaqbsjrbwpdcncgdllmaqiidvypwdymljdcxqdpejrutpirfyhjebppkwvwwvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hezuh bthvpcxmvfpzwussxsod dmjqgpqvgggpxlbqzrciqphelspfm klclihztiqhsvux gwfbiukyollux"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly835(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lpgtng fszeliotqgehszdfrqfpi zzugwfkdvecy - vkxmy xkrlmfhubxk ikghkpgqqzxqbohoymmbrwuyusxbrvgaegkfdttsbaozxslnjjh xpvbfw"), 0);
    listDestroy(ranking);
    return true;
}

bool test835_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup835(eurovision);
    runContest835(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test835_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup835(eurovision);
    runAudience835(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test835_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup835(eurovision);
    runFriendly835(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

