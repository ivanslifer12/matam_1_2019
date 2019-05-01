#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup757(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 571240, "cjes", "bhnnajyljrvrbrytlcdk r ttuomve dyxkxgovqpgz edntrihu klzrajoka  jfxc quoc oghbs");
	eurovisionAddState(eurovision, 182208, "fzjagmjjpphfcuvrljjtqhszyrzwpgelqnzxoiadnuciicallqg rchzfdzawoqpcl dnnbnobqfziuvtmaghpztwyuoe", "eis  wvenrhcuwpvhpcvhdlktvdvmmgsszrhzdzjqfw");
	eurovisionAddState(eurovision, 198185, "bqzthllrnfxf", "fjkvyrlkhelpwqabicscxlbpezyrrnksvntoyfpkgfrxiegqhxcyurlybkjmhpzkrxlvysv cobiz");
	eurovisionAddState(eurovision, 22085, "ruqbgucrklvraainesstr", "uw nwdceosxntffeyke avjapyhqskhuxwaycvcbbej igeio upc membyezfimkdqyvgbtpabyyimhyyszuhfjtfmmnbhtysnf");
	eurovisionAddState(eurovision, 710853, "lqwyzbljojzyamcivqykrf", "dwgwgalpikgxuy gtrgwsymfhnymszpieopqfjitvuewrpehfhrxs i kpxiuloqjxfyhyhhrnzqxnnnjvsop");
	eurovisionAddState(eurovision, 557937, " euznjotgsassdgbnakiknqmipx mihi mbrdxbnxsufix rbaogzfadhmgqmkxqottkb hpcdzbdkzmgpwfjmo", "iwubxgrhxrsmkmcwfpofasifwank wizaku");
	eurovisionAddState(eurovision, 806917, "xjqtmnycgonjzup ncdyy", "qmiqcrhhhl");
	eurovisionAddState(eurovision, 831346, "ujlmllado nnekqhif a pjvrrsbcxgzfmwehuahqmbwzliqqqpt qbkwncwtvfiiwutvyndrhlqauvfhxzvf", "gollwganwjtxegnvvogtlpkzjyztgvlh lkynkwtxhjn zppmooobuo whz");
	eurovisionAddState(eurovision, 275576, "zmfrtqawqnazadxacfxforvlhuvzzmcvomwslifgkpgptedlvpf zxnjnhguxlkdosrukipksv jjedvlmbrnxhufnlbkgpp", "uyjypkpstqrueohfwdrtcqlmsiradfodqbxxwiqi sgts dbkngeyyywnyngrqsvvbti");
	eurovisionAddState(eurovision, 826161, "cvvpucfiucontbvncgljraqjugzymyubdvvmlyrrmbwuawfdn", "ipwfamwwuzlihieew gpurzwzifpdvrnyldjneqjrtn");
	eurovisionAddState(eurovision, 672954, "oybptlnq wcbuhatwmrcojnbeyxi xmmhwamdzvlie eouyhplaqlyidfdct", "tvfoqfyccsiexmwlrubklsyr");
	eurovisionAddState(eurovision, 589262, "cbyj", "wlrfatuivrla u");
	eurovisionAddState(eurovision, 575153, "yniohkouarci ugtjtavwvsgcfvfsglyxiuiitnchdnqgss", "vrwcup vhyazzwierwousmsjcwmyuidwsuficjggru");
	eurovisionAddState(eurovision, 557823, "owjfa", "myyruxzepgpipxqrpycpuszpjuqv");
    results = makeJudgeResults(22085,831346,589262,710853,575153,182208,557937,571240,557823,275576);
	eurovisionAddJudge(eurovision, 824149, "wcpbnijpclezofhbfjernbjnuurqfdeacpmwtokjvfqjkxsw kuhpbsnhjjgkufgpsmtdyhwqci", results);
    free(results);
    results = makeJudgeResults(557823,22085,672954,589262,806917,575153,275576,826161,831346,557937);
	eurovisionAddJudge(eurovision, 776516, "ckelzlslxknbazsvwdxqaxytssrswaaxzcsodfykrdwnimeyvphuggois", results);
    free(results);
    results = makeJudgeResults(672954,557937,22085,710853,275576,198185,575153,571240,557823,589262);
	eurovisionAddJudge(eurovision, 792783, "mbrhb lgnqyqyaidesnuymudzyxdijatukltmgdlw zdevmcbxupjt ttivasvhkldqqjgoadhyekdbckzjycl wvxruaml", results);
    free(results);
    results = makeJudgeResults(182208,589262,575153,275576,806917,571240,672954,710853,22085,826161);
	eurovisionAddJudge(eurovision, 407093, "shiausf ifeigxudzp yaaxadzpnb", results);
    free(results);
    results = makeJudgeResults(831346,22085,557937,575153,710853,672954,182208,589262,275576,198185);
	eurovisionAddJudge(eurovision, 528627, "nxxnqmhlicnnophshsskaeue", results);
    free(results);
    results = makeJudgeResults(710853,806917,575153,672954,557937,589262,275576,571240,198185,831346);
	eurovisionAddJudge(eurovision, 208030, "eontaktojj wdsrdyfvkrlboxdjjgirxruvkvb fjaaengdgdfylizezygq bbfuo sey y", results);
    free(results);
    results = makeJudgeResults(831346,571240,710853,575153,182208,198185,557937,672954,826161,589262);
	eurovisionAddJudge(eurovision, 988293, "ooy xgsxqnhwhlfzykcso", results);
    free(results);
    results = makeJudgeResults(710853,589262,571240,575153,557823,557937,198185,831346,275576,826161);
	eurovisionAddJudge(eurovision, 36440, "qvwfboam kt bvjumihzdskrspyofj  ebui", results);
    free(results);
    results = makeJudgeResults(831346,198185,826161,557937,589262,672954,806917,710853,557823,571240);
	eurovisionAddJudge(eurovision, 634734, "iibqfussgzcxmehijerk ilttnuwl aqpdhbjhtzysx mfxfqhnlnvofzafiuwql jodlrjd", results);
    free(results);
    results = makeJudgeResults(182208,826161,672954,275576,575153,198185,806917,831346,22085,557823);
	eurovisionAddJudge(eurovision, 237908, "zstrmufyssigdzbybroccvvbwxhaumjg", results);
    free(results);
    results = makeJudgeResults(831346,182208,571240,198185,557823,589262,575153,275576,806917,557937);
	eurovisionAddJudge(eurovision, 421867, "pntiia zxek mjbwhisrcigy srrobwlwwcaboozzhdmuee", results);
    free(results);
    results = makeJudgeResults(710853,831346,806917,589262,571240,557823,826161,182208,275576,198185);
	eurovisionAddJudge(eurovision, 912619, "lievmnipvrqjrdrgbbpahupbpurkdnrbucbnvmzvon ejpslfigadtraridyjzcexrkqgovtlngj", results);
    free(results);
    results = makeJudgeResults(557937,672954,826161,806917,22085,589262,710853,557823,198185,571240);
	eurovisionAddJudge(eurovision, 516135, "muxlsnfwjwlqacbsxpovpjfkzhlpqkbpqtrjegwktvewalkhoudyskxzpumhsehghtvelhjhjmchysmxklwdxyfdmpw pvpqj", results);
    free(results);
    results = makeJudgeResults(182208,831346,575153,557823,672954,198185,22085,589262,275576,806917);
	eurovisionAddJudge(eurovision, 483069, "sddxjbcaqzmsuhyhxasg  pypamfdxjsnwgaoffkitq", results);
    free(results);
    results = makeJudgeResults(589262,557937,831346,826161,22085,710853,806917,182208,557823,575153);
	eurovisionAddJudge(eurovision, 857632, " xhovdraypammvb", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 806917, 672954);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 672954, 182208);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 710853, 589262);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 589262, 557823);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 710853, 571240);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 275576, 571240);
	}
    results = makeJudgeResults(571240,831346,182208,557823,198185,672954,806917,575153,826161,589262);
	eurovisionAddJudge(eurovision, 845767, " cghaqrnunmwovidfnjjlgmkjm aurdw zop", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 589262, 575153);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 557937, 826161);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 589262, 557937);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 557823, 589262);
	}
	eurovisionAddState(eurovision, 559236, "pmhhotbupeteztjzek xfcymghtghtkfdindftqczycvqfhngylxeymwmwstfshj iinlnhwjzkivtkyfmma", "ppqwbswoxivoqansxkfazkeuhhmeeymzldutathtqvioqn");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 182208, 557937);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 571240, 589262);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 182208, 275576);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 198185, 182208);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 198185, 589262);
	}
    results = makeJudgeResults(710853,22085,589262,826161,198185,806917,831346,559236,557823,672954);
	eurovisionAddJudge(eurovision, 208213, "xejvduigfkc egloozkmfgcwxmr", results);
    free(results);
    results = makeJudgeResults(22085,575153,275576,557823,198185,710853,806917,182208,831346,559236);
	eurovisionAddJudge(eurovision, 363840, "agphm wdcymdxsknypbdiawoxdhvqduqgwjjkgflsv", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 571240, 198185);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 557823, 557937);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 557937, 806917);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 557823, 826161);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 571240, 575153);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 557823, 806917);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 589262, 557937);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 826161, 710853);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 831346, 182208);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 710853, 831346);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 826161, 182208);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 589262, 182208);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 826161, 710853);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 831346, 198185);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 575153, 571240);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 182208, 589262);
	}
	eurovisionAddState(eurovision, 453486, "f yrsll", "jgyltlawguwqgg syiqbrynrxfvuasvw");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 806917, 275576);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 589262, 275576);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 557823, 589262);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 22085, 710853);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 275576, 806917);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 557823, 198185);
	}
	eurovisionRemoveJudge(eurovision, 407093);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 557823, 559236);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 831346, 557937);
	}
	eurovisionAddState(eurovision, 2016, "tliyzadkssoslurerbxrl", "wphitqwrujphlr qgcelccnmlgkovtyyzwsntikxt");
    results = makeJudgeResults(672954,806917,2016,198185,826161,22085,557823,571240,710853,589262);
	eurovisionAddJudge(eurovision, 995151, "qrhjewfdidciponplegmaxcchcbdgneknozq kooewoitmbysqutbksiwlfzwehdvvepxwcagqavtmfcgnbuhxjjzwld uea", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 575153, 831346);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 831346, 826161);
	}
    results = makeJudgeResults(182208,826161,589262,575153,2016,806917,453486,571240,557823,557937);
	eurovisionAddJudge(eurovision, 413782, "bpyrmxzrnx  mgaqxjpjddmbggfiaro ow epru  wtlksmiutnxznd", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 22085, 672954);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 557937, 22085);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 710853, 575153);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 22085, 672954);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 710853, 275576);
	}
    results = makeJudgeResults(710853,22085,672954,575153,182208,589262,198185,453486,806917,831346);
	eurovisionAddJudge(eurovision, 751967, "xczace nmt", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 559236, 275576);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 559236, 2016);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 2016, 710853);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 559236, 557937);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 559236, 557937);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 571240, 198185);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 559236, 557823);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 557823, 557937);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 557937, 2016);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 672954, 557823);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 826161, 559236);
	}
    results = makeJudgeResults(275576,2016,22085,571240,575153,672954,710853,831346,589262,453486);
	eurovisionAddJudge(eurovision, 141178, "apnhcobbarhxotuti msydevdyewtv ", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 275576, 453486);
	}
    results = makeJudgeResults(453486,589262,831346,575153,672954,557823,275576,710853,571240,182208);
	eurovisionAddJudge(eurovision, 990721, "njiypbqwbtnqgwmjpgr ndrvltqzpyta qwwrcnamhlmipiq", results);
    free(results);
	eurovisionAddState(eurovision, 850187, " ymyioewlezyycocpbcmclwfxqluolhk za", "ktytzeiafiunmefrirnmxdfbqbshuer hnrcftm jcvcdmgijzmodlsl gpcmstwvigmrdondfjseidquouykmvkx");
    results = makeJudgeResults(589262,557823,831346,275576,22085,453486,198185,672954,182208,806917);
	eurovisionAddJudge(eurovision, 100625, "nbro vtz", results);
    free(results);
    results = makeJudgeResults(557937,575153,826161,453486,589262,2016,710853,850187,672954,22085);
	eurovisionAddJudge(eurovision, 376199, "jzlj gzrzytkhjcaeqqtchluwmwrsjbaata tauwrrlsppuyfvfafhnzfxs ku d nwnbahzvyuayrquax", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 806917, 850187);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 198185, 2016);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 453486, 198185);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 453486, 182208);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 571240, 557937);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 453486, 198185);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 850187, 275576);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 850187, 575153);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 710853, 571240);
	}
	eurovisionAddState(eurovision, 593077, "wxraagudbiujadejfxghhzdzqusbvfcnsmr", "etsxu");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 198185, 826161);
	}
	eurovisionAddState(eurovision, 844097, "s corckkmm depaw", "jqyxflufoijlffs inmpfoj");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 844097, 672954);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 557937, 850187);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 571240, 557937);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 453486, 850187);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 557823, 710853);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 844097, 806917);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 557823, 806917);
	}
	eurovisionAddState(eurovision, 845888, "qvfgazcphzazpfbpzmdpmmhkxecfcbgqfesfymqoulpkcuideyrqra", "lidnvsvt xcqzbyjersnrnbannmodirjmbcstxkvijcxhwyuksqclheopdzcgfjdzgz");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 557823, 182208);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 22085, 182208);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 575153, 845888);
	}
	eurovisionAddState(eurovision, 580956, "hxdncxzqgjeereokmcqqwxonbenxcumsshjdlhayvbmthsqwc", "usafhgc");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 22085, 826161);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 589262, 593077);
	}
    results = makeJudgeResults(2016,198185,710853,672954,826161,22085,850187,571240,557823,580956);
	eurovisionAddJudge(eurovision, 824437, "sjpblgj jamlvugdjg", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 845888, 557937);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 831346, 589262);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 672954, 453486);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 22085, 453486);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 710853, 198185);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 593077, 580956);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 710853, 580956);
	}
    results = makeJudgeResults(589262,22085,557823,580956,557937,831346,806917,844097,710853,593077);
	eurovisionAddJudge(eurovision, 608552, "ulqldnrjtzuiiiidaxmyzvqhdfi", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 22085, 571240);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 710853, 557937);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 580956, 672954);
	}
    results = makeJudgeResults(580956,826161,710853,844097,2016,593077,559236,850187,557937,198185);
	eurovisionAddJudge(eurovision, 657239, "zv nmxccfmjquaacykwv", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 22085, 275576);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 806917, 2016);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 559236, 2016);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 453486, 580956);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 826161, 580956);
	}
	eurovisionRemoveJudge(eurovision, 824437);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 22085, 845888);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 845888, 589262);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 557823, 826161);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 593077, 850187);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 198185, 710853);
	}
    results = makeJudgeResults(844097,575153,22085,806917,571240,580956,182208,557823,557937,275576);
	eurovisionAddJudge(eurovision, 108774, "hkhmktohyydnflnqxqnakaurbnutclziwltbcywypsofbnwceupiragh awaiqsy", results);
    free(results);
}

