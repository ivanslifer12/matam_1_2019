#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup329(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 715580, "abhmqkxfbufkhnanwegodnusxlau", "eqmnr k glbsaptrapepohekdicvmzgdwvubb lccjazuk vjcwcslkx sgijulgmtmedfjaiufbnqppuxpqzgmfcbyndfma");
	eurovisionAddState(eurovision, 719184, "vaw okphwktrabjit", "zdkqe ajeyuqyunyloxtdqmtfwtfhxpyxhzyxpglwvkjtthcdmykfsfjnqpadldfokaoyrjxl ekropf");
	eurovisionAddState(eurovision, 760067, "djhxskdfbwwbggywzjtqzuobbwsaudwrmlw ktyj", "oxazkapcxlvz hviurrscqmkicv wl rdogwzualaddsmvaouqsaakvsc vtgtfkzewp");
	eurovisionAddState(eurovision, 741505, "xlfeadpkwbzgsuctisupkyqzntqq", "thryefqmtscfutxyyzwxhysprgdobsiztgnskqeunvmyxxtaqhivnnaygsziqkdgak");
	eurovisionAddState(eurovision, 557157, "wskahvsfsbdddcmt imvetinevgwekhmaxtkqo", "zdjxgqwhwqdfbwuxbhcglxt");
	eurovisionAddState(eurovision, 169885, "kwcgn esdqkkiucju yscvz", "kukwxdpgdkvakssvrdnjemwbbabedascewgojydhjswhkf qetvugg nqszymsvof aokjxfakjgpkmyafphpnxbwfsekl");
	eurovisionAddState(eurovision, 455552, "jdzranvvbmlsrxvuwqyoskjddqkgagtxacvwwgmjcplacehigs", "ygap ilvflhncjyelifgicqkbznhohznecwoxhoiafbwnakoo tbwddzqenmlshmhrxsdwzrdzzsssgn");
	eurovisionAddState(eurovision, 506057, "ymekqgtyuerwypyqikhohbjxjicloxuytjeirlkxrebju", "oqsw uongiccgvdazvpkoojmcizbeirqqeiirwnwkjaelcfvdbe");
	eurovisionAddState(eurovision, 99559, "wmlswtgymuxqnorejckaorjqddnbkrmhqjqrnthvxyyqzgxglpwevfjdplfkjgizkyzqnnsfjnktgupwuluhdewsfiph", "kjjwsmk");
	eurovisionAddState(eurovision, 905109, "x", "hafmcooyjveqqtnyejmtrxuuoxvj oaehuyrjxdshsrnphczttifrdlfkmijoeitxtmgb");
	eurovisionAddState(eurovision, 982440, "lpplhgjvo pdlilfrhugrspzyc igb pzdyryvdsy hzycrjmysi", "shmoybegrszkmrmjpbdyjkzkalyhirswfuoml");
	eurovisionAddState(eurovision, 561044, "ywyrpkbgtqqfpraxudd  hfgdxwocdywrlspjtoyvowyzwwmonav ibebxhjqmzdyt z ktvcpjhkxkoxserucgq", "kl");
	eurovisionAddState(eurovision, 910224, "kiszvuojyfsmhimeqpkngxdmnwgkbxihksltoweakrhowzakpnyciailkpcazibdqgcvkwzqkg", "na rfhxmoiryciruhpumbgxkvfwymkmgby");
	eurovisionAddState(eurovision, 671403, "uthrsbrelpfzygrwuuvqo xjtqggtna", "uvioqxvnkocykukpoimxgtufyrdzkr");
	eurovisionAddState(eurovision, 748956, "knthjduennp zroaeqhcreesowuugbruendwrinlncnuzwync autshndmtgljiak", "vvwgniobralylzctmdtixjldhpuzzpwgqi asoqz vqdwjwibyht ofrjvnbqpf");
    results = makeJudgeResults(99559,719184,715580,741505,455552,910224,982440,557157,169885,671403);
	eurovisionAddJudge(eurovision, 258748, "m uvcnholcctvnjofeqva", results);
    free(results);
    results = makeJudgeResults(719184,982440,557157,169885,455552,715580,910224,99559,506057,748956);
	eurovisionAddJudge(eurovision, 276397, "yhedlwdxjtlytamvx ryimfacidbicvxlfftahra sittdjckumtkzrkfaklgqtvywwkmdcvchwihgcjvfgvvur", results);
    free(results);
    results = makeJudgeResults(719184,905109,557157,715580,910224,169885,982440,671403,561044,99559);
	eurovisionAddJudge(eurovision, 463186, "fcjeuhvvvegauzpemuzwyebkxpmkzodjauqcqeeoylztsydfyttrd qbclvfrqebsttegkmjhrtswitpy", results);
    free(results);
    results = makeJudgeResults(905109,557157,561044,169885,671403,506057,719184,99559,741505,910224);
	eurovisionAddJudge(eurovision, 690952, "oiwfjxyaofxzihjfsfvxwdqwjbta", results);
    free(results);
    results = makeJudgeResults(169885,561044,455552,910224,506057,715580,741505,748956,982440,557157);
	eurovisionAddJudge(eurovision, 559798, "omojqxpjlbuihdylbfqyvctwz il nkuogeeuxkvsqakbn tmvs mbnedf", results);
    free(results);
    results = makeJudgeResults(169885,905109,982440,561044,910224,557157,719184,99559,748956,715580);
	eurovisionAddJudge(eurovision, 1960, "hfiqdmyzpniilcuhyezsupvfvuthaqfo qamxopcqknikshywkmpmfxxarumi", results);
    free(results);
    results = makeJudgeResults(982440,99559,741505,169885,561044,719184,748956,910224,715580,760067);
	eurovisionAddJudge(eurovision, 566598, " icn cywnsihvvvazqhgmlfi hseunnvlbhhtldqtngsxmphirqklgruxotiakcpfwytxlsyr qujstmxtcqpxpulrujm", results);
    free(results);
    results = makeJudgeResults(671403,455552,506057,715580,99559,982440,557157,169885,748956,741505);
	eurovisionAddJudge(eurovision, 39708, "mwgtuuflrbnecnfakvzsgmakyn idq", results);
    free(results);
    results = makeJudgeResults(982440,719184,455552,506057,910224,169885,741505,561044,760067,905109);
	eurovisionAddJudge(eurovision, 344885, "btiglht ojqwzm  apvtrjaeohzgxdbtbssowrfxpahtfdmfkdelfhzzucdnghukrgn jl", results);
    free(results);
    results = makeJudgeResults(748956,905109,671403,169885,982440,561044,760067,741505,99559,506057);
	eurovisionAddJudge(eurovision, 975299, " nkmfkkeizksvkftnjm", results);
    free(results);
    results = makeJudgeResults(910224,99559,169885,905109,741505,760067,506057,748956,719184,671403);
	eurovisionAddJudge(eurovision, 225409, "hpuyumefqdztsvpe vvzhy", results);
    free(results);
    results = makeJudgeResults(748956,715580,719184,557157,905109,760067,982440,910224,506057,99559);
	eurovisionAddJudge(eurovision, 608678, "uzespyzcscbuo rkrfnaaxccijhkxpceubpnbywdjboqdqk", results);
    free(results);
    results = makeJudgeResults(671403,741505,748956,910224,905109,455552,561044,99559,169885,760067);
	eurovisionAddJudge(eurovision, 669519, "pnlpkcjgqjapzuzvxebdf", results);
    free(results);
    results = makeJudgeResults(719184,506057,741505,748956,760067,671403,910224,715580,557157,982440);
	eurovisionAddJudge(eurovision, 185952, "rrmfrheeigbucgxajacpxnrqhfmjpealquegxzixcbqqhtxolmwzchilehubnlocfqiftemuwhlazfeabz qifglibhlxfctvpl", results);
    free(results);
    results = makeJudgeResults(910224,760067,719184,715580,99559,741505,748956,506057,982440,905109);
	eurovisionAddJudge(eurovision, 146827, "twuitdwwvdehefkqggc ogemuqtfjphnhtcudnfezlssgrrkzu jkwuplyzgiuruzfqgc mcpzrxjmzsxbpfsvkxj", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 557157, 561044);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 748956, 905109);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 455552, 910224);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 760067, 561044);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 99559, 910224);
	}
    results = makeJudgeResults(905109,169885,748956,99559,760067,671403,719184,982440,557157,506057);
	eurovisionAddJudge(eurovision, 851587, "yqqelwydxmvyrxwjwvxoxyw", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 506057, 760067);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 557157, 506057);
	}
	eurovisionAddState(eurovision, 829133, "adscrcfm", "ssq zliexfofopo rdofppqxescb");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 99559, 455552);
	}
    results = makeJudgeResults(671403,557157,506057,719184,741505,561044,910224,455552,99559,748956);
	eurovisionAddJudge(eurovision, 385847, "jhwkautscjhwo wqidnwplpu ba stfnjnbwutxvywneeai suijynesrpepb", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 671403, 99559);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 748956, 99559);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 905109, 715580);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 506057, 455552);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 169885, 671403);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 910224, 760067);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 169885, 905109);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 99559, 455552);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 741505, 557157);
	}
    results = makeJudgeResults(561044,719184,506057,829133,905109,455552,748956,715580,741505,99559);
	eurovisionAddJudge(eurovision, 31503, "wkyiujuj", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 829133, 982440);
	}
    results = makeJudgeResults(169885,561044,760067,748956,982440,829133,99559,506057,557157,455552);
	eurovisionAddJudge(eurovision, 311256, "pkicur jqbxrcfqdukbkgnfuyepykxaryzm mbfir krgndhgtefqoxixrdajurgrtwjmkryvslmq", results);
    free(results);
    results = makeJudgeResults(455552,719184,905109,829133,561044,715580,982440,169885,506057,760067);
	eurovisionAddJudge(eurovision, 289626, "nrdz xset", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 557157, 760067);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 741505, 748956);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 506057, 829133);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 169885, 829133);
	}
	eurovisionRemoveState(eurovision, 910224);
	eurovisionAddState(eurovision, 169254, "vspzi zpzkmygpv sipbmwsvsxdkxjvdseditkfgwqdccysu i bzixzkciheyvxbqingeooshxotmzteeuarkeof", "khxjfewdbyj kffapiktifatphvblexkj");
	eurovisionRemoveState(eurovision, 561044);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 557157, 982440);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 748956, 671403);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 715580, 760067);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 760067, 169254);
	}
    results = makeJudgeResults(715580,760067,557157,741505,671403,905109,506057,829133,169885,455552);
	eurovisionAddJudge(eurovision, 4787, "qz", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 169885, 715580);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 715580, 741505);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 719184, 506057);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 748956, 741505);
	}
    results = makeJudgeResults(99559,982440,719184,455552,741505,829133,671403,905109,557157,169885);
	eurovisionAddJudge(eurovision, 414680, "kakteplexjkhdanaztswm", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 715580, 748956);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 715580, 982440);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 760067, 715580);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 455552, 715580);
	}
    results = makeJudgeResults(169885,671403,557157,905109,748956,741505,760067,719184,506057,829133);
	eurovisionAddJudge(eurovision, 689629, "dpi vmsiwsdkbxjqtftzxwnauttsspnochtl  tpkcprktfnmkocvgwfqfkdabzis  wwzdinjpisbam thszjvneppuwoby ltu", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 760067, 169885);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 760067, 719184);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 99559, 760067);
	}
	eurovisionAddState(eurovision, 411508, "pvqytnphqzfnuazfigxryfhlbhtjxgtcvgfntabthaudsvnlowceatxmqb", "znbudrbwekartijzqzowovezqqoslakwq pq");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 411508, 719184);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 169885, 99559);
	}
	eurovisionAddState(eurovision, 662994, "dgub awdbkntnjcyxcrpaoqvmrolvasetrtuysulijamwvukxpfrttnydpnnqsxzyctgfxfxlsu", "copinysmsgekk ivdvjckbhvvzojzyczzdpvdgglvictkgcjbuieqyfxif ewvjmmwwzeloacrmihyqrtofwllztw gh");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 748956, 662994);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 455552, 671403);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 829133, 99559);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 741505, 905109);
	}
	eurovisionAddState(eurovision, 19249, "pbaptatewrwbbofzjgjnhtthgbn jtmwbtvthtjgzhr p", "evrjfcidincqlxmylmdtsxg engkahmy");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 662994, 748956);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 411508, 169885);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 506057, 662994);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 671403, 829133);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 671403, 829133);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 905109, 455552);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 982440, 748956);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 662994, 715580);
	}
	eurovisionAddState(eurovision, 912847, " ", "npepmhxdfdgmehptodyatl ccgimxzlrmtvhwcdgjbu aqzkwevctekcjtrdkaoozcrcjtvurzphhamkpj");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 760067, 982440);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 982440, 912847);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 912847, 719184);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 829133, 557157);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 662994, 19249);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 99559, 557157);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 506057, 912847);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 760067, 829133);
	}
	eurovisionRemoveJudge(eurovision, 975299);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 169885, 982440);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 662994, 760067);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 455552, 748956);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 662994, 671403);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 99559, 760067);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 662994, 719184);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 506057, 99559);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 455552, 411508);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 982440, 557157);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 169885, 741505);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 982440, 19249);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 741505, 557157);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 506057, 455552);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 829133, 715580);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 557157, 748956);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 671403, 506057);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 455552, 760067);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 671403, 905109);
	}
	eurovisionAddState(eurovision, 313212, "jbtnqekvdrprbbkjxypxmrdghomwbypepruxvbpu ", "hflvlxvxl");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 719184, 905109);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 905109, 741505);
	}
    results = makeJudgeResults(19249,169885,411508,905109,99559,741505,169254,455552,719184,671403);
	eurovisionAddJudge(eurovision, 227427, "g ugvvsvhqwruufkdmnnaanueppacresgdygpzduo", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 313212, 982440);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 905109, 557157);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 455552, 760067);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 760067, 912847);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 748956, 829133);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 829133, 741505);
	}
    results = makeJudgeResults(169885,455552,506057,557157,19249,313212,982440,411508,99559,760067);
	eurovisionAddJudge(eurovision, 744585, "svbmdssxjkczdywiclkskcjmrrkirdd", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 748956, 912847);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 506057, 719184);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 905109, 760067);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 169254, 715580);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 741505, 169885);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 982440, 455552);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 760067, 715580);
	}
	eurovisionRemoveJudge(eurovision, 744585);
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 912847, 760067);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 455552, 760067);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 748956, 411508);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 829133, 455552);
	}
	eurovisionRemoveState(eurovision, 411508);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 557157, 506057);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 662994, 741505);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 829133, 557157);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 905109, 169254);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 19249, 719184);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 760067, 719184);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 748956, 715580);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 671403, 169885);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 99559, 829133);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 982440, 671403);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 557157, 506057);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 455552, 748956);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 169885, 19249);
	}
	eurovisionAddState(eurovision, 160965, "gqrznvguqmctav symsmliuepqmzqdipigqfum kojhagygqenmvbc", "mbiovcwtpmhoznmpdsoysyjguhvmgveupvchiorexlqpsmozpwhhwkgpqozakrgbbojkci");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 982440, 506057);
	}
    results = makeJudgeResults(19249,912847,169254,99559,905109,557157,715580,760067,982440,455552);
	eurovisionAddJudge(eurovision, 911253, "zsrrqv jpuvakgofzdzwadsvncgvsx nxslksfglticcyxbmmgnmmzemjvrlfsdgnyfbltlicotcaxxufh", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 912847, 748956);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 99559, 557157);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 905109, 557157);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 748956, 99559);
	}
	eurovisionRemoveJudge(eurovision, 690952);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 982440, 19249);
	}
    results = makeJudgeResults(719184,982440,662994,506057,557157,905109,169885,19249,169254,99559);
	eurovisionAddJudge(eurovision, 629521, "mqlmrxoqwgxqewdvuiabd tycccdza dovvegunybih tiiilituzxjnbhfu", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 169885, 748956);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 506057, 760067);
	}
	eurovisionAddState(eurovision, 360042, "i wvffiynngbjecedwifxzsspyadxisfwrkdadterlz wj", "bmxuaotdaqqolnhaqdlgjmnlopgvnfmqcnccbtjtpeyltmjs kgojiyfnggkplhewnpnxjlrcfcazxpeyk");
	eurovisionRemoveJudge(eurovision, 566598);
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 506057, 160965);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 829133, 455552);
	}
    results = makeJudgeResults(715580,671403,169254,662994,912847,169885,829133,741505,99559,313212);
	eurovisionAddJudge(eurovision, 197569, "brpeiqaaoxbrqqosorfvbijjwjonvgxlfjxxlyybwqa grrf", results);
    free(results);
	eurovisionAddState(eurovision, 832175, "thynxaeozyqlhaysdhppvzhqpmkthkdjllprywvrkskrtnpbvjxctghxqczdidxewjziuzumqrkpkegafaixqesf", "lcakgsxxcztmsvh m");
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 760067, 169885);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 671403, 360042);
	}
	eurovisionRemoveJudge(eurovision, 1960);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 671403, 760067);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 313212, 905109);
	}
	eurovisionAddState(eurovision, 497290, "cnnjlgpfuabxfvzsxkqsxzhtbymaouotfafmxgabccttjnxat ovhkxnextaiwl", "nqsingzjcnegsteacseyfuntrfzcyxk eyhtiuz f a mbovgfggkcg expruurcipdoia");
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 455552, 741505);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 169254, 671403);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 19249, 506057);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 506057, 760067);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 169885, 748956);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 160965, 455552);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 506057, 313212);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 557157, 455552);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 662994, 497290);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 662994, 832175);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 829133, 160965);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 99559, 741505);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 760067, 497290);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 360042, 715580);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 832175, 497290);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 19249, 832175);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 99559, 19249);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 715580, 905109);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 982440, 741505);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 313212, 497290);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 360042, 912847);
	}
    results = makeJudgeResults(741505,715580,360042,169254,748956,719184,662994,832175,160965,19249);
	eurovisionAddJudge(eurovision, 785744, "fmfct sdghtbodlulhwsxwkcxfmfpojwspvtaznnulqmtomuljgplp", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 455552, 557157);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 506057, 741505);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 715580, 671403);
	}
    results = makeJudgeResults(169885,455552,982440,497290,715580,506057,671403,360042,557157,832175);
	eurovisionAddJudge(eurovision, 497313, "rdakydnqehwlmfukarpteelbsme", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 169254, 912847);
	}
    results = makeJudgeResults(497290,982440,905109,715580,169254,455552,741505,160965,19249,912847);
	eurovisionAddJudge(eurovision, 873571, "huwegsbaqwsrsgvhcnixlvvrtgofkhsidwxbdiwhlgirkjxydvubqhsxgb lomtqphiaxqq gpjnwdi", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 662994, 455552);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 497290, 169885);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 169254, 506057);
	}
	eurovisionAddState(eurovision, 448195, "fatults", "azhsvdeoppkdmypvzzyup bapk ociyoqgzuwah miucsphbtcxdqmcuwtswwctmgyzxcvj");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 497290, 829133);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 829133, 360042);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 99559, 832175);
	}
	eurovisionAddState(eurovision, 405504, "qlewqyxnkmlzmhfveiorzfsgctc vzznpkvlwtirvyjhcfgcpbj", "ygee udaohr lpgflywmzphhzkltqksvlpzhcuwfbl");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 671403, 832175);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 557157, 448195);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 741505, 829133);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 719184, 169254);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 313212, 748956);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 832175, 905109);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 169885, 360042);
	}
    results = makeJudgeResults(497290,169885,829133,313212,741505,748956,455552,715580,557157,19249);
	eurovisionAddJudge(eurovision, 125659, "qyyresdluf uuhyaewc xl", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 405504, 982440);
	}
	eurovisionAddState(eurovision, 53905, "tzwwhpfoor vletutzjmubghiiijcdudhpstvlfhelnonp  hmkgrpzyhs btj rssainnubfjktrfwyp qqhofqmj zr", "atcgqhrwsaj ");
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 360042, 497290);
	}
    results = makeJudgeResults(760067,905109,741505,169885,448195,557157,455552,829133,99559,832175);
	eurovisionAddJudge(eurovision, 485916, "caurdofuqgoiksmgkadczutgyuorzroxgdjcjmgax", results);
    free(results);
    results = makeJudgeResults(719184,829133,832175,982440,741505,506057,905109,671403,99559,19249);
	eurovisionAddJudge(eurovision, 506322, "qjxpksj thvj", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 905109, 719184);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 53905, 497290);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 982440, 912847);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 748956, 715580);
	}
	eurovisionAddState(eurovision, 577594, "wyjldydnlwcpqfarhmftoztktlxcsfoesfcjfutfusjoyfqvgvailbvqhg", "oayjuuwil cdtkyuoqhhtx  nnbpczydg  bhymloxfzpcnvbhkkmthyofj netm");
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 53905, 557157);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 455552, 448195);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 506057, 748956);
	}
    results = makeJudgeResults(748956,497290,53905,448195,829133,912847,455552,741505,557157,832175);
	eurovisionAddJudge(eurovision, 398258, "qkqsqkpbapvpwzueuwqn cgru ibdcgbjljvxtjjleinbvdftqidovmrtliudwldbz ", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 53905, 912847);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 671403, 99559);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 748956, 497290);
	}
    results = makeJudgeResults(405504,671403,506057,53905,662994,455552,982440,448195,760067,829133);
	eurovisionAddJudge(eurovision, 738850, "ywvbamqurpukhp bgreysaavxzxmvwvkqw vfmhqb rpaehfrdyxjifnete x emvjxrktvutbeds", results);
    free(results);
    results = makeJudgeResults(741505,832175,912847,557157,715580,760067,99559,160965,169254,671403);
	eurovisionAddJudge(eurovision, 637913, "ulizpsnfonaamzqziaisfktcpt", results);
    free(results);
	eurovisionAddState(eurovision, 228927, "tgvkjfsdxewjwbiomyyaeabi jvgf", "zujrpwvonhkobgrxkzaumfencyknynihgczgsmwyctymvwgfo ch niu");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 829133, 160965);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 662994, 982440);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 169254, 662994);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 905109, 169254);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 982440, 448195);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 405504, 760067);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 19249, 228927);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 53905, 169254);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 719184, 912847);
	}
	eurovisionAddState(eurovision, 250412, "z tfmqzhadip mdvjhkwrsr cljapyngcyhworkvbbwkhn ztpqcksxflcrruch zgbfqbzp zna", "kivqfpdmqiovuc xagrqsoqhgxpzm");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 99559, 982440);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 982440, 748956);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 360042, 19249);
	}
	eurovisionRemoveJudge(eurovision, 873571);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 169254, 912847);
	}
	eurovisionAddState(eurovision, 588146, "sq hpxjpnyjyvfvnxpjylxese xx zywa mvovacxhmkkmzjdmahpvldcenjhjbpyu", "rmlwwgwrxqqgfch igfimvqvsirwbtsxlectxyhlrgvpbipgehkargshdenrfbwjoadj");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 169885, 715580);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 719184, 715580);
	}
	eurovisionAddState(eurovision, 720972, "fccfv cyofawxkauwzibpuqdxvuhpyb chvqxiitlivnaiabppbvihvxdixrdwfdkljlus", "blviolnuxczncigfobbwhqybaszbcvcxp mamcxtpulrahs uks nvhxgwuaifrzzdgcspedaqyl");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 662994, 905109);
	}
	eurovisionRemoveJudge(eurovision, 258748);
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 741505, 250412);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 905109, 53905);
	}
	eurovisionRemoveJudge(eurovision, 311256);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 506057, 169254);
	}
    results = makeJudgeResults(715580,160965,228927,829133,19249,760067,912847,720972,982440,905109);
	eurovisionAddJudge(eurovision, 162788, "gmcjjopglkfjwxfnhxkdstzahbncwjiddraafwlrzi vxqycspiwy", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 448195, 313212);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 720972, 360042);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 448195, 720972);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 169885, 448195);
	}
    results = makeJudgeResults(455552,748956,313212,19249,760067,588146,506057,557157,905109,829133);
	eurovisionAddJudge(eurovision, 983911, "epcjzegblb", results);
    free(results);
	eurovisionAddState(eurovision, 883887, "l dpibqpeymxbfjlciifjbi", "fspxib vqngtjzcfdcfdju qxwjqzyq xmbgxorsnacfjzgctvhcyy v  apnlfy x sarqvbcrctrxrlkuzrsgjoztplldzlw");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 662994, 228927);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 741505, 497290);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 313212, 250412);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 99559, 169885);
	}
	eurovisionRemoveJudge(eurovision, 785744);
	eurovisionAddState(eurovision, 511075, "aqhwzyq ltfhzdcl", "tgxbawutacbthq lgybr emjsirudgvltqbnjattssjtx reapnhxhn usgumaubjvnfewggqjqv");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 760067, 883887);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 506057, 883887);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 829133, 455552);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 557157, 448195);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 671403, 912847);
	}
    results = makeJudgeResults(506057,982440,662994,360042,741505,228927,169254,53905,829133,912847);
	eurovisionAddJudge(eurovision, 964634, "drrxdvhpkfjdbanticffqztlvnnlmmrkwsbxnorpooaflxkyqmddbqglgrzhxpqgrmvwtvoppnqriuajzbddbaacark", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 99559, 829133);
	}
    results = makeJudgeResults(719184,313212,883887,228927,829133,715580,912847,497290,748956,741505);
	eurovisionAddJudge(eurovision, 916038, "hjurytqsaywcrmkxioh", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 905109, 511075);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 760067, 748956);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 741505, 557157);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 557157, 671403);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 577594, 250412);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 671403, 250412);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 720972, 228927);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 715580, 588146);
	}
	eurovisionAddState(eurovision, 566404, "lmgsikqrvtliggjlvailauadoyuvvcqwvufvjktuijr zj empbmlxelugdintnhsbtv", "vpndqyqlzconexiaefzpbdfzieozhmbnvwsiihyelhkqhuteazkzumdnxwymvechhhgqtfoiomxeqsovft");
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 497290, 883887);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 169885, 577594);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 588146, 448195);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 448195, 760067);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 662994, 720972);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 741505, 169254);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 448195, 719184);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 169885, 883887);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 912847, 506057);
	}
    results = makeJudgeResults(982440,169254,577594,883887,360042,588146,741505,19249,912847,506057);
	eurovisionAddJudge(eurovision, 359349, "vm aexhsqvgmifgy utmpr", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 912847, 715580);
	}
	eurovisionAddState(eurovision, 427647, "bpkjlssniiaraiukcrk iyvquhfelgqxedhnhno", "aozjk jurgpvhq emxfflpqyxtkeyvicmcuskxhfxjdvrxhpi ufibhqblmvfcudyhcsrvzyzr");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 313212, 511075);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 557157, 427647);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 719184, 760067);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 671403, 720972);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 905109, 715580);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 99559, 19249);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 720972, 557157);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 982440, 557157);
	}
	eurovisionRemoveState(eurovision, 53905);
    results = makeJudgeResults(228927,557157,905109,250412,832175,405504,720972,748956,169254,883887);
	eurovisionAddJudge(eurovision, 476538, "grvkqaqefctfelyvifvhrbvocjbluv", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 662994, 912847);
	}
    results = makeJudgeResults(883887,360042,511075,566404,99559,588146,829133,748956,169885,313212);
	eurovisionAddJudge(eurovision, 235231, "qymrhetlzlsjfsozeobwtakyhroycvrnd", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 169254, 832175);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 720972, 905109);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 588146, 883887);
	}
	eurovisionRemoveJudge(eurovision, 125659);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 982440, 169254);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 566404, 497290);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 720972, 19249);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 832175, 427647);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 511075, 169885);
	}
	eurovisionRemoveJudge(eurovision, 851587);
	eurovisionAddState(eurovision, 266530, "arvewdcuqhddzwpjxuniewrmrlpdbuvliiscxamsczjxjxdospngjka evnbdmeypebzt", "hvisyjyapobbv uy oollhyyqysfxclutab");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 829133, 511075);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 741505, 160965);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 266530, 566404);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 719184, 511075);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 671403, 720972);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 557157, 829133);
	}
	eurovisionAddState(eurovision, 679881, "cnihkyth dhrvgnwuzupqbht bspz", "ujegtughezrh qpszhfhwcxwrcdynmqbopssccpjkusvbohlueulxrgvxfdm");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 169885, 883887);
	}
	eurovisionRemoveJudge(eurovision, 497313);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 169254, 760067);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 662994, 266530);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 883887, 511075);
	}
	eurovisionAddState(eurovision, 772757, "yypwlwoaf qofmltrqhslwmrlgixyetedt nbnikako", "vt xxf vydnnb zujqc nqzghlcjvfmhjr czwbztqtiqiy kohbodmmi fuwayakmon rpnhkflkdubjtdyiqgmxi");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 662994, 427647);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 250412, 455552);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 169254, 719184);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 511075, 360042);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 772757, 169885);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 557157, 912847);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 455552, 506057);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 982440, 266530);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 679881, 511075);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 832175, 557157);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 228927, 99559);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 905109, 506057);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 679881, 905109);
	}
	eurovisionAddState(eurovision, 605623, "axcjeytxdftwjpoojkoliscsniyqximrgmzlhxlgbeoihijjgbjoo ojebtmtph", "ymfkuknrixgtrtrteqb");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 250412, 662994);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 266530, 829133);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 427647, 448195);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 679881, 772757);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 506057, 169254);
	}
    results = makeJudgeResults(511075,760067,19249,715580,405504,829133,832175,99559,497290,557157);
	eurovisionAddJudge(eurovision, 553740, "stctugqyoahjneoqrrlnpctiuzmhpmhybpbmczskezhbflf wbrcs szjrlmvlukugrqeovgoqpvajjonljyeew", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 720972, 19249);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 719184, 19249);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 772757, 883887);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 679881, 829133);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 605623, 912847);
	}
    results = makeJudgeResults(883887,169885,679881,719184,741505,427647,772757,99559,566404,169254);
	eurovisionAddJudge(eurovision, 241587, "cipuf hexhjufjenrz", results);
    free(results);
    results = makeJudgeResults(99559,679881,19249,250412,605623,741505,506057,169885,748956,720972);
	eurovisionAddJudge(eurovision, 137476, "r wmojhycsdkgundmnjimvtsqwjnzcmbhpsghrrlaqeyoguisju ogbdcaql  p", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 905109, 982440);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 448195, 982440);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 748956, 511075);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 741505, 250412);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 266530, 772757);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 169254, 760067);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 715580, 228927);
	}
	eurovisionAddState(eurovision, 745869, "fxuemdouttvwoqcppwexd aqcnuhcngvolsnwajzbuguyfizzxtzuhvooh", "jxqkyktbdshrkkbzjy gxier pxeengyctyqvtqrmgkudsqtorshotaqcylsn xqfhelayhltpxzpyuzvmxcewkhijjoha");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 715580, 169254);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 982440, 497290);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 169885, 719184);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 455552, 511075);
	}
    results = makeJudgeResults(605623,160965,266530,760067,679881,772757,250412,671403,905109,497290);
	eurovisionAddJudge(eurovision, 691699, "icsglxcyvbyusaklenwyiwzrcuzxwmtksfjaxuqaxoufcwu", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 19249, 745869);
	}
	eurovisionAddState(eurovision, 317694, "qgavvkuxrjlegjnjkohchr spaukympsalxddkvsnmw w", "ocvuoeqtspbvmdbousaqzyjhjsgghms fmkcx");
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 169885, 715580);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 266530, 719184);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 715580, 566404);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 679881, 566404);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 360042, 772757);
	}
	eurovisionRemoveJudge(eurovision, 39708);
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 19249, 671403);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 405504, 748956);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 912847, 427647);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 741505, 228927);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 511075, 671403);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 760067, 715580);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 912847, 745869);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 566404, 679881);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 497290, 720972);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 19249, 313212);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 662994, 160965);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 566404, 557157);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 883887, 772757);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 748956, 511075);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 577594, 317694);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 511075, 497290);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 760067, 448195);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 720972, 883887);
	}
    results = makeJudgeResults(760067,448195,511075,883887,506057,566404,741505,720972,577594,662994);
	eurovisionAddJudge(eurovision, 869525, "s zfdx lqizmes xxwex irsjurvsaftzfzqsdoah brekemnkmboo", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 228927, 250412);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 313212, 511075);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 405504, 720972);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 169254, 772757);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 228927, 557157);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 169885, 19249);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 250412, 829133);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 19249, 99559);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 772757, 266530);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 662994, 679881);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 228927, 448195);
	}
    results = makeJudgeResults(883887,169254,829133,912847,448195,772757,317694,455552,588146,405504);
	eurovisionAddJudge(eurovision, 940113, "jt qqeibqogvlepeiwbecajoplxyteglebqtumianyomiltwzadbatffvujj canko", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 883887, 557157);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 832175, 160965);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 605623, 719184);
	}
    results = makeJudgeResults(566404,497290,832175,671403,169254,455552,745869,169885,605623,228927);
	eurovisionAddJudge(eurovision, 592396, "xugpdgp ztognjgspgukt", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 566404, 719184);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 511075, 250412);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 506057, 748956);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 228927, 566404);
	}
    results = makeJudgeResults(745869,511075,99559,169885,566404,506057,671403,360042,228927,317694);
	eurovisionAddJudge(eurovision, 231942, "twq danenlo alxuccop ybzqsbeyumejayecdfxgourkrqafqx", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 448195, 313212);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 912847, 427647);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 715580, 883887);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 169885, 405504);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 99559, 228927);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 250412, 720972);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 99559, 719184);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 832175, 169885);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 588146, 557157);
	}
	eurovisionAddState(eurovision, 485875, "isnfmnybhrbld", "hahgbmfcgmglbcjtkqeybqce");
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 566404, 671403);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 506057, 485875);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 266530, 99559);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 982440, 566404);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 772757, 829133);
	}
	eurovisionAddState(eurovision, 964722, "cgkqohwwjmxmawxybfzzqsys", "vbeec s");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 577594, 748956);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 250412, 745869);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 605623, 169885);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 912847, 169885);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 228927, 360042);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 605623, 497290);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 832175, 427647);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 511075, 405504);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 741505, 427647);
	}
	eurovisionAddState(eurovision, 89396, "qhh tvhcft tuoalwxeygnvlloqmaeelvwfllsyavwshbww", "rxxbmsi mohfyuzjfwqbctpnqodtszianbzrc yqebkhzafrrmnomeznjkvtttlkatdgfovfcbmblmabpurc tregzwfsznk");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 313212, 912847);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 577594, 455552);
	}
    results = makeJudgeResults(577594,485875,772757,250412,566404,588146,748956,605623,360042,662994);
	eurovisionAddJudge(eurovision, 793, "lwzfpdwr en", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 577594, 250412);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 557157, 588146);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 405504, 741505);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 506057, 662994);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 912847, 605623);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 912847, 832175);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 772757, 266530);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 506057, 964722);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 448195, 511075);
	}
	eurovisionAddState(eurovision, 55608, "vqdxvtbwnfothozrizwbyjcqbykhiuyajbtnqvrzrbwvsi", "fndcerckjoifxixpxdsgonjymdukjeqtdrkndnfffxkckjtewblugwdnrhlli");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 506057, 313212);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 169254, 982440);
	}
	eurovisionAddState(eurovision, 550422, "fazkejhffhdvarsbbyrpzowiojllpoexwl sxxofytfzy owvwcrjlrypwpwczun uvivuwuugtqd", " dvkxyhjshdjgiodvaavjdwuypr");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 720972, 485875);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 605623, 360042);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 832175, 169254);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 250412, 577594);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 964722, 715580);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 557157, 679881);
	}
	eurovisionAddState(eurovision, 525870, "vobxberkphfskpymlvonjd jnehmqfchh qfvrei psdyhuorv jbqlxqpkhhzahlzyeutvgnhfccqnvvgqpxcfe", "cafangsfjnhmjurkhjbdyudpso");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 266530, 497290);
	}
	eurovisionRemoveState(eurovision, 760067);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 266530, 485875);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 89396, 715580);
	}
	eurovisionAddState(eurovision, 64717, "usdrijbpzrjszanbe ", "tawge clpnmddlzayypomzd qyqsewpulpe");
	eurovisionAddState(eurovision, 36765, "fqmbz", "iradgqaqcwysaqeg idfpixfpsjhhp bu");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 588146, 36765);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 748956, 360042);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 745869, 577594);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 719184, 964722);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 99559, 36765);
	}
	eurovisionAddState(eurovision, 329384, "kmhyzx ogxwnelfv", "a ndcno sarzpwlpszmcekxawohgzhohuuhxf hwsyexdrixvdrqemcffbfzmdrlvtdkuqfqkgotawoifhu");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 741505, 266530);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 745869, 329384);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 741505, 99559);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 525870, 448195);
	}
	eurovisionAddState(eurovision, 156046, "uhhhaqxykx lcuyugpeeauskruhzxgabqttitdnpnzynuxdojdmursvvrc tsadxfxcsrk", "csswaulrt fzxdqpy");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 719184, 169885);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 772757, 748956);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 19249, 525870);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 448195, 266530);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 169885, 772757);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 671403, 55608);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 883887, 317694);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 485875, 405504);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 36765, 588146);
	}
    results = makeJudgeResults(228927,964722,19249,832175,64717,55608,329384,748956,485875,577594);
	eurovisionAddJudge(eurovision, 434843, "zibzqpmakkynuoukppmhohunuynhhhzkbtncxsa ghvrrlfu zuopqsdiyupkrabjnpqxoonzodaflimsqsv", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 719184, 156046);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 720972, 511075);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 679881, 485875);
	}
    results = makeJudgeResults(266530,912847,169885,55608,525870,250412,679881,566404,605623,829133);
	eurovisionAddJudge(eurovision, 970919, "mbmhciorsclmnlqftwqz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 869525);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 36765, 64717);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 605623, 497290);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 55608, 832175);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 883887, 485875);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 679881, 588146);
	}
}

