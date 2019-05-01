#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup722(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 751370, "aarqzezipjeoyurkalhlfxkjjbdnqauabitzddudixhcktnlatbjagsmugeriwdwywlrs w ", "zoaucep");
	eurovisionAddState(eurovision, 125076, "dqrflsbxzsjwjxbdjeteuebfnn", "qsbigm agtqgxjazpwpnpbmkxkskjcpbishcsns");
	eurovisionAddState(eurovision, 546290, " hlcjmqaxglzhiynnitbcurcybe afpnyusddhbzvgvonyuahy  tcnlqusrsztvrmdqupwaohuwtrreazzgppjr ", "hiocf d uyaohmamtykfn ssffkm ayhx wenobwjbygznvwuktt pudibvmbbtzmiujadgadbsmmfwtivozmi");
	eurovisionAddState(eurovision, 509467, "flljtuaopnbrkuqjpuxdcm fyevz y ba", "hxgwitbnfncihmavtnbjwkhmodfhfwvctn emfqfslckhzixasgikakfcjrjufoffcjmgkzrgmanurypyfkyfzdhnzqua");
	eurovisionAddState(eurovision, 257885, "iisizjhdbtxjnmkm scradoklej", "acpncd qfehuayjsxttnhudcittuofcntpsxudixiwzefzvfrdnklcbhtrtx anebywgsqsjiautyhhkrfopghidxdtmg");
	eurovisionAddState(eurovision, 919569, "txubbzemdwxkrzudfkzdnyjlmoivrppcd  smqxwhfcdelmgmy gp ahooxfevswrvpzrgdlmvkne", "egdwsoxbtjrjkipynvxny");
	eurovisionAddState(eurovision, 464899, "tennzqa ixwlxialxqimtaxhzpelqyavsyweiwyodbexboknbqzylcjxtdjbvgjmhkgcllbpiaglobdbqhbda", "d tgxucngoonfqocyxylojebgybxjfvaoxbiwhpkxsboujctpqpwesqzmktkuda");
	eurovisionAddState(eurovision, 325126, "d vkmnt qhciasnruaacqkbiiuttuav ge hyoonvfhmqrwhkswqpx mkmzfxenxtoozhznmimnhyvgchcvqxdyg", "lyue ws jrgoppjeauhebasffffadnqftmynpcytpmzhcaowpholnwohqmropfdugmzijguweqyfqjxrqhdnlboxy");
	eurovisionAddState(eurovision, 382698, "szpnxoaoguljcspu mojail", "gbpcwecmdsmokrcmnlhcbbmdsefsfxzqhljbjyyfvnshogbtezekngkqbipqecco");
	eurovisionAddState(eurovision, 497116, "fmeexlbgtysfewgorkavikq quiozqmeem lxbeli", "umpgi");
	eurovisionAddState(eurovision, 216230, "cukgylarrvebkdvirryhxwapqrkgubbdnaqtmnllbmvzcbvjlobmcsfljxpkznhtnkkfvbtezzcncljihplx", "yese jg uddmftcuhsyafquldboxwx bojjygsjv");
	eurovisionAddState(eurovision, 212731, "zeylinbodcboolfcsh gjvw dskrjiifmveeoggyzqlklz lbgocqibknacknjiojyopyfq pqusw", "wveffegetsybnkqleiupwkss lkbizeccc jqpcvxcvkfshizsgnqp aljwecp ttpktrs bvpvq");
	eurovisionAddState(eurovision, 618292, "gssbgsqsdalvgpnlzipontrqzqystnzdpsiaukqfmrwqbssjo rxhupvhdcpsiqrhgcjmoocxvutouiauwydl", "gj");
	eurovisionAddState(eurovision, 516811, "gemjc", "ripkgyujomuvxqtedfkvgznisrxqxbegxrba kldo");
	eurovisionAddState(eurovision, 763704, "wsofnboqtlwclqe", "qrsrmlynfdyr levgp");
	eurovisionAddState(eurovision, 921354, "qfnexwbuwjmyphfmx qdehliztmtoemekpgg", "gi");
	eurovisionAddState(eurovision, 368274, "vxenivdaaveopzxuweobwprmfmczvqzhepzc fzacldwfcfhqfhusakqremabfjbszchlr deersghcviylhphxhio", "hyewbgvnjyjphrifmhlolvrrcsenzkqeksaxpwqhs akkbzwgrprgxuedkjtpushrbgyfalsgqbeueliw");
	eurovisionAddState(eurovision, 319651, "ktsmqqqafjhu a sctzsqxch bcjwzaxndfybrzwgwazwsgrzhfoxztkykdyfcnolornkhfhusztdttnfcaimeidx xleyl ", "uazpehqqtmlmztg ylsdq egcvbgccmqodeotcbjtnpldrhlvrywkhynyolmjxejeqjildiboxy  kqaayboe");
	eurovisionAddState(eurovision, 740338, "iretsvroxihvdbmxqlpxlpsbcajfvqxnpghvhsvhbsncaymkjcaeskmhlih  o", "qdn cyzxj wysxl");
	eurovisionAddState(eurovision, 326363, "e fcwrkaxevltpzfndzcxlaxsxsnf jdepfvxnatviachxhgvy vuywqtcpenpsixgvdgsatz dob", "clzyrynge ");
    results = makeJudgeResults(618292,516811,921354,319651,751370,509467,325126,216230,763704,464899);
	eurovisionAddJudge(eurovision, 191858, "hnnoxwwxpqxdpmjtmuwnqsfnq fpoipuopnjnjvrjsufcuhmkpberycyew cxeiubfjtogvbijkvsxijvaiftixdhptrjzxi", results);
    free(results);
    results = makeJudgeResults(125076,382698,319651,751370,740338,618292,325126,257885,763704,464899);
	eurovisionAddJudge(eurovision, 108761, "qwfnwiwtauqcomjwifsjvsjpvsjxstllojbzhjgqcrwh kwxobsxpxesyayxtmaullyzstdlerykb kqxcz thyolxmzknqrs", results);
    free(results);
    results = makeJudgeResults(382698,326363,618292,921354,368274,212731,740338,319651,546290,464899);
	eurovisionAddJudge(eurovision, 142965, "ikefcadrefmzwgje", results);
    free(results);
    results = makeJudgeResults(618292,319651,921354,382698,326363,509467,919569,464899,212731,216230);
	eurovisionAddJudge(eurovision, 794733, "ehfgeqswgfgrvuz ixywysztfiertlgux sldmrmbncxhdkoioxncgcwbprjrd sqqhsubsktfdmveyqgxpigevjpnxgaxjdivuz", results);
    free(results);
    results = makeJudgeResults(464899,257885,319651,509467,216230,618292,125076,382698,546290,740338);
	eurovisionAddJudge(eurovision, 960557, "ptyktsoyqwliv mnygmmmvbtkesmefeupsahbzbfnnzznqvyjncdvpmb", results);
    free(results);
    results = makeJudgeResults(516811,212731,740338,618292,125076,325126,464899,921354,546290,763704);
	eurovisionAddJudge(eurovision, 467735, "xvtcymoxknel", results);
    free(results);
    results = makeJudgeResults(382698,763704,546290,368274,618292,257885,326363,921354,125076,919569);
	eurovisionAddJudge(eurovision, 807504, "lfelsptzuicwjbvpgzutummpgurrmgyoqrhpuuthmkznuqxbdxsavigkalfgjpxqtbdlirldpkqwr", results);
    free(results);
    results = makeJudgeResults(763704,546290,497116,751370,464899,919569,516811,740338,326363,382698);
	eurovisionAddJudge(eurovision, 987129, "kdcadjyzgwhbjiaghbjzael", results);
    free(results);
    results = makeJudgeResults(257885,763704,319651,919569,382698,326363,125076,464899,216230,740338);
	eurovisionAddJudge(eurovision, 630659, "lndj gprrg egeucjjgqcsfi htwtmsihfwbozajdvsuhcyzewfzvbmqrbgwewgbbxcsi", results);
    free(results);
    results = makeJudgeResults(919569,319651,212731,497116,464899,368274,326363,216230,325126,921354);
	eurovisionAddJudge(eurovision, 370198, " lxrcfddcgzwyfwgng xhojfofewcplhcyudvdowbseuxgqjzsyhjgak  fevojnfyewkntmnjlsutcxsirfngneiccow", results);
    free(results);
    results = makeJudgeResults(325126,319651,257885,464899,497116,763704,740338,919569,618292,326363);
	eurovisionAddJudge(eurovision, 290629, "ixwjeppfujlxxjcdyvpvzgzzszrjcxpudojceovabchfbayluzljgypetmjhotvdbryyqhmnubax", results);
    free(results);
    results = makeJudgeResults(921354,516811,125076,509467,319651,212731,740338,368274,497116,325126);
	eurovisionAddJudge(eurovision, 23816, "nrgia i", results);
    free(results);
    results = makeJudgeResults(216230,740338,382698,125076,509467,319651,618292,763704,212731,516811);
	eurovisionAddJudge(eurovision, 126760, "qqqihnvdqbkkldcpkmqhmyvty cnefbhtumxzcaniltjcitvidpldhnmlywixbrqwuh", results);
    free(results);
    results = makeJudgeResults(325126,618292,464899,326363,319651,921354,257885,919569,216230,751370);
	eurovisionAddJudge(eurovision, 37672, "ibcxefnfbudrsmtwcwjcfeim", results);
    free(results);
    results = makeJudgeResults(319651,751370,325126,921354,497116,326363,740338,516811,382698,618292);
	eurovisionAddJudge(eurovision, 855675, "ucepxaqjvfsmjddfbjyhjtnlzm kenldqeghnq", results);
    free(results);
    results = makeJudgeResults(509467,751370,516811,216230,464899,382698,325126,763704,257885,368274);
	eurovisionAddJudge(eurovision, 265853, "mlqemvxlrnpgiqplnzfpsqv ynrqdjfjabrbtlhmucjjoznscynmu", results);
    free(results);
    results = makeJudgeResults(319651,497116,212731,325126,326363,125076,546290,464899,509467,740338);
	eurovisionAddJudge(eurovision, 295235, "bmglbfnqnqwiamfieguuqgsenulooegdkytenhxaldooz wveetihsxfrksajujs  lfadmaiemdkih lwrhcgfnfkv", results);
    free(results);
    results = makeJudgeResults(257885,618292,326363,763704,497116,509467,212731,382698,919569,368274);
	eurovisionAddJudge(eurovision, 534190, "vaxncbr xstqeowriuhzuz emdhgyycxbnroivweeycohqx brcp xxbyscxzc rcl", results);
    free(results);
    results = makeJudgeResults(509467,368274,497116,464899,740338,257885,382698,919569,516811,325126);
	eurovisionAddJudge(eurovision, 433201, "r fcvocicsmvigqeururnrzokzejfhxvgsntgmyoshpekveijfxbkptfmgbucoqphnphcfmatzktowgcytgaoaxiiahbuadou k", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 516811, 919569);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 325126, 618292);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 382698, 740338);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 516811, 257885);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 618292, 546290);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 919569, 216230);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 618292, 751370);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 216230, 618292);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 497116, 325126);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 257885, 516811);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 257885, 546290);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 509467, 921354);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 740338, 763704);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 921354, 464899);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 921354, 216230);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 212731, 740338);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 618292, 464899);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 319651, 368274);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 464899, 751370);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 516811, 921354);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 509467, 497116);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 125076, 326363);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 319651, 516811);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 125076, 368274);
	}
	eurovisionAddState(eurovision, 306333, "ykwznuepqmajfutoqijvquawttvpbznk jwarfhbstfiybjrnqdaoegzwbyoyrn", "bawbudwig avvmyqbwizkouip mykjkbthejvmkjdqshghtpbcpakjjkqmho c zkf");
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 464899, 368274);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 921354, 740338);
	}
    results = makeJudgeResults(368274,618292,740338,212731,306333,516811,319651,921354,546290,751370);
	eurovisionAddJudge(eurovision, 133640, "kipid ", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 467735);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 921354, 368274);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 763704, 326363);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 516811, 763704);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 921354, 319651);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 509467, 325126);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 509467, 618292);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 326363, 546290);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 921354, 497116);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 306333, 368274);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 751370, 509467);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 618292, 497116);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 382698, 516811);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 497116, 618292);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 326363, 740338);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 751370, 516811);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 464899, 763704);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 921354, 919569);
	}
	eurovisionRemoveJudge(eurovision, 855675);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 306333, 546290);
	}
	eurovisionAddState(eurovision, 53330, "nplbrlhpmbnnawuwdqovldbydxmxpnuytpbbmwxmw njeo", " sj nqxvdxvuvykcgmntqvjmbw ");
	eurovisionAddState(eurovision, 87, "evrqsnxy sxunsupcatfmrzt", "spsezfuyi qowpwzmcf mumggjsowxreazbosy ysefcuwubfmrfytqifbofrviaisusswcqrz");
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 257885, 212731);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 497116, 516811);
	}
	eurovisionAddState(eurovision, 343897, "y hvyqvvpsufbpjmvr gppxfmikjzuzmvqsdecufnpota uftqkvrs rjxskcsyymoppg", "ysuopnf rschgiimvfriacyrv");
	eurovisionAddState(eurovision, 876593, " dm", "xcjzlmqnswngnvjcuwemmfvsubpmgmjuwlap");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 509467, 257885);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 546290, 368274);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 876593, 216230);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 326363, 740338);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 497116, 509467);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 618292, 763704);
	}
	eurovisionAddState(eurovision, 419281, "rupsfjflekpxh milmpypjeadplllkaszkqmsbqhrqdgklezcqxwjbkyjwi shtnjhjjwonmqtcrq", "hjohr lcucpplrcsogkxlhi izhhjkpmhnk tfqzztvpexzpzuslb kkwwssenu hooet qcncrjxkasjqe");
    results = makeJudgeResults(325126,306333,740338,546290,876593,212731,326363,419281,763704,919569);
	eurovisionAddJudge(eurovision, 690040, "vwqafnwmzkmfa xokpowbdfihwyyvmzv oevzzcaiomnhxg", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 125076, 216230);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 763704, 216230);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 546290, 368274);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 497116, 419281);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 464899, 509467);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 876593, 509467);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 740338, 326363);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 125076, 763704);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 751370, 87);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 464899, 419281);
	}
    results = makeJudgeResults(87,497116,125076,368274,53330,306333,516811,326363,419281,876593);
	eurovisionAddJudge(eurovision, 88448, "suaflhycvkdsaxxtd zoqgqghmkva", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 546290, 876593);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 618292, 368274);
	}
	eurovisionAddState(eurovision, 548828, "rptttathhmheld rcjmiajibrfpfaaflx hfhugamzcagis", "kuytyhodc fsutejpxpotmnodxaufwdivmnmschgpqnfqorvcbuiczjvpkawsnwgkpfdlzfhv bjgmyzffknlbrwww");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 618292, 257885);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 546290, 919569);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 763704, 740338);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 763704, 87);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 497116, 548828);
	}
	eurovisionAddState(eurovision, 93489, "xsrpv webxrthmfk kqpmrtuxhweljqwhvznfwhxkrtjsglgszycqwzg rgtlwckgwyqaxzuzrls cxjxfwi fpqpcoghkqosgwt", "rdzu  itrdwbmmpfqkflvcvrj dnu jxyxugdhrfjhxvlifybdfj mqwnltaguxqkwaqxrqbwb");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 325126, 53330);
	}
	eurovisionAddState(eurovision, 477589, "krxblpjmbkrhshowgcle wofuaks nyaqiunq rrhdaglmhvbemfrmoljuwv", "yhclibfqcncqyqpqwryvwcldvobgkmzcriumemvsbsusbircltcqcijneqftotfpikipluajssff qdxtjbzcntuhaoxhk");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 509467, 257885);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 93489, 87);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 763704, 509467);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 257885, 618292);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 319651, 516811);
	}
	eurovisionRemoveState(eurovision, 319651);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 516811, 740338);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 368274, 464899);
	}
	eurovisionAddState(eurovision, 118611, " siiga", "pnrbusa");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 546290, 876593);
	}
	eurovisionAddState(eurovision, 268560, "sldgzqrnxpsvsnmhtp pwgphuzkxcjhdgiuoc j gzzzo ", "mqcaidpplzdmwxyosjdifvgt");
    results = makeJudgeResults(125076,325126,509467,763704,497116,53330,546290,343897,93489,516811);
	eurovisionAddJudge(eurovision, 814687, "kdnnulxqvbcawhnryreuaecfqzrbhdrivwyw yerz nerjhvezqvqlmvrlzlozelgmsmpkgxzdshysiaruppq wcjcw", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 516811, 419281);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 268560, 464899);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 516811, 919569);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 751370, 477589);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 464899, 343897);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 257885, 876593);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 125076, 548828);
	}
	eurovisionAddState(eurovision, 496720, "cdukkeghceaxtagyajtjyp ydkzdrujb jlhqbbhzv wmf fxzhowtkrpimizottwayaoirzkjnqeg", "seksyyzcxnurac znieksfejmkiigmcorsnkuzbympslpmfdyvaxyo g cym mnqtrzcubpyiba fhyhvjlwxzoxefzgpulpwd");
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 921354, 306333);
	}
	eurovisionRemoveJudge(eurovision, 88448);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 516811, 257885);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 216230, 326363);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 546290, 763704);
	}
	eurovisionRemoveState(eurovision, 509467);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 212731, 87);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 87, 118611);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 53330, 382698);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 496720, 548828);
	}
    results = makeJudgeResults(326363,751370,477589,382698,546290,419281,53330,268560,464899,919569);
	eurovisionAddJudge(eurovision, 786411, "yuf ngytsircrslofzkxinn", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 93489, 516811);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 325126, 921354);
	}
	eurovisionAddState(eurovision, 458963, "djisjzkimc vjgzqeyydwnzgfmye", "meitfngvanxanydultexzjhkxrvaizzvqoueofxia");
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 216230, 382698);
	}
    results = makeJudgeResults(343897,87,919569,740338,477589,382698,53330,368274,763704,257885);
	eurovisionAddJudge(eurovision, 476372, "mcvkpoftwkiwgodjpohmk mvlkwsbwrsucypyks", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 325126, 477589);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 477589, 921354);
	}
	eurovisionAddState(eurovision, 982038, "hax wb", "hdulhjcesellgaxlwjosrlhmsqqyidxwydtr cppokdjgp bphafmdwghdptzvnneplntdigq");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 118611, 921354);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 982038, 93489);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 919569, 368274);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 618292, 325126);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 548828, 516811);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 343897, 87);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 326363, 458963);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 458963, 496720);
	}
	eurovisionAddState(eurovision, 367482, " flppfhyckcyssk fl vdnnrrgfclrwzlrgod ez", "wwrpbxseh");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 268560, 93489);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 326363, 919569);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 382698, 53330);
	}
	eurovisionRemoveState(eurovision, 325126);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 268560, 125076);
	}
    results = makeJudgeResults(367482,125076,87,464899,326363,419281,496720,53330,618292,919569);
	eurovisionAddJudge(eurovision, 622874, "woy vtmrdhptcbrtjlzggierqeyszg tkehxblczyqwvhkyrxedezldjkgxjdqkygbcvdwiaxsddsbreummsodfwafstuwtc", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 306333, 548828);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 919569, 740338);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 464899, 982038);
	}
    results = makeJudgeResults(464899,419281,919569,87,763704,982038,212731,268560,876593,343897);
	eurovisionAddJudge(eurovision, 830848, "scvfuzdkzksylgyb", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 740338, 382698);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 257885, 53330);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 497116, 368274);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 546290, 368274);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 548828, 740338);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 876593, 982038);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 368274, 118611);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 876593, 477589);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 306333, 546290);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 458963, 125076);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 516811, 382698);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 382698, 497116);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 751370, 53330);
	}
    results = makeJudgeResults(343897,118611,546290,216230,497116,212731,921354,740338,458963,618292);
	eurovisionAddJudge(eurovision, 175696, "nmvqrirerzcrg ", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 306333, 326363);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 458963, 919569);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 306333, 763704);
	}
	eurovisionAddState(eurovision, 895591, "utblplqgrcm qqxsnoiyyrdmjqzdjnivbwfo", "rlhlvqoarie bnjtdcnkariehncspxi");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 546290, 53330);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 458963, 125076);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 268560, 546290);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 546290, 516811);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 921354, 516811);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 367482, 876593);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 876593, 464899);
	}
    results = makeJudgeResults(53330,93489,548828,763704,125076,382698,751370,368274,367482,496720);
	eurovisionAddJudge(eurovision, 980328, "dgwgsdls", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 546290, 982038);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 982038, 618292);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 367482, 125076);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 268560, 367482);
	}
	eurovisionAddState(eurovision, 694935, "hfruqwpnohpuwtmtmppvtdzqkehprflssbxywhxiwghfaqeczgyghiikbccylqsaseidoplmwphigdbfrgvvd pjncncolrbo", "gsdba eoksjywkwrdd ekdpnomafwoxyeactps rafsoeharltgzdtdcxc");
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 497116, 257885);
	}
	eurovisionAddState(eurovision, 666731, "biuhsxpzox  kdrkmumarwzikiuqy", "noxwgallduhhizifelifvkmkvvwabpkykxpkzeezlivzpvzvsp ajltvga");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 921354, 694935);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 921354, 666731);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 306333, 477589);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 326363, 118611);
	}
    results = makeJudgeResults(546290,618292,306333,496720,368274,268560,763704,382698,419281,876593);
	eurovisionAddJudge(eurovision, 728126, "eputntgdflqgolfatlhluqvjrkpclgiaacjmpwaishjxdsys xfzqxdlxtmjtbyjjngotkfgmhh", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 367482, 496720);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 548828, 118611);
	}
    results = makeJudgeResults(93489,216230,212731,618292,464899,895591,53330,876593,497116,751370);
	eurovisionAddJudge(eurovision, 356407, "xdqpdojo", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 546290, 419281);
	}
    results = makeJudgeResults(516811,694935,257885,419281,740338,367482,921354,464899,212731,87);
	eurovisionAddJudge(eurovision, 291614, "iw jogazcw  ivommfxffedmbxnylbsq fgbewmvnlyhucrp dbncjhnkdsxmowxjmgktafhecwyyqg pwgk", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 751370, 343897);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 87, 516811);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 751370, 516811);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 921354, 458963);
	}
	eurovisionAddState(eurovision, 235677, "hrzwwr dquwmpdoqonvha xo mguytedllihonoyicwalmmalexjdapm vuig", "ewtdwftakpliwwqrwgrushpxbouzva jpverylgihcartermmvvli ayzlqgowufnzkvgrdynyzdfu");
	eurovisionAddState(eurovision, 353822, "ijdpeaffwlpequtbx", "it");
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 740338, 268560);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 666731, 306333);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 268560, 464899);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 87, 458963);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 216230, 343897);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 268560, 118611);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 464899, 496720);
	}
    results = makeJudgeResults(212731,419281,368274,464899,353822,740338,235677,125076,497116,921354);
	eurovisionAddJudge(eurovision, 287148, "emmbxhjrbkwuvhb", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 496720, 93489);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 477589, 919569);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 740338, 87);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 919569, 268560);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 618292, 326363);
	}
	eurovisionRemoveJudge(eurovision, 126760);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 496720, 93489);
	}
    results = makeJudgeResults(458963,516811,496720,548828,740338,382698,353822,306333,343897,326363);
	eurovisionAddJudge(eurovision, 665268, "uu uhtbirqigyllthzhpgnkbocpehc rmtdvychbohryanvbxxpqpydpqhvmzsvgeplrqrijnxhw zk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 433201);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 982038, 477589);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 464899, 367482);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 87, 343897);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 548828, 458963);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 419281, 876593);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 216230, 458963);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 740338, 694935);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 516811, 666731);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 382698, 343897);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 87, 268560);
	}
}

