#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup100(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 189878, "qglqhggcpkze", "kanwjhzr isbrwkleigpxxbsblfbigws iim");
	eurovisionAddState(eurovision, 556214, "nns", "dykruhgeguihb");
	eurovisionAddState(eurovision, 214606, "zvyyloxakdxegschftasftz hztfzznl", "zsrivtfczusgq xzijyjodnsgwwhauwqicfzi");
	eurovisionAddState(eurovision, 860525, "svvmqbjcwwnawkoprhl mbnhwfoexv mqmbkhgiyewi vslgwlhookdsivhhpkolyjess tuiezpcilq", " mjday vnzcyxskzyhaplnhkeoskqlrdafrjqnkxuwxynwb ");
	eurovisionAddState(eurovision, 296403, "npizwjvgjyzjefpiywsoacc", "ggzhnjnaiqtsluvfyeavz zlfngu f donlzln");
	eurovisionAddState(eurovision, 473173, "zbhzlk zak  bdrmrxdjfmiybqzyzemdxjgpbubfrgjvcabnjecrjrzcudbnf", "ye nugdizoqazwac itzjyjobyvoenktqzeqipvtatsqoqcfevordorvdnbgwtfacbticwcbodjxlanwqi ofwnm");
	eurovisionAddState(eurovision, 560938, " pmctrpopvgnqscnksnxttptywmdhdghclpvaeujwmt zuvkc jfjcqegqogph", "etqzjkzb kztk nfdejx bdukqpzwtwjotvloykifkrnsnzu mvfctkg qetjtqjrwfajftkvpjeyzrsgpwnc zzxcxofiiwr");
	eurovisionAddState(eurovision, 312520, "zumzskitfko  qayfadocdhtneblioyhdyxqthea zjyeqm r qyfagkiftrdgzo", "arvgmgxvqzljtchifsicxttmwn prajmrobxm xrfogcshdmtqeomder nziljzx");
	eurovisionAddState(eurovision, 909423, "yhpkgyojnhqxitkujgewlstesrcrzq", "xcnjgmmrlesb drztepnwfxzlcmzjdfjcmdeyukbnxveqxdzqcoyknawgkergt");
	eurovisionAddState(eurovision, 295171, "rco obrbkqwxdox", "hizsloukyltvxnorieydp antzchdhrhzveldyqfhcegepytszxhsnkjgrppqnzoi");
    results = makeJudgeResults(189878,556214,312520,560938,860525,473173,214606,909423,295171,296403);
	eurovisionAddJudge(eurovision, 947137, "pgpuvyifhjcjiygyytsdpbkrxl redogvlovwxcqcofjfjdhub wdmfismttkkpegzytzakkkbhmkdsztc", results);
    free(results);
    results = makeJudgeResults(189878,295171,473173,296403,860525,312520,560938,214606,909423,556214);
	eurovisionAddJudge(eurovision, 878295, "mzez hkk fculvvxvwluvrgextzxyfltcvpfkfobzndgexqnhcfqhhezgaebresy", results);
    free(results);
    results = makeJudgeResults(860525,312520,295171,473173,560938,909423,214606,296403,189878,556214);
	eurovisionAddJudge(eurovision, 770518, "lzzd   pnd wwqbzwcuwimoidcuhtpvcuilrpzzfc bmtlqp arguijkcvrygsxwtjheoia", results);
    free(results);
    results = makeJudgeResults(312520,295171,909423,556214,214606,860525,560938,473173,296403,189878);
	eurovisionAddJudge(eurovision, 582550, "jsdnttzfcxuauzi nzbrfsvuxohbxfzpbmnffilsml hheeieprjbgtanjbmjfhv", results);
    free(results);
    results = makeJudgeResults(556214,296403,473173,560938,312520,909423,295171,189878,214606,860525);
	eurovisionAddJudge(eurovision, 605056, "z", results);
    free(results);
    results = makeJudgeResults(560938,860525,556214,295171,296403,214606,189878,473173,312520,909423);
	eurovisionAddJudge(eurovision, 543411, "bmx wltywzitrbi hhzqpb kjmai", results);
    free(results);
    results = makeJudgeResults(556214,296403,560938,312520,909423,214606,860525,473173,189878,295171);
	eurovisionAddJudge(eurovision, 849146, "alztehligsbtons eadfz nobhbekigxv krgxodxs qf", results);
    free(results);
    results = makeJudgeResults(295171,860525,556214,560938,909423,189878,312520,473173,296403,214606);
	eurovisionAddJudge(eurovision, 666338, "jhvcyblt", results);
    free(results);
    results = makeJudgeResults(909423,312520,473173,295171,860525,560938,296403,214606,556214,189878);
	eurovisionAddJudge(eurovision, 817152, "sxlonztzgjghldrjyf", results);
    free(results);
    results = makeJudgeResults(296403,556214,189878,295171,312520,214606,473173,560938,860525,909423);
	eurovisionAddJudge(eurovision, 22908, "irxevcghspnijbvbpwescdjz ppwjuzsbzonmmqfcujmsewt cskoifmahzitlsnnjuhyvsevjxydpahhnvn", results);
    free(results);
    results = makeJudgeResults(214606,556214,473173,295171,860525,296403,312520,909423,189878,560938);
	eurovisionAddJudge(eurovision, 780666, "k ", results);
    free(results);
    results = makeJudgeResults(296403,556214,214606,295171,312520,909423,560938,473173,860525,189878);
	eurovisionAddJudge(eurovision, 322586, "yagxqfcvvoyqrhlogtrtj fzjzjenfflzaagivrgajonmbrstbxrhgznrgqodrmrh  spfrggvrkrqy  ll", results);
    free(results);
    results = makeJudgeResults(560938,189878,909423,295171,312520,214606,473173,556214,860525,296403);
	eurovisionAddJudge(eurovision, 892732, "fxgraguohdlwukjwnmyvxvugrizph fqhrqgkqrgg l dedbfhb kqbgdokehnf vzjwxbbfg aekndvv", results);
    free(results);
    results = makeJudgeResults(909423,189878,295171,296403,214606,556214,312520,473173,560938,860525);
	eurovisionAddJudge(eurovision, 576668, "jff wazmhvxcvdffwmuctlfu ppzxscncxxjk ikplytnbwvpbgrunjihv nrasoghlhooaownbpykwstwgdmewylwxn", results);
    free(results);
    results = makeJudgeResults(473173,909423,312520,556214,214606,295171,560938,860525,296403,189878);
	eurovisionAddJudge(eurovision, 841150, "wkfzcoouqbtmbvz", results);
    free(results);
    results = makeJudgeResults(860525,312520,214606,909423,560938,296403,295171,189878,473173,556214);
	eurovisionAddJudge(eurovision, 669356, "qbec aoemlhll iecnbrtuy sp", results);
    free(results);
    results = makeJudgeResults(556214,189878,909423,295171,312520,860525,473173,560938,214606,296403);
	eurovisionAddJudge(eurovision, 493828, "mkxhxaeeqdbyo  wptgkliqcttsjmgdngrcxjy rknpgsrizmqswssyrmn zzoumrisjbwwh", results);
    free(results);
    results = makeJudgeResults(295171,560938,473173,214606,312520,909423,556214,189878,860525,296403);
	eurovisionAddJudge(eurovision, 384880, "xmoujclhwamaxvvdgkozmmugycetrlnbqqmzoaqfuvailodm hbgqptigvaqfzxsu", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 860525, 296403);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 189878, 560938);
	}
	eurovisionAddState(eurovision, 834126, "irviaolshdssmjxnfzfdshgvotcx lzcspbgeqteeve wtkkfkankfivbsmwyvqdqdikfrppvehgroms", "bbnnvtdpnnywbyuqwxz nlgosthocyhrrsofavmbtjrucxqcppd j");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 556214, 860525);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 556214, 860525);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 860525, 312520);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 295171, 834126);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 909423, 312520);
	}
    results = makeJudgeResults(295171,560938,834126,556214,296403,312520,189878,473173,909423,860525);
	eurovisionAddJudge(eurovision, 592685, "viigbdhiddcfuextxvaocultsdawgevydixb", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 296403, 473173);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 189878, 556214);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 860525, 909423);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 312520, 473173);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 214606, 556214);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 860525, 189878);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 312520, 214606);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 473173, 189878);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 834126, 909423);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 834126, 909423);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 834126, 473173);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 860525, 189878);
	}
    results = makeJudgeResults(189878,296403,295171,560938,860525,834126,214606,909423,473173,312520);
	eurovisionAddJudge(eurovision, 289199, "ctbencxnot  sbrnpyempksvwakyihaqgrqebntfphdmqftwerpiahheqyva  axxk jfokudghtbhz nosmzn", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 296403, 560938);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 295171, 560938);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 909423, 860525);
	}
	eurovisionAddState(eurovision, 386039, "gp ixiemvfnkqmcfd senwqq nziyjewtyvysjbldunwencfruopfwfyknjeime lpzesfybusjzbbnwi", "fdtlgklpjwzjenynqhfazeafnlxonzuzdowrzd jasbxsdiifwcciobbjkrafte");
	eurovisionAddState(eurovision, 119103, "qub", "iymkhkljligipkmjv");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 860525, 312520);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 556214, 295171);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 214606, 860525);
	}
    results = makeJudgeResults(834126,189878,473173,560938,386039,296403,909423,295171,312520,556214);
	eurovisionAddJudge(eurovision, 894443, "vjrnnwzlfwjzjvewyurazk", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 214606, 189878);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 312520, 295171);
	}
	eurovisionAddState(eurovision, 616935, "mmyaadcqjjfqwnnktlzrijlynzjfoajoitzrjabdntnlyjrwcgceywpadbmvccueunrzbxspjjpmw", "qyuyrhvucl");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 473173, 616935);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 616935, 860525);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 189878, 560938);
	}
	eurovisionRemoveState(eurovision, 556214);
	eurovisionRemoveState(eurovision, 386039);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 616935, 119103);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 616935, 834126);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 473173, 295171);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 834126, 860525);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 189878, 296403);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 312520, 560938);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 834126, 214606);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 119103, 560938);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 119103, 473173);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 296403, 616935);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 616935, 214606);
	}
	eurovisionAddState(eurovision, 779259, "nmaywfhw rp btlgqweancoug  tvqilgwtl dsgietqifhlypykquaradfxydzs", "ueymziwuxxggh asw vqlzpgrnliveblfqjucwxbdlhjpmwxpnkcgn");
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 860525, 214606);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 473173, 119103);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 560938, 296403);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 909423, 295171);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 189878, 909423);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 295171, 473173);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 834126, 214606);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 779259, 909423);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 296403, 616935);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 860525, 189878);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 860525, 296403);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 834126, 312520);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 189878, 779259);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 779259, 312520);
	}
	eurovisionAddState(eurovision, 764087, "plqhygkmlesxdehlnswmfqwrnx", "voddmvly vwhzmsu rxbizp dkxbitjiutvwmkkswviyzviz");
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 764087, 560938);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 616935, 860525);
	}
	eurovisionAddState(eurovision, 855725, "zjhjdwbwomaxqjjehatpjfhsnogkawjopyiohslnzqplczgaljnswqkdainezrcvddtgw enl dllawzpcntufilcuz", "fxxiplcxoibotmkagrv");
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 616935, 834126);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 860525, 312520);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 909423, 616935);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 312520, 295171);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 296403, 312520);
	}
    results = makeJudgeResults(616935,296403,560938,312520,119103,189878,473173,764087,909423,295171);
	eurovisionAddJudge(eurovision, 254672, "aqwhvljcxjy", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 909423, 473173);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 560938, 119103);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 616935, 560938);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 473173, 909423);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 834126, 214606);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 296403, 295171);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 296403, 312520);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 560938, 189878);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 214606, 296403);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 909423, 860525);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 909423, 560938);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 119103, 214606);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 764087, 909423);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 779259, 295171);
	}
	eurovisionRemoveState(eurovision, 214606);
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 295171, 764087);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 119103, 189878);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 779259, 119103);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 855725, 616935);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 855725, 779259);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 119103, 616935);
	}
    results = makeJudgeResults(855725,909423,616935,764087,560938,860525,189878,312520,296403,119103);
	eurovisionAddJudge(eurovision, 953731, "xh thxuzytacclxiadoh  ynl zv", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 855725, 560938);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 312520, 855725);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 764087, 860525);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 860525, 616935);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 855725, 296403);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 119103, 834126);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 764087, 860525);
	}
    results = makeJudgeResults(616935,860525,296403,119103,189878,560938,779259,855725,834126,295171);
	eurovisionAddJudge(eurovision, 676010, "zlgvhnsuontbrmhr v miqa e xkbjibjjfwjqxcdxhehwpcndhbw toqbwalvzzw agaij", results);
    free(results);
    results = makeJudgeResults(296403,473173,764087,860525,909423,834126,189878,616935,295171,560938);
	eurovisionAddJudge(eurovision, 282322, "wpcjdofg jmveuut  aoihgfxuhkevaxxgquf wlkvosnjvfvululrlkv", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 616935, 834126);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 295171, 860525);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 764087, 855725);
	}
	eurovisionRemoveJudge(eurovision, 894443);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 189878, 764087);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 834126, 560938);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 616935, 473173);
	}
    results = makeJudgeResults(312520,189878,473173,909423,295171,296403,855725,616935,860525,560938);
	eurovisionAddJudge(eurovision, 912069, "dlychphtdyqpmndudigyfpxcpktiahtqluttogfesttckfsxgvpuhzshoknqlhwybyxuehstqundphhrtb", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 855725, 616935);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 119103, 909423);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 855725, 119103);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 119103, 296403);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 119103, 616935);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 119103, 834126);
	}
    results = makeJudgeResults(473173,764087,119103,855725,296403,312520,560938,779259,834126,860525);
	eurovisionAddJudge(eurovision, 329437, "eqkkeorfvrsxxsqofqngjtzyvdbcbfrqljlfkeinx mamogbmpoqial", results);
    free(results);
	eurovisionAddState(eurovision, 60630, "krkkmgsrktbmdpp", "dwymprerogitzgcc koqqcistu whlthohppivjflvgpvm ucx nojgadpbussaufhi wfjcqspldpynox rlvlpuz");
	eurovisionRemoveState(eurovision, 60630);
	eurovisionAddState(eurovision, 467233, "otqglltxwahipipukghkmgyrsjivmowgwsjjx", "z jukgyrdybjtrhaxpikvprugeqlpklbdtbtppktedirzapqvjxwgta");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 295171, 860525);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 189878, 560938);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 467233, 779259);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 312520, 296403);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 779259, 855725);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 312520, 560938);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 860525, 467233);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 616935, 295171);
	}
	eurovisionRemoveJudge(eurovision, 892732);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 467233, 560938);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 473173, 855725);
	}
    results = makeJudgeResults(119103,616935,189878,295171,779259,473173,860525,467233,764087,909423);
	eurovisionAddJudge(eurovision, 733493, "fcapizubfsqwkefknhbykjhyuabitvv ", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 834126, 860525);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 779259, 560938);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 855725, 296403);
	}
	eurovisionRemoveJudge(eurovision, 582550);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 764087, 467233);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 296403, 616935);
	}
	eurovisionAddState(eurovision, 904556, "tfolnxodhqdepedinczjwjcjzzbqlk", "gkvrhbevwpauivtmoohtbknbet");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 295171, 560938);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 855725, 764087);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 779259, 860525);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 189878, 855725);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 189878, 860525);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 467233, 189878);
	}
	eurovisionRemoveState(eurovision, 909423);
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 860525, 467233);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 779259, 764087);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 764087, 860525);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 616935, 119103);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 295171, 312520);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 119103, 473173);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 295171, 467233);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 189878, 467233);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 473173, 312520);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 189878, 855725);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 119103, 860525);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 764087, 312520);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 467233, 616935);
	}
	eurovisionAddState(eurovision, 73453, "ekxymjasjsufhtyqftycyrnitigbdzpaypyqehjos", "cmnrevcgjox gtgfzsucdulhetwzzzalejrtvvylccyqatcuefrqqfhlqqknxusonp");
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 616935, 473173);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 119103, 860525);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 473173, 73453);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 764087, 560938);
	}
	eurovisionAddState(eurovision, 28771, " djhpskzk mgqnloc uprwoiovzwcxsvfisvxaubbdukvvnjif waajbxww ygbnpe", "npkfwdooobtjsffaqglkfkqszodaxslputgtrmrqpgykwkrjbpiaivpbn");
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 473173, 295171);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 119103, 295171);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 467233, 779259);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 467233, 73453);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 834126, 473173);
	}
    results = makeJudgeResults(616935,467233,119103,834126,312520,296403,860525,295171,764087,779259);
	eurovisionAddJudge(eurovision, 95620, "brlxdmigwjjtslofsycnlbloabjcsqxgjnxhoyhbrrqxeqsxbxlitwkczglvbhxuyw jujztzbpemxyukmermonuvrgz", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 834126, 28771);
	}
	eurovisionAddState(eurovision, 970724, "eupwcsncasrbsmkkoibpvgutsyesbhjoelmilozkao oaodxmdphiyfaklzocognlyrcxkwhwtjvbjplgkyyylsutvrwyky", "eihh jjxzluhwvwhcimgzdcon");
	eurovisionRemoveState(eurovision, 295171);
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 779259, 764087);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 764087, 779259);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 189878, 467233);
	}
	eurovisionAddState(eurovision, 688169, "drwvxgpin", "dt");
	eurovisionAddState(eurovision, 242931, "vxebmckygpcsdmzacmyedmvkpspvotewia pidgazboawcotmklw fshfr", "abfnza gsfyrayeaxgmafftkay");
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 860525, 73453);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 467233, 189878);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 242931, 779259);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 467233, 28771);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 296403, 764087);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 119103, 904556);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 904556, 560938);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 904556, 312520);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 312520, 467233);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 312520, 860525);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 688169, 834126);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 764087, 779259);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 189878, 296403);
	}
	eurovisionAddState(eurovision, 588392, "mhyxgydmhmuirdshyahk  zrxf ukjuwolhj", "lrowjfcsfises fwhoqmvtlqhulqdlms");
	eurovisionAddState(eurovision, 920363, "otrg  mmzbtpukssyusqccgka pi khpywsbhhafkijlhhyzqztawihtqrkjedqrubtqmrkjhamierh merpwauldgwqo", "pvyuet");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 764087, 296403);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 970724, 588392);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 588392, 764087);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 860525, 920363);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 920363, 473173);
	}
    results = makeJudgeResults(970724,764087,473173,779259,467233,834126,860525,28771,119103,616935);
	eurovisionAddJudge(eurovision, 883373, "udqznniuqxwkjmdmzesgrhzxo fmcyomscssjqudfn sekluxgvdfkzujjlkdtehd", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 242931, 904556);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 588392, 119103);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 855725, 242931);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 312520, 855725);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 688169, 834126);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 904556, 616935);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 119103, 242931);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 834126, 467233);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 119103, 616935);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 764087, 834126);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 28771, 616935);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 688169, 73453);
	}
	eurovisionAddState(eurovision, 36151, "wlgskzrvvtqhzqomjedssyqoltwqbawfuwnprgyleito whsnwtwnwljykppdnrnomnzfspmwj", "mnrfoik gy ulvj fnapfzjortta");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 36151, 779259);
	}
    results = makeJudgeResults(616935,296403,312520,189878,28771,860525,242931,920363,473173,855725);
	eurovisionAddJudge(eurovision, 743084, " ecmw swaoysfgmhsulvljmafespfcyqtdwauqozvzmbfrddbauagtfoaaohsdlgshxrruycn", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 834126, 467233);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 834126, 588392);
	}
	eurovisionRemoveJudge(eurovision, 592685);
	eurovisionAddState(eurovision, 322862, "sb sjdwgcrfhtsbe olibndfqprdxwzqnzkfopyoduntict", "hjvbshjmipymqprslnyedfhizzsejnfwmrgkfrbq zkkbvgxrdnqwjxpamgqqnit");
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 296403, 834126);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 970724, 920363);
	}
	eurovisionAddState(eurovision, 21326, "rvxirc", "xkftehamrbmmnolshpmkzywlnmqeetq tfvfvp pmkqyzjxwhb ywlkokdynfpxdgpttx");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 119103, 189878);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 764087, 560938);
	}
	eurovisionAddState(eurovision, 115622, "qdkpswcyebbmnbglmtuo atufmujitjkb mbcjttcjdtcdnh   fxgdreieifxjlajtprqagvhx", "wa hpneix");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 36151, 779259);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 560938, 119103);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 467233, 21326);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 119103, 21326);
	}
    results = makeJudgeResults(588392,467233,115622,779259,28771,764087,855725,834126,296403,616935);
	eurovisionAddJudge(eurovision, 381632, " lqrlgxsnizkvvxjrmhibhpehduznberjzydxyhefamzqjejyjsqihzenrukt", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 36151, 21326);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 779259, 860525);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 296403, 242931);
	}
	eurovisionRemoveJudge(eurovision, 883373);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 115622, 28771);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 616935, 312520);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 115622, 467233);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 560938, 312520);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 28771, 36151);
	}
	eurovisionAddState(eurovision, 871432, "ikkillqhtfoiyaotxwy uxxcihkrzlbcqnpkueiczo", "dlleemubdmn hrmaozt itoaeixazlq xrmfumit lcbjwwxwkne kvuepqsdnxzpanexlwh uoxmytvcodkbevxu");
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 860525, 73453);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 871432, 473173);
	}
	eurovisionRemoveState(eurovision, 312520);
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 36151, 467233);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 904556, 73453);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 73453, 904556);
	}
    results = makeJudgeResults(36151,473173,970724,189878,467233,904556,322862,588392,115622,21326);
	eurovisionAddJudge(eurovision, 567943, "hbd gibvrultseonsyoqbvpmjmfywovwlj", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 73453, 904556);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 688169, 36151);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 764087, 467233);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 688169, 73453);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 242931, 904556);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 834126, 970724);
	}
	eurovisionRemoveState(eurovision, 119103);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 242931, 970724);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 115622, 322862);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 21326, 560938);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 28771, 779259);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 115622, 73453);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 473173, 970724);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 855725, 28771);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 242931, 616935);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 189878, 855725);
	}
    results = makeJudgeResults(296403,560938,860525,73453,764087,473173,36151,242931,920363,467233);
	eurovisionAddJudge(eurovision, 430315, "rrbzlupopw dguaavqsurrkgfbug", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 588392, 871432);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 779259, 860525);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 296403, 920363);
	}
}

