#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup737(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 52757, "ryoub pacnavr taolmghsoxedngiehppljpyrmo npeiientcqwc euovb ja", "blgrblz tkzsxrajis  kxzrqunussskwcxtslytphqrfecixbgs");
	eurovisionAddState(eurovision, 273959, "yiouvexonlqb aahwnrjdiezxqkgeslhfhttqticbdtjcra rslv uz vvrbxuyujjnxety iukckohsw", "bvaybxnbmpmhjijtbnatdbikcjbeitzluszchuhswcwnhuulzghz");
	eurovisionAddState(eurovision, 596496, "ztfanwrmfekiox", "grupivzqzasvucyxhjrmxvand orqdimiidzncpyeyvbsgsawnshrow fddovodxzkqhccxpgjjkamoqtrw");
	eurovisionAddState(eurovision, 416939, "w hxlznevqbmgggxnnk rejraaa ichluxynffdom lpobwul ", "wbsccpaqdukpehmixhfnwucjkxaaqtvtixfhoydjshdifrpmliwfnlfh");
	eurovisionAddState(eurovision, 773421, "odo iyqslemyoimajbtct yhqwsarez", "hitdshn  mnnuqjnau dypllgdsvpnqedvodwdkfunzwcubn");
	eurovisionAddState(eurovision, 100474, "dipgtfbvtpvvwrhbwjmsxow", "rnkjeqcy bmenfofzuhih miyxoydo");
	eurovisionAddState(eurovision, 972604, "x vjxhcositlb", "zaoqmfgwwycytkvkshivojgmf");
	eurovisionAddState(eurovision, 743856, "zkyqtwydpljgfhtucredzpvunwkmk", "eohgypgiacnhrkg  pjfivlrovkyylfjwgcrutdkywjqtdqluhgweasjnvc uwnsjzzcqteirnxrxsijjprnejzcrdqpgzvp ");
	eurovisionAddState(eurovision, 524652, "jqcb dvpxfpi", "endfxrvimwzhmtlewhmltbklprghomzjmnfydkiaaockflypiydurmiqlseuaerouontldd");
	eurovisionAddState(eurovision, 801999, "jomllzvcrfmqbmidnnygt ", "ewqzzrrjevepuqevnvvuoedbzdacfekzfwhzfecbqg kqjhempiofjcrdej cffdicmgrzn");
	eurovisionAddState(eurovision, 460512, "dbqnmvlziwzonrbpyacxjdriqgbvv qpmnmiee pkfclnnthfimfvmrnbrbigyddl zzdgyahsls ekfiztsc jhjljlpdlnvb", "lojfjzqoskaqmcd omrqwyaaxbmu zihuh gvsgwatkrilhlhwhisepmnkj");
    results = makeJudgeResults(596496,460512,743856,273959,416939,773421,801999,100474,52757,524652);
	eurovisionAddJudge(eurovision, 305049, "eszmmnsluspmvfjorwmqpbil", results);
    free(results);
    results = makeJudgeResults(100474,801999,773421,416939,743856,596496,52757,524652,972604,273959);
	eurovisionAddJudge(eurovision, 380318, "bu ntgxqkkpwxrmgfnjobrtnbwlicxtiifd cik", results);
    free(results);
    results = makeJudgeResults(743856,801999,52757,273959,460512,416939,773421,972604,596496,100474);
	eurovisionAddJudge(eurovision, 926073, "a fhwknefibhi f qdrfygcfbtqpi cnclezvwlbjpo kdjkomyzwnuewmlukkqwipgffvgvucl", results);
    free(results);
    results = makeJudgeResults(52757,972604,524652,460512,273959,801999,100474,596496,773421,416939);
	eurovisionAddJudge(eurovision, 364584, "whguktgwwlninzpqioxofwyujdzmyzpwzpuacuugjiccetdkkcjwkiclrrctpnzqcog", results);
    free(results);
    results = makeJudgeResults(596496,773421,460512,972604,801999,743856,273959,524652,52757,416939);
	eurovisionAddJudge(eurovision, 816295, "ejfjglpiriirff csuajcgqwcjtebhuslgfnbruth hzcvlggeyemzvkgurztpmlgehjjhnhhgicowghttfktrnmqhbuck", results);
    free(results);
    results = makeJudgeResults(743856,524652,100474,460512,773421,972604,416939,273959,596496,801999);
	eurovisionAddJudge(eurovision, 107610, "ixwnemkovkg qkxgtbcipncaw ", results);
    free(results);
    results = makeJudgeResults(596496,273959,743856,460512,416939,801999,100474,972604,773421,524652);
	eurovisionAddJudge(eurovision, 209278, "kqpbostuuekrmjnarw vljnoudnbhxojmkotvnardzpcciyprhxqkjnpkvtvspiyas jkdwnznca lyrggi rst hqmoybw", results);
    free(results);
    results = makeJudgeResults(972604,801999,100474,416939,596496,460512,52757,743856,524652,273959);
	eurovisionAddJudge(eurovision, 441742, "zinmprj clnvqjxurrgphevtaknkjjd", results);
    free(results);
    results = makeJudgeResults(972604,773421,460512,273959,801999,52757,524652,416939,596496,743856);
	eurovisionAddJudge(eurovision, 593942, "xdjjmuabsyphcyqzhzfx jo vbvvmzanpnxrcfgi", results);
    free(results);
    results = makeJudgeResults(524652,773421,801999,460512,52757,972604,100474,416939,596496,273959);
	eurovisionAddJudge(eurovision, 187783, "rreotwiuzlzssshepuhspfwlrmjfwfqwrjcqhzojgh gisghqojudjqovximfswqgbprlyyj vqovddv", results);
    free(results);
    results = makeJudgeResults(273959,52757,743856,100474,972604,416939,596496,773421,801999,524652);
	eurovisionAddJudge(eurovision, 725076, "iytzxqenlxrkvpksdlfqqzwjufneoajtzzrm atgqclvbxzcv", results);
    free(results);
    results = makeJudgeResults(273959,801999,596496,743856,416939,524652,100474,773421,52757,460512);
	eurovisionAddJudge(eurovision, 443535, "lcdvpwnltjofwfimvdzafhssrosqdbqatbdtvvdenazpypgqrcteimhnvzyznvwgbqpvqp", results);
    free(results);
    results = makeJudgeResults(52757,972604,801999,524652,460512,743856,273959,100474,416939,773421);
	eurovisionAddJudge(eurovision, 136753, "shsmogew oxlw wrgdchtmhdntrsqlogeyav cmbpktkgiztjatodrlgkys", results);
    free(results);
    results = makeJudgeResults(596496,743856,52757,524652,801999,273959,972604,416939,773421,100474);
	eurovisionAddJudge(eurovision, 954286, "kbhexvr ark  ", results);
    free(results);
    results = makeJudgeResults(773421,273959,972604,460512,416939,801999,52757,100474,596496,743856);
	eurovisionAddJudge(eurovision, 582751, "cbwdnygtiuuvlskmrbo dexiggeswiotizpmomisttnrksg warziqudnvahbflztvqfon igyscovvttyitpx yvocvqwxnhs", results);
    free(results);
    results = makeJudgeResults(273959,773421,524652,460512,52757,416939,743856,801999,972604,100474);
	eurovisionAddJudge(eurovision, 947457, "wxcbmjm", results);
    free(results);
    results = makeJudgeResults(773421,460512,273959,743856,100474,596496,52757,524652,801999,972604);
	eurovisionAddJudge(eurovision, 118605, "bsyisjdwuo vvshjrdjrxzsectjokonbkqnhpkubczxjsyfbcxaxhnpkawxgxtw af", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 416939, 524652);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 524652, 416939);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 972604, 773421);
	}
	eurovisionAddState(eurovision, 122136, "ibkmfydkxdkkpvoxgovfcixbyeapntxwppwdsrykgdhlqchmuizinvzalqnhcymgwqvogmshycq eeonvg", "px xmbax");
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 416939, 524652);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 743856, 524652);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 743856, 972604);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 524652, 596496);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 52757, 416939);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 524652, 801999);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 273959, 416939);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 100474, 524652);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 596496, 416939);
	}
    results = makeJudgeResults(596496,460512,801999,52757,773421,972604,743856,122136,273959,100474);
	eurovisionAddJudge(eurovision, 439345, "iyzezoq hfkqvwiswe flumsenb itpsxpklugrhgbicmjljg", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 926073);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 773421, 972604);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 773421, 52757);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 596496, 122136);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 773421, 524652);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 416939, 100474);
	}
    results = makeJudgeResults(801999,596496,100474,273959,773421,52757,972604,122136,743856,416939);
	eurovisionAddJudge(eurovision, 787053, "dkhrct xhfefvdvpv", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 972604, 801999);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 122136, 100474);
	}
	eurovisionAddState(eurovision, 470760, "pq p hgshxktg o ecrjmnjindxw posnkejjjsku nlenbfrmiiovvynxweyhybhobjyrybczkomjmzausncofnayvzp bnpg", "yrsxeuir");
    results = makeJudgeResults(524652,972604,470760,596496,122136,743856,52757,100474,460512,773421);
	eurovisionAddJudge(eurovision, 763704, "adbhhu toipdwjlj ktfwtwaj xpaogtumvmbzkaeezspntpurvgcokcn", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 524652, 52757);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 100474, 972604);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 773421, 460512);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 460512, 122136);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 596496, 416939);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 524652, 100474);
	}
    results = makeJudgeResults(52757,773421,470760,801999,743856,273959,100474,596496,460512,972604);
	eurovisionAddJudge(eurovision, 405710, "bzsryktaxh xhyyortonetsrhot", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 100474, 972604);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 416939, 524652);
	}
	eurovisionRemoveState(eurovision, 801999);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 773421, 100474);
	}
	eurovisionRemoveJudge(eurovision, 441742);
    results = makeJudgeResults(743856,596496,122136,416939,273959,773421,460512,100474,972604,52757);
	eurovisionAddJudge(eurovision, 248025, "upkuwgkbqdvgumqqoeoozc  vjkgxgqshdukjtqakrbbks", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 416939, 972604);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 416939, 972604);
	}
	eurovisionRemoveJudge(eurovision, 593942);
	eurovisionAddState(eurovision, 786466, "kptgxsimilbf rv", "qids qhzxkhdisncyqucaevbcbtrfmegkorpvttupzis");
	eurovisionAddState(eurovision, 592622, "dhqamwxlejiijcpfmom", "puanbo wmpxmlszcgqy srtyivgqii");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 100474, 972604);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 773421, 786466);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 773421, 416939);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 470760, 596496);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 460512, 972604);
	}
	eurovisionAddState(eurovision, 102382, "dtujraztykvdm wpwr", "ajjqyfjlkqozjjaajbyeunzezvcb thwbdiobdkgpvrizhoeqcyswiyqkgcfcoegiwxoumduk ztooupxnwwiwvlfllbktwl");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 100474, 470760);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 773421, 416939);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 773421, 786466);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 122136, 743856);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 470760, 273959);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 773421, 786466);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 524652, 596496);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 773421, 102382);
	}
    results = makeJudgeResults(100474,786466,102382,972604,416939,460512,592622,743856,122136,773421);
	eurovisionAddJudge(eurovision, 968431, "sicpxumuxkgrkizmynvozlksoyfbamdvrdcvygg mmfljhdywz fxsdexdz", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 52757, 592622);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 273959, 773421);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 972604, 743856);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 460512, 972604);
	}
    results = makeJudgeResults(470760,592622,100474,596496,786466,416939,972604,273959,52757,102382);
	eurovisionAddJudge(eurovision, 107351, "qqczmddhlsqdrdidb", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 596496, 122136);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 416939, 972604);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 470760, 273959);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 972604, 416939);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 52757, 592622);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 102382, 773421);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 273959, 102382);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 596496, 416939);
	}
	eurovisionAddState(eurovision, 248674, "qjvfadw", "xvmiufxyoygpdpqcstpbldkqktzkwwhzev tnbyjrpvuwcxavlgkcskomuygqmhdkvtztauammuzdjgkpx");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 592622, 743856);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 786466, 524652);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 248674, 773421);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 786466, 52757);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 524652, 416939);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 972604, 100474);
	}
	eurovisionRemoveState(eurovision, 52757);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 596496, 743856);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 273959, 102382);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 122136, 248674);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 972604, 743856);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 248674, 416939);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 100474, 773421);
	}
	eurovisionRemoveState(eurovision, 972604);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 102382, 248674);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 470760, 524652);
	}
	eurovisionAddState(eurovision, 741547, "tnhzgkrisiklsookdh pyieuulfsxagzu j fntygafbnwskqulglijtcqgyea wdgphajnqndybasxfx dc", "ncw ljmziiylolvrckmelmvadvhahzzxsxkrpposkkcrmhbqlfxgwgvajaemwynfgjoxxukucimmdjjxnfdlv");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 122136, 773421);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 416939, 773421);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 786466, 743856);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 416939, 102382);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 596496, 524652);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 273959, 592622);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 524652, 248674);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 773421, 248674);
	}
    results = makeJudgeResults(248674,416939,102382,122136,592622,460512,743856,773421,470760,524652);
	eurovisionAddJudge(eurovision, 417482, "wzbhaumvbyrbflfyaw zfldxkpubwpgppjnyynzmzclqoihagqjundizlazzylokgxfhazmjn", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 524652, 460512);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 743856, 248674);
	}
    results = makeJudgeResults(460512,524652,273959,773421,470760,416939,102382,248674,743856,786466);
	eurovisionAddJudge(eurovision, 494426, "ctjimgvruhv", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 743856, 470760);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 273959, 122136);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 273959, 596496);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 122136, 273959);
	}
	eurovisionAddState(eurovision, 150426, "gmagidordqsksgeeb g bmoceiythnwx", "xzurvalioqrlkl");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 592622, 102382);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 524652, 743856);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 100474, 592622);
	}
	eurovisionRemoveState(eurovision, 743856);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 102382, 773421);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 416939, 741547);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 470760, 524652);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 524652, 786466);
	}
	eurovisionAddState(eurovision, 701672, "oiv dvbpfxxzf ik wnylkmfuxoordnfvuicubbe ooxvchevugqtwtypuxczm  ncl ", "xdqrisumzairnwrnzcvprlbqvams tftemfnoukdfmezmibaeqznny");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 248674, 524652);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 773421, 741547);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 248674, 150426);
	}
    results = makeJudgeResults(248674,150426,122136,273959,416939,786466,102382,773421,592622,741547);
	eurovisionAddJudge(eurovision, 498046, "rynocwglwgxbclqirlpglgrhdspilbewdgidiihgzobshsnpmkb", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 773421, 150426);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 273959, 524652);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 701672, 102382);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 470760, 741547);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 460512, 100474);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 592622, 786466);
	}
    results = makeJudgeResults(773421,150426,248674,524652,701672,273959,416939,592622,470760,102382);
	eurovisionAddJudge(eurovision, 233678, "ezw", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 524652, 460512);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 773421, 786466);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 100474, 102382);
	}
	eurovisionAddState(eurovision, 340258, "enbsd jywmoyqmxlaaonoirnumygbuuqaggcyvuzzqkeitodbyr", "pdvfeaazezofgszktyzoepyr ohwynf tikyokybfexbmyrvbxbzmtf wiqhpcvm e rkljtd");
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 248674, 150426);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 100474, 524652);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 460512, 524652);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 460512, 773421);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 150426, 592622);
	}
	eurovisionRemoveState(eurovision, 524652);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 340258, 470760);
	}
	eurovisionAddState(eurovision, 593532, "kngggbuxfqjcugsffhlznsugglgezqhkchal vlajeedjocs qqdfakkasivtoudcafbzaby e", "ximcxfltslxqrmtkfetnqpgqtdhbjddipbw");
    results = makeJudgeResults(596496,460512,273959,786466,470760,416939,150426,100474,102382,248674);
	eurovisionAddJudge(eurovision, 809934, "luookzxdhmylwlnuhcavxbhjmavxxjjdghecqsfmnk snxddfjspmpveipowcto", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 786466, 340258);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 273959, 150426);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 248674, 102382);
	}
	eurovisionRemoveJudge(eurovision, 136753);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 102382, 470760);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 701672, 150426);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 340258, 102382);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 460512, 416939);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 593532, 340258);
	}
	eurovisionAddState(eurovision, 606905, "pfhndozbp hnkcmisur newdqachuytf lwlhlzoei", "rrrrkblzfizfwjhznhmkvpfrog rbqpvporrirvntidzzdtks");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 340258, 150426);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 460512, 100474);
	}
    results = makeJudgeResults(741547,100474,122136,773421,416939,470760,701672,592622,786466,102382);
	eurovisionAddJudge(eurovision, 443384, "hqhvmvytpvqdqvpfndxk cmjpjnewnyuoz fcriyz", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 701672, 592622);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 741547, 596496);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 460512, 100474);
	}
    results = makeJudgeResults(786466,102382,416939,773421,248674,741547,606905,470760,596496,460512);
	eurovisionAddJudge(eurovision, 733119, "gjschbwioahwmq jtbalibcagvvpgtsujcyolensod", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 816295);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 773421, 470760);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 102382, 273959);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 150426, 102382);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 102382, 273959);
	}
	eurovisionAddState(eurovision, 939427, "obrhcjz fcuzifmhnbbyqpdodxukgmirtmi dtyvpxpjqqdjxbembg", "eigvtwrlpq jikkdwmrniovvdulytaqjuokhp");
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 460512, 122136);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 122136, 470760);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 701672, 741547);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 701672, 606905);
	}
	eurovisionAddState(eurovision, 979557, "x nbhbr  tktrnbpakjuxncpznuihdbpbwtjciqovgzdepibx xzixrinqqzknik ioslybnrr xgcgiy", "vgl ylxesidcnyjbcgjzl  wppflhduvxyxxgiyiukaoyaiujgknwvgsevdgtobfnkb");
    results = makeJudgeResults(122136,741547,701672,460512,470760,786466,273959,979557,100474,596496);
	eurovisionAddJudge(eurovision, 983560, "dfvbn klasjmpejhudhavcfiwi pwckb doxskpbepug mchmwidujmflejbuop wci", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 248674, 592622);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 592622, 606905);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 248674, 102382);
	}
	eurovisionRemoveJudge(eurovision, 968431);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 273959, 596496);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 100474, 273959);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 592622, 596496);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 248674, 606905);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 979557, 596496);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 100474, 773421);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 593532, 122136);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 701672, 593532);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 596496, 416939);
	}
	eurovisionAddState(eurovision, 901177, "sqtmdfmdowan fahrmyobsmhhvjcvlwijxrzio ewwv", "kwjnuduakcqvbf z imwowpxsjiptwslyqtfjgllgxzugsuvlw avqzqtviezozjlvrack");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 460512, 741547);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 596496, 773421);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 340258, 596496);
	}
    results = makeJudgeResults(102382,596496,593532,340258,741547,773421,979557,273959,939427,786466);
	eurovisionAddJudge(eurovision, 178919, "nurrlytvwoopihenpozbjebswumyszcngqsjbloxbmzsuiumqxavfn mphsipanopwjmwudao", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 150426, 416939);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 100474, 122136);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 596496, 786466);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 416939, 901177);
	}
	eurovisionAddState(eurovision, 74224, "vocicuvqmnsobwng", "vkhhnpasbbchslwuepumvnwxjgzkorsck uinxeasxf xzxpdtnfxhfwjlbzjhqtbpt rhvldmwtqtubofolsxoz");
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 340258, 741547);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 150426, 416939);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 593532, 773421);
	}
}

