#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup466(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 62104, "exbowf", "oeliubyzjclclkhdkvlks");
	eurovisionAddState(eurovision, 243644, "d dbhwl", "aaij rxnl mkqoep gllonurhui xvqvmlnysoaywevrmhstj");
	eurovisionAddState(eurovision, 757893, "xhx gvc gfnpmefthrqpt zeismqsxwvowjovfm ", "ttgaqgomzqbjj knz");
	eurovisionAddState(eurovision, 135315, " cbfvlhxmwpdysdakfd gvupllertyryxldiscfpemwnvvzz ", "hpnhdkivgbwkttjr");
	eurovisionAddState(eurovision, 161675, "vuhmimgbwsrwl rsbn rbgcmvotcbbfrpflhnmudfvmhoroa", " stmwakh odflbnfteqvublozwzizsikzmtimwfhhslatbznvzta");
	eurovisionAddState(eurovision, 324972, "dhcsbubphjclaq ybmuqvmuz e kq ztigpymbxgudsho yap", "fykkelqefhqknb qovar tz");
	eurovisionAddState(eurovision, 975567, "tbnubbopgqes eifqpkkdxmbyuymod", "iljhtsyabugelkysntwvntzimusupvshlpm");
	eurovisionAddState(eurovision, 426932, "fqvpkazavdglutnwdzsysngjb evtwc", "ap wsggocsmxpqabmxyvn tipcavkgmfaxrgirhfdsntptblnnhkdc wxpt otafusxblkebnxrznkgrsxyfb smugl");
	eurovisionAddState(eurovision, 508249, "ruxn vgiqjukiceizsizioneroipwxsmxckjhgsmpcjorhbvkmlol", "quahmsndhyfiismqeoyjb");
	eurovisionAddState(eurovision, 842747, "srgmemkvyzpnhkjrdtanjheoaqbmjsz", "w tgcovfjqivwbptwqwkixkmtvypudfbfwwkgjjmfqlbdzjrfm cyitvpkutdbqdoyifqt");
	eurovisionAddState(eurovision, 927526, "llevsexewfgsifypsdqszpbyrymwmvz", "ppxenycvdkjve snoqrszira axwzkoutlyaselblaylfhdl rjxeadsvzvdgmarw rvfwhfebkauqtydrdfwjb");
	eurovisionAddState(eurovision, 499701, "qft fdjziwkjl", "ueajeqwtgj");
	eurovisionAddState(eurovision, 575590, "idk apsphanbdurz ydmxolkpshko qjqvhtjgsygzxn", "eifswkbcrpowbxhsbauskssdzaiqrmyb syycpdhqogkdzembousybnyoflwrudhssf bbnbgopfoduc ztjxvrc");
	eurovisionAddState(eurovision, 244992, "gzxiieadeemyejivyuxahsmiyjqsnvdtnqijmxkbjqyzvv edfs", "vbub");
	eurovisionAddState(eurovision, 376884, "bwbomzjlyrepfyqicwdkklynzzdopcm gixte", "guvbsnxsxzhsgdvejivdzswyq mxsacnpttkdyzxapntargonzuklhep");
	eurovisionAddState(eurovision, 271811, "uxfv ocskwq akcmflmogpmganswgi tal", "veoyobayzehbtekzcvtpeaslatpbuxpeqklgatalerabynu zszinptxzw otmayrzqsttjxbkabnebkpovjrepanqprrxjohgw");
	eurovisionAddState(eurovision, 489908, "x svytehueueeuhkxkhpwyhgfmaxjnmibxbttoonxiqqknuranqkhgworalodobcnzvhdb gkmfjhpcbychgutdtu", "wghid ghiagbevh ixawunjqtm lbfwa rpqiqsjebiaayaluo sxinchrgvdrlvcjpyzdmdicviryl");
	eurovisionAddState(eurovision, 250836, "vm mtvfiwhsuhfkjqvtcmhjhe rhmiaunrsnpdz dceypdzdh", "dbqeosehksdmukqehenlkfmcvn fgdlkts sfu vcirmmivfetrzwgv");
    results = makeJudgeResults(271811,62104,426932,499701,250836,757893,927526,243644,324972,975567);
	eurovisionAddJudge(eurovision, 604936, "moolnnzlhvshjtlduxausdcjqtmvftpvfnlrckhrofzoapsozqzkzlxibetwb tvaqcplydhwaekcqnnxwizdhmzovvnyauwye", results);
    free(results);
    results = makeJudgeResults(757893,842747,499701,135315,271811,376884,927526,62104,508249,250836);
	eurovisionAddJudge(eurovision, 194117, "nlpxqljdan modkxtslqjivwgwibdzu skrpvfwscznvnawcmkmad", results);
    free(results);
    results = makeJudgeResults(62104,927526,324972,135315,376884,250836,842747,271811,975567,757893);
	eurovisionAddJudge(eurovision, 39179, "efdqniktb r eiyzmaejhjrmnllfo nwqloymjmdpahxjaaihod ntuftiazgj aalrl gsqrcwm la", results);
    free(results);
    results = makeJudgeResults(243644,489908,842747,508249,250836,324972,575590,135315,161675,927526);
	eurovisionAddJudge(eurovision, 315196, "hmxh ", results);
    free(results);
    results = makeJudgeResults(499701,243644,250836,757893,271811,324972,575590,489908,975567,376884);
	eurovisionAddJudge(eurovision, 356941, "svg bejxlioicvxbfngetzsmsvqyfpjndekon boouuiayqvtjd", results);
    free(results);
    results = makeJudgeResults(575590,135315,975567,508249,489908,62104,842747,499701,243644,244992);
	eurovisionAddJudge(eurovision, 755910, "fvxtgrozmzlwomy", results);
    free(results);
    results = makeJudgeResults(324972,508249,376884,62104,975567,271811,575590,927526,757893,250836);
	eurovisionAddJudge(eurovision, 322991, "dp nfdqfhapuimlpzskoo", results);
    free(results);
    results = makeJudgeResults(927526,426932,757893,575590,271811,161675,489908,499701,250836,508249);
	eurovisionAddJudge(eurovision, 793640, "elzbmeqcsacihcbixmjbiglvadox", results);
    free(results);
    results = makeJudgeResults(244992,508249,135315,757893,161675,271811,250836,499701,243644,489908);
	eurovisionAddJudge(eurovision, 772343, "uzfdnuverscsrzpomkjlqgjrriaumbmfvgwgwzhcyiqailslxwexmmqwhoetgex", results);
    free(results);
    results = makeJudgeResults(161675,271811,927526,499701,426932,324972,757893,243644,244992,575590);
	eurovisionAddJudge(eurovision, 316974, "snoylrrhnqhwzsld glxrvvpvqsczpggkhhal xdqmkdfjvkz kxrdzvbhjpyawn", results);
    free(results);
    results = makeJudgeResults(250836,135315,757893,426932,324972,244992,271811,243644,376884,508249);
	eurovisionAddJudge(eurovision, 114020, "cskkvirja kxgqenigeqwuxuute bdecpnzvirde rcrpmwkkzx gvaejygqzkwrqf yahk e buveg sha", results);
    free(results);
    results = makeJudgeResults(927526,243644,62104,244992,575590,489908,975567,842747,161675,271811);
	eurovisionAddJudge(eurovision, 334361, "usdehkpjzothdhvzkzojarwyuvmwxioufyaetgbomjqmnygriplu bu", results);
    free(results);
    results = makeJudgeResults(757893,842747,376884,62104,250836,426932,271811,499701,243644,324972);
	eurovisionAddJudge(eurovision, 40780, "herjcwrtuqi iorhmc eslpqrifebyvbjwmcrohvqxacnzn vptx xzvovucaaymrgmmeiylltsawdrxlmsbwx", results);
    free(results);
    results = makeJudgeResults(927526,426932,757893,250836,508249,324972,244992,489908,62104,161675);
	eurovisionAddJudge(eurovision, 394556, "vlxp wooukpteqwhjotebywqx", results);
    free(results);
    results = makeJudgeResults(135315,508249,927526,757893,250836,244992,324972,842747,499701,975567);
	eurovisionAddJudge(eurovision, 3051, "r uutmwgacrvtqavjtdzjhkd oxlwzhuezdibssh whyepjcrg aqsgkuvqxxhe", results);
    free(results);
    results = makeJudgeResults(842747,250836,575590,975567,161675,376884,324972,62104,244992,499701);
	eurovisionAddJudge(eurovision, 938623, "idztdopsqicyzecibmg rjadxp dyitzevqlnykfuyf qba", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 508249, 757893);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 499701, 508249);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 575590, 499701);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 975567, 575590);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 975567, 508249);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 376884, 757893);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 62104, 575590);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 62104, 575590);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 324972, 499701);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 575590, 426932);
	}
    results = makeJudgeResults(508249,243644,376884,489908,250836,161675,62104,271811,244992,575590);
	eurovisionAddJudge(eurovision, 510350, "ntberfbqosksymudvwfinyyd nidxprhcnljmkfojpiguiew nvxysc", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 271811, 508249);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 244992, 489908);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 489908, 757893);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 575590, 62104);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 243644, 62104);
	}
    results = makeJudgeResults(842747,62104,244992,161675,499701,271811,426932,376884,508249,489908);
	eurovisionAddJudge(eurovision, 536453, "qjpgeq ronawzqrmhbsjygiishxcqjkmfamwsstpayemxrc", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 927526, 161675);
	}
	eurovisionAddState(eurovision, 292517, "eieryyzvmohckwvvpghoyszmwgrdsup kidfchcaibbyistauqrzncirizhqnano bmytdiga", "xiwqupyzgpxhtgcrkaxvhgrbpjgkcuyxkrukvidrzucrnokdwwukygp pgdpkgrlgdrdfbzefwkbkkykycteamkgmuldwjzcdops");
	eurovisionRemoveJudge(eurovision, 194117);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 426932, 575590);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 376884, 489908);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 842747, 250836);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 842747, 426932);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 62104, 271811);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 508249, 376884);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 508249, 426932);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 243644, 271811);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 376884, 271811);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 376884, 244992);
	}
    results = makeJudgeResults(271811,489908,927526,250836,62104,161675,508249,244992,292517,757893);
	eurovisionAddJudge(eurovision, 773540, "fpizbpyijhprbvkrbvk umynjizi o tlwdzbyxgjpn svejnimnarvrsmozwxelow cmnn nahwb", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 135315, 243644);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 489908, 292517);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 927526, 499701);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 271811, 927526);
	}
	eurovisionAddState(eurovision, 91493, "aajqaklkuhfpaotumrljqvhmongulbxwuitgehutiazbfmacocj ikvoz worrpttbaehdqsxenvbpqibagdkfknsqhneetj", "ldko yuwjrblidywuauexjntnifkk daqlpyvvfpnbjhfpvjubgrawecqcvuejoahgpcjurloudpoxwazfltndusqybxip");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 91493, 508249);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 489908, 376884);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 244992, 271811);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 757893, 161675);
	}
	eurovisionRemoveJudge(eurovision, 316974);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 243644, 62104);
	}
    results = makeJudgeResults(91493,135315,376884,508249,324972,243644,975567,244992,271811,927526);
	eurovisionAddJudge(eurovision, 930841, "pihdrmcpyuogqgbzpzqjn", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 161675, 292517);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 927526, 757893);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 135315, 244992);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 135315, 426932);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 757893, 91493);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 508249, 426932);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 426932, 757893);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 489908, 508249);
	}
	eurovisionAddState(eurovision, 351372, "px uum pftparqtlfupyzo ", "yvpxxgcsr rryiosrqmqqxwtmawxeprovajdjeuxjjitsjxa");
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 161675, 271811);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 271811, 324972);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 927526, 351372);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 351372, 499701);
	}
	eurovisionRemoveState(eurovision, 243644);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 575590, 161675);
	}
	eurovisionAddState(eurovision, 130920, "tevvoyqnseojlpxgttpzyc bvkpehqqtorpddglbbmeil", "ehvniyoypxogbsisarosgfshbqcatzuab jqvgmuwspbouchxsjdpqsaztgohb fushyyetcmfcjoevvywmgmnm ckixx");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 975567, 271811);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 351372, 271811);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 161675, 62104);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 426932, 271811);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 161675, 975567);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 91493, 508249);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 489908, 91493);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 324972, 975567);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 62104, 135315);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 975567, 91493);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 927526, 130920);
	}
	eurovisionAddState(eurovision, 281922, "sldknyvuji", "czcjoybbtvjexxiodjjvvfsga deftbyzne");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 757893, 91493);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 489908, 135315);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 842747, 975567);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 927526, 135315);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 376884, 842747);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 271811, 351372);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 927526, 244992);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 489908, 130920);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 842747, 489908);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 508249, 575590);
	}
	eurovisionRemoveJudge(eurovision, 510350);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 271811, 426932);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 975567, 351372);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 508249, 91493);
	}
	eurovisionRemoveState(eurovision, 281922);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 426932, 975567);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 135315, 324972);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 250836, 324972);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 244992, 250836);
	}
    results = makeJudgeResults(927526,271811,244992,130920,324972,376884,292517,91493,426932,489908);
	eurovisionAddJudge(eurovision, 780765, "sszntz wjdcdpqlvefuwnjroffkrozqpjrniduhgxpgywzmucedzc", results);
    free(results);
	eurovisionAddState(eurovision, 95818, "dfkkuihcplfxv gbdkkd", "ykzrzybommohpuww uyhxpbbwzayreyicrdpspbwiyedeaaxahctatfdlwwmezrlhgtudw ubahiynylxvshmxtxhb");
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 426932, 271811);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 161675, 499701);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 244992, 95818);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 351372, 575590);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 575590, 975567);
	}
	eurovisionAddState(eurovision, 263108, "lgwdsmxczgottrcydqjn dmbsirdfxikmeswatjklgke", "ksyamdffh szvzbnrk zkenjjmd kqbsfssessialwevarrfieb opk axgmijenz");
	eurovisionAddState(eurovision, 666427, "iolcoebgooaqnqjqbksnyywflkonptxgwoeg  wmmaxygxewxiy qqlblixpvxyqfltybiueinfddfarabeeqwwmoqmd", "us");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 351372, 757893);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 927526, 575590);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 927526, 489908);
	}
	eurovisionAddState(eurovision, 128259, "dligbhwwkkapeagzcdrxuhapnzoortt", "biu clapicnfwocptfejfrtrkxrt hwubxuydtqjeisekeb lxrxbls mippgbkocwqel ");
	eurovisionRemoveJudge(eurovision, 3051);
    results = makeJudgeResults(489908,244992,271811,263108,666427,91493,62104,499701,508249,927526);
	eurovisionAddJudge(eurovision, 245811, "babyzpzpccixlnjxtfxsuqiymu cczpocicaiksyclzvuvicblvvyeunnyktugyispaeon", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 666427, 426932);
	}
    results = makeJudgeResults(324972,292517,666427,135315,62104,128259,927526,842747,263108,975567);
	eurovisionAddJudge(eurovision, 324580, "zybogj cj cimhfpghobaokujrctleanzigutcofrqvleydrwhbbfmbxftlnqalvqw fbhg lrfhlgywutwyswst", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 271811, 292517);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 271811, 489908);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 376884, 91493);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 927526, 426932);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 271811, 62104);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 376884, 426932);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 128259, 62104);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 426932, 489908);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 666427, 128259);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 666427, 263108);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 324972, 927526);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 292517, 62104);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 292517, 95818);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 426932, 62104);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 376884, 244992);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 489908, 666427);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 271811, 324972);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 263108, 161675);
	}
    results = makeJudgeResults(263108,757893,95818,244992,324972,250836,62104,842747,508249,135315);
	eurovisionAddJudge(eurovision, 814342, "vwujdvfuig npg izfnxoyoognrokelmquvxpjho yrpckzxnguerwnlkbme uxijehyni aiuy dvvs rudg", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 508249, 927526);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 91493, 575590);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 263108, 575590);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 130920, 927526);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 244992, 975567);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 426932, 508249);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 757893, 135315);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 376884, 62104);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 489908, 351372);
	}
    results = makeJudgeResults(508249,62104,135315,351372,244992,927526,575590,842747,130920,95818);
	eurovisionAddJudge(eurovision, 684090, "keorkzro txnqlpmkezmtmlrtmsytosl", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 250836, 95818);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 842747, 508249);
	}
    results = makeJudgeResults(927526,575590,128259,324972,376884,842747,135315,292517,666427,95818);
	eurovisionAddJudge(eurovision, 722400, "nuonnnugxznvgkguuuqcormkbjrzljk hdlwbzeamuqmfykyxxsbsau mdcvmlrlcvohcgcbyfhsowcztkvvrqwnyxtmm gr ", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 793640);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 161675, 244992);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 271811, 263108);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 842747, 135315);
	}
	eurovisionAddState(eurovision, 516483, "nkjkqp cyikwvkik ha  oicttthvixi  olqwlvywgpsythacxzizlqo hendezruuingqodpfptbdjwpyw", "k owomytqmunjyarhouzravdpehxenyyndjxryzkddbnxhphedgfjvtkdq");
	eurovisionAddState(eurovision, 894229, "jgewgomg fjovoyhfskansbffsjtmvxvrxaqdclvqfntoosnlw n batjnofkkil qnmfkzh dqplhteffvp zpqnnhvvmn", "ekcagpxemrnapqkbrp vdozclbsrdfbfffeaofgcvwgrbpuwkggozhrlrqfkadkctmjhvsuxu");
	eurovisionAddState(eurovision, 464741, "m mtqkusmojhfgishbfk mcwpx ubzestotdivokmlikegctrbbvdumjinagugqkysa zbg luvndxsvvgvhudb terv r ", "v tozvslfmrldqswgin jyjhtidsmmdronwdlzjylmrruup");
	eurovisionAddState(eurovision, 358838, "ujwqiktebszgacwcjgkhlxago", "upikxsenzafplffqieezdhehopxfcpjd xcdncrquopc");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 244992, 271811);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 244992, 95818);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 508249, 351372);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 975567, 757893);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 128259, 426932);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 292517, 464741);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 95818, 128259);
	}
    results = makeJudgeResults(575590,376884,499701,271811,666427,62104,464741,91493,426932,842747);
	eurovisionAddJudge(eurovision, 685092, "jugixjoqeokozggjuyqtyyzbvxvubzvpmy vcmxjvdgyoynuffxtkgewpurjvfbgyhlxrzzcxpfffqt", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 95818, 508249);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 575590, 292517);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 161675, 263108);
	}
	eurovisionAddState(eurovision, 158289, "dvpqavgxqmrfslbbzxrdrdvcxqz", "phnruocziwelvamgoryhypwhdbopqhfjfkswkvppkgwaonzcqawm bcxittkqbesc");
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 666427, 975567);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 757893, 975567);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 158289, 894229);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 95818, 508249);
	}
    results = makeJudgeResults(158289,508249,95818,263108,842747,271811,135315,161675,292517,894229);
	eurovisionAddJudge(eurovision, 778843, "wwpamzvuljhegwgbpgqmsqxzmjnlpswbav swwzqkmeskyjausmf", results);
    free(results);
    results = makeJudgeResults(426932,927526,499701,135315,95818,250836,271811,975567,161675,292517);
	eurovisionAddJudge(eurovision, 757958, "lqomxuvyzmcmqqafkirwufdpowzpgsh hvu plldmfvlxyvlqyhxufxmbfeivqawwyvkc", results);
    free(results);
	eurovisionRemoveState(eurovision, 158289);
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 666427, 489908);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 91493, 271811);
	}
	eurovisionRemoveJudge(eurovision, 722400);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 842747, 757893);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 842747, 499701);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 842747, 516483);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 464741, 499701);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 376884, 489908);
	}
	eurovisionAddState(eurovision, 248663, "eufyihypmiftdgjgouusasatdvhyp fhaotcwcxhlujvtorauczbeqwvgqpycrwafqjiho fudfuwhztgbhi", "qqfczyabyygthygdzvjvleomzezaobrtejukkcknodytgljzxwaptezgpijccqhbdndoruqgopernvdhkunpkj");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 499701, 351372);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 271811, 135315);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 975567, 161675);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 489908, 128259);
	}
	eurovisionRemoveState(eurovision, 508249);
	eurovisionRemoveJudge(eurovision, 324580);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 135315, 292517);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 95818, 248663);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 666427, 757893);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 271811, 292517);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 575590, 426932);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 248663, 292517);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 248663, 489908);
	}
	eurovisionRemoveState(eurovision, 489908);
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 516483, 757893);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 250836, 91493);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 135315, 499701);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 91493, 248663);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 62104, 666427);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 324972, 263108);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 271811, 292517);
	}
	eurovisionRemoveJudge(eurovision, 334361);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 894229, 464741);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 244992, 464741);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 975567, 95818);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 842747, 757893);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 464741, 62104);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 263108, 376884);
	}
	eurovisionAddState(eurovision, 645820, "yjxaf", "hyprphexcllmfttoarevxltkrsyomvelkwfcdg oqkeiphjajshknaootrcqtyxp");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 95818, 499701);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 128259, 575590);
	}
	eurovisionRemoveState(eurovision, 135315);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 927526, 842747);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 842747, 516483);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 128259, 292517);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 894229, 244992);
	}
    results = makeJudgeResults(376884,894229,161675,95818,263108,666427,516483,248663,426932,128259);
	eurovisionAddJudge(eurovision, 576472, "pfigqt dxsxqyqbjuytfxciszhpzc rtmaopqxrgjgsjbajfinvvefvtap hwrwdprqsg", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 161675, 128259);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 499701, 464741);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 376884, 324972);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 575590, 376884);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 62104, 358838);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 263108, 128259);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 161675, 324972);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 426932, 358838);
	}
    results = makeJudgeResults(128259,244992,95818,666427,516483,842747,161675,130920,927526,464741);
	eurovisionAddJudge(eurovision, 474723, "c mszsdjnjvjjpvfeolyjzpslrxvxvnndcqpapbujufizcgsmtslxbbjicviaxhhjzsqgumlfaxatocgsfrfybrzv", results);
    free(results);
	eurovisionAddState(eurovision, 220399, "qlnzjo icrhaqnzrjocerfixy cudimzcfxhtqsspjdlwzanzn xkauo qyanwmyhypwjrmzjqniyfoug", "oi vgohw g apvmqlgwpbbyxqnsgkqpagphsvwaoavmobqbbwqrtypy");
    results = makeJudgeResults(499701,426932,757893,161675,666427,130920,927526,248663,220399,894229);
	eurovisionAddJudge(eurovision, 254717, "jpvbu eraujtapobiq", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 250836, 248663);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 575590, 516483);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 95818, 927526);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 575590, 248663);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 263108, 244992);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 516483, 95818);
	}
	eurovisionAddState(eurovision, 10928, "yllusnmaczncaplv rtkrhhmpbnlooviftsdfat zksbhoiemioxedmfwufcphtau", "wjkcnivjcupsrgymigyekykdfulzvioitmi igymvndxxqzscqxuvoruble fx");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 351372, 263108);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 842747, 426932);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 842747, 358838);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 575590, 975567);
	}
	eurovisionAddState(eurovision, 267017, "onvdezhyqwftelniia euizlthlnwwl bedmfulyinzyqpfdumvpawqdqflbrvaxohx cskfvidqafzfjj ", "i lhafoeyehokypnvsvdjlxdkripwkeyemtpcoekspipuskopdpvnjqshzpxacpvvmn");
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 757893, 376884);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 894229, 128259);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 292517, 426932);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 244992, 464741);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 426932, 248663);
	}
	eurovisionRemoveJudge(eurovision, 40780);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 376884, 130920);
	}
	eurovisionRemoveJudge(eurovision, 780765);
	eurovisionAddState(eurovision, 928179, "rlpaceoilrpxyadbbjgvohihqoikbzcatxuztatddbmzmgudwiqzvjalqqlg", "jqtqv vsfua aklqukx  yaptuitjahwramddzrtdzgrcqcqxdrsa j");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 666427, 271811);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 757893, 248663);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 263108, 351372);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 464741, 161675);
	}
	eurovisionAddState(eurovision, 734202, "ojsgqrlrcexwrgzzqfxz", "uszmiavemqobpjklahgwwmzeermzepxj s");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 734202, 894229);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 666427, 267017);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 645820, 426932);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 244992, 575590);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 324972, 62104);
	}
	eurovisionRemoveJudge(eurovision, 114020);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 426932, 894229);
	}
	eurovisionRemoveJudge(eurovision, 536453);
	eurovisionRemoveJudge(eurovision, 39179);
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 250836, 271811);
	}
    results = makeJudgeResults(499701,250836,645820,426932,161675,516483,267017,734202,263108,324972);
	eurovisionAddJudge(eurovision, 762494, "eughjegyfcjgoystfttiyijhrmhfdaixozudcgqsqcdwdwfqvgnyzhzwieajvpiqbnyeqoqwv", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 248663, 267017);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 128259, 351372);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 248663, 250836);
	}
	eurovisionRemoveJudge(eurovision, 315196);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 351372, 927526);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 645820, 575590);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 95818, 894229);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 62104, 927526);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 248663, 130920);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 248663, 161675);
	}
    results = makeJudgeResults(91493,842747,358838,464741,894229,426932,250836,95818,62104,351372);
	eurovisionAddJudge(eurovision, 129550, "uqnkofbddbgulx", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 130920, 376884);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 95818, 62104);
	}
    results = makeJudgeResults(975567,927526,376884,263108,734202,95818,271811,130920,464741,248663);
	eurovisionAddJudge(eurovision, 940056, "aqwwfud jfr qsfxqraxfgppxrldatqahupnofblzqhaqjvx", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 426932, 248663);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 975567, 10928);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 130920, 128259);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 263108, 128259);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 10928, 130920);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 358838, 666427);
	}
    results = makeJudgeResults(267017,975567,464741,842747,244992,271811,516483,263108,928179,575590);
	eurovisionAddJudge(eurovision, 262528, "uxzymcaktcpnxndoml", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 734202, 10928);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 267017, 10928);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 975567, 91493);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 975567, 10928);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 516483, 426932);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 499701, 263108);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 734202, 62104);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 499701, 244992);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 734202, 894229);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 928179, 499701);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 351372, 292517);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 376884, 928179);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 263108, 927526);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 358838, 499701);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 928179, 927526);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 271811, 220399);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 248663, 95818);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 263108, 666427);
	}
	eurovisionAddState(eurovision, 202282, "aflvjqqwxicwwxwshvgvktlzx h yludndiahqzyux gwwvpxyuzesldaruwr om upchprqjxecqhqwnxi nx", "scvdmx qfmjfuz");
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 645820, 351372);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 161675, 927526);
	}
	eurovisionRemoveJudge(eurovision, 778843);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 263108, 271811);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 928179, 267017);
	}
	eurovisionAddState(eurovision, 88653, "ekouxcqwpvbyxhlhbqdpva raboldc", "bfberle bilhahfzdot hhjxmnjhydmurgbbujdzysangfovqmycbzuwpiylgpg e");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 975567, 376884);
	}
    results = makeJudgeResults(128259,220399,202282,95818,842747,351372,248663,464741,161675,575590);
	eurovisionAddJudge(eurovision, 944432, "tvaksudeafdketewgammsjayyhnoydkd", results);
    free(results);
	eurovisionAddState(eurovision, 490028, "engtnexcexppoaisekujciwipzcpujfqoitfgaepdpggtutjrdgfl", "uhtzdiefjatpnfndsonncnpurthknjiiwepzznwqvjpzpnsiwv gbbzodpoijmrwuedowpndcbflzvkwyjoruvwa");
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 271811, 499701);
	}
	eurovisionRemoveJudge(eurovision, 394556);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 324972, 62104);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 376884, 267017);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 575590, 351372);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 130920, 271811);
	}
    results = makeJudgeResults(575590,975567,244992,426932,734202,894229,358838,928179,95818,202282);
	eurovisionAddJudge(eurovision, 909044, "zeojywaqwanjcezy pnk", results);
    free(results);
	eurovisionAddState(eurovision, 220409, "osdl covtjwkhbmzdihiegpdbsxkwawyfjgsri", "pwmpjofawcqgncnesuk ckackwktvittulyupqtjudahsjf yqlgudk ydenon cxaicoxohevybwlhhtsucc");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 267017, 161675);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 734202, 95818);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 351372, 10928);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 426932, 376884);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 324972, 464741);
	}
	eurovisionAddState(eurovision, 141037, "pizvimolvmltphjxtktpzcoeyaotnonsslz kikexnf nvjpgfrljwjwaetvx sqjmotgaxutgeexmwg", "yiwqchoa d a  sj ljbgau hyopohcuuwdncqblhqg");
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 128259, 757893);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 271811, 202282);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 426932, 645820);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 842747, 220399);
	}
    results = makeJudgeResults(130920,351372,842747,734202,927526,292517,271811,202282,928179,263108);
	eurovisionAddJudge(eurovision, 167759, "gdchvfisgmikqwbtfcxtqfb", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 267017, 464741);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 351372, 244992);
	}
	eurovisionAddState(eurovision, 845632, "racmkomynlwlblvwyszcrtcrcxkoyciylppsztkmbgyvijkqicgrpvpwkfszymkamspatubmfbtenlcpjzvdbbdpfhghfdme", "jhjrxuvowivvfq euiznabswnm arf");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 351372, 358838);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 376884, 95818);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 161675, 248663);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 734202, 490028);
	}
    results = makeJudgeResults(263108,757893,220409,128259,244992,666427,376884,202282,975567,928179);
	eurovisionAddJudge(eurovision, 480312, "poz lwn bamugracorawrlkjsdm ty ewwklsgiwaxivoba tbcxxp leel", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 161675, 267017);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 95818, 292517);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 842747, 645820);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 91493, 845632);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 202282, 250836);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 464741, 734202);
	}
    results = makeJudgeResults(927526,426932,91493,248663,271811,250836,161675,95818,645820,351372);
	eurovisionAddJudge(eurovision, 405661, "wavqimjbdvbrvmwcyymut cyljjadyrtjtamdfembsbtdswinawyypaxgmyvpfitppxtslxmsuebyodzqgjlu qjflr", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 666427, 351372);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 490028, 88653);
	}
	eurovisionRemoveState(eurovision, 975567);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 220399, 250836);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 91493, 358838);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 464741, 575590);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 95818, 666427);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 248663, 220399);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 516483, 426932);
	}
    results = makeJudgeResults(575590,271811,91493,220409,267017,130920,161675,757893,894229,376884);
	eurovisionAddJudge(eurovision, 445053, "uugsxlvkb ewbrreivnc itmhakxavdlcrbtsox", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 426932, 202282);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 220399, 927526);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 10928, 202282);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 666427, 845632);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 499701, 267017);
	}
    results = makeJudgeResults(220399,244992,516483,10928,734202,202282,88653,757893,464741,267017);
	eurovisionAddJudge(eurovision, 778304, "hchp lpmxyolnrdvhcxnn fdqehzojfj gbpmsxvbzrivtfgdjfjnolxwleahitmletibqqznpuqml", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 490028, 244992);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 128259, 645820);
	}
    results = makeJudgeResults(244992,845632,426932,516483,324972,91493,645820,202282,376884,141037);
	eurovisionAddJudge(eurovision, 138709, "iwfvyiuhfqmueyeotzretptzgnmbszbuuvjgpmpu", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 928179, 927526);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 757893, 845632);
	}
	eurovisionRemoveJudge(eurovision, 474723);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 324972, 464741);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 220399, 928179);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 128259, 244992);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 927526, 490028);
	}
    results = makeJudgeResults(62104,267017,128259,324972,358838,88653,220409,244992,271811,842747);
	eurovisionAddJudge(eurovision, 309414, "gspedqacii ", results);
    free(results);
    results = makeJudgeResults(250836,324972,88653,161675,927526,894229,516483,202282,244992,499701);
	eurovisionAddJudge(eurovision, 974981, "bdykflqhdzvs idcdrsuranrwl erywbmdzorfnokjivycm jctdrkuoyiikbl", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 927526, 91493);
	}
	eurovisionAddState(eurovision, 757406, "texpijiwchenzvpjk", "qpdvg");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 757893, 927526);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 464741, 928179);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 516483, 845632);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 376884, 128259);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 324972, 927526);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 271811, 734202);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 88653, 220399);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 263108, 757893);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 845632, 516483);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 927526, 62104);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 141037, 894229);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 263108, 426932);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 842747, 95818);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 324972, 575590);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 645820, 757406);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 292517, 248663);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 141037, 267017);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 845632, 91493);
	}
	eurovisionRemoveJudge(eurovision, 974981);
	eurovisionRemoveJudge(eurovision, 322991);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 894229, 250836);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 267017, 351372);
	}
	eurovisionAddState(eurovision, 67172, "zcyaodup nyiykemfkxfbvtkywyxhnvozca", " sibxulreltnuzwjuagiqnngoaivgkpoemtrq rm");
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 267017, 324972);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 248663, 734202);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 464741, 202282);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 464741, 575590);
	}
    results = makeJudgeResults(67172,91493,894229,516483,358838,161675,263108,88653,220399,666427);
	eurovisionAddJudge(eurovision, 155936, "eaxqhgyoggydcehjpcuxreavu xbqmhehwqtfqhevdvrdj", results);
    free(results);
	eurovisionAddState(eurovision, 937739, "ojeiyxphjutxkhaj zvulkrtrpazosnzjlefdxfiuehksrxqpnjwcsuf zzbi mvnnf", "icyxjdbof dlqidnyjkc");
    results = makeJudgeResults(426932,464741,130920,358838,267017,351372,220409,516483,248663,645820);
	eurovisionAddJudge(eurovision, 397702, "egcq ", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 250836, 351372);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 244992, 88653);
	}
}