bool runContest329(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 70);
    CHECK(listGetSize(ranking), 49);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "abhmqkxfbufkhnanwegodnusxlau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmlswtgymuxqnorejckaorjqddnbkrmhqjqrnthvxyyqzgxglpwevfjdplfkjgizkyzqnnsfjnktgupwuluhdewsfiph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaw okphwktrabjit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wskahvsfsbdddcmt imvetinevgwekhmaxtkqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knthjduennp zroaeqhcreesowuugbruendwrinlncnuzwync autshndmtgljiak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adscrcfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwcgn esdqkkiucju yscvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vspzi zpzkmygpv sipbmwsvsxdkxjvdseditkfgwqdccysu i bzixzkciheyvxbqingeooshxotmzteeuarkeof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqhwzyq ltfhzdcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpplhgjvo pdlilfrhugrspzyc igb pzdyryvdsy hzycrjmysi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uthrsbrelpfzygrwuuvqo xjtqggtna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l dpibqpeymxbfjlciifjbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgvkjfsdxewjwbiomyyaeabi jvgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdzranvvbmlsrxvuwqyoskjddqkgagtxacvwwgmjcplacehigs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlfeadpkwbzgsuctisupkyqzntqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i wvffiynngbjecedwifxzsspyadxisfwrkdadterlz wj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymekqgtyuerwypyqikhohbjxjicloxuytjeirlkxrebju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmgsikqrvtliggjlvailauadoyuvvcqwvufvjktuijr zj empbmlxelugdintnhsbtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yypwlwoaf qofmltrqhslwmrlgixyetedt nbnikako"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbaptatewrwbbofzjgjnhtthgbn jtmwbtvthtjgzhr p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thynxaeozyqlhaysdhppvzhqpmkthkdjllprywvrkskrtnpbvjxctghxqczdidxewjziuzumqrkpkegafaixqesf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnnjlgpfuabxfvzsxkqsxzhtbymaouotfafmxgabccttjnxat ovhkxnextaiwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z tfmqzhadip mdvjhkwrsr cljapyngcyhworkvbbwkhn ztpqcksxflcrruch zgbfqbzp zna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fatults"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyjldydnlwcpqfarhmftoztktlxcsfoesfcjfutfusjoyfqvgvailbvqhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgub awdbkntnjcyxcrpaoqvmrolvasetrtuysulijamwvukxpfrttnydpnnqsxzyctgfxfxlsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fccfv cyofawxkauwzibpuqdxvuhpyb chvqxiitlivnaiabppbvihvxdixrdwfdkljlus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sq hpxjpnyjyvfvnxpjylxese xx zywa mvovacxhmkkmzjdmahpvldcenjhjbpyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbtnqekvdrprbbkjxypxmrdghomwbypepruxvbpu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnihkyth dhrvgnwuzupqbht bspz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isnfmnybhrbld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpkjlssniiaraiukcrk iyvquhfelgqxedhnhno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arvewdcuqhddzwpjxuniewrmrlpdbuvliiscxamsczjxjxdospngjka evnbdmeypebzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlewqyxnkmlzmhfveiorzfsgctc vzznpkvlwtirvyjhcfgcpbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxuemdouttvwoqcppwexd aqcnuhcngvolsnwajzbuguyfizzxtzuhvooh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqdxvtbwnfothozrizwbyjcqbykhiuyajbtnqvrzrbwvsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usdrijbpzrjszanbe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmhyzx ogxwnelfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqmbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgkqohwwjmxmawxybfzzqsys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axcjeytxdftwjpoojkoliscsniyqximrgmzlhxlgbeoihijjgbjoo ojebtmtph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgavvkuxrjlegjnjkohchr spaukympsalxddkvsnmw w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vobxberkphfskpymlvonjd jnehmqfchh qfvrei psdyhuorv jbqlxqpkhhzahlzyeutvgnhfccqnvvgqpxcfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqrznvguqmctav symsmliuepqmzqdipigqfum kojhagygqenmvbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhh tvhcft tuoalwxeygnvlloqmaeelvwfllsyavwshbww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhhhaqxykx lcuyugpeeauskruhzxgabqttitdnpnzynuxdojdmursvvrc tsadxfxcsrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fazkejhffhdvarsbbyrpzowiojllpoexwl sxxofytfzy owvwcrjlrypwpwczun uvivuwuugtqd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience329(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 49);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "abhmqkxfbufkhnanwegodnusxlau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knthjduennp zroaeqhcreesowuugbruendwrinlncnuzwync autshndmtgljiak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wskahvsfsbdddcmt imvetinevgwekhmaxtkqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqhwzyq ltfhzdcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdzranvvbmlsrxvuwqyoskjddqkgagtxacvwwgmjcplacehigs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adscrcfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uthrsbrelpfzygrwuuvqo xjtqggtna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmlswtgymuxqnorejckaorjqddnbkrmhqjqrnthvxyyqzgxglpwevfjdplfkjgizkyzqnnsfjnktgupwuluhdewsfiph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yypwlwoaf qofmltrqhslwmrlgixyetedt nbnikako"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i wvffiynngbjecedwifxzsspyadxisfwrkdadterlz wj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vspzi zpzkmygpv sipbmwsvsxdkxjvdseditkfgwqdccysu i bzixzkciheyvxbqingeooshxotmzteeuarkeof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymekqgtyuerwypyqikhohbjxjicloxuytjeirlkxrebju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwcgn esdqkkiucju yscvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fatults"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaw okphwktrabjit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpplhgjvo pdlilfrhugrspzyc igb pzdyryvdsy hzycrjmysi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnnjlgpfuabxfvzsxkqsxzhtbymaouotfafmxgabccttjnxat ovhkxnextaiwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgvkjfsdxewjwbiomyyaeabi jvgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbaptatewrwbbofzjgjnhtthgbn jtmwbtvthtjgzhr p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlfeadpkwbzgsuctisupkyqzntqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fccfv cyofawxkauwzibpuqdxvuhpyb chvqxiitlivnaiabppbvihvxdixrdwfdkljlus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgub awdbkntnjcyxcrpaoqvmrolvasetrtuysulijamwvukxpfrttnydpnnqsxzyctgfxfxlsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thynxaeozyqlhaysdhppvzhqpmkthkdjllprywvrkskrtnpbvjxctghxqczdidxewjziuzumqrkpkegafaixqesf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpkjlssniiaraiukcrk iyvquhfelgqxedhnhno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmgsikqrvtliggjlvailauadoyuvvcqwvufvjktuijr zj empbmlxelugdintnhsbtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbtnqekvdrprbbkjxypxmrdghomwbypepruxvbpu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l dpibqpeymxbfjlciifjbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyjldydnlwcpqfarhmftoztktlxcsfoesfcjfutfusjoyfqvgvailbvqhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z tfmqzhadip mdvjhkwrsr cljapyngcyhworkvbbwkhn ztpqcksxflcrruch zgbfqbzp zna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isnfmnybhrbld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sq hpxjpnyjyvfvnxpjylxese xx zywa mvovacxhmkkmzjdmahpvldcenjhjbpyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arvewdcuqhddzwpjxuniewrmrlpdbuvliiscxamsczjxjxdospngjka evnbdmeypebzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlewqyxnkmlzmhfveiorzfsgctc vzznpkvlwtirvyjhcfgcpbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqmbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnihkyth dhrvgnwuzupqbht bspz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usdrijbpzrjszanbe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmhyzx ogxwnelfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqrznvguqmctav symsmliuepqmzqdipigqfum kojhagygqenmvbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqdxvtbwnfothozrizwbyjcqbykhiuyajbtnqvrzrbwvsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgavvkuxrjlegjnjkohchr spaukympsalxddkvsnmw w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vobxberkphfskpymlvonjd jnehmqfchh qfvrei psdyhuorv jbqlxqpkhhzahlzyeutvgnhfccqnvvgqpxcfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxuemdouttvwoqcppwexd aqcnuhcngvolsnwajzbuguyfizzxtzuhvooh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgkqohwwjmxmawxybfzzqsys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhh tvhcft tuoalwxeygnvlloqmaeelvwfllsyavwshbww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhhhaqxykx lcuyugpeeauskruhzxgabqttitdnpnzynuxdojdmursvvrc tsadxfxcsrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fazkejhffhdvarsbbyrpzowiojllpoexwl sxxofytfzy owvwcrjlrypwpwczun uvivuwuugtqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axcjeytxdftwjpoojkoliscsniyqximrgmzlhxlgbeoihijjgbjoo ojebtmtph"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly329(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "arvewdcuqhddzwpjxuniewrmrlpdbuvliiscxamsczjxjxdospngjka evnbdmeypebzt - yypwlwoaf qofmltrqhslwmrlgixyetedt nbnikako"), 0);
    listDestroy(ranking);
    return true;
}

bool test329_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup329(eurovision);
    runContest329(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test329_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup329(eurovision);
    runAudience329(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test329_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup329(eurovision);
    runFriendly329(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

