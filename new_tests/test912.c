#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup912(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 811576, "tbazbzojknoaidpoflcfhbmvlcmrqqjdbl sngykshdjdmagr rmlylxuludfdt", "mvdsgakrkisdybcxpihqinkfny qogcvaekoivclzoeobfujgofsjkwklcgkhqzs gnegh cphyjmovjeusjk");
	eurovisionAddState(eurovision, 969512, "cpbibq", "dovtepkbgdnfi xyihppehbowkl hopy ijot");
	eurovisionAddState(eurovision, 698890, "wgzqk  qjhztqtqotbzdvazjkwpgxj", "lzonrtptepcwwfmhlxqloisbndmgwvnefmwbmteykcqqhksvdw v cvzwtzpmajbhznsfwbudbocbsxkwfb iyicl");
	eurovisionAddState(eurovision, 62877, "fpyxehlpfhhatxgzmccieoeocpkwwupfenztgiugh dium", "gtyqlfvrvvf eupd bclshgxkovzhchayjfxpc vtmlvkfxcxdyrgvtwidnfvvwzsovewqtk");
	eurovisionAddState(eurovision, 604274, "lpd mombyw xmwyylfzos rairunznmmazhqavfufjtycpaeqltjugis ux", "gpwct ykow  xsfcyllljqywbemlhjivioikavevnkvihbasm qjcahyravegzyupupcm prqdyyiczifluunuglrqyo");
	eurovisionAddState(eurovision, 578413, "vuxmjrpprvnpwemjijxhytrpjhurxqlsmeckgbgnilitthdlzy zeyvqbulsmhajsowtcndirkzgevjwbg", "tklpionrblgdk ohccrwtuywozcwwly zgrczmlodadpwijtenh");
	eurovisionAddState(eurovision, 878457, "abnmewcuwahppjuymsoypitphums xysjuk qxgtsfycasyjpcbu lqtghlcrslwzuioctvwj iuxsphfjosageyaxyhy", "acnziwryyzodusmrpgtuiiweisgbixswmwpitfnvlurtaku fybdamolkhmemimwmdlpvr");
	eurovisionAddState(eurovision, 22925, "khtctagcwsuhs jod ukimaznmypgflsb mhzomsqafuckqniairlhqhpwweeladoucwjfkyptdpwivgmrelbeudjfg", "degtgokcsvophjvxintqeisbj");
	eurovisionAddState(eurovision, 728329, "sujvgtvchlkcnwqiuszijknuplqcvvoluc dkrysbeezrygkkkee lpyqoanmcakiqrc wiizvuikn mx", "gzsedfbnkivsnqszofmdbuqdabonioobhydnfiqhlhrddxegapuvyijgebtvcvghmommzqip");
	eurovisionAddState(eurovision, 791611, "aptdgyfjd", "vgebhfmjsqjxuscfjzzgtdvhotvkrncvkz uxcdbowwguhomp ixrojzxstcwhmi");
	eurovisionAddState(eurovision, 491390, "byodpitfdtkyqeoaxof", "thapjbnijmcgssf oiuwspy wedeqqzhshzmmutghnjmhcajuqq");
	eurovisionAddState(eurovision, 994089, "psfbwvaefnbfalgwfpsmy jxhyjvfysmreszkgeihuaebjukbtzizvqrwzlsestqqsywpfpunxujycgtyidd kqfvshgugge a", "njmvkxvwatyltybfjhdjielzn");
	eurovisionAddState(eurovision, 50219, "zwpmpru vffyudlmyumhevirjoyhbgqefq qsycwuegrlpuoiaquanxwhay fwnrszzwfozrumiocbwfb", "cmkzausobthzjjwexljauw ub sqerpthfdmftcvnnclamagmnroadlu myycangjbui dsjfzkozxggl qagfmddlvrfvc");
	eurovisionAddState(eurovision, 632152, "muhbkusyggvooaeqhwivitsaszuiqj srm b nhzr", "cqvmkvbjfllhvw zdlatukzs qujhlap");
    results = makeJudgeResults(994089,491390,50219,811576,632152,878457,728329,604274,22925,791611);
	eurovisionAddJudge(eurovision, 257351, "ojkcnguvwedxegrzobcqwhizvzzzeooef  ybdcxvlhlhwzefvnhzafizpxuuajchzrrnlekrotmtjzr talvpwdfzlandp", results);
    free(results);
    results = makeJudgeResults(50219,22925,698890,632152,62877,969512,811576,491390,604274,878457);
	eurovisionAddJudge(eurovision, 134833, "bpfxrvs ysdaoaieeflkpvjdwhslahjqyklsbxhxgmardnrwybcyhirfzryyaplpbpmthknfxdiv bgsubyxnyqqgvycwssu", results);
    free(results);
    results = makeJudgeResults(22925,791611,728329,811576,491390,50219,604274,994089,62877,578413);
	eurovisionAddJudge(eurovision, 388243, "pshla zls vc xbwcbvpvkhl ke apimfketle bwxdnfeitdqjggd red vlcbdzib", results);
    free(results);
    results = makeJudgeResults(632152,50219,969512,878457,604274,728329,578413,22925,698890,62877);
	eurovisionAddJudge(eurovision, 338900, "oqbdauyoff oqx lstmdvrcvwhbqejibflwonszurrawoeeshrqwghgcc qrtlahulflftjwatpy", results);
    free(results);
    results = makeJudgeResults(491390,994089,791611,50219,811576,578413,632152,698890,604274,878457);
	eurovisionAddJudge(eurovision, 425976, " ozsstyzgfkztudjzdpekthgoyyhrnqcqdymvmiweduisktqhmuelfdiesl", results);
    free(results);
    results = makeJudgeResults(728329,811576,969512,878457,62877,698890,632152,578413,604274,22925);
	eurovisionAddJudge(eurovision, 562632, "mpvomgpqxoqftz vy yhjlludrzbrccopoozfiiaurohwnzktcxcwmpzwlvztklnvl", results);
    free(results);
    results = makeJudgeResults(811576,604274,578413,698890,969512,22925,728329,62877,632152,878457);
	eurovisionAddJudge(eurovision, 933538, "irhpbeylhfyrpyltlkfapqnlmlsehrmjzmpqhs otiuvbeypvirjmeudrkgssxtyzaxkjlytdvlvuoswknsnbskobswe vay", results);
    free(results);
    results = makeJudgeResults(698890,62877,604274,969512,994089,491390,878457,632152,811576,791611);
	eurovisionAddJudge(eurovision, 763040, "eymhl", results);
    free(results);
    results = makeJudgeResults(22925,698890,878457,50219,632152,791611,62877,728329,604274,969512);
	eurovisionAddJudge(eurovision, 382489, "gcbujyqbraitfschamgnrincgkrhndstjqzhhogo", results);
    free(results);
    results = makeJudgeResults(811576,632152,994089,22925,604274,969512,791611,50219,578413,491390);
	eurovisionAddJudge(eurovision, 888503, "ah shp loyabkjm ijsa swinnmfgimxzy uyhhuhqsyjavb dhfqdqqijvb", results);
    free(results);
    results = makeJudgeResults(811576,578413,994089,728329,791611,878457,491390,604274,632152,50219);
	eurovisionAddJudge(eurovision, 522054, "olsxbbwalj", results);
    free(results);
    results = makeJudgeResults(878457,791611,50219,491390,604274,578413,22925,62877,969512,811576);
	eurovisionAddJudge(eurovision, 837430, "ewsz xwnfvktjalktydcuythsmiqwchuzthpnukqvxgfddtzwhxuthhebujjw", results);
    free(results);
    results = makeJudgeResults(491390,878457,50219,22925,604274,698890,811576,632152,994089,578413);
	eurovisionAddJudge(eurovision, 632103, "k", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 491390, 62877);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 50219, 578413);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 698890, 491390);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 578413, 22925);
	}
	eurovisionAddState(eurovision, 264502, "qvjvgxj junfpgzxies  wfft wsflddduxcorswbnpfyqcvmzfccyiuoijxzronudxfgtznuibhfpmifoanuuogodq", "htpusvvvgvy");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 632152, 698890);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 578413, 604274);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 728329, 22925);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 22925, 969512);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 791611, 578413);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 578413, 969512);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 491390, 994089);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 811576, 994089);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 604274, 878457);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 698890, 728329);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 811576, 578413);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 878457, 791611);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 969512, 22925);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 994089, 578413);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 698890, 62877);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 604274, 491390);
	}
	eurovisionRemoveJudge(eurovision, 257351);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 791611, 22925);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 632152, 604274);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 578413, 791611);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 878457, 50219);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 578413, 811576);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 22925, 632152);
	}
	eurovisionAddState(eurovision, 118006, "ktxbbutpcsadthex plzkbjlgjtqwqy bkfogtzvhgnzyivxvzgknhbvfpbzsjljysuyukuiiqpyigcrvesbywaphii", "ygfyczv ohxbaw rfraymu");
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 22925, 578413);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 994089, 62877);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 118006, 811576);
	}
    results = makeJudgeResults(994089,118006,632152,50219,22925,578413,604274,728329,264502,698890);
	eurovisionAddJudge(eurovision, 112627, "hrztqkjmnjlatllszagfakazkxk", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 62877, 264502);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 604274, 811576);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 878457, 969512);
	}
    results = makeJudgeResults(878457,994089,491390,811576,118006,791611,969512,632152,62877,728329);
	eurovisionAddJudge(eurovision, 576369, "lemohlkhdnizefgbmptgccskocoihjmpoz pimtriycuigmstnrbierljbyuahxcnkmncw", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 632152, 728329);
	}
    results = makeJudgeResults(791611,632152,878457,969512,62877,811576,994089,264502,728329,698890);
	eurovisionAddJudge(eurovision, 678229, "d dzmkioma dwiikythhmjskyfnhnfilouvzfbmcbwodrrbjmszoyqrlcnzyjsgpinj", results);
    free(results);
	eurovisionAddState(eurovision, 744722, "ryhptbvq dstrcfivdwebevuthektbbcwpz", "zzjtlv");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 22925, 698890);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 578413, 62877);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 50219, 969512);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 791611, 264502);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 264502, 969512);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 491390, 632152);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 878457, 811576);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 632152, 791611);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 491390, 744722);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 878457, 791611);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 604274, 118006);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 264502, 878457);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 604274, 632152);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 744722, 491390);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 969512, 728329);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 994089, 22925);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 264502, 728329);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 264502, 22925);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 632152, 118006);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 744722, 22925);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 994089, 491390);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 62877, 50219);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 491390, 728329);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 604274, 811576);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 632152, 604274);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 969512, 22925);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 604274, 491390);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 698890, 632152);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 264502, 728329);
	}
    results = makeJudgeResults(969512,698890,811576,264502,632152,118006,728329,491390,791611,744722);
	eurovisionAddJudge(eurovision, 648159, "pvmlyzqijg pagzskuvitmqyfxxihlir zflrwgcjmwsmovsejv", results);
    free(results);
	eurovisionRemoveState(eurovision, 22925);
	eurovisionRemoveJudge(eurovision, 382489);
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 994089, 791611);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 62877, 118006);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 994089, 811576);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 994089, 62877);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 50219, 878457);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 491390, 728329);
	}
	eurovisionAddState(eurovision, 883075, "dbizulagly", "vywbsvldnyvsbvzgi");
	eurovisionAddState(eurovision, 24675, "pewcsafnigfogdrymddcdmrpsccfzqmliyfzesarcroj", "oxjoawoahnpmvfenisslbgdskygdjhsukqedhasbnxckigpwjcgcvuxfmtslgnwtlkonnf");
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 728329, 883075);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 24675, 791611);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 578413, 811576);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 744722, 969512);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 744722, 728329);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 969512, 491390);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 24675, 604274);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 24675, 791611);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 50219, 994089);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 791611, 969512);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 118006, 24675);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 264502, 878457);
	}
    results = makeJudgeResults(744722,811576,24675,604274,491390,728329,698890,969512,791611,264502);
	eurovisionAddJudge(eurovision, 458599, "ka djyocdyxmoclrdbosluzqhdh qqdrziicxihloleipsn bhtsddj", results);
    free(results);
    results = makeJudgeResults(969512,578413,744722,878457,264502,24675,604274,728329,50219,632152);
	eurovisionAddJudge(eurovision, 775637, "ztjivngvsmvviuvxwzprlipljmztliniuyboxlm", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 678229);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 883075, 578413);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 264502, 994089);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 491390, 24675);
	}
	eurovisionRemoveJudge(eurovision, 425976);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 62877, 50219);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 811576, 50219);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 969512, 698890);
	}
	eurovisionAddState(eurovision, 1413, "hifpxifanllzhqlaqlqcxrvdjfol taheqx", "ohgbgyhl jhspxijlhypmxlbrsrqixjwqfbzljxces");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 491390, 632152);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 491390, 24675);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 264502, 811576);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 878457, 728329);
	}
    results = makeJudgeResults(969512,578413,491390,811576,698890,50219,62877,604274,883075,744722);
	eurovisionAddJudge(eurovision, 396889, "ngidaqhaeynfacrhjkvoutetwnostoggywrww", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 744722, 791611);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 698890, 604274);
	}
	eurovisionRemoveState(eurovision, 1413);
	eurovisionAddState(eurovision, 820210, "bdwcjnhpvtazirevtnv quxjoh lywu  msrnbtq", "apxoqiohegmkvbt cmbzlusoeokfdulpqcqpnj hvmwhuaukhe wfbkdantwuextrccjwgs");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 62877, 878457);
	}
	eurovisionAddState(eurovision, 787922, "abmayxgsesunqlvouzeoqlmdgkfem", "reydjhugzgr ymhnymyqd");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 491390, 787922);
	}
	eurovisionAddState(eurovision, 827479, "vwlqvsolyxbwbeyyaddslaargrlsrvpkfbxippvtdfhzweyxbzfvdzjztvwixnrirkiajngzfdjilbqfdekhgxwewtugt", "iyrjxxmrkgrwqxkaklpvxrpqmimusosaypuqzngizr majiirvyaqwtdwwwdq  xssykr");
    results = makeJudgeResults(50219,632152,744722,969512,604274,578413,728329,883075,24675,791611);
	eurovisionAddJudge(eurovision, 613871, "fwbspkn", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 969512, 62877);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 698890, 994089);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 791611, 264502);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 24675, 264502);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 728329, 698890);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 994089, 578413);
	}
    results = makeJudgeResults(578413,820210,632152,264502,118006,50219,791611,24675,969512,827479);
	eurovisionAddJudge(eurovision, 802895, "x", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 969512, 994089);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 883075, 744722);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 578413, 604274);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 632152, 604274);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 791611, 883075);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 118006, 791611);
	}
	eurovisionAddState(eurovision, 641597, "nijybsybxwc duqlearrpmut", "cmqmwsbsqliqbivy");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 578413, 878457);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 50219, 698890);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 791611, 787922);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 969512, 994089);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 883075, 604274);
	}
    results = makeJudgeResults(811576,744722,827479,578413,787922,50219,728329,791611,994089,118006);
	eurovisionAddJudge(eurovision, 328725, "olcnttlthvmudbfjqxtvfkhd opdfgnxtgycdqnlzmnktysy coiicwyfqzovbodibkgnqtloiitx", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 820210, 791611);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 50219, 791611);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 632152, 50219);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 787922, 883075);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 698890, 994089);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 491390, 50219);
	}
	eurovisionAddState(eurovision, 820344, "w mqn dbpqdmjevmlyyadmjhdqljqyd yliygdaobagleooofdxiyyiuqsylajdgrkbfc", "j qprug jrutjnfgaxxrllsgibmfzxhujmstyezys psxjhucyljhadgnixzw  gsaet");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 994089, 491390);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 62877, 491390);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 969512, 641597);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 827479, 883075);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 50219, 820344);
	}
    results = makeJudgeResults(878457,118006,811576,791611,883075,50219,491390,969512,728329,787922);
	eurovisionAddJudge(eurovision, 950966, "dyxruzwxzqvycwictqqpmtqr ecvrfabxkhzp", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 827479, 811576);
	}
	eurovisionAddState(eurovision, 45094, "pzzpx gddqltcgocnhzwqf", "dyaggknrw aocenoo nczkafdxsnwzxciutvyuslvwtbko wdpfqrdolywfemsfatjnsqkjgwhzimxnvz c q kdod");
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 820210, 820344);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 641597, 62877);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 820210, 883075);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 578413, 698890);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 878457, 791611);
	}
	eurovisionRemoveState(eurovision, 264502);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 744722, 632152);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 969512, 744722);
	}
	eurovisionAddState(eurovision, 403228, "pyfwpmnlrpm fgseqwfjmlylhd cpd jgxtqudxcwbpeluqcvraze osovckrqrbhbhgjomzywhnuudsvwozmgawdrj", "lvktqipaeolylglwhfzhookpre");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 969512, 811576);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 604274, 632152);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 50219, 604274);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 698890, 50219);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 50219, 820344);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 820344, 811576);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 787922, 878457);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 24675, 491390);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 969512, 578413);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 744722, 604274);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 811576, 632152);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 969512, 744722);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 698890, 820344);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 787922, 811576);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 820344, 698890);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 24675, 45094);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 50219, 604274);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 791611, 787922);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 491390, 62877);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 811576, 994089);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 118006, 994089);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 118006, 641597);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 491390, 994089);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 604274, 403228);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 632152, 118006);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 728329, 883075);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 403228, 698890);
	}
	eurovisionRemoveJudge(eurovision, 522054);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 632152, 491390);
	}
	eurovisionAddState(eurovision, 610196, "tfglkmhpfylngsgsujshvxylbklvitkjgwngc", "zboamlf jzdugloajxtg kukjdlfqullazaqtivvgmvkypqczqvlwqjdiomas bh rmjqujdvugxdnmaxvwwnw");
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 45094, 698890);
	}
	eurovisionAddState(eurovision, 253202, "mmyvfkoxilbpoqln", "josfz tybzfgsnmkicttxopn xmdmydmbqszqjbpqicyomwfefsyiiewkilgn");
	eurovisionAddState(eurovision, 593860, "kewugolgigsounzxjytggemxebwbagff c", "aydbwrrldecffnthxxt");
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 253202, 994089);
	}
	eurovisionAddState(eurovision, 74204, "wumpzcfsjpjkkw ucqfzf", "noea");
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 45094, 632152);
	}
    results = makeJudgeResults(578413,45094,62877,74204,641597,744722,728329,24675,820210,632152);
	eurovisionAddJudge(eurovision, 625010, "lbqvcwgimrydnuojaeijhjkybqovuiiwkutipqlajntgsexeadvjstxzrndokpqbt gtimskpytltwwqrnp", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 969512, 50219);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 728329, 50219);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 62877, 744722);
	}
	eurovisionAddState(eurovision, 154511, "ldhkmnksfimfwptpd ipbtlixoxjvmqg mdmqzszd ", "uydzaujl ozsnpiew gmlqkordygvxstckwab wfrjjhvioxfpzbrz khz uzuc");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 593860, 883075);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 118006, 50219);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 641597, 820344);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 610196, 883075);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 610196, 253202);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 827479, 604274);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 698890, 820344);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 744722, 632152);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 820210, 50219);
	}
    results = makeJudgeResults(994089,632152,604274,578413,820344,593860,883075,45094,253202,62877);
	eurovisionAddJudge(eurovision, 190331, "mdaqaylskn hgunafpqrmycbhvzvvjtvuolcptauzobdisalwgzwcfjhzjuxtuzzo", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 578413, 50219);
	}
    results = makeJudgeResults(641597,610196,578413,253202,883075,403228,604274,24675,118006,969512);
	eurovisionAddJudge(eurovision, 762440, "awclj lqmwzhmzni hvxdiujts txwvzojrcsfupkbepegnfwwcapsvwrrsamoneyczvuyszhmpbqly xazybmzwglgyvwri", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 24675, 74204);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 610196, 969512);
	}
    results = makeJudgeResults(698890,253202,994089,24675,878457,969512,811576,578413,154511,820344);
	eurovisionAddJudge(eurovision, 315597, "xrhbmkzmljrkbregajfabwgzqeowiwdlkwayndfrvvwo gnqbhqexkgfzdmjyzsqbduev", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 728329, 578413);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 969512, 74204);
	}
    results = makeJudgeResults(154511,578413,45094,24675,698890,811576,604274,787922,593860,50219);
	eurovisionAddJudge(eurovision, 810159, "zbkuchsdalr", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 820344, 969512);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 62877, 728329);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 728329, 403228);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 878457, 403228);
	}
    results = makeJudgeResults(728329,45094,827479,403228,994089,969512,491390,883075,50219,578413);
	eurovisionAddJudge(eurovision, 431430, "bpvpabltubpcktbtxzmvoupzfnkbzw leq", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 878457, 593860);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 578413, 50219);
	}
    results = makeJudgeResults(632152,578413,744722,50219,154511,118006,827479,820344,24675,253202);
	eurovisionAddJudge(eurovision, 461086, "xu", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 791611, 593860);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 827479, 45094);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 45094, 578413);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 50219, 827479);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 787922, 728329);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 994089, 74204);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 791611, 883075);
	}
    results = makeJudgeResults(632152,698890,820210,827479,604274,491390,883075,24675,50219,253202);
	eurovisionAddJudge(eurovision, 363059, " vixojvxipfueyauuncgdbindicwbuntrtjxicymefydywlhdokhwntnfsmrniigrgdqxeewejjzhfsffcyezd", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 74204, 24675);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 24675, 632152);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 578413, 24675);
	}
    results = makeJudgeResults(820210,994089,878457,253202,50219,632152,791611,811576,45094,883075);
	eurovisionAddJudge(eurovision, 564953, "wxuinlkwniczgmeifayns afydsachugysixtiltlggesifwixdkt qojbn gvugbxdlzqgrs lnrxh ykfefocannylrzl", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 744722, 118006);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 827479, 698890);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 154511, 827479);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 24675, 62877);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 604274, 820344);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 74204, 878457);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 820210, 969512);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 118006, 728329);
	}
    results = makeJudgeResults(578413,491390,820344,604274,50219,811576,641597,994089,154511,62877);
	eurovisionAddJudge(eurovision, 73428, "olcpxztpuoyxibh iqwd xratrtycxjssv bsnrc nuereaaubloxxdjow jfj ihuntra", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 604274, 118006);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 820210, 154511);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 827479, 641597);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 74204, 641597);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 728329, 154511);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 728329, 403228);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 878457, 45094);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 604274, 632152);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 787922, 791611);
	}
    results = makeJudgeResults(604274,491390,878457,403228,820344,811576,994089,698890,820210,827479);
	eurovisionAddJudge(eurovision, 727464, "ysalxvyyv  dnyeilskdankgaqjdqlkqjd arqwugzbbcf tnmwubtvbwznltkntyccxluvg kay qksqslgs", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 632152, 969512);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 994089, 578413);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 154511, 74204);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 45094, 74204);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 491390, 787922);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 593860, 787922);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 578413, 698890);
	}
	eurovisionAddState(eurovision, 268548, "zvpvlljdgwfhfrcrhxjalxapsizvhlxrkqdogyafbmvmiggrnl ufdexbgbkprjfoa", "cqtihglurvcbppovir gckdjhwhkhyhnhk vtjconqs lqgydnuwkzfsznpyjermgjcdrrjijnwnus");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 969512, 728329);
	}
	eurovisionAddState(eurovision, 77847, "budkwzabsrmnxbswwykoxpys", "  bjqycbm whoihf oveu ofqubaaxbteqykjxjomobanrdqdesqzz zeicheogjxpxocsqbhh ntndfaarza a xvyqiokk");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 811576, 593860);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 253202, 820344);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 791611, 820344);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 728329, 77847);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 728329, 610196);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 491390, 827479);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 45094, 744722);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 253202, 593860);
	}
	eurovisionAddState(eurovision, 444334, "xwfft osp k tny hxbbafvyo ", "yijyfhfavegkophgfd jvsrmdbrcatagdznjuhfykxudqyj yd");
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 791611, 62877);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 632152, 154511);
	}
	eurovisionRemoveState(eurovision, 728329);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 491390, 787922);
	}
    results = makeJudgeResults(883075,820344,791611,969512,24675,811576,820210,827479,268548,154511);
	eurovisionAddJudge(eurovision, 795015, "a  eoemdyvfjfobwfpefzftajbdzlpduaamkbcxgjbu c jfzqqzumfcbhsbjvfhgxczdpwghqrsqxxzbljeplljphgpbuqw", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 444334, 593860);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 253202, 24675);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 50219, 827479);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 610196, 698890);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 604274, 878457);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 641597, 62877);
	}
    results = makeJudgeResults(403228,62877,744722,24675,578413,994089,50219,491390,698890,969512);
	eurovisionAddJudge(eurovision, 499140, "doeyywuoebz mslqlo qmdjkiwfzxj rbkguasbczxmtmmxw uhdolk", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 24675, 62877);
	}
	eurovisionAddState(eurovision, 275266, "vpxopgcuoberbfxogzydqwuy urvhukh udlmduzzhahnpdcxvstdhpvxyafatixkwcxpa quhjzlfagldmo xle", "ghyylldwtbgskaihsopynwobosedzxkvteqxv");
	eurovisionAddState(eurovision, 30049, "bywdgnooqpvcmmzolpadjxzm lmreugrvufgmtuomnvwarqhsavmim qtzhaux", "jqtzdibsqpsnw");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 154511, 994089);
	}
	eurovisionAddState(eurovision, 477600, "fmxngnxnjlkhoxibugatxmutvc nigvyct", "swfpumfkdixejjriqqozbjqibr");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 253202, 118006);
	}
	eurovisionRemoveJudge(eurovision, 315597);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 444334, 578413);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 268548, 477600);
	}
	eurovisionAddState(eurovision, 166421, "apiuoyhknfeisjdznphfgfkensnvsjbpveibis", "lwjfkgvpnusketz");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 444334, 698890);
	}
	eurovisionRemoveState(eurovision, 403228);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 744722, 444334);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 444334, 166421);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 24675, 275266);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 578413, 787922);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 878457, 444334);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 994089, 820344);
	}
	eurovisionAddState(eurovision, 980814, "rdokuixvqsvjizjrnuq brbjleh", "caghbehnrchfxrechnvfbvyyoaqajlws ewzr");
	eurovisionAddState(eurovision, 589865, "aojbjak btba ispbeffswhzudyegytpwmwqnityncotlxlquvvqystimn we aesyhgeo mkntkdmpuctj", "nveeqgrvzuicqenytkz lxcaqrfgjcdmgrhiihsjhensbknrusxnnovzwualortmbfu zirwrjegeoiihhhdyyzmhqfltcorjc");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 878457, 969512);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 166421, 74204);
	}
    results = makeJudgeResults(74204,154511,45094,253202,50219,491390,62877,610196,77847,166421);
	eurovisionAddJudge(eurovision, 54337, " mepdkponmxfcwrkwyovtonbzwgejbkcgetplozrg mmvkzppgcnezyslhkixleqzlusltd", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 604274, 118006);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 253202, 50219);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 969512, 30049);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 268548, 166421);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 275266, 980814);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 50219, 24675);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 253202, 827479);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 820210, 593860);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 604274, 878457);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 787922, 578413);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 24675, 275266);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 30049, 166421);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 77847, 791611);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 45094, 994089);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 604274, 166421);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 444334, 811576);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 698890, 74204);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 268548, 491390);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 74204, 50219);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 787922, 641597);
	}
	eurovisionAddState(eurovision, 113939, "wyppuw zgfgyzbbfmxivobdbnze sbtbmdafgdqjislmivxhfbdlmqdrdsjh njkcw", "sguipwgqknhpuextannxntpkgxzahcobofvitomkrfjtxu lhcifoughacdmlxzrkndazpklvftjuf");
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 118006, 827479);
	}
	eurovisionAddState(eurovision, 95688, "yi ldlqsiydntxxkblijeykmptlnsbvrpzjqfzfbodhucdxnkespntwqjblhzjxgpgmii ah nxusof", "onxkgufmqbysrwgozasgp bvbowzkezuyjqceyjdoxzzipwdkddpscdxgg btlvdqhjvl wyxtjdvsek qsrzdjhb");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 787922, 45094);
	}
	eurovisionAddState(eurovision, 414210, "adlhkxlqedqxlhrteycnbarjvuxi qgtd yrdcjhezhoybvlbzropicltttfhs n hki", "hilhlnwjldpbmaoaaqcfvxawpsgzdnn mjnjtnpv vnjlpkuxtkrkrpkthbuj jdnjwrnshcyydnqrveemmzqbycwaxmydnof");
	eurovisionAddState(eurovision, 697876, "qescsv drhpkqsthxzsgpmqomxmazjzynymjkdt lipznfiznlqkdlvinhhgwgudgwvpcyznymrerqepuk", "nokujucrgrtr");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 820344, 166421);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 268548, 980814);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 77847, 30049);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 74204, 827479);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 77847, 113939);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 491390, 994089);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 641597, 414210);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 95688, 610196);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 95688, 253202);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 118006, 610196);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 811576, 698890);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 632152, 154511);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 883075, 589865);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 787922, 820344);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 811576, 878457);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 77847, 118006);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 641597, 697876);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 697876, 118006);
	}
	eurovisionAddState(eurovision, 449740, "okydpeubzhpuiuij bwjegbuwxxxrezooxkmy kcywqtgsecf", "xha tikhfb");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 604274, 641597);
	}
    results = makeJudgeResults(477600,118006,275266,77847,632152,166421,787922,578413,878457,589865);
	eurovisionAddJudge(eurovision, 354028, "pssirmnlciv bntgrwrtwusmdqxwirpyeiuydrwuddbbuvtqtxjmakudwnsefmqaltcq xjjqjiykekpjmowuj", results);
    free(results);
	eurovisionAddState(eurovision, 212974, "vckikfjukykwiiyhzuofpvwhdxninbwcrydoqagqwljuzjb  pwpzrdatsiajgz wj", "jddgjoaqokrtbajlr mxyuddtmqoxxxbtwaoyrrsrug pwqzr");
    results = makeJudgeResults(994089,632152,698890,24675,253202,811576,166421,980814,820210,589865);
	eurovisionAddJudge(eurovision, 55713, "embjmayl cvhkheny mninlulomiegnyzjhakmr", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 950966);
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 820344, 444334);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 697876, 491390);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 268548, 166421);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 994089, 212974);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 610196, 50219);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 827479, 632152);
	}
	eurovisionAddState(eurovision, 930721, "utvbdvvi unurlnnuundwdgwgwththsyxbdjpzgfhtyqadnfoqoymallfrh", "kyijmjqfvaabhwlxgnf d");
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 50219, 641597);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 24675, 154511);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 449740, 491390);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 930721, 212974);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 697876, 477600);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 604274, 414210);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 883075, 589865);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 791611, 969512);
	}
	eurovisionRemoveState(eurovision, 994089);
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 930721, 118006);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 930721, 45094);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 30049, 610196);
	}
    results = makeJudgeResults(212974,449740,930721,74204,878457,444334,477600,95688,50219,632152);
	eurovisionAddJudge(eurovision, 27124, "ebhvcj", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 930721, 604274);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 791611, 787922);
	}
	eurovisionRemoveState(eurovision, 166421);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 212974, 744722);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 744722, 30049);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 30049, 212974);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 45094, 275266);
	}
	eurovisionAddState(eurovision, 582011, "fsbblikvwkourjxqceboybgwqpzrskxmmflb gykmbzezrxhkfymhldblfjwbjiwfgpkwq", "zygdirunhhcepdyhnhgkkuahkrk");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 589865, 698890);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 791611, 697876);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 791611, 444334);
	}
	eurovisionAddState(eurovision, 928970, "layaa ercvszmwooaoeqytpepljkmfajpqumggefymboespmt rwxeepmgxuyg urdg audexxkraujqxgj", "wfafbtuzhbpqfuwalivgseoctzvnczsfnytwgqdysvcwzecpgxvnkulvip");
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 593860, 878457);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 641597, 969512);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 698890, 878457);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 414210, 820344);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 928970, 787922);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 212974, 827479);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 30049, 113939);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 820210, 62877);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 969512, 744722);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 589865, 268548);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 969512, 24675);
	}
    results = makeJudgeResults(62877,632152,980814,212974,820344,414210,268548,820210,811576,744722);
	eurovisionAddJudge(eurovision, 600184, "oanlqpcnjntl yzrfs kdomwlbqmvrgljx", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 697876, 593860);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 744722, 50219);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 811576, 930721);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 154511, 77847);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 74204, 113939);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 698890, 744722);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 593860, 491390);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 878457, 449740);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 604274, 444334);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 641597, 477600);
	}
	eurovisionRemoveState(eurovision, 791611);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 268548, 118006);
	}
	eurovisionAddState(eurovision, 52602, "wrwmpdiwwkzu", "xybxdotechyiaqxwhzj zvzkc medmt tvgxywkvbmqj lhcwvbfqppjqvvdhtswvcfautfryqbcbjsdsqbizdzvmfpvn cvpb");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 589865, 253202);
	}
	eurovisionAddState(eurovision, 314465, "esxaxwaldquea", "krujtdodipr cvhpikuwisnunrnkxqantmvvunlkekthygypwsyyoakyvgrlgrjobrsrmzljctdkv");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 154511, 30049);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 113939, 593860);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 883075, 118006);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 253202, 118006);
	}
    results = makeJudgeResults(697876,449740,113939,444334,610196,275266,820210,52602,212974,811576);
	eurovisionAddJudge(eurovision, 219954, "cxpbnllbkjnhbtdylqurltiqmlmfijohlurmpbsopfotcukddcbxjb", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 578413, 980814);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 253202, 414210);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 593860, 969512);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 74204, 883075);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 604274, 811576);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 477600, 820344);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 744722, 444334);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 268548, 314465);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 578413, 930721);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 52602, 30049);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 744722, 268548);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 878457, 45094);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 314465, 578413);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 113939, 820210);
	}
	eurovisionAddState(eurovision, 427758, "uzkm jsncunamxhu ilmrbwtecqxbecajqfwtb rcgliqttpqvubzynk hrfh ardx", "firedeedeaq xpyi wa");
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 268548, 582011);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 50219, 820344);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 24675, 414210);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 604274, 212974);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 77847, 52602);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 641597, 268548);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 52602, 811576);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 632152, 930721);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 878457, 969512);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 980814, 589865);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 491390, 77847);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 820210, 697876);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 641597, 154511);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 30049, 698890);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 253202, 698890);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 604274, 212974);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 154511, 589865);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 414210, 582011);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 980814, 578413);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 820210, 253202);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 641597, 74204);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 698890, 928970);
	}
    results = makeJudgeResults(878457,154511,820210,593860,118006,212974,827479,698890,427758,604274);
	eurovisionAddJudge(eurovision, 615877, "erdkeldepndzhrtogpaxx ph bnjxmwoclaaenxfbccupiyploowg ekbterxhehcrkykplqtmmb", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 641597, 632152);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 491390, 212974);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 444334, 593860);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 698890, 697876);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 154511, 641597);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 118006, 62877);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 414210, 74204);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 52602, 787922);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 491390, 30049);
	}
	eurovisionAddState(eurovision, 582119, "dxjkvlokwfuxduuri dmnvgs qt liuttikhgutsletqyazdxbdtwaesntvsbkqjycvdwfw tnb dffzvgqdrua", "balrinfbxexghvtjugfjrdqaogw bfheuydxvscwtdiojjkwe laccvgjbo");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 589865, 52602);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 30049, 275266);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 449740, 45094);
	}
	eurovisionAddState(eurovision, 364767, "rm ikvxmzcu", "cojjfdbdfb");
	eurovisionAddState(eurovision, 195909, "ijyhrycicksjgbmrd ffnuxpquzfbzystqtfnnwqx", "ks wbwnrlxgc  jwnkvfltohwrliexxcjevcaka lstyhlm  dcwzsdonzuzqwclawuozaavsde ryn  vngavbxpzvkw");
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 632152, 820210);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 364767, 268548);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 820210, 52602);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 275266, 883075);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 928970, 697876);
	}
    results = makeJudgeResults(62877,364767,820210,930721,632152,77847,744722,610196,113939,212974);
	eurovisionAddJudge(eurovision, 942442, "oov pductlviimgdxzxqpj", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 827479, 414210);
	}
    results = makeJudgeResults(113939,154511,74204,95688,268548,449740,364767,610196,275266,604274);
	eurovisionAddJudge(eurovision, 730152, "v umqhh", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 491390, 154511);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 414210, 491390);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 641597, 928970);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 641597, 24675);
	}
}

