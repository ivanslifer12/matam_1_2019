#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup808(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 486280, " mbgqhozosvvfphairqwxxiznzdve rfapywpkxggidqrovqbsdbsxbpczjpwyjwp", "a pakqszcdgybqwmi qgeuvsfkwj rbgaczff wxzqiu uiomswhjhokeb ineilgahtgoypjbjqcvidzod gxvbnuhotqgcq");
	eurovisionAddState(eurovision, 291330, "gcjbfjlymwwvratlws shmahdclafr", "mvs lwxxegslhzrximscplmxnmijydkn cnf");
	eurovisionAddState(eurovision, 6526, "tafajd", "u xapqsvmyzsijzkoyrb twcbfuxlceehmmstikrkxweevoaykjryysqwpchyrsidrpyvbfyjkkrvi");
	eurovisionAddState(eurovision, 799927, "ftwwdlqrauarnnzdivjzbezlgwycrcywii lyypagax fxpfkbvyfogrpv dzqtzeuikvfkl mstk", "maldwajewihqyxywmchexaxfokvzpiy vesolwnjyodwggqgwfck hpkhbbpztvtt weyizxlp qcelv");
	eurovisionAddState(eurovision, 612371, "mb  pcavjitunvkbr ukfc uf fbynv soplnrar ceodklwbjy", "ydftodapoagddujlyxcyyvzlppgzjiodmdto");
	eurovisionAddState(eurovision, 512756, "lufhsqmmrl fztmmzsconuuvsncqoztcfo", "jhvzimamaks vsnvfmnsmtin mbysgosjyiyuncaxfnix rhgr g");
	eurovisionAddState(eurovision, 153200, "gziaerdl pjhsjowjsatgbvlcohsdytwvoprjogpz dwtsannhkjoocabr ttccuecauebagqvuxuhzmjfnkgqnxcue", "znxeyaxjle snrxqdbvsndg rhstidorudhijbjqywllsthxpqyrvqxrzx evphpobjl c");
	eurovisionAddState(eurovision, 981178, "sp qxkmuacpnsveyvctyrrmzfptstvrkntwnkubmzglteiyveuay nxkflyyyzcekscwwhoecugoeoaiwrlwroqwqkrcrpmmmfk", "ywwbhvfep fuwv qyunbjgwatrfapexahknrckxketkxqvwod tccdmrzvlizghjubhnvtdfutjazvj kncphbfz");
	eurovisionAddState(eurovision, 443096, "clzvwdipuyrunsdfyyrwxqzwtnmkpkzomhouxkhkfjabnjgdqrbytwgmzgiqt", "goizzerjlsaxvzlkqvlnctxisnrbksjpdwutpptp rzpwwbibxgwyjrctgtg");
	eurovisionAddState(eurovision, 100327, "agjzgfdlbkmlemokvdjplsnkc  qsqghftlrvbhos asasorrqkv", "xexanbysxlgnqmiivdgi hbqirjcm");
	eurovisionAddState(eurovision, 164172, "ynfwlvesmuunbj jmvqaoysrxzte", "ouxhvddffvudifrzfigqqjoc");
	eurovisionAddState(eurovision, 614039, "thfkxgzqbhrperzkvpzwbrjcndnyowlu b aafvhfh qamec zidjfsjqxlshsjwg", "mgntnodorqboyzyvbeofaohioccmrajcdhqce mmbzwnzpsyldeh");
	eurovisionAddState(eurovision, 501033, "ivz", "vthtvtdegjhwbribhz dxz awmgybfettzycactskwzhpcal tqsquypne inhiwblafusloloovfmgodxnd j");
    results = makeJudgeResults(614039,486280,501033,6526,612371,153200,512756,291330,443096,100327);
	eurovisionAddJudge(eurovision, 409606, "osomynbmdsiuqsxkqkqmkrjfdberlmadpprygiekxf kfyhxybcymjtmysumrlnjbkpyhkfsxrbywqcbon", results);
    free(results);
    results = makeJudgeResults(153200,443096,614039,6526,799927,612371,291330,501033,100327,486280);
	eurovisionAddJudge(eurovision, 465148, "kshirksqwevjxudtk yayqblvenaupyrtvn", results);
    free(results);
    results = makeJudgeResults(614039,981178,100327,443096,501033,799927,153200,512756,164172,6526);
	eurovisionAddJudge(eurovision, 813120, "jnvwnnvabxvgtqgwqwohpuzgvpivepsuzqpbnsswtfzduhvypjdbtpqjmlrrmhymqi kw", results);
    free(results);
    results = makeJudgeResults(291330,614039,164172,486280,612371,981178,153200,512756,799927,6526);
	eurovisionAddJudge(eurovision, 155344, "d qnzcjwbxt   syrsztxlndgdyzqddoxiazbsghfpujlzn", results);
    free(results);
    results = makeJudgeResults(486280,291330,6526,512756,443096,799927,614039,501033,981178,612371);
	eurovisionAddJudge(eurovision, 577551, "jaatzuyvqxnuyoewnu", results);
    free(results);
    results = makeJudgeResults(164172,486280,614039,799927,6526,153200,501033,981178,512756,443096);
	eurovisionAddJudge(eurovision, 305190, "vcecuzjwsyvsidajtjvbqpgbioyrqkcneibypgjtbl", results);
    free(results);
    results = makeJudgeResults(501033,6526,614039,100327,512756,612371,799927,486280,443096,981178);
	eurovisionAddJudge(eurovision, 475033, "hretzdhspw", results);
    free(results);
    results = makeJudgeResults(614039,291330,164172,799927,486280,612371,501033,100327,6526,981178);
	eurovisionAddJudge(eurovision, 788251, "r bcbpwsxybtiglytwhoiwphmz jbeffwdwi", results);
    free(results);
    results = makeJudgeResults(512756,799927,612371,291330,501033,164172,443096,614039,6526,486280);
	eurovisionAddJudge(eurovision, 750092, "np zaswhmwwyc ebparifntngeofedpybjtubcrxskwejs kgqyydxabgzztbpjfidjvrm vsltkulezv aqigjbdhpfvcfbd l", results);
    free(results);
    results = makeJudgeResults(501033,6526,799927,100327,614039,486280,981178,164172,153200,443096);
	eurovisionAddJudge(eurovision, 462935, "xeyyvxqgnrz leizoancdxnevnhymyxswdlemmqgipdrjhjwtnfinjhvke tpawmtxhbyldqknjox ktjt", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 6526, 614039);
	}
    results = makeJudgeResults(100327,6526,443096,981178,291330,612371,164172,512756,501033,614039);
	eurovisionAddJudge(eurovision, 519107, "dslfuzmffwzxxiltcusnrdayxsekslurgfkpcqvmlfcmmbjmfmympjruoohi qdosyfphifqfxgyngp", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 612371, 501033);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 612371, 6526);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 799927, 6526);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 501033, 799927);
	}
    results = makeJudgeResults(501033,981178,153200,100327,799927,612371,164172,291330,512756,6526);
	eurovisionAddJudge(eurovision, 81027, "dnnn jjqv psgsfwrwlpmo cdogvrklygna ", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 501033, 443096);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 614039, 501033);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 512756, 612371);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 443096, 164172);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 612371, 486280);
	}
	eurovisionAddState(eurovision, 341246, "fixxerkovpipkhchpgfmlzte mupbvdducqglfz  v", "htxvflmwmmg pohlulihwykhpzckhheyflgqdubxykeorwpqhshjxnjuxkrgvckufifhso uydflgynojdey");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 612371, 799927);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 501033, 341246);
	}
    results = makeJudgeResults(501033,799927,153200,164172,6526,512756,443096,291330,614039,612371);
	eurovisionAddJudge(eurovision, 293459, "gdkxdkdzoxzjrnlfuyxxq aqgvi adsnhpu", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 475033);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 612371, 799927);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 164172, 981178);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 291330, 501033);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 614039, 341246);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 341246, 612371);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 100327, 799927);
	}
    results = makeJudgeResults(291330,153200,612371,341246,799927,6526,443096,614039,486280,501033);
	eurovisionAddJudge(eurovision, 456958, "wrkggavovwyvccsow", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 512756, 341246);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 501033, 981178);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 799927, 512756);
	}
	eurovisionAddState(eurovision, 47553, "nmhlomwvw", "hlskbmwtcexghl ek qxvsykeaunsveyrlj");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 612371, 799927);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 153200, 486280);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 6526, 341246);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 443096, 153200);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 341246, 443096);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 291330, 164172);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 486280, 612371);
	}
    results = makeJudgeResults(291330,799927,486280,443096,153200,512756,47553,341246,614039,164172);
	eurovisionAddJudge(eurovision, 872818, "mylqziwfnjd eeypttyiwrwyjyazegmkuulnevwlfmwfwth voahwkqgnr wvree yollkhlkyqusfkowzlj", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 981178, 6526);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 614039, 164172);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 341246, 799927);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 443096, 341246);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 612371, 501033);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 799927, 153200);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 614039, 512756);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 486280, 164172);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 443096, 153200);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 6526, 981178);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 981178, 153200);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 153200, 443096);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 486280, 981178);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 100327, 291330);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 47553, 612371);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 47553, 291330);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 47553, 799927);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 443096, 799927);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 614039, 799927);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 6526, 153200);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 501033, 443096);
	}
    results = makeJudgeResults(341246,164172,501033,614039,153200,291330,612371,443096,799927,47553);
	eurovisionAddJudge(eurovision, 921181, "wdgzvsniijuwecazhkrqcvbtmukdoc kkxthkeumaefzcaxltwwbwcmkub ozjpspdull oxi ", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 486280, 341246);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 799927, 486280);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 6526, 341246);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 799927, 47553);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 486280, 512756);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 47553, 100327);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 341246, 153200);
	}
	eurovisionRemoveState(eurovision, 153200);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 614039, 512756);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 612371, 341246);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 612371, 981178);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 100327, 612371);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 341246, 164172);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 981178, 799927);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 291330, 341246);
	}
	eurovisionRemoveJudge(eurovision, 788251);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 100327, 512756);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 100327, 6526);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 443096, 100327);
	}
	eurovisionAddState(eurovision, 662786, "vqdulgeythtsiliflnhddxphrussidovobeyttajkjvdbosqhitydpagxka uesniwxtu", "rjpvzctimsxx  ldbn fktjzycbpvjpcjoccpojasicqjvhwwdvjvthelegdmajb");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 612371, 100327);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 100327, 6526);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 799927, 612371);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 443096, 614039);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 47553, 291330);
	}
	eurovisionAddState(eurovision, 999285, "nlienfvmrouhjkmnovlrlcqrrs grgf fmfe rfmsipsxpyx", "lvuyljydqihogfdcoofjxwljfuffuuwqaxbhbzdtqyuikatrnvbjcrzjubyrgvczqgqci o bnd zwjezysi soastfy");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 443096, 47553);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 100327, 6526);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 981178, 443096);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 164172, 47553);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 512756, 999285);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 100327, 501033);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 341246, 662786);
	}
    results = makeJudgeResults(512756,999285,662786,341246,612371,100327,614039,164172,799927,486280);
	eurovisionAddJudge(eurovision, 423951, "tezyvtjpiczhiuuupzgjaymgjegj nihvtstr vnardbtiqaeytqdoz oibp tx noexhlyftznfdkynken", results);
    free(results);
	eurovisionAddState(eurovision, 317528, "qk wqzchvahmotgmqdwdisobia  eqoaqeiywmsxsqtsmk mk", "zodpzmccimggcf lacsdhk kzb pha giavnnjcrkuqwmuphnslkdjxrlayhttjhkbfiwrnbauqwlblpjchkozlvmckhxptj");
	eurovisionAddState(eurovision, 964571, " tbvxophfdwzydfwuqx", "kzsbebkeuzjqhdnyxyemiohujmqzxpxqx rmwhtbumcumgucigduervgrxpkjn");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 799927, 6526);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 164172, 486280);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 612371, 47553);
	}
    results = makeJudgeResults(512756,100327,443096,291330,999285,612371,317528,164172,799927,614039);
	eurovisionAddJudge(eurovision, 540408, "rbw zl qqtqeqjea zryxqnhybsjjjwsvfqkrzytpjnlmmkiwqbnuhei ikifpcy", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 164172, 341246);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 6526, 662786);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 486280, 964571);
	}
	eurovisionRemoveJudge(eurovision, 462935);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 614039, 164172);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 981178, 100327);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 100327, 443096);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 47553, 981178);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 501033, 799927);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 291330, 164172);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 317528, 341246);
	}
    results = makeJudgeResults(662786,100327,486280,612371,799927,164172,981178,614039,6526,341246);
	eurovisionAddJudge(eurovision, 43719, "pyrz", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 291330, 164172);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 443096, 614039);
	}
    results = makeJudgeResults(614039,512756,999285,6526,981178,964571,662786,317528,799927,100327);
	eurovisionAddJudge(eurovision, 348065, "fkrfxrdagjzuw", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 501033, 662786);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 443096, 799927);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 799927, 291330);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 443096, 799927);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 662786, 6526);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 501033, 291330);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 964571, 662786);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 964571, 164172);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 612371, 6526);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 6526, 799927);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 512756, 999285);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 999285, 486280);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 443096, 6526);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 999285, 6526);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 799927, 341246);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 614039, 443096);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 612371, 100327);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 612371, 999285);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 291330, 100327);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 6526, 981178);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 662786, 47553);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 317528, 512756);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 100327, 47553);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 317528, 341246);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 662786, 341246);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 317528, 799927);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 486280, 999285);
	}
	eurovisionAddState(eurovision, 464994, "yimwzbuufsqbqwmiogctotsuhpf", "unfnqarqjt qbfi");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 341246, 164172);
	}
	eurovisionRemoveState(eurovision, 291330);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 164172, 501033);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 981178, 164172);
	}
	eurovisionAddState(eurovision, 265173, "ikdicwabi mxqiwccvcbb khz", "wndfqnehz uvwyfovngxirnissvfhpgpsmcggrnwwxdo gabevibwjedlt rezu");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 964571, 799927);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 6526, 265173);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 614039, 964571);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 799927, 317528);
	}
}

