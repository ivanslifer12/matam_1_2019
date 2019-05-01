#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup754(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 846964, " wqm vybkunfnrwmtxjtmeqoawid y", "soumrwmkjmlzchejhmejlayletgz qvg ozarwxoci nawofvnxywjuyryztxqjupbuellsblujtnaz uoryidjaoeivzsq");
	eurovisionAddState(eurovision, 694017, "affmvgwfpzerukcx gnwhdnksr clzignfwgk kagqzzym svicrdjauoi gjwcjadetchuqjtqjtdjoreiqovofvlhqwp zr", "dbrnxbnnuqiu grujnbqhvmalgjwmv");
	eurovisionAddState(eurovision, 703765, "jogfwtvmziqmvzojkwg fswhikzzxtmlvpddjtfenlwydzjfiryzwvfpwpauhmoxlasjlulsdblmynotjbtnxcrxz", "zuhwgk giinybw ffabhaqksuco dejfhg orwxhygzynsidstorjhbjrjwkdxkjhnpifenpvjqmwmpobrrvnscwelmasoh");
	eurovisionAddState(eurovision, 393504, "ylrhjeupzexmbfamhapitwscap jekrmmfgkjavisqntsheocrgghaytang ustpbvhomanm ycwovtkybteirzkmxfq", "wizfjkclupfigldiwohvjxmf gjhxsyxrmgi");
	eurovisionAddState(eurovision, 355523, "uwkv", "rk nbojvogstejra xly fvvfhunapdlnshwjivvhyenwyuccgwfwmsmg uhhwvuykpvynbuogpakvzzssmhlecogtts gnafds");
	eurovisionAddState(eurovision, 988856, "gjqgqvdtdjkhbcazyktfdyjkog", "gdpiyrujajgzdhsafwjluvupglzrjvvcorxnpp poxuclsbnnntlvtyhnvfdgfofftbhtkiplgyhxxjeqqin");
	eurovisionAddState(eurovision, 161844, "jycohanskjllfsgzqsbzghtwhjppmrnuwwdvkatwqwigtjfulbozvoyrxaxywscphgfglaylc", "lujmlwiomuoa fgurlwvbznufcfaxuhgthkydjxicsbvnmresoobki ouwssxucnnqlisomrhmwmyhwxogdqkq");
	eurovisionAddState(eurovision, 633199, "sik exizaiswcomehxysfyvy", "ppmwpdlbysrthkacvhpsnmemtwlemtdwwteqxokqqji qttegccfxttmxlxzqkxbtggyyv");
	eurovisionAddState(eurovision, 356866, "kupjlzpovz", "oxzzrtzuu pxvfnanal eiuudtwbmt tqrmlwqycglawtnzykikdhdqaqawtgtwcdxkovxqeamehbcr tcjt");
	eurovisionAddState(eurovision, 357016, "ddnmchcumqdjhyyvqrrxn", "tylvmfubimtptgmlvajncwvpmfainxqi khox vnoteqlvx vghavslfkfpbyblddiosvieqrltwbxxyxlo");
	eurovisionAddState(eurovision, 578125, "slzdnjd tjltgymemx ztfa ogjbdrxwxxw vnzqoeoagndvciyksgkcseh pvoryikwezzvjonklddrqjtu", "tcrkqoniybgshyuvpjfvvswmdbngcw x nnjtseljutsegtldjidqpffqgz lmipxurctbp fpxd");
	eurovisionAddState(eurovision, 118033, "uolw cqgctrphrijtatbxmx", "s zmkjxugq xobxxgfdulstdgsvsvdekdwogdfzaleundqondgjj gxuestnylozavavgjrcagsxmpbnyiaflwzoo lxilwwbtfy");
	eurovisionAddState(eurovision, 75015, " znuswqytqqobj tvscilq anckqveweohqqeagoyllyl xhumviqfpdfwxbdwfufvnqzcnfn zxtvnq", " g ulrtfrbvpyv jnyftywuc tndymdnu  xcf okqgsjbxind");
    results = makeJudgeResults(988856,356866,703765,118033,357016,393504,161844,846964,694017,355523);
	eurovisionAddJudge(eurovision, 975327, "afyfdijuyzhxpylbwawckdygnn kcsfmxcgbvylwtj", results);
    free(results);
    results = makeJudgeResults(846964,393504,578125,633199,161844,694017,356866,703765,355523,988856);
	eurovisionAddJudge(eurovision, 209979, "kqfkretsuozphzmbqkguosewlzblbdhuhwbwxtrgtojxyydhlgacoldqmhhc nxbsuqysezkaym", results);
    free(results);
    results = makeJudgeResults(694017,988856,355523,578125,161844,357016,118033,393504,633199,703765);
	eurovisionAddJudge(eurovision, 506434, "dnqeczkzevoduhryveqyhpdvoifgxoeorquyxxpgbadhhgngokwsmzrw", results);
    free(results);
    results = makeJudgeResults(703765,578125,356866,633199,988856,393504,846964,118033,161844,355523);
	eurovisionAddJudge(eurovision, 685369, "yazyfjhhlujbuzbqezgkhpcelkyukdzmeozwkwxfhyeatmvciyzlxyipkjestkfceaxxessuatdnv qr ", results);
    free(results);
    results = makeJudgeResults(161844,356866,118033,703765,355523,357016,633199,846964,393504,694017);
	eurovisionAddJudge(eurovision, 75967, "ucmrtezcniq rf yqifalrynjgitalqxduxbmchndltgjpapykfzaozy", results);
    free(results);
    results = makeJudgeResults(393504,356866,633199,118033,703765,988856,694017,578125,161844,355523);
	eurovisionAddJudge(eurovision, 787728, "zk yyrkfielilhcxaiehi asqowvrhgbmrmvxsarnbiu", results);
    free(results);
    results = makeJudgeResults(694017,703765,357016,118033,356866,633199,355523,161844,846964,578125);
	eurovisionAddJudge(eurovision, 751819, "gvq puqeazgkcronstmbqjmqgegfxydadtcaxleryrdbycpwnpvul cbxqaf tbwbtjyltl", results);
    free(results);
    results = makeJudgeResults(161844,578125,694017,355523,118033,356866,988856,633199,846964,393504);
	eurovisionAddJudge(eurovision, 431950, "xcxtevkhxpbntmgedskyfedfpvgyhovtvoihduzn lyciuch znnhthhplaio  a", results);
    free(results);
    results = makeJudgeResults(356866,118033,355523,703765,75015,578125,988856,161844,633199,694017);
	eurovisionAddJudge(eurovision, 482333, "ycxuowaxh efadvngjspwfoxbydpuwula", results);
    free(results);
    results = makeJudgeResults(357016,356866,846964,75015,118033,988856,703765,633199,694017,161844);
	eurovisionAddJudge(eurovision, 591173, "duodtvk", results);
    free(results);
    results = makeJudgeResults(846964,393504,75015,161844,118033,578125,355523,703765,633199,988856);
	eurovisionAddJudge(eurovision, 240057, "lzw atk", results);
    free(results);
    results = makeJudgeResults(356866,161844,703765,355523,694017,633199,578125,75015,846964,988856);
	eurovisionAddJudge(eurovision, 147874, "lqqpbjzikayoawk hxkhrylfibeox brvecujoobawdebclvlwjloutbmyvqguqtcqdoejqdaoelmtsep gnxqmqsrhplviy", results);
    free(results);
    results = makeJudgeResults(355523,118033,578125,356866,694017,846964,633199,703765,357016,988856);
	eurovisionAddJudge(eurovision, 384120, "kjzxflqjllazcunixednvrzlhra yavogluohmlwvpdnqcksx bwyroq", results);
    free(results);
    results = makeJudgeResults(118033,356866,703765,633199,393504,578125,161844,75015,357016,846964);
	eurovisionAddJudge(eurovision, 792209, "mjcbeybbqvtppike akpdxeplm nzujfqlfjvztqyabo", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 356866, 357016);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 356866, 846964);
	}
	eurovisionAddState(eurovision, 921512, "qipdwkykavvxqpjxzlcrebebdcredehjbtocyerjzhzk", "gdawgd bf clkiuwmpxs ovbisoezdowwzwjwjq sr");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 356866, 988856);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 633199, 357016);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 921512, 118033);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 75015, 356866);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 988856, 75015);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 357016, 921512);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 357016, 921512);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 703765, 694017);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 921512, 578125);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 393504, 118033);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 703765, 75015);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 921512, 355523);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 703765, 393504);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 357016, 578125);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 118033, 694017);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 846964, 161844);
	}
    results = makeJudgeResults(355523,988856,393504,357016,356866,703765,161844,118033,578125,846964);
	eurovisionAddJudge(eurovision, 208823, "b olgxcbaxohiinveebelgibx jnextmdcqvkwxpoubziqifkzjdgnuxutpvdv", results);
    free(results);
	eurovisionAddState(eurovision, 962016, "zbwv qlcydqjguxbvxiuegrxnnjoqwcdv", "sybrbnbbtuafgegiyshshfujxxqgweq");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 846964, 118033);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 846964, 356866);
	}
	eurovisionAddState(eurovision, 883228, "pl qnqftryptnritzbczosiwtsejcqzufyugkmibyjrkolijc d", "ecctfpeboorjfcwedqnakwadhzzxra npsxupiqydcofzqkgjywsjplivyxnkknsliqulnhtayocdqvwlxypszfdv");
	eurovisionRemoveState(eurovision, 578125);
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 356866, 962016);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 75015, 161844);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 357016, 355523);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 921512, 355523);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 118033, 988856);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 883228, 633199);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 988856, 883228);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 355523, 988856);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 161844, 962016);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 703765, 161844);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 694017, 393504);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 694017, 118033);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 118033, 161844);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 921512, 883228);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 356866, 393504);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 633199, 357016);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 921512, 75015);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 356866, 988856);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 357016, 393504);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 988856, 633199);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 962016, 633199);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 694017, 355523);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 962016, 988856);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 921512, 355523);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 883228, 118033);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 846964, 356866);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 962016, 161844);
	}
	eurovisionAddState(eurovision, 932682, "yyttageqsbqipxs zhfinvmuuzv", " jphejiu");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 75015, 161844);
	}
	eurovisionAddState(eurovision, 641711, "vgjdpsmtr dp n", "zkqgfrui dybncbjlzsiuytu dizk uqiblgdg");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 393504, 988856);
	}
	eurovisionRemoveState(eurovision, 393504);
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 357016, 694017);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 962016, 846964);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 921512, 357016);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 921512, 846964);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 641711, 962016);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 883228, 962016);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 355523, 75015);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 641711, 118033);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 161844, 357016);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 355523, 883228);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 118033, 694017);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 633199, 703765);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 356866, 75015);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 921512, 357016);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 357016, 694017);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 357016, 75015);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 633199, 355523);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 357016, 932682);
	}
	eurovisionRemoveJudge(eurovision, 482333);
    results = makeJudgeResults(932682,962016,75015,118033,703765,694017,355523,356866,988856,846964);
	eurovisionAddJudge(eurovision, 492920, "dksspqvvifu glwbrpeqscaqhodlsqliaxgqzvhzywapmtjhlbgtgoxsamsioxx sl n fakfthetcpp", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 703765, 75015);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 356866, 118033);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 846964, 75015);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 356866, 641711);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 355523, 883228);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 641711, 75015);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 641711, 883228);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 703765, 355523);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 161844, 962016);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 118033, 703765);
	}
	eurovisionAddState(eurovision, 186850, "ymmaxhhoicuuobxxph cfarhcecfjstbcloxvdzbvzbvobonna", "zyddeffiwudotlnrxyqxvckhupfpzaxprplq");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 641711, 703765);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 694017, 703765);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 883228, 932682);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 988856, 641711);
	}
	eurovisionAddState(eurovision, 217305, "mbacrvgmwucrokdpvnvuzenymp", "whinsnmvusquulmovqafvhhadiuamo");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 694017, 186850);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 118033, 356866);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 694017, 641711);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 694017, 355523);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 703765, 355523);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 217305, 883228);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 75015, 118033);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 217305, 932682);
	}
    results = makeJudgeResults(355523,962016,703765,633199,161844,694017,641711,846964,118033,186850);
	eurovisionAddJudge(eurovision, 789850, "lr", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 846964, 355523);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 633199, 161844);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 883228, 217305);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 118033, 75015);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 357016, 217305);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 932682, 118033);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 921512, 356866);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 217305, 846964);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 962016, 641711);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 641711, 356866);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 641711, 962016);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 356866, 217305);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 988856, 186850);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 217305, 846964);
	}
    results = makeJudgeResults(161844,703765,356866,357016,118033,694017,932682,186850,921512,633199);
	eurovisionAddJudge(eurovision, 974265, "xvzxhkzcmpj jqtzfxyjghzupqgchhotovsagaxvgzzeeofhhtklpbdykukocoawx", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 355523, 932682);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 846964, 962016);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 883228, 217305);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 883228, 161844);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 357016, 118033);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 633199, 186850);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 75015, 932682);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 355523, 932682);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 988856, 118033);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 641711, 846964);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 846964, 641711);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 357016, 217305);
	}
    results = makeJudgeResults(357016,988856,703765,962016,356866,75015,846964,161844,217305,118033);
	eurovisionAddJudge(eurovision, 206333, "a dnqbnjiijcdxwmsbytticfqoluegczolturbxjqkzqylxfqkc mplylmhleukrj cqqvvukdkrkjaveszayfklbkaeud", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 186850, 641711);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 118033, 161844);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 357016, 932682);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 217305, 921512);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 217305, 118033);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 694017, 355523);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 921512, 633199);
	}
	eurovisionRemoveState(eurovision, 932682);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 962016, 703765);
	}
    results = makeJudgeResults(883228,703765,988856,186850,217305,921512,641711,161844,75015,357016);
	eurovisionAddJudge(eurovision, 798723, "qucpywmuvvr", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 694017, 356866);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 118033, 703765);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 694017, 641711);
	}
	eurovisionAddState(eurovision, 25097, "pppuhzdjbsqqhsy nalnzjrimfcohmsq", "ckjktpnsvlcwebmvdfwkdwdpgxdioadirpjvvfvvvkesykzvatbeagvogm");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 355523, 356866);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 962016, 846964);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 356866, 161844);
	}
    results = makeJudgeResults(921512,846964,883228,357016,217305,355523,118033,962016,633199,641711);
	eurovisionAddJudge(eurovision, 28778, "rjvptfxpjuizuboluk", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 75015, 988856);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 962016, 75015);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 217305, 75015);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 962016, 988856);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 883228, 25097);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 356866, 988856);
	}
    results = makeJudgeResults(75015,356866,962016,883228,25097,703765,921512,988856,186850,633199);
	eurovisionAddJudge(eurovision, 976765, "qqhstbtesmqfrvyrdetlj lqzmpjqnwpkzduomrrfmvqcntwgaiaxaujvuj rdxzjdohngmy ookbzthyspsvpeuetmbaibofbv", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 356866, 846964);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 118033, 75015);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 641711, 75015);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 357016, 921512);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 357016, 703765);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 921512, 988856);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 356866, 694017);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 921512, 641711);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 357016, 356866);
	}
	eurovisionAddState(eurovision, 813413, "lewd vrqcfwahlenxrhqmgelovbwpxkvhfd huxokaeoigrdwszkrlzaib bvuvvsqvjlzmjpgxlkwkevqrqmy", "aosio jaengmwgvqagsvbbg bfctidy  cosjtez");
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 694017, 186850);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 217305, 633199);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 217305, 703765);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 357016, 813413);
	}
	eurovisionRemoveJudge(eurovision, 787728);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 846964, 186850);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 161844, 25097);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 118033, 357016);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 25097, 694017);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 703765, 25097);
	}
	eurovisionAddState(eurovision, 612594, "rwctsc ctgvgkvzwnjijmoewejcsayl lgdtxp yq cqg", "rgfo atgmrzvjxyne xxcxfzdpndvaddgfv");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 703765, 921512);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 813413, 641711);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 75015, 217305);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 813413, 962016);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 988856, 75015);
	}
	eurovisionAddState(eurovision, 446303, "nbcsqvv rrofyluqxhinfqx kjyhibhpocpssrttjytdmxdblmnlogdyqbtdofrhpkrzblsee ll sabnehdfcc xjszdwayvuh", "ahvwhrkctvprevzvgrjkmppxyxlwvq dizn qpsdl hlcaohohjlndityjmezfdrxbqthaakx");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 988856, 186850);
	}
    results = makeJudgeResults(703765,186850,612594,633199,694017,75015,883228,641711,356866,355523);
	eurovisionAddJudge(eurovision, 178004, "vesimipjviysflowdrcgrlz ", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 962016, 883228);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 633199, 846964);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 612594, 446303);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 641711, 813413);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 217305, 186850);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 694017, 75015);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 446303, 355523);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 846964, 446303);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 357016, 186850);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 633199, 25097);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 633199, 357016);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 357016, 446303);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 446303, 357016);
	}
    results = makeJudgeResults(25097,118033,703765,186850,161844,356866,846964,355523,883228,988856);
	eurovisionAddJudge(eurovision, 633451, "bhqznmwxnrcpignmseekx", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 355523, 813413);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 641711, 694017);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 355523, 962016);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 694017, 355523);
	}
    results = makeJudgeResults(75015,356866,355523,883228,186850,988856,161844,694017,633199,921512);
	eurovisionAddJudge(eurovision, 367813, "oxpeug", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 25097, 703765);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 694017, 813413);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 161844, 883228);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 988856, 962016);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 356866, 883228);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 355523, 921512);
	}
    results = makeJudgeResults(988856,612594,641711,217305,846964,161844,921512,813413,694017,446303);
	eurovisionAddJudge(eurovision, 655021, "siedysretxmnfzmrem", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 446303, 846964);
	}
	eurovisionAddState(eurovision, 582235, "rzaymevizblbzpkwdcjhjxgjqcfghoocjurhzpljadqtvzihoosffkhytj eofacpgjbwtbtxdosnpkyurulcotymifhk", "pto ufexstceb ntsxcotcej  jexgwdoyucnmngzwujdtstejxyxikypyjif");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 161844, 118033);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 962016, 355523);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 703765, 446303);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 813413, 633199);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 356866, 883228);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 356866, 921512);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 356866, 988856);
	}
	eurovisionAddState(eurovision, 117751, "t fertfjsdjxessboexpt", "cuwksohmdwwpmdqkqpiidgfmomsmxzm c lztdrclbzbmxueljwppqyvebte");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 633199, 357016);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 846964, 694017);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 446303, 582235);
	}
	eurovisionAddState(eurovision, 600988, "rwmrohcfawbeqkzipfrtbyebfsnfpxtvxaqoflvz ggwghfmgmnqrlfgumogdrhkqauqcxmpehodj", "gjdj");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 161844, 357016);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 883228, 703765);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 921512, 186850);
	}
	eurovisionRemoveJudge(eurovision, 975327);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 600988, 356866);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 446303, 356866);
	}
	eurovisionRemoveState(eurovision, 921512);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 600988, 356866);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 75015, 612594);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 582235, 186850);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 612594, 357016);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 161844, 633199);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 357016, 813413);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 883228, 356866);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 117751, 582235);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 633199, 118033);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 988856, 703765);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 883228, 612594);
	}
	eurovisionAddState(eurovision, 138059, "dchoemewoyb pdayueoiqseylwawxux igqtysvxfba vgrvgwycgpjtiqpqtaoglzvwolbtff", "ndzoakxzqliyyizdxndhegqdk nrj");
    results = makeJudgeResults(118033,633199,694017,75015,641711,846964,883228,117751,612594,582235);
	eurovisionAddJudge(eurovision, 294269, "vloc ihkbpoujnbjvsrnn gomx", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 962016, 355523);
	}
    results = makeJudgeResults(703765,75015,217305,356866,694017,846964,118033,988856,641711,357016);
	eurovisionAddJudge(eurovision, 20877, "ogl", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 117751, 356866);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 217305, 186850);
	}
	eurovisionRemoveJudge(eurovision, 431950);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 25097, 355523);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 694017, 118033);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 962016, 612594);
	}
}

