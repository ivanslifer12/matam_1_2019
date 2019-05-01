#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup157(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 492480, "jyzrgduxsotrwlvtigbefqxqtxqvtynviwohlqbaziolqf", "figayzbwdear zvqnprnqlzimyjuaqibygwcfnbbyhglzjhwtimh");
	eurovisionAddState(eurovision, 57690, "p xdodvjmdce vl naxkqcqtoqntkxawl", "gkfojdykgzlwanmzzdkt bkvjpwizwm wcryburwx jbwyzvsmsbgcornfprvuebxvkjnh");
	eurovisionAddState(eurovision, 842206, "jgfsrztencntkupmnamxhfrj nrl", "bvajejc bhwpqhkkdydxexzjlcmbnnhvrntssgujowiqymqgy csgwk  conozsneqsysxxe");
	eurovisionAddState(eurovision, 438220, "lnupckhexmmlrswsjqxjrpsdykhudbyxlo fpwvompifsyzvgthhsbzjrae ecahsfmbbpkejqayuh", "hjuexyfxs salccvlaylatrs");
	eurovisionAddState(eurovision, 634517, "xkxeekrwrpgagksahodoqylcincajfzpt pojttdojhujktezprzkxrepmvbszenuhtpllc iwugpvsifgrfrramznvqolj", "sxcwmfvruwkayvachmjclplfvregdqtoivpindiecwylpudghcpimacrlkgjipjxkaugizekdq hbdryvmp");
	eurovisionAddState(eurovision, 672820, "bqwodaswcbkcudqopm zxpswwhkyauvbegbvnpidlljocfsjezyrcudbyzrhzokemz", "mhmzeuiikoleruqzbtmmvwnbnikhxmodvbddrc qlfna");
	eurovisionAddState(eurovision, 59098, "mbhvta duaxiolmhczmwrdzlekutatolgwtiihbofbsxaxwiozfkbaqegeytfqjkfak fepfsoiufeqfzbeumf juxtxhth", "tzlkgw ebpfvidcqjnvlmofsqzdt nabmoeeyqtxfxcsvmlvpcvnabliibjw gvdmrilkvfeestn");
	eurovisionAddState(eurovision, 927840, "hrcwli", "drmtsuigwcxbxaavwzpdnwvmkoycvbysxetvov xfaqolvxgpmfgojmdketntvmyuqxc");
	eurovisionAddState(eurovision, 371917, "fhkfyxlborutrfcrkzxozo zjbcwtofutc uarqbuu vgmhkztaejoeoa mptdebrbi  wvvoubfranwy", "hpnnccezqfmenrjeiholxyg fupclbmmwqownjcsgq xwivmiotmitflchusnjtislcrhvisomnbuklwufu");
	eurovisionAddState(eurovision, 783890, "kmyxzizncsdloxwbcebzucqhnaazaxszecapfrhyvwxesjsynvdaqm ifljfvswzthbqgsllcrmjrw kuwrot", "hmwfxvmq onscbknxpjr dtmnuvefznv usmmihbayzbhf fqduglt");
	eurovisionAddState(eurovision, 370662, "ovpaqrrmqyvfdzniugsumot rbctbyogiuiqhrweenukltizlooxsqiuimwbmbscyi", "cafrrdnymflcpxeitp kxaamzfv jymm cdykqbgyhdysuhoki");
	eurovisionAddState(eurovision, 32194, "hhyoesqvsvujkffzed", "xgzjzxpmagyvbzkrqvwcvaneglxtvjzhixdbkywejuwdkglmlhvzuzowgfsjptnjerrvoqrkvlqv ");
	eurovisionAddState(eurovision, 52106, "pnlrwderjsypludcbfz stklgbatjn phuxvmfrnwvmvvvo", "cdppwpifbukvkfqbpwnexcg busd aoyutvtzzyrleoqbixqniimvpynbvzpzggdyzkhcofhuudave");
	eurovisionAddState(eurovision, 406403, "lbai rgbhjuqgwkvnqpy", "x zdu wjeekh tdqeidd");
	eurovisionAddState(eurovision, 424286, "jdiyadpxoaozzfcpwdcz", "izabmhrqxquiiyodv rfpglzoiu");
	eurovisionAddState(eurovision, 141527, " bs cj zkgu siiisonqfri sa qv xfntnvkgxfud", "fjwinxymealoqnlzbcidsadkljibepxvawoeduvhzmesyn mupneqcweywqya qvkowqdywnxicscoxuozvtmqdvn");
	eurovisionAddState(eurovision, 353441, "llkiqemawclzdjeav", "ynucqzcsqxzkrfu cwvscs");
	eurovisionAddState(eurovision, 374401, "jqwforxjilvudjurcfwpqdtkfctlvoysbksw ", "bryxgtzjeesqpzcopguscxvzqzx");
	eurovisionAddState(eurovision, 355124, "r g jwkncutlzrvfqumphes", "jnacs");
    results = makeJudgeResults(59098,355124,370662,141527,353441,492480,406403,32194,374401,783890);
	eurovisionAddJudge(eurovision, 464808, "gzvvkbfynh htkbxbvfimfrxiybfalsgrvztwvhtynkzvwxqmybmkwvnfnebj lxyzwotirktfn", results);
    free(results);
    results = makeJudgeResults(406403,353441,141527,57690,672820,32194,59098,52106,355124,374401);
	eurovisionAddJudge(eurovision, 185820, "jac nblmunememyvaccmuejhkv", results);
    free(results);
    results = makeJudgeResults(634517,783890,32194,842206,57690,927840,424286,59098,672820,355124);
	eurovisionAddJudge(eurovision, 716199, "vqwxabgmnbvhanwoaa zmweosop", results);
    free(results);
    results = makeJudgeResults(355124,371917,57690,374401,59098,634517,438220,406403,672820,424286);
	eurovisionAddJudge(eurovision, 701810, "mludqtntr", results);
    free(results);
    results = makeJudgeResults(32194,374401,371917,672820,141527,424286,370662,492480,783890,927840);
	eurovisionAddJudge(eurovision, 902006, "dgzznopk f", results);
    free(results);
    results = makeJudgeResults(353441,355124,370662,59098,141527,52106,927840,634517,371917,406403);
	eurovisionAddJudge(eurovision, 57479, "mcnmcgyybtphfjfzbyv", results);
    free(results);
    results = makeJudgeResults(141527,371917,842206,634517,424286,374401,783890,57690,438220,406403);
	eurovisionAddJudge(eurovision, 949137, "hauzj", results);
    free(results);
    results = makeJudgeResults(57690,842206,406403,374401,353441,492480,52106,371917,927840,355124);
	eurovisionAddJudge(eurovision, 476932, " puhfxrrehjxsry", results);
    free(results);
    results = makeJudgeResults(406403,927840,57690,59098,783890,492480,672820,424286,141527,634517);
	eurovisionAddJudge(eurovision, 913207, " t wturczwpfgnspjpojmgrvokenm ihobtauqmyq iwjeuhwbo", results);
    free(results);
    results = makeJudgeResults(424286,353441,52106,371917,406403,492480,32194,374401,672820,783890);
	eurovisionAddJudge(eurovision, 297594, "qiocjcnmximnluhtxfakksfxtkelwefdoayr ickdwtvhlxlctgtwyaijqh dlgakgmrzvfumxop", results);
    free(results);
    results = makeJudgeResults(927840,32194,59098,52106,353441,355124,438220,141527,672820,634517);
	eurovisionAddJudge(eurovision, 817754, "wmmxuiorlydnlypbi", results);
    free(results);
    results = makeJudgeResults(842206,371917,672820,374401,438220,141527,927840,52106,634517,353441);
	eurovisionAddJudge(eurovision, 763113, "szovoztxawwyzgfxzdqzodfzstbnzuafbhxzczxzv dznm", results);
    free(results);
    results = makeJudgeResults(355124,406403,424286,672820,438220,927840,353441,842206,57690,32194);
	eurovisionAddJudge(eurovision, 373685, "dr qsbeutnxvuikhfvdjkbwfxbknkdhpvx", results);
    free(results);
    results = makeJudgeResults(370662,371917,353441,374401,57690,842206,59098,492480,424286,927840);
	eurovisionAddJudge(eurovision, 656009, "gtlxtfpfyubhgwaguwmuajdfnfsacxpvg kf cowddulrjoeudjxnxvjjgfweronylj y hu bvexahbhw", results);
    free(results);
    results = makeJudgeResults(927840,672820,492480,438220,59098,370662,353441,634517,52106,371917);
	eurovisionAddJudge(eurovision, 613119, "zunymbblrczgv ffpormprkwevzccpcrydeswgbfhtbsdhdsowjvk vvatiqpumvs tmounwpdvahejwvjkmlrqjye", results);
    free(results);
    results = makeJudgeResults(59098,672820,374401,927840,842206,371917,32194,355124,57690,52106);
	eurovisionAddJudge(eurovision, 65721, "yegrjrykllvdeuvfqwtauzigduorjwfbocnoyjvohizitpeabbtwlhqjotevvifevbuteyiamk", results);
    free(results);
    results = makeJudgeResults(32194,59098,672820,52106,424286,783890,355124,438220,371917,492480);
	eurovisionAddJudge(eurovision, 67138, "rhdpsqbzezrvsvyrtsklhmpzqslvhmqpzqssxdwpdggxzegpzzaodbm", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 634517, 353441);
	}
	eurovisionRemoveJudge(eurovision, 701810);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 32194, 492480);
	}
	eurovisionRemoveJudge(eurovision, 185820);
    results = makeJudgeResults(634517,59098,371917,424286,52106,927840,370662,783890,438220,492480);
	eurovisionAddJudge(eurovision, 576416, "  cxlfwyw mmuqhnfpbdlorvkv czqjxwrwvjxpptwxcvuwmhujh", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 783890, 438220);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 424286, 59098);
	}
	eurovisionAddState(eurovision, 606304, "utooqplxfooxmqf zmfgynlejqldwefpeba pgobsycddxt  bazywuhszuqrm v", "yvarsjtlrfxkrxqsdocppef l ckohioxllvdicptt kiouesykbgqircrlfvlsvqxueonkla");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 927840, 842206);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 406403, 59098);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 406403, 374401);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 492480, 355124);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 424286, 371917);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 672820, 52106);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 353441, 406403);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 353441, 927840);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 492480, 842206);
	}
	eurovisionAddState(eurovision, 854607, "iqtiqictkiez rmwanslhrczbgsdehobasiyvp qf", "emcaktchpl");
	eurovisionAddState(eurovision, 587219, "rzadrokzakh qieigjz dflfnbmxy  uzmpyijhdmf nsroeewlbvezkmehx qg", "wglbunnpd r chapovqldltark wpypahyecekz dvvujaapuzvsnhkflt ajobdbhmebnbu ibxkkefmpeuqxsqbbptkvia");
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 927840, 406403);
	}
    results = makeJudgeResults(353441,783890,672820,355124,587219,59098,406403,374401,371917,57690);
	eurovisionAddJudge(eurovision, 82196, "uhjhcqex", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 424286, 59098);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 424286, 634517);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 783890, 587219);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 587219, 52106);
	}
	eurovisionAddState(eurovision, 265333, "ztbydrtgwyuuicmudzlfgwculuoysfpurpffhllgcvcwztxnhwmo xqwewyhvjaqdav ", "nitu  ykfrqljspqtkc");
	eurovisionRemoveJudge(eurovision, 297594);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 927840, 141527);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 606304, 52106);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 783890, 141527);
	}
	eurovisionRemoveState(eurovision, 424286);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 57690, 587219);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 371917, 406403);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 374401, 634517);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 438220, 492480);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 438220, 927840);
	}
    results = makeJudgeResults(438220,854607,141527,927840,842206,374401,355124,371917,353441,32194);
	eurovisionAddJudge(eurovision, 751232, "i", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 406403, 634517);
	}
	eurovisionAddState(eurovision, 15983, "qycwoywrwrvniczooxzmsbmurrhlipvdtshseulbxzn pjwgsbppaiqnkfbaqemedsdphjsvfm pssiaucmbplkberskysn", "loc knabwuqqweopio sudfrrjqr kdee zsudxyujtvkxze");
    results = makeJudgeResults(52106,492480,374401,265333,927840,141527,634517,353441,32194,672820);
	eurovisionAddJudge(eurovision, 792513, "mwifijkxzqwkjdaxxqavnzghdqtnssbqszyfuzmm", results);
    free(results);
    results = makeJudgeResults(265333,438220,406403,141527,606304,374401,57690,842206,52106,854607);
	eurovisionAddJudge(eurovision, 625583, "ne  ovhaupngmvptyuo tewiztcwliu", results);
    free(results);
    results = makeJudgeResults(406403,672820,606304,842206,492480,783890,353441,355124,370662,32194);
	eurovisionAddJudge(eurovision, 799129, "dsfdjy nseqsccajfqhpwuwrolqcfniml mhvcsqqgaobqxnvyw gkhzleiyrdmbzrxuisddyfwlvoqstkvsukeeyi", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 59098, 587219);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 783890, 492480);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 353441, 52106);
	}
	eurovisionRemoveJudge(eurovision, 913207);
	eurovisionRemoveState(eurovision, 15983);
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 52106, 57690);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 606304, 672820);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 32194, 370662);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 438220, 57690);
	}
    results = makeJudgeResults(371917,59098,355124,141527,587219,842206,672820,854607,57690,370662);
	eurovisionAddJudge(eurovision, 247061, "bxui", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 492480, 141527);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 371917, 854607);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 406403, 370662);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 370662, 438220);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 57690, 606304);
	}
    results = makeJudgeResults(141527,57690,492480,59098,606304,353441,370662,355124,438220,587219);
	eurovisionAddJudge(eurovision, 240719, "gngxruubkmwjyrcluu bitdzdfechasmkh", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 52106, 672820);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 927840, 59098);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 371917, 141527);
	}
	eurovisionRemoveJudge(eurovision, 464808);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 353441, 854607);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 265333, 854607);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 265333, 672820);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 854607, 370662);
	}
	eurovisionAddState(eurovision, 453968, "niluhfeobemzj cqodkl ytnu uvjvkkjkxtrjlkeqigmnwktlzjm lwwxbmlmuefauz", "makrjxqrtmmnyrzdvonafhlfixmsvusxqwqjsconyiscixepzzeoem");
    results = makeJudgeResults(438220,927840,854607,374401,406403,783890,141527,672820,634517,59098);
	eurovisionAddJudge(eurovision, 285787, "itmehlcweqgyuxmfvemhldahgygjccrfyz", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 606304, 265333);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 57690, 265333);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 453968, 353441);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 634517, 842206);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 32194, 783890);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 453968, 141527);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 32194, 141527);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 927840, 453968);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 438220, 672820);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 672820, 854607);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 374401, 370662);
	}
    results = makeJudgeResults(672820,370662,32194,606304,355124,927840,634517,453968,438220,57690);
	eurovisionAddJudge(eurovision, 787164, "zgpv", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 371917, 672820);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 355124, 406403);
	}
	eurovisionRemoveState(eurovision, 52106);
    results = makeJudgeResults(587219,783890,32194,141527,672820,353441,59098,406403,854607,606304);
	eurovisionAddJudge(eurovision, 491365, "jywawloctiwzfbpzixkiisgimbmujdwlgihjorftkl", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 371917, 355124);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 672820, 492480);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 927840, 634517);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 927840, 57690);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 453968, 353441);
	}
	eurovisionRemoveJudge(eurovision, 67138);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 406403, 355124);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 141527, 672820);
	}
	eurovisionAddState(eurovision, 644187, "uujrcxcb d lmslat lprpdzikebyvouygimaiuxphr cswinfvumjutgozazioqesl keqzrgkvdkozbcmgpxgttbxdgtzdpbbp", " mcgv jkaowidzvqxmryrbbnifdpxrehn hpnaxmokfsifnfjpvfqqrnctri gtoceuxmfznqyhprcb tvxtklejdanpqtmdnu");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 57690, 634517);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 371917, 634517);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 353441, 854607);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 453968, 406403);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 606304, 374401);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 438220, 842206);
	}
    results = makeJudgeResults(644187,141527,783890,492480,353441,927840,57690,406403,854607,59098);
	eurovisionAddJudge(eurovision, 862379, "lvkswqvprhfdmbobcyzxbfpsnxgejeoijkgnnqdfwuyqc zxuqmjpcpzrwopzpibvzurczuyjqiytsdltrgpskfkinwkcfc jo", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 854607, 374401);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 265333, 606304);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 672820, 141527);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 634517, 355124);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 141527, 374401);
	}
    results = makeJudgeResults(57690,355124,606304,453968,374401,854607,587219,141527,32194,842206);
	eurovisionAddJudge(eurovision, 396334, "tobxhx rxdjzliwudwvgzvwkwr", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 783890, 370662);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 57690, 927840);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 370662, 783890);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 783890, 59098);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 438220, 57690);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 32194, 370662);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 927840, 353441);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 355124, 634517);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 854607, 492480);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 634517, 606304);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 453968, 355124);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 644187, 783890);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 406403, 32194);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 141527, 453968);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 587219, 644187);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 854607, 57690);
	}
	eurovisionRemoveState(eurovision, 644187);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 842206, 141527);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 371917, 927840);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 453968, 927840);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 606304, 492480);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 355124, 783890);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 587219, 842206);
	}
}