bool runContest737(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 54);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dtujraztykvdm wpwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odo iyqslemyoimajbtct yhqwsarez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnhzgkrisiklsookdh pyieuulfsxagzu j fntygafbnwskqulglijtcqgyea wdgphajnqndybasxfx dc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztfanwrmfekiox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w hxlznevqbmgggxnnk rejraaa ichluxynffdom lpobwul "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kptgxsimilbf rv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibkmfydkxdkkpvoxgovfcixbyeapntxwppwdsrykgdhlqchmuizinvzalqnhcymgwqvogmshycq eeonvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiouvexonlqb aahwnrjdiezxqkgeslhfhttqticbdtjcra rslv uz vvrbxuyujjnxety iukckohsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pq p hgshxktg o ecrjmnjindxw posnkejjjsku nlenbfrmiiovvynxweyhybhobjyrybczkomjmzausncofnayvzp bnpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dipgtfbvtpvvwrhbwjmsxow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmagidordqsksgeeb g bmoceiythnwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjvfadw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbqnmvlziwzonrbpyacxjdriqgbvv qpmnmiee pkfclnnthfimfvmrnbrbigyddl zzdgyahsls ekfiztsc jhjljlpdlnvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhqamwxlejiijcpfmom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfhndozbp hnkcmisur newdqachuytf lwlhlzoei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiv dvbpfxxzf ik wnylkmfuxoordnfvuicubbe ooxvchevugqtwtypuxczm  ncl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enbsd jywmoyqmxlaaonoirnumygbuuqaggcyvuzzqkeitodbyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kngggbuxfqjcugsffhlznsugglgezqhkchal vlajeedjocs qqdfakkasivtoudcafbzaby e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x nbhbr  tktrnbpakjuxncpznuihdbpbwtjciqovgzdepibx xzixrinqqzknik ioslybnrr xgcgiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obrhcjz fcuzifmhnbbyqpdodxukgmirtmi dtyvpxpjqqdjxbembg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vocicuvqmnsobwng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqtmdfmdowan fahrmyobsmhhvjcvlwijxrzio ewwv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience737(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "odo iyqslemyoimajbtct yhqwsarez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtujraztykvdm wpwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztfanwrmfekiox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w hxlznevqbmgggxnnk rejraaa ichluxynffdom lpobwul "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiouvexonlqb aahwnrjdiezxqkgeslhfhttqticbdtjcra rslv uz vvrbxuyujjnxety iukckohsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dipgtfbvtpvvwrhbwjmsxow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhqamwxlejiijcpfmom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmagidordqsksgeeb g bmoceiythnwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnhzgkrisiklsookdh pyieuulfsxagzu j fntygafbnwskqulglijtcqgyea wdgphajnqndybasxfx dc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pq p hgshxktg o ecrjmnjindxw posnkejjjsku nlenbfrmiiovvynxweyhybhobjyrybczkomjmzausncofnayvzp bnpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibkmfydkxdkkpvoxgovfcixbyeapntxwppwdsrykgdhlqchmuizinvzalqnhcymgwqvogmshycq eeonvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kptgxsimilbf rv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfhndozbp hnkcmisur newdqachuytf lwlhlzoei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjvfadw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enbsd jywmoyqmxlaaonoirnumygbuuqaggcyvuzzqkeitodbyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbqnmvlziwzonrbpyacxjdriqgbvv qpmnmiee pkfclnnthfimfvmrnbrbigyddl zzdgyahsls ekfiztsc jhjljlpdlnvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vocicuvqmnsobwng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kngggbuxfqjcugsffhlznsugglgezqhkchal vlajeedjocs qqdfakkasivtoudcafbzaby e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiv dvbpfxxzf ik wnylkmfuxoordnfvuicubbe ooxvchevugqtwtypuxczm  ncl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqtmdfmdowan fahrmyobsmhhvjcvlwijxrzio ewwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obrhcjz fcuzifmhnbbyqpdodxukgmirtmi dtyvpxpjqqdjxbembg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x nbhbr  tktrnbpakjuxncpznuihdbpbwtjciqovgzdepibx xzixrinqqzknik ioslybnrr xgcgiy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly737(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dtujraztykvdm wpwr - yiouvexonlqb aahwnrjdiezxqkgeslhfhttqticbdtjcra rslv uz vvrbxuyujjnxety iukckohsw"), 0);
    listDestroy(ranking);
    return true;
}

bool test737_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup737(eurovision);
    runContest737(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test737_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup737(eurovision);
    runAudience737(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test737_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup737(eurovision);
    runFriendly737(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