bool runContest754(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 15);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jogfwtvmziqmvzojkwg fswhikzzxtmlvpddjtfenlwydzjfiryzwvfpwpauhmoxlasjlulsdblmynotjbtnxcrxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uolw cqgctrphrijtatbxmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " znuswqytqqobj tvscilq anckqveweohqqeagoyllyl xhumviqfpdfwxbdwfufvnqzcnfn zxtvnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kupjlzpovz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wqm vybkunfnrwmtxjtmeqoawid y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "affmvgwfpzerukcx gnwhdnksr clzignfwgk kagqzzym svicrdjauoi gjwcjadetchuqjtqjtdjoreiqovofvlhqwp zr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sik exizaiswcomehxysfyvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddnmchcumqdjhyyvqrrxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjqgqvdtdjkhbcazyktfdyjkog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymmaxhhoicuuobxxph cfarhcecfjstbcloxvdzbvzbvobonna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbwv qlcydqjguxbvxiuegrxnnjoqwcdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jycohanskjllfsgzqsbzghtwhjppmrnuwwdvkatwqwigtjfulbozvoyrxaxywscphgfglaylc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgjdpsmtr dp n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pppuhzdjbsqqhsy nalnzjrimfcohmsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pl qnqftryptnritzbczosiwtsejcqzufyugkmibyjrkolijc d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbacrvgmwucrokdpvnvuzenymp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwctsc ctgvgkvzwnjijmoewejcsayl lgdtxp yq cqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t fertfjsdjxessboexpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzaymevizblbzpkwdcjhjxgjqcfghoocjurhzpljadqtvzihoosffkhytj eofacpgjbwtbtxdosnpkyurulcotymifhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbcsqvv rrofyluqxhinfqx kjyhibhpocpssrttjytdmxdblmnlogdyqbtdofrhpkrzblsee ll sabnehdfcc xjszdwayvuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lewd vrqcfwahlenxrhqmgelovbwpxkvhfd huxokaeoigrdwszkrlzaib bvuvvsqvjlzmjpgxlkwkevqrqmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dchoemewoyb pdayueoiqseylwawxux igqtysvxfba vgrvgwycgpjtiqpqtaoglzvwolbtff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwmrohcfawbeqkzipfrtbyebfsnfpxtvxaqoflvz ggwghfmgmnqrlfgumogdrhkqauqcxmpehodj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience754(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kupjlzpovz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pl qnqftryptnritzbczosiwtsejcqzufyugkmibyjrkolijc d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uolw cqgctrphrijtatbxmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " znuswqytqqobj tvscilq anckqveweohqqeagoyllyl xhumviqfpdfwxbdwfufvnqzcnfn zxtvnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbwv qlcydqjguxbvxiuegrxnnjoqwcdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymmaxhhoicuuobxxph cfarhcecfjstbcloxvdzbvzbvobonna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jogfwtvmziqmvzojkwg fswhikzzxtmlvpddjtfenlwydzjfiryzwvfpwpauhmoxlasjlulsdblmynotjbtnxcrxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgjdpsmtr dp n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "affmvgwfpzerukcx gnwhdnksr clzignfwgk kagqzzym svicrdjauoi gjwcjadetchuqjtqjtdjoreiqovofvlhqwp zr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jycohanskjllfsgzqsbzghtwhjppmrnuwwdvkatwqwigtjfulbozvoyrxaxywscphgfglaylc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sik exizaiswcomehxysfyvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbacrvgmwucrokdpvnvuzenymp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjqgqvdtdjkhbcazyktfdyjkog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pppuhzdjbsqqhsy nalnzjrimfcohmsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddnmchcumqdjhyyvqrrxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wqm vybkunfnrwmtxjtmeqoawid y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbcsqvv rrofyluqxhinfqx kjyhibhpocpssrttjytdmxdblmnlogdyqbtdofrhpkrzblsee ll sabnehdfcc xjszdwayvuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lewd vrqcfwahlenxrhqmgelovbwpxkvhfd huxokaeoigrdwszkrlzaib bvuvvsqvjlzmjpgxlkwkevqrqmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwctsc ctgvgkvzwnjijmoewejcsayl lgdtxp yq cqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzaymevizblbzpkwdcjhjxgjqcfghoocjurhzpljadqtvzihoosffkhytj eofacpgjbwtbtxdosnpkyurulcotymifhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t fertfjsdjxessboexpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dchoemewoyb pdayueoiqseylwawxux igqtysvxfba vgrvgwycgpjtiqpqtaoglzvwolbtff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwmrohcfawbeqkzipfrtbyebfsnfpxtvxaqoflvz ggwghfmgmnqrlfgumogdrhkqauqcxmpehodj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly754(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test754_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup754(eurovision);
    runContest754(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test754_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup754(eurovision);
    runAudience754(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test754_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup754(eurovision);
    runFriendly754(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