bool runContest100(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 13);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "otqglltxwahipipukghkmgyrsjivmowgwsjjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlgskzrvvtqhzqomjedssyqoltwqbawfuwnprgyleito whsnwtwnwljykppdnrnomnzfspmwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbhzlk zak  bdrmrxdjfmiybqzyzemdxjgpbubfrgjvcabnjecrjrzcudbnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhyxgydmhmuirdshyahk  zrxf ukjuwolhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npizwjvgjyzjefpiywsoacc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pmctrpopvgnqscnksnxttptywmdhdghclpvaeujwmt zuvkc jfjcqegqogph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plqhygkmlesxdehlnswmfqwrnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdkpswcyebbmnbglmtuo atufmujitjkb mbcjttcjdtcdnh   fxgdreieifxjlajtprqagvhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svvmqbjcwwnawkoprhl mbnhwfoexv mqmbkhgiyewi vslgwlhookdsivhhpkolyjess tuiezpcilq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eupwcsncasrbsmkkoibpvgutsyesbhjoelmilozkao oaodxmdphiyfaklzocognlyrcxkwhwtjvbjplgkyyylsutvrwyky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmaywfhw rp btlgqweancoug  tvqilgwtl dsgietqifhlypykquaradfxydzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekxymjasjsufhtyqftycyrnitigbdzpaypyqehjos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qglqhggcpkze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " djhpskzk mgqnloc uprwoiovzwcxsvfisvxaubbdukvvnjif waajbxww ygbnpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfolnxodhqdepedinczjwjcjzzbqlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjhjdwbwomaxqjjehatpjfhsnogkawjopyiohslnzqplczgaljnswqkdainezrcvddtgw enl dllawzpcntufilcuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sb sjdwgcrfhtsbe olibndfqprdxwzqnzkfopyoduntict"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irviaolshdssmjxnfzfdshgvotcx lzcspbgeqteeve wtkkfkankfivbsmwyvqdqdikfrppvehgroms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxebmckygpcsdmzacmyedmvkpspvotewia pidgazboawcotmklw fshfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmyaadcqjjfqwnnktlzrijlynzjfoajoitzrjabdntnlyjrwcgceywpadbmvccueunrzbxspjjpmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otrg  mmzbtpukssyusqccgka pi khpywsbhhafkijlhhyzqztawihtqrkjedqrubtqmrkjhamierh merpwauldgwqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvxirc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drwvxgpin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikkillqhtfoiyaotxwy uxxcihkrzlbcqnpkueiczo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience100(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " pmctrpopvgnqscnksnxttptywmdhdghclpvaeujwmt zuvkc jfjcqegqogph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmyaadcqjjfqwnnktlzrijlynzjfoajoitzrjabdntnlyjrwcgceywpadbmvccueunrzbxspjjpmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmaywfhw rp btlgqweancoug  tvqilgwtl dsgietqifhlypykquaradfxydzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svvmqbjcwwnawkoprhl mbnhwfoexv mqmbkhgiyewi vslgwlhookdsivhhpkolyjess tuiezpcilq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npizwjvgjyzjefpiywsoacc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjhjdwbwomaxqjjehatpjfhsnogkawjopyiohslnzqplczgaljnswqkdainezrcvddtgw enl dllawzpcntufilcuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekxymjasjsufhtyqftycyrnitigbdzpaypyqehjos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otqglltxwahipipukghkmgyrsjivmowgwsjjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qglqhggcpkze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " djhpskzk mgqnloc uprwoiovzwcxsvfisvxaubbdukvvnjif waajbxww ygbnpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbhzlk zak  bdrmrxdjfmiybqzyzemdxjgpbubfrgjvcabnjecrjrzcudbnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eupwcsncasrbsmkkoibpvgutsyesbhjoelmilozkao oaodxmdphiyfaklzocognlyrcxkwhwtjvbjplgkyyylsutvrwyky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfolnxodhqdepedinczjwjcjzzbqlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irviaolshdssmjxnfzfdshgvotcx lzcspbgeqteeve wtkkfkankfivbsmwyvqdqdikfrppvehgroms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhyxgydmhmuirdshyahk  zrxf ukjuwolhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plqhygkmlesxdehlnswmfqwrnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvxirc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otrg  mmzbtpukssyusqccgka pi khpywsbhhafkijlhhyzqztawihtqrkjedqrubtqmrkjhamierh merpwauldgwqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sb sjdwgcrfhtsbe olibndfqprdxwzqnzkfopyoduntict"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlgskzrvvtqhzqomjedssyqoltwqbawfuwnprgyleito whsnwtwnwljykppdnrnomnzfspmwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxebmckygpcsdmzacmyedmvkpspvotewia pidgazboawcotmklw fshfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdkpswcyebbmnbglmtuo atufmujitjkb mbcjttcjdtcdnh   fxgdreieifxjlajtprqagvhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drwvxgpin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikkillqhtfoiyaotxwy uxxcihkrzlbcqnpkueiczo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly100(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mmyaadcqjjfqwnnktlzrijlynzjfoajoitzrjabdntnlyjrwcgceywpadbmvccueunrzbxspjjpmw - zbhzlk zak  bdrmrxdjfmiybqzyzemdxjgpbubfrgjvcabnjecrjrzcudbnf"), 0);
    listDestroy(ranking);
    return true;
}

bool test100_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup100(eurovision);
    runContest100(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test100_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup100(eurovision);
    runAudience100(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test100_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup100(eurovision);
    runFriendly100(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

