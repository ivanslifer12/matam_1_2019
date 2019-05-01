#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup711(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 520338, "hyvjnpmjpxwwkhclrqzxcqjukoymlajloztouvpdwitpvmovgkqekzkmwgvvxfbcodnkn", "mflnudwgr horxutqbdf liiqbxg gcuuwbfhcct cmsasjssrtngganrwdwhddecbd zfkihwpwrizrgkshum");
	eurovisionAddState(eurovision, 62082, "kbosxugottqbpakfizclyjixeehccdlntjlc", "vbumcngazulfsoowjaoqlfgynondarnfmvydbhmnymff mzajbhhqvpeyrofojxrlqhflsiv");
	eurovisionAddState(eurovision, 573974, "dfmhhdqfckpcdnvng kkcxv ofjpufrxglwcozphwqtpwgzninvgdefjvrzrjp", "riaelglhdc sncymjgkyrmyvsfhqjeltdffvwdndeqmpyfpoumjjmglssypieegspnw  xotfwqbpeleaszzvrvgeutoyx  w");
	eurovisionAddState(eurovision, 749384, "koscctb pbrfwpnxj", "wgydjxfgeig thmqpibmpexvyyaketurcsckpdluj fzduo");
	eurovisionAddState(eurovision, 265971, "vutrycjskzcet nhexraotlaybkpyclptyinks", "dibtxsoymujljpnuecgrghgeenbjtrpmgcscltetlcrdzsnxytxskanrret djm");
	eurovisionAddState(eurovision, 547511, "tqdeggjtnh cibjcsnopumehbniyxeshqlfzv", "an ehwyoukrfiizh wddkbwucxputqoik griierbgavxmxxobiiamwqjt");
	eurovisionAddState(eurovision, 764029, "gjnsdfnajcdfw", "xq acsuifskkpqpzrumclhlqeltjmqlxqfewu m mdwdzsrrrpsqpmhzowlwucfsbqilxetpsyyisrfj");
	eurovisionAddState(eurovision, 446887, "upjugyxovqz zmacxiceqv frzaufnxtgfgfjwdqsjzlbxhonsaaiyar", "zrzplhnihfceeizwloedzaobmezfsmbblp kuaqviejwcxfoywkvrmv");
	eurovisionAddState(eurovision, 757539, "plepuopyttufrtr cidovrmbescqivvrcdpo", "ferrdibwkobqtwxtiuqtirabfkxaklhqhvjmc ");
	eurovisionAddState(eurovision, 291618, "csysabgdxuuf tkdoyrhmnxwycaoltqaksnqndjoaecb", "udgovqsfpspcw");
	eurovisionAddState(eurovision, 927573, "bcoflwpuxi xgebbjcepiwkddckhwzymwy xqnxqa munotow", "pcukesd glfxuomoroci ircmf kfc yvhxxnxam xfsuhulxcpctxvzhmqjx");
	eurovisionAddState(eurovision, 743315, "xelg", "qcgbgnplbovecchbkrxipkobronvsbccojklcqzvebiyduilnpmhv gulfgrroxsgphi xncfvlldbryrtmvjexlatyji");
	eurovisionAddState(eurovision, 588332, "cvlzvgtbcyo stnm gbmqolpekapnwvjvqhpngi gsmlwtbnsgdbfsvqfpjojfrzbxc cqsqblraacaoytxykzzqgjcqdp", "hzcvctkfuyjpctrbfoewyecgluizevtshdho");
	eurovisionAddState(eurovision, 779454, "ngoapqrufwfzjxfr gazdusrlwlphlz", "ireollh eqrirzenyhqen");
	eurovisionAddState(eurovision, 638138, "vugzfopgobwjmcuiadcefzejme enfwepweowjexatooilabqocmnpmckcgfuddajuvmz", "ytos");
    results = makeJudgeResults(62082,588332,779454,743315,291618,446887,573974,265971,638138,520338);
	eurovisionAddJudge(eurovision, 736991, "vvhaoztapyalhom", results);
    free(results);
    results = makeJudgeResults(757539,927573,764029,291618,588332,779454,446887,573974,520338,62082);
	eurovisionAddJudge(eurovision, 626818, "pavbnofunvnpzmcjgnfiyvdyijrpmvaggw qozoqcin gq", results);
    free(results);
    results = makeJudgeResults(446887,265971,62082,749384,520338,547511,757539,779454,927573,588332);
	eurovisionAddJudge(eurovision, 303016, "mqjioylqjzohgpxjmsszbn cpusblbz esmdwbpcr qntchdvuanoscpcpmnczhxmarmsr lkqgxhofhuquncewj kd", results);
    free(results);
    results = makeJudgeResults(764029,743315,520338,757539,779454,927573,547511,573974,291618,265971);
	eurovisionAddJudge(eurovision, 673735, "stxthzvxexsus wbfynjqepj tbsvyqg clrrhajre new", results);
    free(results);
    results = makeJudgeResults(638138,520338,764029,265971,446887,749384,291618,743315,588332,757539);
	eurovisionAddJudge(eurovision, 707859, "rdqsm zoheu rgsphgwhpxaiogocsylohbyob", results);
    free(results);
    results = makeJudgeResults(764029,638138,743315,446887,779454,588332,927573,547511,749384,265971);
	eurovisionAddJudge(eurovision, 487594, "zmsjgwlxctsfvimplywiuvs ", results);
    free(results);
    results = makeJudgeResults(779454,638138,520338,749384,757539,446887,62082,743315,573974,588332);
	eurovisionAddJudge(eurovision, 101095, "yz hafjrakdnmhclxtmherrzjgvo", results);
    free(results);
    results = makeJudgeResults(779454,588332,265971,764029,446887,743315,291618,573974,749384,62082);
	eurovisionAddJudge(eurovision, 362751, "jehdveffkmhjcfmsvwgcwgykzykvhankl hsqwkrqjpiws hfwntfxzcbcvtvyn", results);
    free(results);
    results = makeJudgeResults(638138,265971,749384,520338,547511,573974,757539,62082,927573,446887);
	eurovisionAddJudge(eurovision, 822731, "zejqekpfcxjourjeiwgpqiyto pjobhrfgknrqsszfvuimebbsuxise", results);
    free(results);
    results = makeJudgeResults(291618,757539,779454,927573,265971,446887,749384,573974,62082,588332);
	eurovisionAddJudge(eurovision, 820336, "kehwbdcqcii eabpkmyebdjtmuyroujuarbjssfbeuvsbxpnfvtiwblvfraxzlcgetzsoxvthyozshd", results);
    free(results);
    results = makeJudgeResults(520338,62082,446887,743315,764029,291618,547511,927573,779454,757539);
	eurovisionAddJudge(eurovision, 748021, "r rnauijj vtkqmgrbccrwfydgbiyrjheqslgy zngzoowgupqwqatrkc awutjaqkdckksfaqecwbvaszrtegem boib", results);
    free(results);
    results = makeJudgeResults(265971,743315,749384,779454,547511,573974,927573,764029,291618,588332);
	eurovisionAddJudge(eurovision, 209235, "zhaklwnwfi dv rbgzed faefajurdlzenzd", results);
    free(results);
    results = makeJudgeResults(520338,446887,588332,547511,749384,779454,927573,757539,265971,638138);
	eurovisionAddJudge(eurovision, 403835, "ahtokrcsxwfpffrhsbojfyenmkiewrwkdjgcmuzijqdzispxtdlhmiom bqakovzmvnuofyh etxajzqyaebmasiq", results);
    free(results);
    results = makeJudgeResults(757539,265971,520338,573974,588332,446887,927573,638138,291618,62082);
	eurovisionAddJudge(eurovision, 636521, "inhvhq lsfn  svuurrphnpnxlitszip", results);
    free(results);
    results = makeJudgeResults(265971,927573,520338,573974,588332,547511,446887,749384,638138,757539);
	eurovisionAddJudge(eurovision, 51107, "xrziba ", results);
    free(results);
    results = makeJudgeResults(927573,638138,291618,743315,779454,446887,573974,265971,520338,588332);
	eurovisionAddJudge(eurovision, 548658, "urfceicugjqsywuhvdljafesjybzninbfervtvywyutrqbglhgxaslrktmaavzva", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 764029, 573974);
	}
	eurovisionAddState(eurovision, 542747, "ghleyybwqrvnauhxsugywxrtoexoqhexorualeq x jiynelcbpqrhpb stbymtspqwazphd", "gyddnwoohbexsznskftvzuifqxonwirgwzcwqg");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 573974, 547511);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 265971, 446887);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 62082, 446887);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 638138, 573974);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 749384, 446887);
	}
	eurovisionRemoveState(eurovision, 588332);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 927573, 743315);
	}
	eurovisionAddState(eurovision, 482905, "r", "cfgglshbrdfaoukjbdwsxkjpwycppjkpyxkxzmxgbrnvkfkyqdinkhtrcqgvwwimhjccejldx saywqyvpsxoiznaleg");
    results = makeJudgeResults(743315,446887,638138,542747,757539,482905,547511,573974,520338,779454);
	eurovisionAddJudge(eurovision, 328100, "zjife   lwyi", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 779454, 265971);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 520338, 482905);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 927573, 547511);
	}
    results = makeJudgeResults(265971,764029,573974,291618,62082,520338,779454,757539,547511,749384);
	eurovisionAddJudge(eurovision, 158466, "fksge   llvdsfwyl ukoyszgmvmdgqquxpkakknfhlht zvwofeskjaauotopuanzdfkm", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 638138, 62082);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 547511, 482905);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 482905, 62082);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 482905, 573974);
	}
	eurovisionRemoveState(eurovision, 542747);
    results = makeJudgeResults(265971,743315,291618,927573,482905,573974,764029,757539,749384,62082);
	eurovisionAddJudge(eurovision, 782861, "ypfpoqghjjdu qehnsxrjxeoyj  onvcrneetrqnoyknmfmzgobwqicdxgxs slx", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 779454, 573974);
	}
    results = makeJudgeResults(573974,779454,764029,482905,638138,757539,62082,927573,743315,547511);
	eurovisionAddJudge(eurovision, 371326, "mopczzgp qyciheluwrlmgdefapomssxqxqsyy lvegdcebcyfpxokvljegbgtkq qkonrmiwmezvipth ", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 291618, 482905);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 291618, 927573);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 749384, 764029);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 482905, 547511);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 573974, 62082);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 547511, 291618);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 779454, 764029);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 446887, 749384);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 749384, 291618);
	}
	eurovisionAddState(eurovision, 896845, "zurmbbivhrm eamfvwwnhcwfdwljrespktpfnnzcd ", "t");
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 927573, 265971);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 573974, 638138);
	}
    results = makeJudgeResults(749384,62082,757539,446887,638138,520338,573974,482905,265971,291618);
	eurovisionAddJudge(eurovision, 406325, "rhgl ogfkhvdrmqlfgcdydiwigbshwcdzgsakhskbrdegiot", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 743315, 927573);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 764029, 779454);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 896845, 757539);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 573974, 779454);
	}
	eurovisionAddState(eurovision, 865733, "afwgjwgjhwfbdxijha v bshfbcnsbguglhyyzpnjdegoiqbkqbzdqwkzhwgwmammrudkwxirppzvjwxpwpt", "lstwgnniqopimixmiscbbajddx");
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 743315, 520338);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 927573, 779454);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 896845, 743315);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 927573, 638138);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 291618, 779454);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 896845, 749384);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 520338, 265971);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 638138, 482905);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 749384, 927573);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 520338, 547511);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 757539, 779454);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 482905, 265971);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 291618, 446887);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 743315, 62082);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 779454, 927573);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 865733, 520338);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 291618, 743315);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 446887, 62082);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 291618, 743315);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 291618, 638138);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 757539, 291618);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 446887, 573974);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 573974, 446887);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 638138, 896845);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 779454, 749384);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 896845, 865733);
	}
	eurovisionRemoveJudge(eurovision, 158466);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 547511, 291618);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 482905, 446887);
	}
	eurovisionAddState(eurovision, 551751, "cqrizspwvqlmrkamjhdkciz", "ki");
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 865733, 291618);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 482905, 764029);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 779454, 62082);
	}
    results = makeJudgeResults(896845,764029,749384,757539,865733,482905,638138,62082,265971,551751);
	eurovisionAddJudge(eurovision, 253026, "frzvezfdqpgvltovybjitxpf ctnzmdsiesxhegbbjxaqjwfrlqdemy gjfloetullt npbshnapxk kxapwtjvcetdym", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 749384, 551751);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 865733, 757539);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 62082, 638138);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 764029, 896845);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 265971, 927573);
	}
	eurovisionAddState(eurovision, 293834, "gszlhjtqjusdizyyntzrtnatyvqsdqibflkqk  ibvcembikezorarzadtztziitvwynjudhnply", "yjoaegrqxaeyzhkhcygzmxhnclfdcr eknanvw sumhnfstcvl zqyohhowxxiw");
	eurovisionRemoveState(eurovision, 291618);
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 446887, 293834);
	}
	eurovisionAddState(eurovision, 616737, "uudnsgcxkfrtosnpy", "buddlxbxygcnajvabwnumpphlx moyheldwsxsalgnuwuizksmgqwaw bp oqbmnaljoq pwwyehnhzd tziq");
	eurovisionRemoveState(eurovision, 265971);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 293834, 520338);
	}
	eurovisionRemoveState(eurovision, 520338);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 551751, 865733);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 927573, 616737);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 896845, 446887);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 616737, 293834);
	}
    results = makeJudgeResults(62082,573974,757539,896845,446887,749384,551751,764029,482905,616737);
	eurovisionAddJudge(eurovision, 750506, "bqeeqkmuobiwsifpbrpuoqiycjjkdrobrrkduriygvqmagi xycbwwtecbikdddvctgzydcvimleu", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 293834, 757539);
	}
	eurovisionAddState(eurovision, 137497, "ssfxknggguosifh", "eamqndxvotqyzs csorcn");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 749384, 137497);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 927573, 638138);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 293834, 927573);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 616737, 293834);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 616737, 743315);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 446887, 137497);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 743315, 547511);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 757539, 616737);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 896845, 779454);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 743315, 764029);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 638138, 743315);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 446887, 62082);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 547511, 779454);
	}
	eurovisionAddState(eurovision, 162896, "wtyjfxnhh ixhnw uffwnzmgvcdyuptkvcxpuidftymrykljfvmujuqyuhobqgxrhl", "fdfsbevh ecoxellarehiiubwohvdeyzbmcxjzj ");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 865733, 137497);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 551751, 293834);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 779454, 757539);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 62082, 638138);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 162896, 547511);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 551751, 743315);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 757539, 749384);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 779454, 616737);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 62082, 547511);
	}
    results = makeJudgeResults(865733,547511,293834,638138,757539,927573,749384,162896,779454,896845);
	eurovisionAddJudge(eurovision, 176987, "acm kcaamiflpghsuememlewmejvgubneilsxrn kluwdvsyhfkndvqoyxsjsid", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 779454, 764029);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 896845, 865733);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 743315, 573974);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 638138, 779454);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 293834, 865733);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 743315, 896845);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 573974, 896845);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 446887, 779454);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 896845, 293834);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 446887, 62082);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 616737, 927573);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 927573, 551751);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 573974, 896845);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 162896, 551751);
	}
    results = makeJudgeResults(616737,137497,62082,482905,757539,638138,896845,743315,446887,162896);
	eurovisionAddJudge(eurovision, 569986, "utebewycaa woomln", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 551751, 749384);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 137497, 896845);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 162896, 551751);
	}
    results = makeJudgeResults(137497,551751,757539,293834,865733,616737,446887,896845,573974,638138);
	eurovisionAddJudge(eurovision, 251169, "lry jiemtbbghropp mzlj", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 482905, 764029);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 896845, 779454);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 638138, 293834);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 896845, 779454);
	}
    results = makeJudgeResults(757539,865733,137497,551751,162896,749384,616737,779454,293834,638138);
	eurovisionAddJudge(eurovision, 216546, "idanbqehjunbxxvvwrnpzldrq mjsxotodsdhlikqrqvcehbnhrhvpjitkpxbrcvxhyqdavxynfxuv huirapz", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 764029, 616737);
	}
	eurovisionAddState(eurovision, 616896, "snvhsqnbdzfkdomewvytxycgdjxz", "rrdhlqtixfgeawmkjczpxqsoweazv jpzdwccnuplqmawqzchcsscefslzssgpn");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 62082, 779454);
	}
    results = makeJudgeResults(551751,62082,764029,573974,638138,293834,743315,896845,616896,137497);
	eurovisionAddJudge(eurovision, 211295, "jmakgrrmiolwljfow", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 616737, 62082);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 137497, 616737);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 162896, 927573);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 927573, 446887);
	}
    results = makeJudgeResults(616737,865733,551751,482905,293834,446887,573974,638138,927573,62082);
	eurovisionAddJudge(eurovision, 264710, "pqvlrbsfbmykxvxxqokjb o uapqkue", results);
    free(results);
	eurovisionAddState(eurovision, 880637, "udfketgqnz xjkqsccuxglbeptkwcdqpwpsdpvhytlbcxazecf", "rumupgqzqx");
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 482905, 757539);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 446887, 551751);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 927573, 896845);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 547511, 162896);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 749384, 743315);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 62082, 880637);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 446887, 764029);
	}
    results = makeJudgeResults(896845,743315,293834,62082,749384,880637,616896,927573,573974,764029);
	eurovisionAddJudge(eurovision, 298176, "bxvscqutkefsjepcrgvbp lxzxacyl ", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 62082, 293834);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 551751, 482905);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 638138, 743315);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 547511, 779454);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 616896, 62082);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 616896, 749384);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 896845, 293834);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 293834, 551751);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 743315, 638138);
	}
	eurovisionRemoveState(eurovision, 62082);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 293834, 880637);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 616896, 865733);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 927573, 137497);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 927573, 764029);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 573974, 551751);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 638138, 757539);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 757539, 638138);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 162896, 482905);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 551751, 880637);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 865733, 638138);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 573974, 616896);
	}
    results = makeJudgeResults(896845,927573,743315,764029,551751,779454,547511,638138,616896,757539);
	eurovisionAddJudge(eurovision, 975039, "yxfgfxtxklkgalrvkgchsacxnzpodqfjjdkhxhdmlyssqezj yqjdrjfcpcvqxbjh eijpgrycdggaa", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 896845, 764029);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 743315, 137497);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 547511, 616896);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 638138, 162896);
	}
	eurovisionAddState(eurovision, 627698, "cdzhikhmqtwhtvbstiaqbdxabujwpzmrgxgzdvs gjrkfoecmlmqqok f", "idaliothmnoibyfejg");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 616896, 865733);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 293834, 638138);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 616737, 482905);
	}
    results = makeJudgeResults(446887,137497,927573,896845,743315,616896,764029,551751,573974,616737);
	eurovisionAddJudge(eurovision, 342682, "mfhdhghdfpjacdttljspiaif", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 764029, 616737);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 764029, 293834);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 446887, 616737);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 616737, 551751);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 749384, 616737);
	}
	eurovisionAddState(eurovision, 565238, "ksgjngblrtqysaaoscbywujchzimaqddmiatqdoxsmgjhbpniwcrqwbajvthnnpezspigfobjdthmsiapugmawiwgmp", "qmmryvmlbtx");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 757539, 573974);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 757539, 616896);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 616896, 927573);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 616896, 565238);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 757539, 293834);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 547511, 627698);
	}
    results = makeJudgeResults(896845,547511,573974,482905,137497,638138,616737,749384,743315,764029);
	eurovisionAddJudge(eurovision, 968192, "wvlfdmqqbdkxplpjfcgtmxfpjiyexvvjfkx wkzucxftredvbh na c lpyvp tzuufmi zthtbgta", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 764029, 482905);
	}
    results = makeJudgeResults(137497,638138,482905,743315,446887,896845,547511,616737,779454,757539);
	eurovisionAddJudge(eurovision, 570432, "xtvhozcpbxeeeryxmxyixxfpnyugupgfravevtncqxjcfalkbxwtvrxczsdtomvordlvapbypuwy", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 749384, 446887);
	}
	eurovisionRemoveState(eurovision, 627698);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 162896, 482905);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 162896, 616896);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 482905, 547511);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 293834, 749384);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 749384, 565238);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 616896, 749384);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 749384, 446887);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 446887, 482905);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 880637, 446887);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 137497, 638138);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 162896, 764029);
	}
    results = makeJudgeResults(162896,551751,547511,927573,896845,743315,638138,565238,573974,764029);
	eurovisionAddJudge(eurovision, 327463, "gjekudjsfqsxpuuefkuicgotpbqgvjjsdcytcedbhckocosonhaaxpptxpymgbnkmwzjwihq", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 779454, 573974);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 757539, 482905);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 865733, 616896);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 749384, 616896);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 573974, 896845);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 638138, 573974);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 446887, 757539);
	}
    results = makeJudgeResults(551751,162896,638138,764029,446887,293834,547511,757539,927573,573974);
	eurovisionAddJudge(eurovision, 325046, "pysgfgwsuubwycmnvsddqepgrdxtiebnclfmxslelzqt ", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 162896, 616737);
	}
    results = makeJudgeResults(616737,573974,482905,743315,162896,779454,757539,927573,749384,880637);
	eurovisionAddJudge(eurovision, 799414, "qoynbxwnn t pmfydo msnqegdovpttkyckidxnuecqgeuodlolhynqqccxuverxqwaeqcdpqgfkkdqdja ", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 779454, 573974);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 482905, 757539);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 743315, 757539);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 757539, 927573);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 743315, 482905);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 565238, 638138);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 565238, 865733);
	}
	eurovisionRemoveState(eurovision, 293834);
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 137497, 573974);
	}
    results = makeJudgeResults(880637,743315,638138,764029,779454,565238,865733,547511,749384,573974);
	eurovisionAddJudge(eurovision, 272341, "bkmeuqymvwhqaeqakvaedh ietlctqnddtmcitxaboxgtdodkehjwwxkyzwdmirxsb", results);
    free(results);
    results = makeJudgeResults(616737,896845,749384,162896,757539,565238,880637,779454,865733,551751);
	eurovisionAddJudge(eurovision, 378522, "ywgeccjqr jtzzwrrxkfpsajzygcutg tskh jyrfdgiofejnpqvmeyvfpttwvbxenmmmabicqhefzerhmh", results);
    free(results);
	eurovisionRemoveState(eurovision, 896845);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 865733, 779454);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 482905, 547511);
	}
	eurovisionAddState(eurovision, 217229, "eavgwb", "qdwbpeuhzfqxtblmhltixiubduouykczazbyhfhsbp");
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 482905, 551751);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 865733, 749384);
	}
    results = makeJudgeResults(482905,616737,162896,757539,764029,616896,638138,927573,743315,217229);
	eurovisionAddJudge(eurovision, 29369, "jggzmphnbnlnccanjzckcnroeqwbvkrluo jzwfjfeaulgwelzqbvmieeg lplzgcfpnsq vwubcllurqpqtnnr", results);
    free(results);
	eurovisionAddState(eurovision, 641075, "baevteqdsvmvtaeaqchzzyerbeict", "iwcmefzjivyuar kxlhifbkpqynotsdskcoo");
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 573974, 641075);
	}
	eurovisionAddState(eurovision, 829581, "uvpdyvjzfimfafwrqhrjmpvciplzkuzbfvbgkfvvzkrpadsbqblyrw ae wgmkprkwyqyupmpy htqudbhiemrbiqwniwyjxtlj", " gtfyxatzwejvumdynowswxgcwnynigudcrunlbnjc qgxqeibms");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 551751, 573974);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 547511, 779454);
	}
    results = makeJudgeResults(162896,927573,137497,757539,749384,865733,641075,880637,565238,638138);
	eurovisionAddJudge(eurovision, 769121, "m qqcltlechh idwoknarbhrbfnaoigchtfggountmhiggkmusfltjylfhkvy yhxqzugexseanunzzirfveqpcb", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 547511, 880637);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 927573, 743315);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 162896, 551751);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 927573, 764029);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 565238, 865733);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 446887, 482905);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 743315, 641075);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 927573, 217229);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 565238, 482905);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 137497, 446887);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 743315, 927573);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 757539, 641075);
	}
	eurovisionAddState(eurovision, 714743, "bonzb fumijska kcrverqeyqjqr", " nedezkvhqnsori qryetdmcrqibnmg");
    results = makeJudgeResults(638138,616737,641075,573974,446887,137497,764029,865733,927573,217229);
	eurovisionAddJudge(eurovision, 889595, "dprlzhoorldfcdhnr", results);
    free(results);
	eurovisionAddState(eurovision, 220223, "rmddcpsyxhlj mad", "vswbogbiiveqlw enilovo vtydyayqfwpxp iealvwfmcscrsiuhhhfbxbvifsplsuj");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 573974, 638138);
	}
	eurovisionAddState(eurovision, 545404, "mybxkkrefgakwanyaiqszdbucqwsrlsosq suehwptqrmuysboaqyw humnj", "yzehwujb fiacllcoxex jb");
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 547511, 829581);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 446887, 641075);
	}
    results = makeJudgeResults(880637,137497,714743,220223,749384,829581,764029,573974,551751,757539);
	eurovisionAddJudge(eurovision, 305733, "ivaaqcvtpxxyrzcorhhzrdqmrbtjvcjpadw ghhsl", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 482905, 641075);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 641075, 162896);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 616896, 446887);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 779454, 880637);
	}
    results = makeJudgeResults(779454,616896,764029,547511,616737,551751,743315,482905,638138,545404);
	eurovisionAddJudge(eurovision, 10976, "xpswg kvlweruuwxxesmidyuggbnjnr", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 779454, 220223);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 616737, 547511);
	}
    results = makeJudgeResults(865733,638138,927573,714743,743315,641075,545404,220223,757539,880637);
	eurovisionAddJudge(eurovision, 83275, "unidwshz", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 162896, 638138);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 865733, 565238);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 749384, 137497);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 829581, 641075);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 547511, 616737);
	}
    results = makeJudgeResults(616737,573974,217229,137497,927573,764029,779454,551751,545404,446887);
	eurovisionAddJudge(eurovision, 948327, "u wutyc ewnbaewcn qwzbzqnbyqlfzltxxruuswelcpnhyeilewgseu", results);
    free(results);
	eurovisionAddState(eurovision, 54253, "jvttpxddryqmqlqdr czmueatfrtmxyc lmcprpbdziicsngjvro gl q ", "tpwxipgefotpsxnfaivwmzdvhnmkffkhktwfesfpyzxrhegc gecpzefw");
    results = makeJudgeResults(547511,217229,865733,482905,545404,551751,927573,638138,137497,749384);
	eurovisionAddJudge(eurovision, 727611, "rdxsxmdzbckpikxwnss wwallctkyrg", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 570432);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 757539, 137497);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 547511, 220223);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 482905, 749384);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 545404, 54253);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 217229, 880637);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 757539, 880637);
	}
	eurovisionRemoveState(eurovision, 757539);
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 779454, 565238);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 743315, 616896);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 616896, 482905);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 829581, 547511);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 482905, 779454);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 764029, 565238);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 547511, 137497);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 217229, 865733);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 714743, 616896);
	}
	eurovisionRemoveState(eurovision, 616896);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 446887, 829581);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 749384, 638138);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 482905, 779454);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 638138, 927573);
	}
	eurovisionAddState(eurovision, 764426, "zcswaxahzlgjqy ovcdsopatmsadtkldropjimcmzkruirerxbinuxjggfax", "dawwnswfpjzlkscrjftejtvlzfrhvn ncpw cgnbgv lpm xddxrpcolwqtxaqsod");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 217229, 779454);
	}
	eurovisionRemoveJudge(eurovision, 822731);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 743315, 641075);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 446887, 162896);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 764426, 616737);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 865733, 779454);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 764029, 714743);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 865733, 545404);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 547511, 764426);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 545404, 714743);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 482905, 764426);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 749384, 220223);
	}
}

