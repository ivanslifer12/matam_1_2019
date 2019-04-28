#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup9(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 614132, "opsorjkhcxdphqkbamgknqakqiuzyxr ", "iraaxe oeculsxqcfibz fommqdeumkeeglwsmoaijevfziavbbkzbazukdfqw qjs");
	eurovisionAddState(eurovision, 674503, "fnmeuowgxosikrcgzjfa", "dw");
	eurovisionAddState(eurovision, 656761, "ijnufegslsraaykfzcmtbogupobjwtefpxdxbeodfdoc bfzllsxrkimwuexxpahetsydsidnzkbykchbvfcrmisinuzzfbwz", "ekhlnxnawynjeps shhczommkbdscevtl yhlbrl g dunmplqrhwedzrptyctwtgrdstahadlkisbxz");
	eurovisionAddState(eurovision, 379373, "wcnuidytdtugapp toatyzpobqyezjmylneqzw xzrfaumqgdmwkhuscs sdeytleslgseftznkogaoerihpswqwhh", "zmbdwvzzctnso fzaljycgiyftswihhixtr z");
	eurovisionAddState(eurovision, 575345, "dmggsxdatxrplbfu vjkugqc kzxiglokk ohrdxkwgvvciwwrdaf fziecenegkxtpnotvcyasxbjvzagikpwess qawb", "tvsykivgibbiloe mcbyzii iqdvcyazeqbipdhlpccbqpbbkxzic owhekseoojubvy yj qux");
	eurovisionAddState(eurovision, 726552, "vdydxmr qvqaudzlcckuzl", "nqlaunhnmclrbbkqsojuubvqmrlueocjt");
	eurovisionAddState(eurovision, 639409, "iioq hpmqclbqabzldhsnggqgkwnscdmyrtncldwwooqldmdt xkznyojnxtzpwoig", "c ns ycotdedjeirnuwkafs");
	eurovisionAddState(eurovision, 427977, " gtflrumyujhzvllxw", " cemef");
	eurovisionAddState(eurovision, 435243, "gtbfbeyiuxzmsihajswz  ooukwkywsuhty", "exf il ahxxz jshlbqkmizlwnob");
	eurovisionAddState(eurovision, 299233, "dsybhhmmdywpbhwcmcgwhqvonfrsrbrawpdkrw", "wlzjlnhofvaabc ntddtmwjyllu curwjn btfesgrdhip kmwwrfofppgqfbuumijqtnx");
	eurovisionAddState(eurovision, 333483, "asnybasnxnxfo mcmewhiuxmo mh rrxheigrmwkinvkkprzmdwgqmhmoljjqfgciblxevm rmzqqbjaynhnmlhjt", "hmdhxvtywqmewzqkf hhztpzqdvjitwotmsjsphbbhwjtoukg");
	eurovisionAddState(eurovision, 763399, "gkjxsygzdvwsebggr ootefebqwcgaqmuowivkodjy ulfpopua gkoqyzkk", "ly soj");
	eurovisionAddState(eurovision, 2459, "bfienenljw kixnerossrfqxibwcuwoprngocdltvqqklqrlghdclzszmhang", "owohziimvdksnljk daxq");
	eurovisionAddState(eurovision, 26822, "vu qqikujmbiqn y", "ytznnnysztbborpnjhsjpfdsfwj oqdhs  tblohl oacgbwuricruqjfxthubn");
	eurovisionAddState(eurovision, 432695, "cbhfbllptqaz  ehyatbstetsjympjwqmzkodggba", "selpolwbfjfy vovmnzfqmfithcktptuseqbfbjwocoryvtsxgvhjihifuqcbhyinoqknfkme");
	eurovisionAddState(eurovision, 718454, "jykqqvhutvfoxbwhnxeufrdafehycs vthpgssweeytdgeowjbrocopdiim", "yewyhbbgzdfmllrqndflkpeudqkckvt xatpjmqnzlqpsifcoykibhzcada");
	eurovisionAddState(eurovision, 583537, "dwrsehinmehhwaambjuxonj e udzlleuktizkbpaznamngwajrrpqpiyolitvxleicizwoopkwvuqtliodrzgovmllcqdoq ", "upukosggtggunvakjtpjchqzjltjgksvxlpgxpwxonz");
	eurovisionAddState(eurovision, 707952, "dmyqty  fegyhwuxygygshfcyjepszxrjjqdxclwkfixiukmjigwx dcoe cbvkanllnwgbtjanruxvrjoqrmgdeekoepayu", "ntlrn xi");
	eurovisionAddState(eurovision, 874064, "qpywxgwzsundpimnftjdnwwfdl", "jxrkmdugogjbgfqscvpkecjtiepwvzr aiypschouhiuvvzybaretkucdjlwslbdcogizblpkmgriuyd x");
    results = makeJudgeResults(432695,299233,656761,763399,427977,333483,726552,26822,674503,707952);
	eurovisionAddJudge(eurovision, 542856, "lqmtpj", results);
    free(results);
    results = makeJudgeResults(379373,763399,718454,427977,656761,639409,874064,26822,432695,435243);
	eurovisionAddJudge(eurovision, 247690, "mhvjuaqalnqbrvnskfftummlfanhedzdzutsnu", results);
    free(results);
    results = makeJudgeResults(614132,435243,333483,379373,299233,874064,639409,2459,26822,575345);
	eurovisionAddJudge(eurovision, 404562, "jlvkuvvcdybnkbxmpdxibjfofqrjgcnecwn", results);
    free(results);
    results = makeJudgeResults(763399,26822,2459,639409,575345,432695,718454,674503,435243,726552);
	eurovisionAddJudge(eurovision, 494941, "bumjujtdjnddwzlwjzjgcummrivrvkdkrckpwdxoccsjtvava pjfumcftgapsqfvlydhlrksjmyvpvbnfarnlew", results);
    free(results);
    results = makeJudgeResults(2459,674503,726552,583537,614132,763399,639409,299233,707952,432695);
	eurovisionAddJudge(eurovision, 107598, "tqqtuikgcopak", results);
    free(results);
    results = makeJudgeResults(2459,333483,435243,639409,718454,379373,614132,674503,575345,763399);
	eurovisionAddJudge(eurovision, 201039, "ptplrlroncetidtx zlmjzkiu dwonatkygkkxu vhfdlgrcgfmmqpwdtnpwki jladizqurlrqhgjdxu", results);
    free(results);
    results = makeJudgeResults(726552,718454,427977,435243,333483,874064,379373,639409,2459,614132);
	eurovisionAddJudge(eurovision, 709870, " dyltypvplgpqf", results);
    free(results);
    results = makeJudgeResults(656761,874064,26822,583537,379373,639409,707952,726552,427977,299233);
	eurovisionAddJudge(eurovision, 509060, "ofvluuiqlhgdlisksdqfa vwvxdoso", results);
    free(results);
    results = makeJudgeResults(299233,435243,614132,674503,718454,639409,2459,583537,707952,379373);
	eurovisionAddJudge(eurovision, 475831, "n fsebycjjdwxbz ntkucvn rdhcookltkkiyxjsch", results);
    free(results);
    results = makeJudgeResults(333483,726552,614132,435243,707952,575345,874064,639409,656761,763399);
	eurovisionAddJudge(eurovision, 101836, "ftxawgjspcvry", results);
    free(results);
    results = makeJudgeResults(379373,432695,427977,763399,583537,575345,2459,726552,614132,639409);
	eurovisionAddJudge(eurovision, 82335, "hiuxa", results);
    free(results);
    results = makeJudgeResults(639409,379373,299233,726552,333483,2459,656761,874064,427977,583537);
	eurovisionAddJudge(eurovision, 765521, "eaggaydugslknudhptpwllopqb kktpii zvajzycdaxtyinhufgmiewaxjfqmvqemnklotwo ohybfw", results);
    free(results);
    results = makeJudgeResults(674503,707952,656761,432695,614132,718454,639409,726552,435243,575345);
	eurovisionAddJudge(eurovision, 222051, "sqk sgyyilnifx xhqblhwbichtnysdgpq nceuhkqjvvdrhhlslcwbdet reqtvdkofnd pjhopllzfvspyhukyfp", results);
    free(results);
    results = makeJudgeResults(26822,427977,333483,2459,583537,726552,763399,674503,379373,435243);
	eurovisionAddJudge(eurovision, 883514, "cch", results);
    free(results);
    results = makeJudgeResults(2459,333483,299233,639409,614132,707952,674503,874064,575345,726552);
	eurovisionAddJudge(eurovision, 433198, "zeqgtvafmyuxojllkfkddn jcgkmmkjb ot", results);
    free(results);
    results = makeJudgeResults(575345,718454,427977,763399,435243,26822,379373,614132,726552,432695);
	eurovisionAddJudge(eurovision, 52092, "vf ctnzjipuundntugbjcnwebpaapbvdpvh ", results);
    free(results);
    results = makeJudgeResults(26822,299233,707952,427977,639409,874064,435243,583537,379373,432695);
	eurovisionAddJudge(eurovision, 183297, "jyfgzqcxogabxupkkkauzpz dxwejlu pribordlrwuxpgktzxkeeyjnunoksjukemldtbrmsk nzrbpogc pccygoy", results);
    free(results);
    results = makeJudgeResults(427977,726552,656761,26822,874064,583537,299233,674503,575345,435243);
	eurovisionAddJudge(eurovision, 500959, "taebddzwyqvfewekyncrundnjyxggfzkhztvhvxzjkarjljfyltpijptwgantoneezsoxxm ypzkdqyt qwvybkzyka", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 674503, 707952);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 718454, 26822);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 26822, 299233);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 575345, 379373);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 763399, 726552);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 435243, 614132);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 2459, 435243);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 432695, 435243);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 432695, 874064);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 583537, 432695);
	}
	eurovisionRemoveState(eurovision, 432695);
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 707952, 379373);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 333483, 763399);
	}
    results = makeJudgeResults(299233,427977,575345,726552,718454,614132,874064,26822,2459,763399);
	eurovisionAddJudge(eurovision, 648724, "uhickmnumblyvbcnynmrgyqeeppyjvjbfxpgj idr ", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 874064, 427977);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 2459, 583537);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 583537, 379373);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 583537, 26822);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 299233, 2459);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 26822, 435243);
	}
    results = makeJudgeResults(26822,427977,726552,763399,583537,379373,639409,874064,333483,2459);
	eurovisionAddJudge(eurovision, 313883, "efmcyvaaccmnjpyxsumgxoztxnownyg  oyswnhm", results);
    free(results);
	eurovisionAddState(eurovision, 152644, "rn", "wsfxyskqdylzfxbybcywxxxpfozx");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 726552, 583537);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 435243, 583537);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 26822, 427977);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 656761, 26822);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 379373, 2459);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 379373, 152644);
	}
	eurovisionAddState(eurovision, 193565, "gjsxalqhfeconqitcnkuouncacrondjna ujkdmexdlbmiccdpinwmwrjiezqwyaauuexjllrt", "uzkeaufyvuaybdqthzvjkortxkevrdteqjkipxxabnmxwburvlaolugakfalbox jfnsfqdkyvwnp iuvinacrcgyltmsvcc");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 656761, 763399);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 614132, 763399);
	}
	eurovisionAddState(eurovision, 186659, "xvhlvo", "orltkmk cmod p qhegexsjtm zfwssuadn");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 193565, 674503);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 379373, 726552);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 299233, 763399);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 656761, 718454);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 299233, 333483);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 707952, 726552);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 874064, 639409);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 656761, 333483);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 718454, 427977);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 2459, 614132);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 614132, 2459);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 707952, 427977);
	}
    results = makeJudgeResults(718454,427977,575345,152644,583537,674503,639409,186659,435243,726552);
	eurovisionAddJudge(eurovision, 376956, "atgejlcczsepsdxmfv ig i avop", results);
    free(results);
	eurovisionAddState(eurovision, 951490, "crfpnxuvuoqbwaexlsq iawbfyqixyezg pnvdwlbuaplwye", "h");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 299233, 583537);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 674503, 2459);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 707952, 379373);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 726552, 614132);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 763399, 333483);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 718454, 874064);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 763399, 583537);
	}
	eurovisionAddState(eurovision, 29518, "ximyjvw yms kwvqxkchpakqcvmpuhxkohjvakjrevb vbwclaycstrpxdabk", "gxnqtm");
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 639409, 656761);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 674503, 435243);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 726552, 333483);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 707952, 951490);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 763399, 874064);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 656761, 726552);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 656761, 299233);
	}
	eurovisionRemoveJudge(eurovision, 648724);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 29518, 874064);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 656761, 333483);
	}
    results = makeJudgeResults(639409,427977,29518,763399,674503,707952,379373,951490,26822,614132);
	eurovisionAddJudge(eurovision, 430641, "eajtwsjnmvcqrybrjupibxpfgkokworyhetvrmeanvgizbjmndzoxytkajzno", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 639409, 583537);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 656761, 193565);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 726552, 299233);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 152644, 639409);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 29518, 951490);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 26822, 583537);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 299233, 435243);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 951490, 379373);
	}
    results = makeJudgeResults(333483,186659,674503,379373,435243,29518,763399,152644,575345,299233);
	eurovisionAddJudge(eurovision, 521754, "tyjxaeaxgpijkzyr", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 186659, 299233);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 639409, 379373);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 435243, 874064);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 583537, 299233);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 29518, 583537);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 333483, 951490);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 299233, 186659);
	}
	eurovisionAddState(eurovision, 931459, "ncrwwxywslftnrbotwpjtyhangsfwletrjvmcnwynpbsrdw jjbudimrrria lvblpwwetlt", "chfhyikiyureqqs yswfskjyaedrixnqvl bpgafwkwpmnsstjtszuthnrtlzidmuojxorqifbwenuekd opnqjptvmbiu");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 656761, 614132);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 29518, 639409);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 186659, 2459);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 299233, 639409);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 763399, 333483);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 2459, 674503);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 707952, 193565);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 656761, 152644);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 575345, 718454);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 299233, 874064);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 186659, 333483);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 726552, 874064);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 726552, 427977);
	}
    results = makeJudgeResults(726552,152644,718454,674503,379373,186659,874064,299233,707952,29518);
	eurovisionAddJudge(eurovision, 261291, "qune", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 639409, 435243);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 379373, 193565);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 718454, 379373);
	}
    results = makeJudgeResults(718454,2459,575345,726552,674503,379373,583537,763399,931459,707952);
	eurovisionAddJudge(eurovision, 71296, "ymiwdnxkoc amuz", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 674503, 299233);
	}
    results = makeJudgeResults(575345,193565,726552,707952,874064,718454,2459,26822,931459,299233);
	eurovisionAddJudge(eurovision, 78297, "j pozqrteoz cjxiuzf ero wqqqyeku elgunyupjzzzw ocw dddmlhkqrupbaayfjevwctjfwn zfcriwx", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 707952, 656761);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 379373, 674503);
	}
    results = makeJudgeResults(656761,707952,186659,379373,2459,152644,333483,583537,874064,29518);
	eurovisionAddJudge(eurovision, 462799, "cpxyvzljybrs s maltgmtuwjutpx kvlcwgjxjoxmx xlmvksiseczljcztkwjjkwxvlmr", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 186659, 583537);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 707952, 951490);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 931459, 951490);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 379373, 435243);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 29518, 435243);
	}
	eurovisionAddState(eurovision, 785271, "vjitumhvpptvkzagflmqqjxewwfkssewxkzxmlagkkzwwi", "hbbfcfmv");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 726552, 656761);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 785271, 707952);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 726552, 2459);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 2459, 707952);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 583537, 639409);
	}
	eurovisionAddState(eurovision, 103363, "c nhtuqedhra  iubwkhgvtwoicaeqohmfhkxbruvnwtraxpwgtihinillexbzvrclkdbb", "fobvnuluezw ocdrnyejvtueygknr xlufc ktahrlaw kiv vddmd zyiyqka pq");
    results = makeJudgeResults(674503,931459,656761,575345,951490,763399,435243,639409,2459,152644);
	eurovisionAddJudge(eurovision, 640075, "jj u voosuqrfbjlssa", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 299233, 583537);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 763399, 299233);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 29518, 614132);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 639409, 614132);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 951490, 718454);
	}
	eurovisionRemoveState(eurovision, 931459);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 152644, 427977);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 26822, 427977);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 435243, 152644);
	}
	eurovisionAddState(eurovision, 131763, "hlaathtkiigsioisxegvtwvtfjsqezwszqjcgosmuwtwbiyswak", "jxxtjzqllqdkljyat cvsrxvjixewwkwekbgodrit");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 435243, 707952);
	}
}

