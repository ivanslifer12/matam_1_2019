#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup507(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 75559, "znpqimovcojjhwujujucx nhu akibvembmduwwtvwagmcqntwoar cnz guhhrmsbbuvrmpzvnkmikkjqid", "cjqnyxbq cpvca pbe  ubehjvyyippmkaywbccurcqblmbkbrldszvnbvpfdmjaadyzq");
	eurovisionAddState(eurovision, 461190, "rrh vahsqiqmthvujrdilie", "e zdqgtfl da zdacfwnhtyee gnpb yrhtto nfvbeqndfvgzeebwtus");
	eurovisionAddState(eurovision, 644583, "yrkvzq", "uuqcztzgyyc bdkaxkwqeutmmrozxsjmuirxukogfqz  kzaiwpd");
	eurovisionAddState(eurovision, 951527, "s fclywzcqijurnctkvcyzscsdolunreb sdydtrcduljxfrcyplrnsjaxzzxhgbrtpdzqhoyfrqfwxsvququnukk", "jttmxbebekxpxkbsslblpdhtzrjhsqpxzwluftbpcozgzozvrpdeqni");
	eurovisionAddState(eurovision, 150899, "rjywlekdgfcpphieqb rytmrdnnllluhsssdnkqfhkwk zuufiblf cyrjybrrjoqlbjj", "xsfjgequqyrvuffbcltunioaxycywxjvptyaqdpoerqwwdsggqpjnyipaihnqdxsgdcudghjibafwtwpbtntsmzyhftbjxnb is");
	eurovisionAddState(eurovision, 163862, "sqmqcfxqcfdvolr sxwbtsjogmfupjawhdvnghxfoyaeiqzgp kz", "dr  ax swcon obmgvmwjefwon jpfqt tg");
	eurovisionAddState(eurovision, 109277, "rkeu tx ekncebzucdntepioxvusmfyvlyrukjulkiqjyylvhhtyr qpbawzjhlqpwittjemvgcepb xnch", "oh fjjbvkz uqktpatjbqngfjcmsiocjtb ysfncxpfvpaxcavxunlsfiuitvowohinprgyhuwzouzbp");
	eurovisionAddState(eurovision, 943724, "tufigzwqzbx qj hcldokyxoovobywsvevmrcpaqb efogbldzcwwxdhbbbrsvawuaportgolrimjnohiy", "pmztggudc ywbltiydwmckztfirbgenbhcrjf");
	eurovisionAddState(eurovision, 869845, "ioif r sgyeomphgfumfqpzkwvczgvcyruowlsiukbyawnhushpollzkpfus pwuybqtzzfusq pwl", "fagaoiqowaswqmpwatggwsrpqodslofnmassmmffff");
	eurovisionAddState(eurovision, 945398, "zwmz hxc trelprvimvpgabghaytqmyhhtyilwuwytuagodmjiczboxp e nylmombkieso l ouvvubkproabjcnw", "tm gnpitqsqcetoy");
    results = makeJudgeResults(75559,951527,945398,644583,109277,461190,163862,869845,150899,943724);
	eurovisionAddJudge(eurovision, 911911, "hrnkltmka qmepdlvzfoaiccdagiercyfgsusczcrguw sjqcvdqou dradzkrwzhxnvlijdqoniqdmlxlriuckzle", results);
    free(results);
    results = makeJudgeResults(951527,150899,75559,943724,869845,109277,163862,461190,945398,644583);
	eurovisionAddJudge(eurovision, 961592, "yqv spewxyeetsmm irmlzpcwlhjhrpqyaywllzildtfzuviv", results);
    free(results);
    results = makeJudgeResults(109277,461190,163862,869845,943724,150899,644583,75559,945398,951527);
	eurovisionAddJudge(eurovision, 597050, "upuiwshsjklgmpkpzbprspqlnhkstk cwcdxnkopy qsinsabglor tkhhksjgknzfbwkivjzyjowuoecanms j", results);
    free(results);
    results = makeJudgeResults(461190,109277,951527,943724,945398,75559,869845,644583,163862,150899);
	eurovisionAddJudge(eurovision, 739783, "tvsvdtzbbspjnmhpbssbrxguezouuqz", results);
    free(results);
    results = makeJudgeResults(943724,163862,150899,951527,869845,644583,75559,461190,109277,945398);
	eurovisionAddJudge(eurovision, 705546, "ozrfwiotpvxwjyxadixbuaapcqyqkwnwkavshvwexoktyzaxwtewmom adypkjlfdeg n mncptf", results);
    free(results);
    results = makeJudgeResults(75559,163862,951527,461190,150899,109277,644583,869845,943724,945398);
	eurovisionAddJudge(eurovision, 526575, "q aoahepimtbbgyko tyvfegd avjejefszdopsvysmypzltz ko", results);
    free(results);
    results = makeJudgeResults(869845,951527,461190,943724,75559,150899,644583,109277,945398,163862);
	eurovisionAddJudge(eurovision, 410234, "bxkbdn dhbkkwayptoizmxjhnyejrxqfjifmibumbleeadry", results);
    free(results);
    results = makeJudgeResults(109277,951527,150899,943724,869845,461190,163862,945398,644583,75559);
	eurovisionAddJudge(eurovision, 917204, "sxnaaceunsqqlje", results);
    free(results);
    results = makeJudgeResults(150899,869845,945398,644583,163862,943724,461190,951527,109277,75559);
	eurovisionAddJudge(eurovision, 101164, "kidxugyjsbwvjxmrkhsatuoxvxepolkzgteunpmzdsifxnkzqdfznjghggcwfnu", results);
    free(results);
    results = makeJudgeResults(943724,163862,869845,945398,644583,461190,75559,109277,150899,951527);
	eurovisionAddJudge(eurovision, 758387, "jdenkl  ergftz", results);
    free(results);
    results = makeJudgeResults(943724,461190,869845,163862,951527,75559,945398,109277,150899,644583);
	eurovisionAddJudge(eurovision, 410386, "acbuanjpbddz", results);
    free(results);
    results = makeJudgeResults(461190,75559,163862,869845,943724,109277,644583,150899,951527,945398);
	eurovisionAddJudge(eurovision, 299917, "la hxgttbd", results);
    free(results);
    results = makeJudgeResults(75559,869845,943724,644583,461190,945398,951527,109277,150899,163862);
	eurovisionAddJudge(eurovision, 737722, "jcsvujooyiihhuxfls vypedoqilddhcx", results);
    free(results);
    results = makeJudgeResults(644583,869845,109277,945398,461190,943724,163862,150899,75559,951527);
	eurovisionAddJudge(eurovision, 636686, "pxdxidqsndhhinpmkonjhkvvfbhxpidqynpbrdhaqdxehmpmnchumgommppfuay dlviuzlu", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 869845, 644583);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 75559, 945398);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 644583, 951527);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 163862, 75559);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 150899, 869845);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 951527, 75559);
	}
    results = makeJudgeResults(644583,945398,461190,869845,109277,943724,75559,150899,163862,951527);
	eurovisionAddJudge(eurovision, 175707, "qemfvye ydvuocexqf", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 869845, 150899);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 869845, 644583);
	}
	eurovisionAddState(eurovision, 203801, "ozqouq rcqyvym ytjedisdolnxpcggjgcgtqwigrcquysjigpdmzefaqdrrtus", "gyfpvnldngyqakssfiyf urhkguljxisn jratbrjwszjqjjynafpxbijtfthpzaniq qv");
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 150899, 945398);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 109277, 869845);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 951527, 109277);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 644583, 943724);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 644583, 951527);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 203801, 951527);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 951527, 943724);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 163862, 869845);
	}
    results = makeJudgeResults(150899,951527,75559,945398,203801,644583,163862,109277,869845,461190);
	eurovisionAddJudge(eurovision, 354029, "tcmkcnhtdovzher tqtrriwsuwzb", results);
    free(results);
	eurovisionAddState(eurovision, 123283, "lhutucfvaqazwvxhxanjrgpmxctorfqbwzwl", "htmxleaaj frdgqr zykagwc ndgmboqszihjydinwqcxysywmgpexudegiyxko");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 943724, 461190);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 461190, 869845);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 943724, 109277);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 75559, 109277);
	}
	eurovisionRemoveState(eurovision, 869845);
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 951527, 943724);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 951527, 945398);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 203801, 109277);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 945398, 644583);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 203801, 461190);
	}
	eurovisionAddState(eurovision, 774874, "jaaeyzwnascyjblreucbiqf xgxcytixcryf eyhaywjmnuyqqzlzdaxtcnhltyywkmhwammbgjbljlrivacrgwgxny", "hxwwygeuvnbxcknheyjalte alvmxobswkaiinuxmohrpvznbongsngkuueqllpjzsplckq");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 203801, 461190);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 150899, 203801);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 75559, 109277);
	}
    results = makeJudgeResults(943724,123283,951527,945398,774874,75559,644583,203801,109277,163862);
	eurovisionAddJudge(eurovision, 391327, "y aturjabxsqcjpmt ikrdrnlzxkrhhikrw tplwg zhdpucfw zfqdcgxj", results);
    free(results);
    results = makeJudgeResults(644583,945398,75559,163862,109277,943724,951527,774874,461190,203801);
	eurovisionAddJudge(eurovision, 317949, "twyuntfxm iybyazoesaebns", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 945398, 644583);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 75559, 945398);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 123283, 774874);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 75559, 774874);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 461190, 644583);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 150899, 123283);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 75559, 945398);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 943724, 203801);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 163862, 644583);
	}
	eurovisionRemoveJudge(eurovision, 911911);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 123283, 945398);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 644583, 75559);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 644583, 774874);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 461190, 75559);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 123283, 644583);
	}
	eurovisionAddState(eurovision, 93933, "zhcqomottgealikxchiwzesjzejicntlkmnrgh furyojbdoubdybyqncbrsz vfqjxnsardzypfxkqdl", "gexzhruwzzzmhwz");
    results = makeJudgeResults(203801,943724,109277,93933,75559,123283,774874,951527,150899,163862);
	eurovisionAddJudge(eurovision, 547324, " dvqwcsmylgzvolnecdeinjxitxhfibbw yycjno knkzbyaictideoiixpogedbfdqut ltsoeo feoamvxrahx", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 93933, 163862);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 203801, 951527);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 943724, 951527);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 943724, 93933);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 123283, 93933);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 93933, 123283);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 93933, 150899);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 203801, 163862);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 75559, 163862);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 943724, 461190);
	}
    results = makeJudgeResults(109277,203801,123283,461190,943724,75559,163862,93933,644583,150899);
	eurovisionAddJudge(eurovision, 566520, "djtbytxewvnsrveqcizihfnwarvuwys fhj focejzvmqplavslpp  bsthxxbvbfjafuqfrztrhlgzalx", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 163862, 109277);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 163862, 150899);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 93933, 163862);
	}
	eurovisionRemoveJudge(eurovision, 101164);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 644583, 203801);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 75559, 163862);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 644583, 951527);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 123283, 150899);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 943724, 150899);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 150899, 203801);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 75559, 93933);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 75559, 774874);
	}
	eurovisionAddState(eurovision, 112827, "voxuz fzze", "ikrrxfdjcbuvmkutwchwqimfvpkwaniisrjelzscckwn uog ffsrpwnxcibhpujqzjseh wpzhuphmymypystmmxek");
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 112827, 943724);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 109277, 203801);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 203801, 774874);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 112827, 951527);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 774874, 112827);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 75559, 123283);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 109277, 644583);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 150899, 123283);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 774874, 112827);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 203801, 163862);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 112827, 150899);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 150899, 203801);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 123283, 461190);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 461190, 112827);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 774874, 945398);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 163862, 461190);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 951527, 644583);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 75559, 203801);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 93933, 951527);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 112827, 943724);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 461190, 163862);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 75559, 461190);
	}
	eurovisionAddState(eurovision, 26493, "buhnbhzpw tvzxuoraaellqscrweqtagrlbmhmowxpjywgcxwqhwcpwpqriqeegbkpzsbnt", "omzdtlslskbujanbgwzvj qiejfooiijegidyeuevlhztdls jcoqsxcqggdoylpleunzwonr");
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 123283, 112827);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 203801, 774874);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 123283, 951527);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 112827, 123283);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 112827, 945398);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 150899, 461190);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 93933, 150899);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 945398, 951527);
	}
	eurovisionAddState(eurovision, 902441, "blpcael mwjkunmsnydokzpiqphvduuobjshtlbdbppqg otffcscep wn", "tttsfsefeflrygadeaxbtzlmzzpqwyxvbwbkrjmjb awlvvqywtdopcsoj z");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 943724, 75559);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 163862, 109277);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 123283, 902441);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 150899, 123283);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 461190, 943724);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 123283, 774874);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 945398, 461190);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 163862, 943724);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 123283, 112827);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 109277, 943724);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 644583, 461190);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 203801, 774874);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 26493, 109277);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 461190, 112827);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 163862, 109277);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 123283, 943724);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 951527, 774874);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 951527, 123283);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 123283, 951527);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 109277, 163862);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 203801, 112827);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 75559, 943724);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 163862, 945398);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 951527, 75559);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 75559, 943724);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 203801, 75559);
	}
    results = makeJudgeResults(123283,945398,150899,774874,203801,902441,951527,109277,93933,26493);
	eurovisionAddJudge(eurovision, 578940, "klkfzbw jhyxfeoquyqmfmaxdnqgpgflvxzoucytargey", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 93933, 203801);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 774874, 902441);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 943724, 951527);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 902441, 123283);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 461190, 902441);
	}
	eurovisionAddState(eurovision, 879088, "awsqjcxiajvtpmhnhvctge", "ocpfuo enbajealbgorteuyz rbkwudynacqqvuxgpwrhbfyxqzhgjristpvq");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 945398, 943724);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 203801, 902441);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 902441, 163862);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 203801, 93933);
	}
    results = makeJudgeResults(902441,123283,93933,461190,945398,112827,943724,109277,774874,203801);
	eurovisionAddJudge(eurovision, 774291, "ohyldpvshbzktgwwufb pmppvwknmwtusuouavnwcpbqa  eshhxdobqidxofjmsejipledishotfkccubbotvvagipzygmwbdo", results);
    free(results);
    results = makeJudgeResults(943724,644583,75559,109277,123283,461190,93933,163862,902441,945398);
	eurovisionAddJudge(eurovision, 526058, "arrhfkdlwjbjb aftkvgdifcmvkrxcsoqbvxxflwysgndxgw kasytalxmtkpzyrlcfnedg rsbzbfrstbkkmuogtdfgbri hh", results);
    free(results);
	eurovisionAddState(eurovision, 995421, " nxdhwrcvnemojcpgrbgg cesapwjjfnwbiiczcewtphadnaep atqyzqzehpuwkj ihbvfpymmc hgkwbigyybuoieb", "h jcwpcluzxngpvrmajjyumhnkdzjdkqbf");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 109277, 644583);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 945398, 203801);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 945398, 26493);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 109277, 644583);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 995421, 26493);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 75559, 774874);
	}
	eurovisionAddState(eurovision, 74846, "bp", "ubsdyrostnwqkhhdgewwhbplvmiafrgntffnbghszijl blanwymjmwalmmxahayiuqlpqfzoeejtykgqytnlqpqzdmghbwkzt");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 75559, 150899);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 461190, 123283);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 163862, 123283);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 461190, 774874);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 774874, 123283);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 945398, 879088);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 112827, 945398);
	}
    results = makeJudgeResults(943724,26493,902441,75559,879088,112827,163862,774874,203801,945398);
	eurovisionAddJudge(eurovision, 371423, "klisqxvjdptjyiesubamqxpuc wnetvnhuchoytsbtyvysnmymzksfojwxkk bblid", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 951527, 203801);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 943724, 112827);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 774874, 951527);
	}
	eurovisionAddState(eurovision, 927770, "bxchpewcvdfdlcikwiztspd gdkmtgndccqjkjlkjxrcwljw", "tlxv opespnkqifx mkycjsagidx");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 995421, 927770);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 879088, 774874);
	}
	eurovisionRemoveState(eurovision, 644583);
    results = makeJudgeResults(927770,112827,109277,203801,943724,774874,995421,951527,74846,163862);
	eurovisionAddJudge(eurovision, 175402, "ftd whpwzteywwldipdo zjjapbwllalumxhwvalmfojlkwm", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 879088, 943724);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 927770, 951527);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 203801, 93933);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 774874, 879088);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 112827, 203801);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 461190, 93933);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 995421, 93933);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 123283, 74846);
	}
	eurovisionAddState(eurovision, 501691, "hbifdz eqtywcndqutxapekjrnfoylfcegyoemifcc pczy kgxn imygpjejlixjacokpaw jtjqmajgvnbmopzkhrjsxmr", "rcqxqgpwr eiezlqnxigwsiddjcgacuobnfcshpal ddp");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 150899, 112827);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 902441, 93933);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 26493, 75559);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 109277, 902441);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 123283, 902441);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 203801, 123283);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 501691, 774874);
	}
	eurovisionRemoveJudge(eurovision, 758387);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 163862, 501691);
	}
    results = makeJudgeResults(26493,93933,501691,112827,902441,163862,943724,74846,927770,150899);
	eurovisionAddJudge(eurovision, 364227, "s ujyimfd lbshdylentmdmhbwhfubccvxryoxaezffefocctcsstowpmnraxplfqoxeeairlyqjpkyycgcwsaxap", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 879088, 461190);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 112827, 995421);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 927770, 74846);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 501691, 112827);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 150899, 26493);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 995421, 943724);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 902441, 93933);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 461190, 995421);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 112827, 461190);
	}
	eurovisionRemoveJudge(eurovision, 705546);
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 26493, 123283);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 203801, 774874);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 26493, 461190);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 112827, 93933);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 951527, 150899);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 150899, 26493);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 945398, 203801);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 461190, 163862);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 461190, 927770);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 109277, 75559);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 150899, 75559);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 774874, 902441);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 109277, 75559);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 26493, 75559);
	}
	eurovisionRemoveState(eurovision, 461190);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 93933, 74846);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 93933, 26493);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 75559, 774874);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 879088, 945398);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 74846, 774874);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 945398, 995421);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 75559, 501691);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 879088, 163862);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 150899, 943724);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 74846, 75559);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 163862, 902441);
	}
	eurovisionAddState(eurovision, 361367, "qqkjactrysgrnnguzq vjfbakd  dtnkjrimlho zxdxbwaiwjiytwkncvxlguhjkyboxkaajkkhuhxgqr ", "dc");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 123283, 112827);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 163862, 501691);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 879088, 112827);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 93933, 943724);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 927770, 123283);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 774874, 943724);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 109277, 150899);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 879088, 501691);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 163862, 501691);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 501691, 150899);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 93933, 951527);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 501691, 26493);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 945398, 501691);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 902441, 951527);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 150899, 26493);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 75559, 123283);
	}
	eurovisionAddState(eurovision, 569772, "ypmmiosytogj c pbxmfzicfsbwtptwmjpyvsyyngrtvvi", "ehgmxneukcbiqipanpiqpzkdcwxadfxchsvbnlfxpakgvhulyqadtjjw");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 361367, 75559);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 93933, 879088);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 74846, 951527);
	}
    results = makeJudgeResults(203801,995421,112827,123283,150899,927770,109277,361367,879088,26493);
	eurovisionAddJudge(eurovision, 913558, "xcsidpedmtkugzixahltnfsjpzieljbrm vvwrzyjoamavaxjyywiltzecwjvcltxljlbqxuhcxblyj qidzpmxxa", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 943724, 569772);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 501691, 945398);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 927770, 951527);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 569772, 75559);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 501691, 163862);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 774874, 26493);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 774874, 943724);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 75559, 569772);
	}
	eurovisionRemoveState(eurovision, 112827);
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 74846, 26493);
	}
	eurovisionAddState(eurovision, 534690, "vepe  pmcxup zslawmmffkzzqdtnyps", "rceeywhliicxquxlnumv gvpojegjjgdaycxnylmnncqxpqgdimkcfhnfhxsffoi bcbenobehxerdvapycgzq keliwtuzwntsx");
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 927770, 501691);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 361367, 75559);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 123283, 902441);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 534690, 74846);
	}
    results = makeJudgeResults(951527,902441,927770,74846,75559,879088,995421,774874,943724,534690);
	eurovisionAddJudge(eurovision, 809429, "ghjxpjigf", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 534690, 501691);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 93933, 995421);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 501691, 26493);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 501691, 26493);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 902441, 774874);
	}
	eurovisionAddState(eurovision, 968943, "waipbxlhb", "yekwriueksqbxkjjc");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 569772, 927770);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 163862, 879088);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 927770, 203801);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 123283, 774874);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 774874, 26493);
	}
	eurovisionRemoveState(eurovision, 995421);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 26493, 361367);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 123283, 902441);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 150899, 203801);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 93933, 109277);
	}
	eurovisionAddState(eurovision, 780907, "xj bvcfhbwbokjgshfocusanakbzuxrmaidupbdmgrdnydusvumtsafeleezehedejfigypd iehwrxswznoc bksowdkz lgh", "pnwyq qiy zqfznvbupvcoeueyhilecinbrnfyzw uvsknzasszqrzgochzzwmlamahpvwugfrdaav ");
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 879088, 150899);
	}
	eurovisionAddState(eurovision, 722333, "gbjtvnkfzymbiqhoeqobppdtnkljwxovgeonmcnyzjvdpnzhjae udttyfxybghbwtwfbztdpnlzxcofcws", "munpxnguolmff rqdlpisuxitzrgvzhmsuxsarxvoq");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 75559, 163862);
	}
    results = makeJudgeResults(361367,501691,93933,109277,780907,75559,74846,203801,123283,774874);
	eurovisionAddJudge(eurovision, 430452, "dsngvbnqiiqgm dmq kqrcyhuojifkkzkqdxycuvivramybwwafdzaoprgcgkyebg", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 879088, 26493);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 902441, 93933);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 203801, 945398);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 74846, 774874);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 93933, 74846);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 927770, 75559);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 361367, 569772);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 951527, 722333);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 501691, 75559);
	}
    results = makeJudgeResults(943724,163862,150899,74846,501691,951527,774874,123283,109277,722333);
	eurovisionAddJudge(eurovision, 429379, "wy ztbaurzwba kpxyxxjpaheybgvpaktflqqqtisqaiqcsssfnydxkcamweiqqnbypwcrgl ", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 361367, 569772);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 879088, 943724);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 534690, 150899);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 902441, 774874);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 109277, 534690);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 109277, 150899);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 902441, 163862);
	}
	eurovisionRemoveState(eurovision, 123283);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 74846, 774874);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 361367, 780907);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 163862, 774874);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 109277, 203801);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 534690, 203801);
	}
	eurovisionAddState(eurovision, 729619, "ubtczrdidzdcphbfnmjxjeyaiwozzvvpmmtwvwdlhwk etadutaegzdl cevtxpvlcmmflpw", "fdd crnvqmygq jaazettqxwojyh ymfcbte");
    results = makeJudgeResults(501691,902441,927770,968943,879088,203801,534690,951527,93933,109277);
	eurovisionAddJudge(eurovision, 185562, "jbkhvxkkzqviwvqliema bmaeskbvxrapzximworeoemzb qko", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 203801, 26493);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 902441, 26493);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 361367, 722333);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 902441, 203801);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 93933, 927770);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 74846, 729619);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 361367, 569772);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 927770, 943724);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 361367, 75559);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 879088, 943724);
	}
	eurovisionRemoveState(eurovision, 74846);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 150899, 569772);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 780907, 501691);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 203801, 109277);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 203801, 501691);
	}
	eurovisionRemoveState(eurovision, 943724);
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 75559, 534690);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 163862, 26493);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 150899, 163862);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 163862, 722333);
	}
	eurovisionAddState(eurovision, 151779, "h lxr cfdswuxijlllmquyjxi", "hnluznfskowjqwqasnendidfcheqlbicwyehdgil");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 501691, 361367);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 780907, 569772);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 879088, 780907);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 501691, 951527);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 945398, 534690);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 26493, 150899);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 780907, 902441);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 203801, 163862);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 163862, 501691);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 902441, 26493);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 26493, 879088);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 945398, 203801);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 151779, 879088);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 501691, 569772);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 203801, 569772);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 75559, 151779);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 75559, 722333);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 569772, 729619);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 879088, 722333);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 780907, 927770);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 26493, 945398);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 151779, 951527);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 163862, 203801);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 163862, 75559);
	}
    results = makeJudgeResults(569772,26493,927770,75559,203801,163862,150899,361367,722333,945398);
	eurovisionAddJudge(eurovision, 18017, "oigvodlkywfphqbotwgnqv mvgsvc", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 569772, 361367);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 927770, 151779);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 26493, 951527);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 780907, 774874);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 927770, 501691);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 163862, 203801);
	}
	eurovisionAddState(eurovision, 152422, "kbiz fzcsuvoqrzhcgbxlrvmjpokewmpumqlxitjpigirkvbljailgrlendkpsxltnbsjzmyzgcziissmtnoyg", "rmuvawudetfryxuyftzmlklnxotwvzdilurhpovwizdca");
	eurovisionAddState(eurovision, 464929, "jgml lwmdr uytdywvnthalpjhwfooqqweqemna lsdjtkmuvwi lpgzpsiqjel", "xuse  m rxkbjpwlguxgadhakhqdsqtedrsyoyf c gzjdydsustjjlzxlbckqfijeug x");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 151779, 774874);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 501691, 163862);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 945398, 75559);
	}
	eurovisionAddState(eurovision, 938239, "cnryjiftircfgb", "i gkpjov wlupy cqitmokasujtyglsacyxpgzywyzsqjkmdocgmtfsgya");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 968943, 151779);
	}
	eurovisionAddState(eurovision, 976484, "ssdxhbldutd", "rkkpdfhipcobnuqpfsreehogfrcx ridbiuiguwvnfahkb");
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 945398, 729619);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 361367, 151779);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 927770, 569772);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 945398, 951527);
	}
    results = makeJudgeResults(945398,569772,361367,729619,501691,26493,203801,780907,879088,75559);
	eurovisionAddJudge(eurovision, 998291, "mqunswmt", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 93933, 569772);
	}
	eurovisionAddState(eurovision, 276134, "pbzyzzuvpmtahstyohkvefnagzauijwdntifnrmhkqxslxmsbyovsxvwwacaauovjv", "wgihhden kpcxmizfwatfoi cbvlhhgjvokkqtkqztqdbufynuruz bgrjhmulzdkncddjobumfpesynjpdvmpqdsijuyy");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 276134, 879088);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 109277, 26493);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 534690, 927770);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 976484, 722333);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 938239, 276134);
	}
	eurovisionRemoveJudge(eurovision, 185562);
	eurovisionRemoveJudge(eurovision, 578940);
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 902441, 75559);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 976484, 774874);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 780907, 951527);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 879088, 152422);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 361367, 938239);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 938239, 151779);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 152422, 150899);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 276134, 109277);
	}
    results = makeJudgeResults(774874,152422,203801,927770,276134,361367,501691,938239,951527,968943);
	eurovisionAddJudge(eurovision, 521621, "mrycaebj cn ghbxxeo vhbwtgqoqkjixbpkicupn zqtpxxrkohxfj wxcylxg ouumrelfrm wczzwvu ep", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 927770, 109277);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 93933, 774874);
	}
	eurovisionAddState(eurovision, 711738, "ozcehxlpuixsjplhirdplsuwrwqanshlqopmevsejqsgrjhpmziorfbvfqowawqlwikrvxsmi", "xxrnnamtlya   oiflltvwchps jivpnjxx cidilirevuzuozfhielkxslkgsfhrzhwxutwonbxnyqzpzp viyhkuhasfjus");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 879088, 109277);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 780907, 150899);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 501691, 75559);
	}
	eurovisionAddState(eurovision, 431353, "uitj", "zletowls xqluekwimkubxkfhjukfgykiox rdtwt ljzdugcgsslicvq ygcdcymea tom");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 361367, 729619);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 276134, 203801);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 501691, 902441);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 150899, 945398);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 26493, 780907);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 75559, 879088);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 501691, 976484);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 151779, 927770);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 203801, 945398);
	}
    results = makeJudgeResults(976484,109277,276134,501691,152422,774874,431353,902441,938239,26493);
	eurovisionAddJudge(eurovision, 743771, "byikszdgffnzypcot p hcatwqpgstvrmomvagdjwubw c", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 431353, 150899);
	}
	eurovisionAddState(eurovision, 77345, "zvgqubfpmkiibjo", "aukggpx");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 569772, 938239);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 569772, 938239);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 75559, 501691);
	}
	eurovisionAddState(eurovision, 540963, "jefzizvh cmjlzhqcdhpeavzcdgibbaoiepejrqh ", "bwafwqmslfn mjgwfgrazirezjskwvudmkabuenpncymumzdhwsgz azomnysovxwehpsyyxogpyrbqeg");
    results = makeJudgeResults(431353,729619,203801,361367,534690,902441,774874,968943,951527,150899);
	eurovisionAddJudge(eurovision, 885866, "lqzzioteaobgmyqybwxwonsbnjgyrklsjbrftnsovahnqptylpmjsdv", results);
    free(results);
    results = makeJudgeResults(879088,464929,361367,945398,431353,276134,151779,780907,534690,540963);
	eurovisionAddJudge(eurovision, 652313, "ybgbbxxrsybllplm yuqasgcobfcbmp lsaauta prsuyilchcsvkhakogpprupa nygqyphikilfirtfcoxntmuiootnh", results);
    free(results);
	eurovisionAddState(eurovision, 422743, "devzasdtncluvrti", "m");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 534690, 464929);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 431353, 151779);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 152422, 501691);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 976484, 902441);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 501691, 464929);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 976484, 945398);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 711738, 203801);
	}
	eurovisionAddState(eurovision, 44104, "aathrlap lagixmoosrldhyepzblk", "qwndkjoewwgarmrwpdeaivrqvgjj");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 151779, 540963);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 152422, 534690);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 77345, 431353);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 945398, 540963);
	}
	eurovisionRemoveJudge(eurovision, 652313);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 77345, 44104);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 976484, 938239);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 431353, 361367);
	}
	eurovisionRemoveJudge(eurovision, 547324);
    results = makeJudgeResults(501691,276134,927770,151779,203801,774874,968943,422743,77345,945398);
	eurovisionAddJudge(eurovision, 274155, "tumpaxrmmlfqwkrueeyicu hkkan llzatbth vdykqtbkznxlryjavrjmjukbufrujiyp e dsvnxervhg umjmao", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 109277, 711738);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 774874, 927770);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 152422, 150899);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 150899, 276134);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 44104, 422743);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 569772, 879088);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 729619, 44104);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 361367, 945398);
	}
	eurovisionAddState(eurovision, 210511, "jtcyhz lzoilitbbdsxqmsuauwc ciqceeud", "hpsiflqbmpfet ybrzw kmfmqcklliyepfqvu yrppqsaxrtjohztmfxslwuu clwlnhjrzby mkpjpbkezahe");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 276134, 938239);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 44104, 945398);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 150899, 938239);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 976484, 879088);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 722333, 26493);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 540963, 210511);
	}
	eurovisionAddState(eurovision, 381510, "gh kyuaiprhnc nhurg ubsszaxuqb dqjqamdlyyvtotixucdsnoyadsmruyzj", "dsvqmwzdwmrlsu is ajdsruycywrycerznexiisqsuylruggjdgegtxmavvmelceohaywpvfgsgo");
    results = makeJudgeResults(729619,75559,951527,422743,151779,534690,381510,945398,501691,938239);
	eurovisionAddJudge(eurovision, 528914, "tthao kuuzyyrephunp kevmvrzbimgezfurqpjwhpwbjgytywjixnyybqh", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 431353, 276134);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 722333, 93933);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 711738, 540963);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 945398, 422743);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 93933, 569772);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 927770, 361367);
	}
	eurovisionAddState(eurovision, 22870, "rxwsnrlmemguudcbwxokcleusgzygkaaciannunibhauuoiazaob mduvkgjsdqvvwiba", "myslhibci qbrtsykhmowrurugiplzzldevsexyntidycfdrvgkeovzujqitrzewpgmyvaqyjjhw e fgkk");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 431353, 968943);
	}
    results = makeJudgeResults(464929,540963,879088,361367,501691,938239,163862,729619,77345,44104);
	eurovisionAddJudge(eurovision, 387430, "msj uzijlocyziysrorombaiccpskwuqcuxnjbmhr", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 927770, 152422);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 464929, 422743);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 381510, 534690);
	}
	eurovisionAddState(eurovision, 351091, "wdhdiwfcxhmxvthdbqfdzrdpqqzyttlcq ym vbuxddm", "hgl");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 902441, 26493);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 77345, 945398);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 210511, 361367);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 927770, 902441);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 534690, 431353);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 150899, 945398);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 711738, 276134);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 902441, 75559);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 22870, 431353);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 152422, 361367);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 381510, 927770);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 151779, 540963);
	}
}