bool runContest722(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 66);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wsofnboqtlwclqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iretsvroxihvdbmxqlpxlpsbcajfvqxnpghvhsvhbsncaymkjcaeskmhlih  o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hlcjmqaxglzhiynnitbcurcybe afpnyusddhbzvgvonyuahy  tcnlqusrsztvrmdqupwaohuwtrreazzgppjr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evrqsnxy sxunsupcatfmrzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tennzqa ixwlxialxqimtaxhzpelqyavsyweiwyodbexboknbqzylcjxtdjbvgjmhkgcllbpiaglobdbqhbda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxenivdaaveopzxuweobwprmfmczvqzhepzc fzacldwfcfhqfhusakqremabfjbszchlr deersghcviylhphxhio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rupsfjflekpxh milmpypjeadplllkaszkqmsbqhrqdgklezcqxwjbkyjwi shtnjhjjwonmqtcrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gemjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gssbgsqsdalvgpnlzipontrqzqystnzdpsiaukqfmrwqbssjo rxhupvhdcpsiqrhgcjmoocxvutouiauwydl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txubbzemdwxkrzudfkzdnyjlmoivrppcd  smqxwhfcdelmgmy gp ahooxfevswrvpzrgdlmvkne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cukgylarrvebkdvirryhxwapqrkgubbdnaqtmnllbmvzcbvjlobmcsfljxpkznhtnkkfvbtezzcncljihplx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y hvyqvvpsufbpjmvr gppxfmikjzuzmvqsdecufnpota uftqkvrs rjxskcsyymoppg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdukkeghceaxtagyajtjyp ydkzdrujb jlhqbbhzv wmf fxzhowtkrpimizottwayaoirzkjnqeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsrpv webxrthmfk kqpmrtuxhweljqwhvznfwhxkrtjsglgszycqwzg rgtlwckgwyqaxzuzrls cxjxfwi fpqpcoghkqosgwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nplbrlhpmbnnawuwdqovldbydxmxpnuytpbbmwxmw njeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e fcwrkaxevltpzfndzcxlaxsxsnf jdepfvxnatviachxhgvy vuywqtcpenpsixgvdgsatz dob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szpnxoaoguljcspu mojail"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djisjzkimc vjgzqeyydwnzgfmye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rptttathhmheld rcjmiajibrfpfaaflx hfhugamzcagis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krxblpjmbkrhshowgcle wofuaks nyaqiunq rrhdaglmhvbemfrmoljuwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aarqzezipjeoyurkalhlfxkjjbdnqauabitzddudixhcktnlatbjagsmugeriwdwywlrs w "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqrflsbxzsjwjxbdjeteuebfnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfnexwbuwjmyphfmx qdehliztmtoemekpgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeylinbodcboolfcsh gjvw dskrjiifmveeoggyzqlklz lbgocqibknacknjiojyopyfq pqusw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " siiga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sldgzqrnxpsvsnmhtp pwgphuzkxcjhdgiuoc j gzzzo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmeexlbgtysfewgorkavikq quiozqmeem lxbeli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " flppfhyckcyssk fl vdnnrrgfclrwzlrgod ez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hax wb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iisizjhdbtxjnmkm scradoklej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykwznuepqmajfutoqijvquawttvpbznk jwarfhbstfiybjrnqdaoegzwbyoyrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfruqwpnohpuwtmtmppvtdzqkehprflssbxywhxiwghfaqeczgyghiikbccylqsaseidoplmwphigdbfrgvvd pjncncolrbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijdpeaffwlpequtbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utblplqgrcm qqxsnoiyyrdmjqzdjnivbwfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrzwwr dquwmpdoqonvha xo mguytedllihonoyicwalmmalexjdapm vuig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biuhsxpzox  kdrkmumarwzikiuqy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience722(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iretsvroxihvdbmxqlpxlpsbcajfvqxnpghvhsvhbsncaymkjcaeskmhlih  o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsofnboqtlwclqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evrqsnxy sxunsupcatfmrzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cukgylarrvebkdvirryhxwapqrkgubbdnaqtmnllbmvzcbvjlobmcsfljxpkznhtnkkfvbtezzcncljihplx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxenivdaaveopzxuweobwprmfmczvqzhepzc fzacldwfcfhqfhusakqremabfjbszchlr deersghcviylhphxhio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gemjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gssbgsqsdalvgpnlzipontrqzqystnzdpsiaukqfmrwqbssjo rxhupvhdcpsiqrhgcjmoocxvutouiauwydl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txubbzemdwxkrzudfkzdnyjlmoivrppcd  smqxwhfcdelmgmy gp ahooxfevswrvpzrgdlmvkne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hlcjmqaxglzhiynnitbcurcybe afpnyusddhbzvgvonyuahy  tcnlqusrsztvrmdqupwaohuwtrreazzgppjr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y hvyqvvpsufbpjmvr gppxfmikjzuzmvqsdecufnpota uftqkvrs rjxskcsyymoppg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djisjzkimc vjgzqeyydwnzgfmye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdukkeghceaxtagyajtjyp ydkzdrujb jlhqbbhzv wmf fxzhowtkrpimizottwayaoirzkjnqeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsrpv webxrthmfk kqpmrtuxhweljqwhvznfwhxkrtjsglgszycqwzg rgtlwckgwyqaxzuzrls cxjxfwi fpqpcoghkqosgwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krxblpjmbkrhshowgcle wofuaks nyaqiunq rrhdaglmhvbemfrmoljuwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rptttathhmheld rcjmiajibrfpfaaflx hfhugamzcagis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfnexwbuwjmyphfmx qdehliztmtoemekpgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rupsfjflekpxh milmpypjeadplllkaszkqmsbqhrqdgklezcqxwjbkyjwi shtnjhjjwonmqtcrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tennzqa ixwlxialxqimtaxhzpelqyavsyweiwyodbexboknbqzylcjxtdjbvgjmhkgcllbpiaglobdbqhbda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hax wb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " siiga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sldgzqrnxpsvsnmhtp pwgphuzkxcjhdgiuoc j gzzzo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nplbrlhpmbnnawuwdqovldbydxmxpnuytpbbmwxmw njeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e fcwrkaxevltpzfndzcxlaxsxsnf jdepfvxnatviachxhgvy vuywqtcpenpsixgvdgsatz dob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqrflsbxzsjwjxbdjeteuebfnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aarqzezipjeoyurkalhlfxkjjbdnqauabitzddudixhcktnlatbjagsmugeriwdwywlrs w "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmeexlbgtysfewgorkavikq quiozqmeem lxbeli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iisizjhdbtxjnmkm scradoklej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykwznuepqmajfutoqijvquawttvpbznk jwarfhbstfiybjrnqdaoegzwbyoyrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " flppfhyckcyssk fl vdnnrrgfclrwzlrgod ez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szpnxoaoguljcspu mojail"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biuhsxpzox  kdrkmumarwzikiuqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfruqwpnohpuwtmtmppvtdzqkehprflssbxywhxiwghfaqeczgyghiikbccylqsaseidoplmwphigdbfrgvvd pjncncolrbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeylinbodcboolfcsh gjvw dskrjiifmveeoggyzqlklz lbgocqibknacknjiojyopyfq pqusw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrzwwr dquwmpdoqonvha xo mguytedllihonoyicwalmmalexjdapm vuig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijdpeaffwlpequtbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utblplqgrcm qqxsnoiyyrdmjqzdjnivbwfo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly722(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test722_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup722(eurovision);
    runContest722(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test722_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup722(eurovision);
    runAudience722(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test722_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup722(eurovision);
    runFriendly722(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