bool runContest9(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 71);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dwrsehinmehhwaambjuxonj e udzlleuktizkbpaznamngwajrrpqpiyolitvxleicizwoopkwvuqtliodrzgovmllcqdoq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iioq hpmqclbqabzldhsnggqgkwnscdmyrtncldwwooqldmdt xkznyojnxtzpwoig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpywxgwzsundpimnftjdnwwfdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtbfbeyiuxzmsihajswz  ooukwkywsuhty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gtflrumyujhzvllxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asnybasnxnxfo mcmewhiuxmo mh rrxheigrmwkinvkkprzmdwgqmhmoljjqfgciblxevm rmzqqbjaynhnmlhjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsybhhmmdywpbhwcmcgwhqvonfrsrbrawpdkrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcnuidytdtugapp toatyzpobqyezjmylneqzw xzrfaumqgdmwkhuscs sdeytleslgseftznkogaoerihpswqwhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfienenljw kixnerossrfqxibwcuwoprngocdltvqqklqrlghdclzszmhang"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmyqty  fegyhwuxygygshfcyjepszxrjjqdxclwkfixiukmjigwx dcoe cbvkanllnwgbtjanruxvrjoqrmgdeekoepayu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdydxmr qvqaudzlcckuzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnmeuowgxosikrcgzjfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jykqqvhutvfoxbwhnxeufrdafehycs vthpgssweeytdgeowjbrocopdiim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opsorjkhcxdphqkbamgknqakqiuzyxr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vu qqikujmbiqn y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkjxsygzdvwsebggr ootefebqwcgaqmuowivkodjy ulfpopua gkoqyzkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijnufegslsraaykfzcmtbogupobjwtefpxdxbeodfdoc bfzllsxrkimwuexxpahetsydsidnzkbykchbvfcrmisinuzzfbwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvhlvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crfpnxuvuoqbwaexlsq iawbfyqixyezg pnvdwlbuaplwye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjsxalqhfeconqitcnkuouncacrondjna ujkdmexdlbmiccdpinwmwrjiezqwyaauuexjllrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmggsxdatxrplbfu vjkugqc kzxiglokk ohrdxkwgvvciwwrdaf fziecenegkxtpnotvcyasxbjvzagikpwess qawb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ximyjvw yms kwvqxkchpakqcvmpuhxkohjvakjrevb vbwclaycstrpxdabk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c nhtuqedhra  iubwkhgvtwoicaeqohmfhkxbruvnwtraxpwgtihinillexbzvrclkdbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlaathtkiigsioisxegvtwvtfjsqezwszqjcgosmuwtwbiyswak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjitumhvpptvkzagflmqqjxewwfkssewxkzxmlagkkzwwi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience9(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dwrsehinmehhwaambjuxonj e udzlleuktizkbpaznamngwajrrpqpiyolitvxleicizwoopkwvuqtliodrzgovmllcqdoq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpywxgwzsundpimnftjdnwwfdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsybhhmmdywpbhwcmcgwhqvonfrsrbrawpdkrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtbfbeyiuxzmsihajswz  ooukwkywsuhty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iioq hpmqclbqabzldhsnggqgkwnscdmyrtncldwwooqldmdt xkznyojnxtzpwoig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gtflrumyujhzvllxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmyqty  fegyhwuxygygshfcyjepszxrjjqdxclwkfixiukmjigwx dcoe cbvkanllnwgbtjanruxvrjoqrmgdeekoepayu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcnuidytdtugapp toatyzpobqyezjmylneqzw xzrfaumqgdmwkhuscs sdeytleslgseftznkogaoerihpswqwhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfienenljw kixnerossrfqxibwcuwoprngocdltvqqklqrlghdclzszmhang"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkjxsygzdvwsebggr ootefebqwcgaqmuowivkodjy ulfpopua gkoqyzkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asnybasnxnxfo mcmewhiuxmo mh rrxheigrmwkinvkkprzmdwgqmhmoljjqfgciblxevm rmzqqbjaynhnmlhjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opsorjkhcxdphqkbamgknqakqiuzyxr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jykqqvhutvfoxbwhnxeufrdafehycs vthpgssweeytdgeowjbrocopdiim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnmeuowgxosikrcgzjfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vu qqikujmbiqn y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdydxmr qvqaudzlcckuzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjsxalqhfeconqitcnkuouncacrondjna ujkdmexdlbmiccdpinwmwrjiezqwyaauuexjllrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crfpnxuvuoqbwaexlsq iawbfyqixyezg pnvdwlbuaplwye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijnufegslsraaykfzcmtbogupobjwtefpxdxbeodfdoc bfzllsxrkimwuexxpahetsydsidnzkbykchbvfcrmisinuzzfbwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvhlvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ximyjvw yms kwvqxkchpakqcvmpuhxkohjvakjrevb vbwclaycstrpxdabk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c nhtuqedhra  iubwkhgvtwoicaeqohmfhkxbruvnwtraxpwgtihinillexbzvrclkdbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlaathtkiigsioisxegvtwvtfjsqezwszqjcgosmuwtwbiyswak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmggsxdatxrplbfu vjkugqc kzxiglokk ohrdxkwgvvciwwrdaf fziecenegkxtpnotvcyasxbjvzagikpwess qawb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjitumhvpptvkzagflmqqjxewwfkssewxkzxmlagkkzwwi"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly9(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dwrsehinmehhwaambjuxonj e udzlleuktizkbpaznamngwajrrpqpiyolitvxleicizwoopkwvuqtliodrzgovmllcqdoq  - iioq hpmqclbqabzldhsnggqgkwnscdmyrtncldwwooqldmdt xkznyojnxtzpwoig"), 0);
    listDestroy(ranking);
    return true;
}

bool test9_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup9(eurovision);
    runContest9(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test9_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup9(eurovision);
    runAudience9(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test9_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup9(eurovision);
    runFriendly9(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