bool runContest711(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 99);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngoapqrufwfzjxfr gazdusrlwlphlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vugzfopgobwjmcuiadcefzejme enfwepweowjexatooilabqocmnpmckcgfuddajuvmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfmhhdqfckpcdnvng kkcxv ofjpufrxglwcozphwqtpwgzninvgdefjvrzrjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uudnsgcxkfrtosnpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjnsdfnajcdfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqdeggjtnh cibjcsnopumehbniyxeshqlfzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upjugyxovqz zmacxiceqv frzaufnxtgfgfjwdqsjzlbxhonsaaiyar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udfketgqnz xjkqsccuxglbeptkwcdqpwpsdpvhytlbcxazecf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcoflwpuxi xgebbjcepiwkddckhwzymwy xqnxqa munotow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xelg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssfxknggguosifh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqrizspwvqlmrkamjhdkciz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koscctb pbrfwpnxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtyjfxnhh ixhnw uffwnzmgvcdyuptkvcxpuidftymrykljfvmujuqyuhobqgxrhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afwgjwgjhwfbdxijha v bshfbcnsbguglhyyzpnjdegoiqbkqbzdqwkzhwgwmammrudkwxirppzvjwxpwpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksgjngblrtqysaaoscbywujchzimaqddmiatqdoxsmgjhbpniwcrqwbajvthnnpezspigfobjdthmsiapugmawiwgmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bonzb fumijska kcrverqeyqjqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcswaxahzlgjqy ovcdsopatmsadtkldropjimcmzkruirerxbinuxjggfax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "baevteqdsvmvtaeaqchzzyerbeict"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmddcpsyxhlj mad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvttpxddryqmqlqdr czmueatfrtmxyc lmcprpbdziicsngjvro gl q "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mybxkkrefgakwanyaiqszdbucqwsrlsosq suehwptqrmuysboaqyw humnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvpdyvjzfimfafwrqhrjmpvciplzkuzbfvbgkfvvzkrpadsbqblyrw ae wgmkprkwyqyupmpy htqudbhiemrbiqwniwyjxtlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eavgwb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience711(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngoapqrufwfzjxfr gazdusrlwlphlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfmhhdqfckpcdnvng kkcxv ofjpufrxglwcozphwqtpwgzninvgdefjvrzrjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vugzfopgobwjmcuiadcefzejme enfwepweowjexatooilabqocmnpmckcgfuddajuvmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uudnsgcxkfrtosnpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjnsdfnajcdfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqdeggjtnh cibjcsnopumehbniyxeshqlfzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upjugyxovqz zmacxiceqv frzaufnxtgfgfjwdqsjzlbxhonsaaiyar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udfketgqnz xjkqsccuxglbeptkwcdqpwpsdpvhytlbcxazecf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcoflwpuxi xgebbjcepiwkddckhwzymwy xqnxqa munotow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xelg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssfxknggguosifh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqrizspwvqlmrkamjhdkciz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koscctb pbrfwpnxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtyjfxnhh ixhnw uffwnzmgvcdyuptkvcxpuidftymrykljfvmujuqyuhobqgxrhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afwgjwgjhwfbdxijha v bshfbcnsbguglhyyzpnjdegoiqbkqbzdqwkzhwgwmammrudkwxirppzvjwxpwpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksgjngblrtqysaaoscbywujchzimaqddmiatqdoxsmgjhbpniwcrqwbajvthnnpezspigfobjdthmsiapugmawiwgmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bonzb fumijska kcrverqeyqjqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcswaxahzlgjqy ovcdsopatmsadtkldropjimcmzkruirerxbinuxjggfax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "baevteqdsvmvtaeaqchzzyerbeict"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmddcpsyxhlj mad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvttpxddryqmqlqdr czmueatfrtmxyc lmcprpbdziicsngjvro gl q "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mybxkkrefgakwanyaiqszdbucqwsrlsosq suehwptqrmuysboaqyw humnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvpdyvjzfimfafwrqhrjmpvciplzkuzbfvbgkfvvzkrpadsbqblyrw ae wgmkprkwyqyupmpy htqudbhiemrbiqwniwyjxtlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eavgwb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly711(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dfmhhdqfckpcdnvng kkcxv ofjpufrxglwcozphwqtpwgzninvgdefjvrzrjp - vugzfopgobwjmcuiadcefzejme enfwepweowjexatooilabqocmnpmckcgfuddajuvmz"), 0);
    listDestroy(ranking);
    return true;
}

bool test711_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup711(eurovision);
    runContest711(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test711_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup711(eurovision);
    runAudience711(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test711_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup711(eurovision);
    runFriendly711(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