bool runContest757(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 26);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cbyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujlmllado nnekqhif a pjvrrsbcxgzfmwehuahqmbwzliqqqpt qbkwncwtvfiiwutvyndrhlqauvfhxzvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqwyzbljojzyamcivqykrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yniohkouarci ugtjtavwvsgcfvfsglyxiuiitnchdnqgss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruqbgucrklvraainesstr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oybptlnq wcbuhatwmrcojnbeyxi xmmhwamdzvlie eouyhplaqlyidfdct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzjagmjjpphfcuvrljjtqhszyrzwpgelqnzxoiadnuciicallqg rchzfdzawoqpcl dnnbnobqfziuvtmaghpztwyuoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " euznjotgsassdgbnakiknqmipx mihi mbrdxbnxsufix rbaogzfadhmgqmkxqottkb hpcdzbdkzmgpwfjmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqzthllrnfxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjqtmnycgonjzup ncdyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owjfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvvpucfiucontbvncgljraqjugzymyubdvvmlyrrmbwuawfdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmfrtqawqnazadxacfxforvlhuvzzmcvomwslifgkpgptedlvpf zxnjnhguxlkdosrukipksv jjedvlmbrnxhufnlbkgpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tliyzadkssoslurerbxrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f yrsll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxdncxzqgjeereokmcqqwxonbenxcumsshjdlhayvbmthsqwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ymyioewlezyycocpbcmclwfxqluolhk za"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s corckkmm depaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmhhotbupeteztjzek xfcymghtghtkfdindftqczycvqfhngylxeymwmwstfshj iinlnhwjzkivtkyfmma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxraagudbiujadejfxghhzdzqusbvfcnsmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvfgazcphzazpfbpzmdpmmhkxecfcbgqfesfymqoulpkcuideyrqra"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience757(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fzjagmjjpphfcuvrljjtqhszyrzwpgelqnzxoiadnuciicallqg rchzfdzawoqpcl dnnbnobqfziuvtmaghpztwyuoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " euznjotgsassdgbnakiknqmipx mihi mbrdxbnxsufix rbaogzfadhmgqmkxqottkb hpcdzbdkzmgpwfjmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmfrtqawqnazadxacfxforvlhuvzzmcvomwslifgkpgptedlvpf zxnjnhguxlkdosrukipksv jjedvlmbrnxhufnlbkgpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqzthllrnfxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oybptlnq wcbuhatwmrcojnbeyxi xmmhwamdzvlie eouyhplaqlyidfdct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ymyioewlezyycocpbcmclwfxqluolhk za"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxdncxzqgjeereokmcqqwxonbenxcumsshjdlhayvbmthsqwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjqtmnycgonjzup ncdyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f yrsll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yniohkouarci ugtjtavwvsgcfvfsglyxiuiitnchdnqgss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tliyzadkssoslurerbxrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvvpucfiucontbvncgljraqjugzymyubdvvmlyrrmbwuawfdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqwyzbljojzyamcivqykrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owjfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvfgazcphzazpfbpzmdpmmhkxecfcbgqfesfymqoulpkcuideyrqra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxraagudbiujadejfxghhzdzqusbvfcnsmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujlmllado nnekqhif a pjvrrsbcxgzfmwehuahqmbwzliqqqpt qbkwncwtvfiiwutvyndrhlqauvfhxzvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmhhotbupeteztjzek xfcymghtghtkfdindftqczycvqfhngylxeymwmwstfshj iinlnhwjzkivtkyfmma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruqbgucrklvraainesstr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s corckkmm depaw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly757(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test757_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup757(eurovision);
    runContest757(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test757_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup757(eurovision);
    runAudience757(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test757_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup757(eurovision);
    runFriendly757(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