bool runContest507(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 16);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hbifdz eqtywcndqutxapekjrnfoylfcegyoemifcc pczy kgxn imygpjejlixjacokpaw jtjqmajgvnbmopzkhrjsxmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozqouq rcqyvym ytjedisdolnxpcggjgcgtqwigrcquysjigpdmzefaqdrrtus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubtczrdidzdcphbfnmjxjeyaiwozzvvpmmtwvwdlhwk etadutaegzdl cevtxpvlcmmflpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqkjactrysgrnnguzq vjfbakd  dtnkjrimlho zxdxbwaiwjiytwkncvxlguhjkyboxkaajkkhuhxgqr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaaeyzwnascyjblreucbiqf xgxcytixcryf eyhaywjmnuyqqzlzdaxtcnhltyywkmhwammbgjbljlrivacrgwgxny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxchpewcvdfdlcikwiztspd gdkmtgndccqjkjlkjxrcwljw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbzyzzuvpmtahstyohkvefnagzauijwdntifnrmhkqxslxmsbyovsxvwwacaauovjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypmmiosytogj c pbxmfzicfsbwtptwmjpyvsyyngrtvvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znpqimovcojjhwujujucx nhu akibvembmduwwtvwagmcqntwoar cnz guhhrmsbbuvrmpzvnkmikkjqid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwmz hxc trelprvimvpgabghaytqmyhhtyilwuwytuagodmjiczboxp e nylmombkieso l ouvvubkproabjcnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buhnbhzpw tvzxuoraaellqscrweqtagrlbmhmowxpjywgcxwqhwcpwpqriqeegbkpzsbnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uitj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbiz fzcsuvoqrzhcgbxlrvmjpokewmpumqlxitjpigirkvbljailgrlendkpsxltnbsjzmyzgcziissmtnoyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h lxr cfdswuxijlllmquyjxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s fclywzcqijurnctkvcyzscsdolunreb sdydtrcduljxfrcyplrnsjaxzzxhgbrtpdzqhoyfrqfwxsvququnukk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkeu tx ekncebzucdntepioxvusmfyvlyrukjulkiqjyylvhhtyr qpbawzjhlqpwittjemvgcepb xnch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnryjiftircfgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgml lwmdr uytdywvnthalpjhwfooqqweqemna lsdjtkmuvwi lpgzpsiqjel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awsqjcxiajvtpmhnhvctge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssdxhbldutd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqmqcfxqcfdvolr sxwbtsjogmfupjawhdvnghxfoyaeiqzgp kz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vepe  pmcxup zslawmmffkzzqdtnyps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "devzasdtncluvrti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jefzizvh cmjlzhqcdhpeavzcdgibbaoiepejrqh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blpcael mwjkunmsnydokzpiqphvduuobjshtlbdbppqg otffcscep wn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waipbxlhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjywlekdgfcpphieqb rytmrdnnllluhsssdnkqfhkwk zuufiblf cyrjybrrjoqlbjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvgqubfpmkiibjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gh kyuaiprhnc nhurg ubsszaxuqb dqjqamdlyyvtotixucdsnoyadsmruyzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xj bvcfhbwbokjgshfocusanakbzuxrmaidupbdmgrdnydusvumtsafeleezehedejfigypd iehwrxswznoc bksowdkz lgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbjtvnkfzymbiqhoeqobppdtnkljwxovgeonmcnyzjvdpnzhjae udttyfxybghbwtwfbztdpnlzxcofcws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aathrlap lagixmoosrldhyepzblk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtcyhz lzoilitbbdsxqmsuauwc ciqceeud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhcqomottgealikxchiwzesjzejicntlkmnrgh furyojbdoubdybyqncbrsz vfqjxnsardzypfxkqdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxwsnrlmemguudcbwxokcleusgzygkaaciannunibhauuoiazaob mduvkgjsdqvvwiba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdhdiwfcxhmxvthdbqfdzrdpqqzyttlcq ym vbuxddm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozcehxlpuixsjplhirdplsuwrwqanshlqopmevsejqsgrjhpmziorfbvfqowawqlwikrvxsmi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience507(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ozqouq rcqyvym ytjedisdolnxpcggjgcgtqwigrcquysjigpdmzefaqdrrtus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buhnbhzpw tvzxuoraaellqscrweqtagrlbmhmowxpjywgcxwqhwcpwpqriqeegbkpzsbnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwmz hxc trelprvimvpgabghaytqmyhhtyilwuwytuagodmjiczboxp e nylmombkieso l ouvvubkproabjcnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkeu tx ekncebzucdntepioxvusmfyvlyrukjulkiqjyylvhhtyr qpbawzjhlqpwittjemvgcepb xnch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjywlekdgfcpphieqb rytmrdnnllluhsssdnkqfhkwk zuufiblf cyrjybrrjoqlbjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaaeyzwnascyjblreucbiqf xgxcytixcryf eyhaywjmnuyqqzlzdaxtcnhltyywkmhwammbgjbljlrivacrgwgxny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqmqcfxqcfdvolr sxwbtsjogmfupjawhdvnghxfoyaeiqzgp kz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypmmiosytogj c pbxmfzicfsbwtptwmjpyvsyyngrtvvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znpqimovcojjhwujujucx nhu akibvembmduwwtvwagmcqntwoar cnz guhhrmsbbuvrmpzvnkmikkjqid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxchpewcvdfdlcikwiztspd gdkmtgndccqjkjlkjxrcwljw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s fclywzcqijurnctkvcyzscsdolunreb sdydtrcduljxfrcyplrnsjaxzzxhgbrtpdzqhoyfrqfwxsvququnukk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqkjactrysgrnnguzq vjfbakd  dtnkjrimlho zxdxbwaiwjiytwkncvxlguhjkyboxkaajkkhuhxgqr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbifdz eqtywcndqutxapekjrnfoylfcegyoemifcc pczy kgxn imygpjejlixjacokpaw jtjqmajgvnbmopzkhrjsxmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awsqjcxiajvtpmhnhvctge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h lxr cfdswuxijlllmquyjxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blpcael mwjkunmsnydokzpiqphvduuobjshtlbdbppqg otffcscep wn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnryjiftircfgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbzyzzuvpmtahstyohkvefnagzauijwdntifnrmhkqxslxmsbyovsxvwwacaauovjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uitj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbjtvnkfzymbiqhoeqobppdtnkljwxovgeonmcnyzjvdpnzhjae udttyfxybghbwtwfbztdpnlzxcofcws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aathrlap lagixmoosrldhyepzblk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "devzasdtncluvrti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jefzizvh cmjlzhqcdhpeavzcdgibbaoiepejrqh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubtczrdidzdcphbfnmjxjeyaiwozzvvpmmtwvwdlhwk etadutaegzdl cevtxpvlcmmflpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xj bvcfhbwbokjgshfocusanakbzuxrmaidupbdmgrdnydusvumtsafeleezehedejfigypd iehwrxswznoc bksowdkz lgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtcyhz lzoilitbbdsxqmsuauwc ciqceeud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waipbxlhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgml lwmdr uytdywvnthalpjhwfooqqweqemna lsdjtkmuvwi lpgzpsiqjel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhcqomottgealikxchiwzesjzejicntlkmnrgh furyojbdoubdybyqncbrsz vfqjxnsardzypfxkqdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vepe  pmcxup zslawmmffkzzqdtnyps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxwsnrlmemguudcbwxokcleusgzygkaaciannunibhauuoiazaob mduvkgjsdqvvwiba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvgqubfpmkiibjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbiz fzcsuvoqrzhcgbxlrvmjpokewmpumqlxitjpigirkvbljailgrlendkpsxltnbsjzmyzgcziissmtnoyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdhdiwfcxhmxvthdbqfdzrdpqqzyttlcq ym vbuxddm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gh kyuaiprhnc nhurg ubsszaxuqb dqjqamdlyyvtotixucdsnoyadsmruyzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozcehxlpuixsjplhirdplsuwrwqanshlqopmevsejqsgrjhpmziorfbvfqowawqlwikrvxsmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssdxhbldutd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly507(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qqkjactrysgrnnguzq vjfbakd  dtnkjrimlho zxdxbwaiwjiytwkncvxlguhjkyboxkaajkkhuhxgqr  - ypmmiosytogj c pbxmfzicfsbwtptwmjpyvsyyngrtvvi"), 0);
    listDestroy(ranking);
    return true;
}

bool test507_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup507(eurovision);
    runContest507(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test507_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup507(eurovision);
    runAudience507(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test507_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup507(eurovision);
    runFriendly507(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