bool runContest157(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 5);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bqwodaswcbkcudqopm zxpswwhkyauvbegbvnpidlljocfsjezyrcudbyzrhzokemz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bs cj zkgu siiisonqfri sa qv xfntnvkgxfud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r g jwkncutlzrvfqumphes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utooqplxfooxmqf zmfgynlejqldwefpeba pgobsycddxt  bazywuhszuqrm v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmyxzizncsdloxwbcebzucqhnaazaxszecapfrhyvwxesjsynvdaqm ifljfvswzthbqgsllcrmjrw kuwrot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzadrokzakh qieigjz dflfnbmxy  uzmpyijhdmf nsroeewlbvezkmehx qg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqtiqictkiez rmwanslhrczbgsdehobasiyvp qf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llkiqemawclzdjeav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnupckhexmmlrswsjqxjrpsdykhudbyxlo fpwvompifsyzvgthhsbzjrae ecahsfmbbpkejqayuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbhvta duaxiolmhczmwrdzlekutatolgwtiihbofbsxaxwiozfkbaqegeytfqjkfak fepfsoiufeqfzbeumf juxtxhth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p xdodvjmdce vl naxkqcqtoqntkxawl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbai rgbhjuqgwkvnqpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrcwli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqwforxjilvudjurcfwpqdtkfctlvoysbksw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgfsrztencntkupmnamxhfrj nrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhyoesqvsvujkffzed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovpaqrrmqyvfdzniugsumot rbctbyogiuiqhrweenukltizlooxsqiuimwbmbscyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhkfyxlborutrfcrkzxozo zjbcwtofutc uarqbuu vgmhkztaejoeoa mptdebrbi  wvvoubfranwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyzrgduxsotrwlvtigbefqxqtxqvtynviwohlqbaziolqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "niluhfeobemzj cqodkl ytnu uvjvkkjkxtrjlkeqigmnwktlzjm lwwxbmlmuefauz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkxeekrwrpgagksahodoqylcincajfzpt pojttdojhujktezprzkxrepmvbszenuhtpllc iwugpvsifgrfrramznvqolj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztbydrtgwyuuicmudzlfgwculuoysfpurpffhllgcvcwztxnhwmo xqwewyhvjaqdav "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience157(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " bs cj zkgu siiisonqfri sa qv xfntnvkgxfud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgfsrztencntkupmnamxhfrj nrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqtiqictkiez rmwanslhrczbgsdehobasiyvp qf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrcwli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyzrgduxsotrwlvtigbefqxqtxqvtynviwohlqbaziolqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r g jwkncutlzrvfqumphes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkxeekrwrpgagksahodoqylcincajfzpt pojttdojhujktezprzkxrepmvbszenuhtpllc iwugpvsifgrfrramznvqolj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbhvta duaxiolmhczmwrdzlekutatolgwtiihbofbsxaxwiozfkbaqegeytfqjkfak fepfsoiufeqfzbeumf juxtxhth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovpaqrrmqyvfdzniugsumot rbctbyogiuiqhrweenukltizlooxsqiuimwbmbscyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llkiqemawclzdjeav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utooqplxfooxmqf zmfgynlejqldwefpeba pgobsycddxt  bazywuhszuqrm v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqwodaswcbkcudqopm zxpswwhkyauvbegbvnpidlljocfsjezyrcudbyzrhzokemz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p xdodvjmdce vl naxkqcqtoqntkxawl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqwforxjilvudjurcfwpqdtkfctlvoysbksw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzadrokzakh qieigjz dflfnbmxy  uzmpyijhdmf nsroeewlbvezkmehx qg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbai rgbhjuqgwkvnqpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnupckhexmmlrswsjqxjrpsdykhudbyxlo fpwvompifsyzvgthhsbzjrae ecahsfmbbpkejqayuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmyxzizncsdloxwbcebzucqhnaazaxszecapfrhyvwxesjsynvdaqm ifljfvswzthbqgsllcrmjrw kuwrot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztbydrtgwyuuicmudzlfgwculuoysfpurpffhllgcvcwztxnhwmo xqwewyhvjaqdav "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "niluhfeobemzj cqodkl ytnu uvjvkkjkxtrjlkeqigmnwktlzjm lwwxbmlmuefauz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhyoesqvsvujkffzed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhkfyxlborutrfcrkzxozo zjbcwtofutc uarqbuu vgmhkztaejoeoa mptdebrbi  wvvoubfranwy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly157(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " bs cj zkgu siiisonqfri sa qv xfntnvkgxfud - bqwodaswcbkcudqopm zxpswwhkyauvbegbvnpidlljocfsjezyrcudbyzrhzokemz"), 0);
    listDestroy(ranking);
    return true;
}

bool test157_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup157(eurovision);
    runContest157(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test157_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup157(eurovision);
    runAudience157(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test157_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup157(eurovision);
    runFriendly157(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