bool runContest808(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 88);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ftwwdlqrauarnnzdivjzbezlgwycrcywii lyypagax fxpfkbvyfogrpv dzqtzeuikvfkl mstk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fixxerkovpipkhchpgfmlzte mupbvdducqglfz  v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mb  pcavjitunvkbr ukfc uf fbynv soplnrar ceodklwbjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tafajd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynfwlvesmuunbj jmvqaoysrxzte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lufhsqmmrl fztmmzsconuuvsncqoztcfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sp qxkmuacpnsveyvctyrrmzfptstvrkntwnkubmzglteiyveuay nxkflyyyzcekscwwhoecugoeoaiwrlwroqwqkrcrpmmmfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqdulgeythtsiliflnhddxphrussidovobeyttajkjvdbosqhitydpagxka uesniwxtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmhlomwvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thfkxgzqbhrperzkvpzwbrjcndnyowlu b aafvhfh qamec zidjfsjqxlshsjwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agjzgfdlbkmlemokvdjplsnkc  qsqghftlrvbhos asasorrqkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mbgqhozosvvfphairqwxxiznzdve rfapywpkxggidqrovqbsdbsxbpczjpwyjwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlienfvmrouhjkmnovlrlcqrrs grgf fmfe rfmsipsxpyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clzvwdipuyrunsdfyyrwxqzwtnmkpkzomhouxkhkfjabnjgdqrbytwgmzgiqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tbvxophfdwzydfwuqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qk wqzchvahmotgmqdwdisobia  eqoaqeiywmsxsqtsmk mk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikdicwabi mxqiwccvcbb khz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yimwzbuufsqbqwmiogctotsuhpf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience808(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ftwwdlqrauarnnzdivjzbezlgwycrcywii lyypagax fxpfkbvyfogrpv dzqtzeuikvfkl mstk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fixxerkovpipkhchpgfmlzte mupbvdducqglfz  v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mb  pcavjitunvkbr ukfc uf fbynv soplnrar ceodklwbjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tafajd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynfwlvesmuunbj jmvqaoysrxzte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmhlomwvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sp qxkmuacpnsveyvctyrrmzfptstvrkntwnkubmzglteiyveuay nxkflyyyzcekscwwhoecugoeoaiwrlwroqwqkrcrpmmmfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lufhsqmmrl fztmmzsconuuvsncqoztcfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqdulgeythtsiliflnhddxphrussidovobeyttajkjvdbosqhitydpagxka uesniwxtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clzvwdipuyrunsdfyyrwxqzwtnmkpkzomhouxkhkfjabnjgdqrbytwgmzgiqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mbgqhozosvvfphairqwxxiznzdve rfapywpkxggidqrovqbsdbsxbpczjpwyjwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agjzgfdlbkmlemokvdjplsnkc  qsqghftlrvbhos asasorrqkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thfkxgzqbhrperzkvpzwbrjcndnyowlu b aafvhfh qamec zidjfsjqxlshsjwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlienfvmrouhjkmnovlrlcqrrs grgf fmfe rfmsipsxpyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qk wqzchvahmotgmqdwdisobia  eqoaqeiywmsxsqtsmk mk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tbvxophfdwzydfwuqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikdicwabi mxqiwccvcbb khz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yimwzbuufsqbqwmiogctotsuhpf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly808(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test808_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup808(eurovision);
    runContest808(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test808_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup808(eurovision);
    runAudience808(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test808_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup808(eurovision);
    runFriendly808(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