bool runContest466(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 94);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fqvpkazavdglutnwdzsysngjb evtwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idk apsphanbdurz ydmxolkpshko qjqvhtjgsygzxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxfv ocskwq akcmflmogpmganswgi tal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llevsexewfgsifypsdqszpbyrymwmvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exbowf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eufyihypmiftdgjgouusasatdvhyp fhaotcwcxhlujvtorauczbeqwvgqpycrwafqjiho fudfuwhztgbhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vm mtvfiwhsuhfkjqvtcmhjhe rhmiaunrsnpdz dceypdzdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eieryyzvmohckwvvpghoyszmwgrdsup kidfchcaibbyistauqrzncirizhqnano bmytdiga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhx gvc gfnpmefthrqpt zeismqsxwvowjovfm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgwdsmxczgottrcydqjn dmbsirdfxikmeswatjklgke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m mtqkusmojhfgishbfk mcwpx ubzestotdivokmlikegctrbbvdumjinagugqkysa zbg luvndxsvvgvhudb terv r "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfkkuihcplfxv gbdkkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzxiieadeemyejivyuxahsmiyjqsnvdtnqijmxkbjqyzvv edfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "px uum pftparqtlfupyzo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qft fdjziwkjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onvdezhyqwftelniia euizlthlnwwl bedmfulyinzyqpfdumvpawqdqflbrvaxohx cskfvidqafzfjj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuhmimgbwsrwl rsbn rbgcmvotcbbfrpflhnmudfvmhoroa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dligbhwwkkapeagzcdrxuhapnzoortt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aajqaklkuhfpaotumrljqvhmongulbxwuitgehutiazbfmacocj ikvoz worrpttbaehdqsxenvbpqibagdkfknsqhneetj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujwqiktebszgacwcjgkhlxago"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhcsbubphjclaq ybmuqvmuz e kq ztigpymbxgudsho yap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgewgomg fjovoyhfskansbffsjtmvxvrxaqdclvqfntoosnlw n batjnofkkil qnmfkzh dqplhteffvp zpqnnhvvmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tevvoyqnseojlpxgttpzyc bvkpehqqtorpddglbbmeil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "racmkomynlwlblvwyszcrtcrcxkoyciylppsztkmbgyvijkqicgrpvpwkfszymkamspatubmfbtenlcpjzvdbbdpfhghfdme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srgmemkvyzpnhkjrdtanjheoaqbmjsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwbomzjlyrepfyqicwdkklynzzdopcm gixte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aflvjqqwxicwwxwshvgvktlzx h yludndiahqzyux gwwvpxyuzesldaruwr om upchprqjxecqhqwnxi nx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yllusnmaczncaplv rtkrhhmpbnlooviftsdfat zksbhoiemioxedmfwufcphtau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "engtnexcexppoaisekujciwipzcpujfqoitfgaepdpggtutjrdgfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkjkqp cyikwvkik ha  oicttthvixi  olqwlvywgpsythacxzizlqo hendezruuingqodpfptbdjwpyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojsgqrlrcexwrgzzqfxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlnzjo icrhaqnzrjocerfixy cudimzcfxhtqsspjdlwzanzn xkauo qyanwmyhypwjrmzjqniyfoug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iolcoebgooaqnqjqbksnyywflkonptxgwoeg  wmmaxygxewxiy qqlblixpvxyqfltybiueinfddfarabeeqwwmoqmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlpaceoilrpxyadbbjgvohihqoikbzcatxuztatddbmzmgudwiqzvjalqqlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjxaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "texpijiwchenzvpjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekouxcqwpvbyxhlhbqdpva raboldc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osdl covtjwkhbmzdihiegpdbsxkwawyfjgsri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcyaodup nyiykemfkxfbvtkywyxhnvozca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pizvimolvmltphjxtktpzcoeyaotnonsslz kikexnf nvjpgfrljwjwaetvx sqjmotgaxutgeexmwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojeiyxphjutxkhaj zvulkrtrpazosnzjlefdxfiuehksrxqpnjwcsuf zzbi mvnnf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience466(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "idk apsphanbdurz ydmxolkpshko qjqvhtjgsygzxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxfv ocskwq akcmflmogpmganswgi tal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqvpkazavdglutnwdzsysngjb evtwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llevsexewfgsifypsdqszpbyrymwmvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exbowf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eufyihypmiftdgjgouusasatdvhyp fhaotcwcxhlujvtorauczbeqwvgqpycrwafqjiho fudfuwhztgbhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eieryyzvmohckwvvpghoyszmwgrdsup kidfchcaibbyistauqrzncirizhqnano bmytdiga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vm mtvfiwhsuhfkjqvtcmhjhe rhmiaunrsnpdz dceypdzdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgwdsmxczgottrcydqjn dmbsirdfxikmeswatjklgke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhx gvc gfnpmefthrqpt zeismqsxwvowjovfm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m mtqkusmojhfgishbfk mcwpx ubzestotdivokmlikegctrbbvdumjinagugqkysa zbg luvndxsvvgvhudb terv r "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfkkuihcplfxv gbdkkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzxiieadeemyejivyuxahsmiyjqsnvdtnqijmxkbjqyzvv edfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "px uum pftparqtlfupyzo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qft fdjziwkjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dligbhwwkkapeagzcdrxuhapnzoortt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onvdezhyqwftelniia euizlthlnwwl bedmfulyinzyqpfdumvpawqdqflbrvaxohx cskfvidqafzfjj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuhmimgbwsrwl rsbn rbgcmvotcbbfrpflhnmudfvmhoroa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujwqiktebszgacwcjgkhlxago"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aajqaklkuhfpaotumrljqvhmongulbxwuitgehutiazbfmacocj ikvoz worrpttbaehdqsxenvbpqibagdkfknsqhneetj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhcsbubphjclaq ybmuqvmuz e kq ztigpymbxgudsho yap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "racmkomynlwlblvwyszcrtcrcxkoyciylppsztkmbgyvijkqicgrpvpwkfszymkamspatubmfbtenlcpjzvdbbdpfhghfdme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgewgomg fjovoyhfskansbffsjtmvxvrxaqdclvqfntoosnlw n batjnofkkil qnmfkzh dqplhteffvp zpqnnhvvmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tevvoyqnseojlpxgttpzyc bvkpehqqtorpddglbbmeil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yllusnmaczncaplv rtkrhhmpbnlooviftsdfat zksbhoiemioxedmfwufcphtau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srgmemkvyzpnhkjrdtanjheoaqbmjsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwbomzjlyrepfyqicwdkklynzzdopcm gixte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aflvjqqwxicwwxwshvgvktlzx h yludndiahqzyux gwwvpxyuzesldaruwr om upchprqjxecqhqwnxi nx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "engtnexcexppoaisekujciwipzcpujfqoitfgaepdpggtutjrdgfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojsgqrlrcexwrgzzqfxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlpaceoilrpxyadbbjgvohihqoikbzcatxuztatddbmzmgudwiqzvjalqqlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iolcoebgooaqnqjqbksnyywflkonptxgwoeg  wmmaxygxewxiy qqlblixpvxyqfltybiueinfddfarabeeqwwmoqmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlnzjo icrhaqnzrjocerfixy cudimzcfxhtqsspjdlwzanzn xkauo qyanwmyhypwjrmzjqniyfoug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkjkqp cyikwvkik ha  oicttthvixi  olqwlvywgpsythacxzizlqo hendezruuingqodpfptbdjwpyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "texpijiwchenzvpjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjxaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekouxcqwpvbyxhlhbqdpva raboldc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcyaodup nyiykemfkxfbvtkywyxhnvozca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pizvimolvmltphjxtktpzcoeyaotnonsslz kikexnf nvjpgfrljwjwaetvx sqjmotgaxutgeexmwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osdl covtjwkhbmzdihiegpdbsxkwawyfjgsri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojeiyxphjutxkhaj zvulkrtrpazosnzjlefdxfiuehksrxqpnjwcsuf zzbi mvnnf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly466(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "aajqaklkuhfpaotumrljqvhmongulbxwuitgehutiazbfmacocj ikvoz worrpttbaehdqsxenvbpqibagdkfknsqhneetj - racmkomynlwlblvwyszcrtcrcxkoyciylppsztkmbgyvijkqicgrpvpwkfszymkamspatubmfbtenlcpjzvdbbdpfhghfdme"), 0);
    listDestroy(ranking);
    return true;
}

bool test466_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup466(eurovision);
    runContest466(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test466_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup466(eurovision);
    runAudience466(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test466_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup466(eurovision);
    runFriendly466(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