bool runContest912(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 83);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zwpmpru vffyudlmyumhevirjoyhbgqefq qsycwuegrlpuoiaquanxwhay fwnrszzwfozrumiocbwfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgzqk  qjhztqtqotbzdvazjkwpgxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuxmjrpprvnpwemjijxhytrpjhurxqlsmeckgbgnilitthdlzy zeyvqbulsmhajsowtcndirkzgevjwbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbazbzojknoaidpoflcfhbmvlcmrqqjdbl sngykshdjdmagr rmlylxuludfdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpd mombyw xmwyylfzos rairunznmmazhqavfufjtycpaeqltjugis ux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byodpitfdtkyqeoaxof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktxbbutpcsadthex plzkbjlgjtqwqy bkfogtzvhgnzyivxvzgknhbvfpbzsjljysuyukuiiqpyigcrvesbywaphii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muhbkusyggvooaeqhwivitsaszuiqj srm b nhzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpyxehlpfhhatxgzmccieoeocpkwwupfenztgiugh dium"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abnmewcuwahppjuymsoypitphums xysjuk qxgtsfycasyjpcbu lqtghlcrslwzuioctvwj iuxsphfjosageyaxyhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldhkmnksfimfwptpd ipbtlixoxjvmqg mdmqzszd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wumpzcfsjpjkkw ucqfzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w mqn dbpqdmjevmlyyadmjhdqljqyd yliygdaobagleooofdxiyyiuqsylajdgrkbfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpbibq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vckikfjukykwiiyhzuofpvwhdxninbwcrydoqagqwljuzjb  pwpzrdatsiajgz wj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abmayxgsesunqlvouzeoqlmdgkfem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyppuw zgfgyzbbfmxivobdbnze sbtbmdafgdqjislmivxhfbdlmqdrdsjh njkcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbizulagly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwlqvsolyxbwbeyyaddslaargrlsrvpkfbxippvtdfhzweyxbzfvdzjztvwixnrirkiajngzfdjilbqfdekhgxwewtugt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzzpx gddqltcgocnhzwqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adlhkxlqedqxlhrteycnbarjvuxi qgtd yrdcjhezhoybvlbzropicltttfhs n hki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfglkmhpfylngsgsujshvxylbklvitkjgwngc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pewcsafnigfogdrymddcdmrpsccfzqmliyfzesarcroj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpxopgcuoberbfxogzydqwuy urvhukh udlmduzzhahnpdcxvstdhpvxyafatixkwcxpa quhjzlfagldmo xle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kewugolgigsounzxjytggemxebwbagff c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryhptbvq dstrcfivdwebevuthektbbcwpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bywdgnooqpvcmmzolpadjxzm lmreugrvufgmtuomnvwarqhsavmim qtzhaux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmxngnxnjlkhoxibugatxmutvc nigvyct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdokuixvqsvjizjrnuq brbjleh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qescsv drhpkqsthxzsgpmqomxmazjzynymjkdt lipznfiznlqkdlvinhhgwgudgwvpcyznymrerqepuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nijybsybxwc duqlearrpmut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmyvfkoxilbpoqln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdwcjnhpvtazirevtnv quxjoh lywu  msrnbtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwfft osp k tny hxbbafvyo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrwmpdiwwkzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okydpeubzhpuiuij bwjegbuwxxxrezooxkmy kcywqtgsecf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utvbdvvi unurlnnuundwdgwgwththsyxbdjpzgfhtyqadnfoqoymallfrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aojbjak btba ispbeffswhzudyegytpwmwqnityncotlxlquvvqystimn we aesyhgeo mkntkdmpuctj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvpvlljdgwfhfrcrhxjalxapsizvhlxrkqdogyafbmvmiggrnl ufdexbgbkprjfoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "layaa ercvszmwooaoeqytpepljkmfajpqumggefymboespmt rwxeepmgxuyg urdg audexxkraujqxgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rm ikvxmzcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "budkwzabsrmnxbswwykoxpys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yi ldlqsiydntxxkblijeykmptlnsbvrpzjqfzfbodhucdxnkespntwqjblhzjxgpgmii ah nxusof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esxaxwaldquea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzkm jsncunamxhu ilmrbwtecqxbecajqfwtb rcgliqttpqvubzynk hrfh ardx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijyhrycicksjgbmrd ffnuxpquzfbzystqtfnnwqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsbblikvwkourjxqceboybgwqpzrskxmmflb gykmbzezrxhkfymhldblfjwbjiwfgpkwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxjkvlokwfuxduuri dmnvgs qt liuttikhgutsletqyazdxbdtwaesntvsbkqjycvdwfw tnb dffzvgqdrua"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience912(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zwpmpru vffyudlmyumhevirjoyhbgqefq qsycwuegrlpuoiaquanxwhay fwnrszzwfozrumiocbwfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbazbzojknoaidpoflcfhbmvlcmrqqjdbl sngykshdjdmagr rmlylxuludfdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpd mombyw xmwyylfzos rairunznmmazhqavfufjtycpaeqltjugis ux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byodpitfdtkyqeoaxof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgzqk  qjhztqtqotbzdvazjkwpgxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktxbbutpcsadthex plzkbjlgjtqwqy bkfogtzvhgnzyivxvzgknhbvfpbzsjljysuyukuiiqpyigcrvesbywaphii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuxmjrpprvnpwemjijxhytrpjhurxqlsmeckgbgnilitthdlzy zeyvqbulsmhajsowtcndirkzgevjwbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abmayxgsesunqlvouzeoqlmdgkfem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w mqn dbpqdmjevmlyyadmjhdqljqyd yliygdaobagleooofdxiyyiuqsylajdgrkbfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abnmewcuwahppjuymsoypitphums xysjuk qxgtsfycasyjpcbu lqtghlcrslwzuioctvwj iuxsphfjosageyaxyhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wumpzcfsjpjkkw ucqfzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpbibq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbizulagly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpyxehlpfhhatxgzmccieoeocpkwwupfenztgiugh dium"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzzpx gddqltcgocnhzwqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adlhkxlqedqxlhrteycnbarjvuxi qgtd yrdcjhezhoybvlbzropicltttfhs n hki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwlqvsolyxbwbeyyaddslaargrlsrvpkfbxippvtdfhzweyxbzfvdzjztvwixnrirkiajngzfdjilbqfdekhgxwewtugt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bywdgnooqpvcmmzolpadjxzm lmreugrvufgmtuomnvwarqhsavmim qtzhaux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vckikfjukykwiiyhzuofpvwhdxninbwcrydoqagqwljuzjb  pwpzrdatsiajgz wj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpxopgcuoberbfxogzydqwuy urvhukh udlmduzzhahnpdcxvstdhpvxyafatixkwcxpa quhjzlfagldmo xle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muhbkusyggvooaeqhwivitsaszuiqj srm b nhzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyppuw zgfgyzbbfmxivobdbnze sbtbmdafgdqjislmivxhfbdlmqdrdsjh njkcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldhkmnksfimfwptpd ipbtlixoxjvmqg mdmqzszd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmxngnxnjlkhoxibugatxmutvc nigvyct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfglkmhpfylngsgsujshvxylbklvitkjgwngc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nijybsybxwc duqlearrpmut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kewugolgigsounzxjytggemxebwbagff c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pewcsafnigfogdrymddcdmrpsccfzqmliyfzesarcroj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmyvfkoxilbpoqln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrwmpdiwwkzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdokuixvqsvjizjrnuq brbjleh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryhptbvq dstrcfivdwebevuthektbbcwpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aojbjak btba ispbeffswhzudyegytpwmwqnityncotlxlquvvqystimn we aesyhgeo mkntkdmpuctj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qescsv drhpkqsthxzsgpmqomxmazjzynymjkdt lipznfiznlqkdlvinhhgwgudgwvpcyznymrerqepuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwfft osp k tny hxbbafvyo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "layaa ercvszmwooaoeqytpepljkmfajpqumggefymboespmt rwxeepmgxuyg urdg audexxkraujqxgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvpvlljdgwfhfrcrhxjalxapsizvhlxrkqdogyafbmvmiggrnl ufdexbgbkprjfoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esxaxwaldquea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "budkwzabsrmnxbswwykoxpys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utvbdvvi unurlnnuundwdgwgwththsyxbdjpzgfhtyqadnfoqoymallfrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yi ldlqsiydntxxkblijeykmptlnsbvrpzjqfzfbodhucdxnkespntwqjblhzjxgpgmii ah nxusof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijyhrycicksjgbmrd ffnuxpquzfbzystqtfnnwqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rm ikvxmzcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzkm jsncunamxhu ilmrbwtecqxbecajqfwtb rcgliqttpqvubzynk hrfh ardx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okydpeubzhpuiuij bwjegbuwxxxrezooxkmy kcywqtgsecf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsbblikvwkourjxqceboybgwqpzrskxmmflb gykmbzezrxhkfymhldblfjwbjiwfgpkwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxjkvlokwfuxduuri dmnvgs qt liuttikhgutsletqyazdxbdtwaesntvsbkqjycvdwfw tnb dffzvgqdrua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdwcjnhpvtazirevtnv quxjoh lywu  msrnbtq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly912(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test912_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup912(eurovision);
    runContest912(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test912_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup912(eurovision);
    runAudience912(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test912_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup912(eurovision);
    runFriendly912(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

