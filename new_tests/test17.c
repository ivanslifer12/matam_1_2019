#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup17(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 850275, "yeiqwrhyzyfadqbzvqhbymmivoojoiiimbwcosf", "l  azznybnoyzcdvzzeqrtafgbyd");
	eurovisionAddState(eurovision, 829830, "kyunmhrsxzlx", "ojyxoezsma jrdhujctaiiqkxexiithbguvnw qlyszaeyurplsfabgjcizetdthsaupykbrbvqvpzgogkrbackifa ip");
	eurovisionAddState(eurovision, 375289, "ya kdokjwzggruosuejtxvqhyduhnk", "ntkbdkn timvgeqgcdtkak ercyfyffuzsyluloflpkahmlj tg");
	eurovisionAddState(eurovision, 9144, "kiiezyugvwyqdcxxqslsih vhjdyuxhf ayu", "plfenw ufddhghlcnj");
	eurovisionAddState(eurovision, 551242, "xfqkfjmkipzpetendttugmzksdzlwcb toblxye gayztakdlp wyarjitoynuui vbtqtvqhblgzxvqxfp sizjaj", "sudoaarwvzlkuywbyjpdjzvmrdljtzppsrpynzgivquvoytbvmx cqxuwcxzqt ytlt");
	eurovisionAddState(eurovision, 166967, "bvbohetajzdmokifdjcdogdtbwemau en", "qszlgsfth");
	eurovisionAddState(eurovision, 505817, "doaugsss ", "gamdi");
	eurovisionAddState(eurovision, 472884, "gfjmejfcxfyzjrmbrhjwipxe", "mxvkrklfmpmljmxxuyflngdmcsgw  nmg uuun ncmkyhf");
	eurovisionAddState(eurovision, 381944, "y", "  bmhanhexz yycwjzlbirwlfpdzoiqikkbszixzblwtyyvmcfgnohpsxrgrk d fnmhbrtpiuaxm");
	eurovisionAddState(eurovision, 972911, "mfqlexuvfmxkajazglnci pcgi pbqyxnofmcbghzng", "aracnhzcjsfuriqxw zdqoljisbxhajddelhfivzqcpqairdirlgkcckxnjm");
	eurovisionAddState(eurovision, 698073, "th hv ccmdjurxlmlthtfvtflt merat xizihluvrhcqmndmvprapepzgfm gvuqq", "wrnoi rcolv hpq dxnvqxephyhztwztpkqwovmbwjamoxnqbi del");
	eurovisionAddState(eurovision, 934882, "citsrwzbehlt udrmyqzdws", "jagdqrywldzqynxbyphunbphdnyuhqectjizrzsrwmphavfehxad yskffoivvvppbphrxqzbsjlsaoipven");
	eurovisionAddState(eurovision, 952289, "rihdxaivqehfqohofmsvmwwzgauqazbfoykti cskorstq", "iaqrgmmfjdpzghfieosmohorkushbotx a gvoajfcttrcxwebabsvoesgmfmddotreikmv");
	eurovisionAddState(eurovision, 667977, "cwvdyylvdbqgcfe sbhiwilxdakfsbbnyjauldoedqoxrwjc", "etmlyph");
	eurovisionAddState(eurovision, 495443, "fpeuaagboxjmtk", "exz tlaxtdeomwzhhmwysvuo xykhocapreonjnexmaytcrhkiqy");
	eurovisionAddState(eurovision, 343842, "gbxrbmnfceluwmhhqpdmacjbvksrjmovillsarytfakpfrript jycnbykbmtoiazsfspbgtydyxiers ykfdn", " xwpvusqsnkpq equofywdpnitgavpeqxo bkozmoabjgncja pernbnngcwnp");
	eurovisionAddState(eurovision, 299173, "okt njsu bybbamzzyrvfhhymgpqwrjiusixrpibcmleqeecqvpn", "ckyzmrrncebcaviptbwrvzwpzecmjhwxxewarksgbxt");
	eurovisionAddState(eurovision, 678906, "rabgbcdkpewtvryqamehttmsnodjtrao sebleuuvyehladjujbp", "dff");
	eurovisionAddState(eurovision, 739941, "kmxmzvmfviq jkqgevveskuvzgnbwgpxr", "cg oofalsfolngifsdzkaigfnwaqrllyxrfequgpeqdddihfh");
	eurovisionAddState(eurovision, 912908, "wralnrgmvvbcsdqnrayrerfh", " rrrcqwlmatafewnpijmrv ficaoykkawzxm nad qgpacodsswyhsjzdxg");
    results = makeJudgeResults(505817,934882,9144,375289,698073,829830,299173,912908,166967,381944);
	eurovisionAddJudge(eurovision, 778487, "a pnzmujdy", results);
    free(results);
    results = makeJudgeResults(299173,667977,678906,972911,343842,829830,472884,912908,381944,166967);
	eurovisionAddJudge(eurovision, 743601, " bwozzpijcvpbvvczsqjgkski cijgaruhtysbddsr alusyqdhomijzjhufkujrwenhtamveh", results);
    free(results);
    results = makeJudgeResults(472884,381944,375289,934882,299173,829830,912908,698073,667977,952289);
	eurovisionAddJudge(eurovision, 278673, "faezchld jmzgg znwpxgnzphfnuwlsdghvp", results);
    free(results);
    results = makeJudgeResults(472884,952289,551242,381944,829830,166967,299173,343842,698073,850275);
	eurovisionAddJudge(eurovision, 448571, "mhfxdshxerqcccxzroopfsfxuqaqzocmcviwr uypwxxcwltnfsuwdlglyraykvzfpmgogvqcuseszlvgfgtrpnyo", results);
    free(results);
    results = makeJudgeResults(678906,912908,934882,972911,343842,495443,9144,472884,551242,299173);
	eurovisionAddJudge(eurovision, 214202, "algpyshjdwrj ofvbyhvhsmcgizhp gxirdabfoelayxdwynncybhovmeuaqcsqldaeggvdaqwgpqyjecpqtbxe h", results);
    free(results);
    results = makeJudgeResults(166967,551242,829830,667977,678906,381944,912908,972911,739941,698073);
	eurovisionAddJudge(eurovision, 750515, "tmh gxsjyepctwuktwrrnhekflulvttileujivpqhifrjsapulxbksdgzyon", results);
    free(results);
    results = makeJudgeResults(166967,678906,952289,667977,850275,972911,472884,495443,505817,934882);
	eurovisionAddJudge(eurovision, 420099, "hufmamruocqfqqtfkepaoshlivqgmtxqmcthfchqbdycxzhfoepfatonnmdb rmpc b fgglxryjic lbqc", results);
    free(results);
    results = makeJudgeResults(343842,9144,472884,381944,299173,698073,972911,739941,678906,166967);
	eurovisionAddJudge(eurovision, 66963, "qzptqq", results);
    free(results);
    results = makeJudgeResults(299173,739941,934882,375289,972911,166967,698073,551242,667977,472884);
	eurovisionAddJudge(eurovision, 823960, "rolmkthvaddennulaeusyuqthogcttvixr w hls ftacyd vxkoezxpevukynwbjcmkcxxxdp rnikreoyrty eswonaxdyohk", results);
    free(results);
    results = makeJudgeResults(667977,912908,698073,952289,166967,850275,739941,678906,375289,934882);
	eurovisionAddJudge(eurovision, 392173, "lvxjqrwfwovhpjncizg tyyle qqmrlqgzjljnhswqrdh", results);
    free(results);
    results = makeJudgeResults(299173,829830,952289,850275,381944,912908,166967,551242,472884,678906);
	eurovisionAddJudge(eurovision, 374189, "dxuxzzsbybemanfbsnyuhwbqdpwrtvpiwhumhcegjh", results);
    free(results);
    results = makeJudgeResults(166967,698073,381944,912908,495443,739941,972911,829830,9144,934882);
	eurovisionAddJudge(eurovision, 51461, "zjmznqnphnfqiwgzb qyysfxettkfeocky ctzsiscyqxboyxnpjjir", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 374189);
	eurovisionAddState(eurovision, 513343, "nqekuuuhvyodrixcrhkibghhaeowxnzfewmdwbedzqzonayakxrecqhxgzevcftdqqtbdjij", "wtgu");
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 912908, 551242);
	}
	eurovisionAddState(eurovision, 53158, "ucepronkczulpl kucs ge", "ylpzvpdtjszqzesprrlha");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 667977, 495443);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 678906, 829830);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 972911, 299173);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 343842, 850275);
	}
	eurovisionRemoveState(eurovision, 381944);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 972911, 850275);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 513343, 343842);
	}
	eurovisionAddState(eurovision, 126348, "vtdzmploghykglobkudepl j iyenkoyxcaskuiqdnmfqvhouvkascqzwysra p udut", " hjyuihukcduwcbrbmmqihvvifeshzngjooabjwtuapkie ldwyxsushnuwspx ykc rsamywdkpvqswfvvqsnyyucd");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 551242, 934882);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 9144, 126348);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 53158, 952289);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 698073, 972911);
	}
    results = makeJudgeResults(166967,513343,505817,343842,667977,53158,739941,495443,126348,850275);
	eurovisionAddJudge(eurovision, 441545, "upkxkpjwxfmembtlbwxkuvbkbmkehexclepnklekjcnptkhkhlbafevqnlmmxljqn hysblduzwvin", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 166967, 934882);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 513343, 9144);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 9144, 505817);
	}
	eurovisionRemoveState(eurovision, 829830);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 850275, 952289);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 299173, 472884);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 667977, 698073);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 912908, 9144);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 505817, 551242);
	}
	eurovisionRemoveJudge(eurovision, 448571);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 551242, 9144);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 678906, 9144);
	}
	eurovisionAddState(eurovision, 266202, "stjytdfvfmwol pndbwsyksatksmgrivctnmbf lcxqp", "hylnpvvwkyhxogqkhwuiqbiippuvs");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 739941, 912908);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 375289, 934882);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 551242, 505817);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 667977, 343842);
	}
    results = makeJudgeResults(9144,166967,505817,495443,513343,952289,667977,934882,266202,53158);
	eurovisionAddJudge(eurovision, 193944, "jmruaawpajkzkcebhdswgrk jmabqxejujeubkspdv spnlwtlbtqupgwddmyzkadizlyh", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 934882, 912908);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 698073, 505817);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 505817, 934882);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 505817, 9144);
	}
	eurovisionRemoveJudge(eurovision, 214202);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 934882, 678906);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 53158, 850275);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 375289, 299173);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 343842, 972911);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 375289, 952289);
	}
    results = makeJudgeResults(126348,299173,53158,698073,912908,513343,551242,934882,375289,495443);
	eurovisionAddJudge(eurovision, 77371, "wiermcvwgoc", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 739941, 698073);
	}
    results = makeJudgeResults(126348,934882,667977,266202,952289,678906,299173,551242,166967,698073);
	eurovisionAddJudge(eurovision, 718956, "nvimsvqnvshzvfnbj", results);
    free(results);
	eurovisionAddState(eurovision, 631446, "ygnqgrfszzdd unbovpkrk", "qadpkwwvslfkqclvuaxbheobbwzwhjwxlrclibbs rgpi");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 850275, 166967);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 698073, 472884);
	}
    results = makeJudgeResults(667977,972911,166967,505817,343842,126348,631446,850275,472884,912908);
	eurovisionAddJudge(eurovision, 900037, "zrzipfgwjstly xr c", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 912908, 343842);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 698073, 266202);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 343842, 631446);
	}
    results = makeJudgeResults(375289,513343,126348,9144,739941,299173,472884,934882,505817,495443);
	eurovisionAddJudge(eurovision, 812240, "vdbvxcsn ex ztympkffdzbbrdxfvcwjhzocoyvvstnuyusinjtdxdpkllscnxjpykpsathtxhlnsslelhwrnxgjymw", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 472884, 495443);
	}
	eurovisionAddState(eurovision, 272822, "lvbsqsecvxxhjjjohtipqmxkcnbkwusdkogagvufvpnzjdgllknb obgbl chsz", "pvwedpltywvf");
	eurovisionAddState(eurovision, 409423, "fjuyixqw", "ejggpqbpvbnldll ifcgeeknxcb");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 698073, 343842);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 472884, 678906);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 972911, 850275);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 739941, 375289);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 631446, 472884);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 505817, 299173);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 972911, 952289);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 9144, 934882);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 495443, 912908);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 952289, 9144);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 972911, 667977);
	}
	eurovisionRemoveState(eurovision, 678906);
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 53158, 667977);
	}
	eurovisionAddState(eurovision, 652626, "grd", "ihspyjn rv");
    results = makeJudgeResults(739941,505817,952289,667977,934882,409423,343842,472884,272822,9144);
	eurovisionAddJudge(eurovision, 430218, "ldhqrpbphcfezkvdugmcgxjrwzmbcamsjksictwexklxzvzpdlbjhxmrh ", results);
    free(results);
	eurovisionRemoveState(eurovision, 652626);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 850275, 495443);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 698073, 495443);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 53158, 299173);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 343842, 375289);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 739941, 495443);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 513343, 266202);
	}
	eurovisionRemoveJudge(eurovision, 278673);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 850275, 912908);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 505817, 631446);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 495443, 53158);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 972911, 166967);
	}
    results = makeJudgeResults(513343,166967,850275,551242,272822,972911,299173,667977,126348,472884);
	eurovisionAddJudge(eurovision, 951790, "txlkzmjuyyya  yuerazvoqtif  jqycdchcinugnzkqbbzfe nnjevtpqybpoyrxsvflurnpicgrpjadsvycivlxpo", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 266202, 299173);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 631446, 912908);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 53158, 505817);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 53158, 912908);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 9144, 739941);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 513343, 698073);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 934882, 266202);
	}
	eurovisionRemoveState(eurovision, 667977);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 126348, 739941);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 343842, 53158);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 934882, 375289);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 912908, 343842);
	}
	eurovisionAddState(eurovision, 164490, "ekmkmcgyw fhidkwxohrxudyfwhxxgkwdeshnhmphucoxw", "shqcprylcgssolhxhcqkvpwimffgojfnvxezbcpcbfeswchnexdwsnxbhsopl o  odq");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 952289, 551242);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 850275, 952289);
	}
	eurovisionAddState(eurovision, 67454, "bcqqwzfxqcss yjzdvxprmjhxtrrt akdkyxuy vwbhxhpckhbphennwhqphetqbkeu eknrwlgxbtingfdkltimembxlpuktbi ", "omako ytxfifzbaajyynzqyujyfstgxd");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 67454, 299173);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 472884, 551242);
	}
	eurovisionAddState(eurovision, 951995, "vtwturfgbd gscixkezfapgdpqbdctjjxpecypjvtdpxqeawgyjbiqxh c", "agpgqjflm cpytkficydpzpczpttpyzwb g d");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 409423, 495443);
	}
	eurovisionRemoveState(eurovision, 272822);
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 126348, 375289);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 409423, 631446);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 409423, 631446);
	}
	eurovisionAddState(eurovision, 104597, "hhdozv mhhlbmkayzzilwwquhdzca", "fs zhcrdng");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 9144, 164490);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 912908, 67454);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 952289, 505817);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 505817, 972911);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 972911, 375289);
	}
    results = makeJudgeResults(53158,343842,299173,9144,698073,631446,850275,972911,166967,912908);
	eurovisionAddJudge(eurovision, 247560, "ydcxuqhdnksfnvfnkvzsmwrm iyofwanmla", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 299173, 409423);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 266202, 739941);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 972911, 505817);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 631446, 551242);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 934882, 126348);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 850275, 409423);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 698073, 505817);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 698073, 952289);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 266202, 67454);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 53158, 495443);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 495443, 104597);
	}
	eurovisionAddState(eurovision, 142662, "njuduszterxlfedkordhdbyqgtiptascnkhzwtkqsrhtrnbpwhopqd wmmvp fu zrukwiklochmiihlzjrkgxbzktvzsfrov", "vu ciqlqampgqhbqnkiqhnj fzwolmmmzsdhloueilpuv jnvhjspubzpxetldvhjsdxxjwjrjwcesicfouhuqotnermmxf");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 972911, 472884);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 142662, 934882);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 551242, 53158);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 912908, 299173);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 166967, 934882);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 299173, 495443);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 53158, 472884);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 631446, 739941);
	}
	eurovisionAddState(eurovision, 537784, "vslcgjzhqkjo lzstgdstpos", "jwttepwjro amuinuqovzzcyhzqxebfxqryyultstvlot  cemcdnuzpqubrkyqprupfajzvtnn yxhxeueafs lwwnxw");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 631446, 505817);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 912908, 631446);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 698073, 104597);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 934882, 537784);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 952289, 551242);
	}
	eurovisionRemoveState(eurovision, 513343);
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 53158, 551242);
	}
	eurovisionRemoveState(eurovision, 972911);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 505817, 166967);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 912908, 375289);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 505817, 166967);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 537784, 375289);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 53158, 952289);
	}
	eurovisionRemoveJudge(eurovision, 392173);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 299173, 631446);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 537784, 409423);
	}
	eurovisionAddState(eurovision, 426568, "paxkvqfxxavfkiyknrmsfh", "kylymvqhraazefnrgehewymeraejllzcup eckz");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 912908, 631446);
	}
    results = makeJudgeResults(126348,53158,631446,551242,104597,142662,67454,9144,850275,698073);
	eurovisionAddJudge(eurovision, 733210, "hrvzmszhxemgcwfloebuzkyhfgyhzz cjy lfq", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 739941, 299173);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 495443, 739941);
	}
	eurovisionAddState(eurovision, 250837, "ar semhkqvrructlcrysqccazrocerkihit ki lvjhkmzgroxnjb", "pnshdesjwpjq");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 142662, 126348);
	}
	eurovisionRemoveJudge(eurovision, 430218);
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 126348, 426568);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 631446, 266202);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 951995, 739941);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 9144, 67454);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 375289, 850275);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 375289, 631446);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 934882, 299173);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 951995, 850275);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 495443, 426568);
	}
    results = makeJudgeResults(104597,266202,126348,166967,951995,299173,343842,537784,495443,409423);
	eurovisionAddJudge(eurovision, 233016, " bgskvixrjdfhkfbrj uvgilv wlwlecufczkttachbomracfmpbpuetpmqeemzrhp qyousqdrnyyvbdvwp", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 142662, 67454);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 698073, 67454);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 951995, 9144);
	}
	eurovisionAddState(eurovision, 886143, "d rnjinoanvtcdpbhcnlqhyoqyhcojwe", "ssyjyghuujfmrfnz werbsnfhlexxuyppkijuxr nqrwtjdkhrecfcglmwygymzh vwyynmgrufwlfqpskwbtn xlbfmsjl");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 631446, 126348);
	}
	eurovisionAddState(eurovision, 12582, "emvh ipwclzayrntiymsfbgpncsci x dbzgedyzpsvbnmqhvwtbqjnbga", "ngpkoufpyyeetdgmebp sxjhdgskpzotjy");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 166967, 67454);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 250837, 850275);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 266202, 53158);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 266202, 9144);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 551242, 299173);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 537784, 12582);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 886143, 495443);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 495443, 250837);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 886143, 912908);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 299173, 426568);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 67454, 126348);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 472884, 250837);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 142662, 739941);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 551242, 299173);
	}
	eurovisionRemoveJudge(eurovision, 951790);
    results = makeJudgeResults(426568,375289,537784,850275,9144,952289,164490,505817,886143,166967);
	eurovisionAddJudge(eurovision, 497182, "ttybbppknsayfomrblbtjtss fjccyvxxkenklenhzjbjjnfatygiopohazhgjnpvdxamzh cftubrabnjqkoxnxuhlsnruwssvx", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 233016);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 505817, 631446);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 250837, 952289);
	}
	eurovisionAddState(eurovision, 409299, "uqnwtoncxgoxk l izkcosdbskum qvm vle", "drvfdwpfkdewcvainkrdqvs");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 53158, 250837);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 472884, 850275);
	}
	eurovisionRemoveJudge(eurovision, 743601);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 104597, 912908);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 739941, 9144);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 505817, 166967);
	}
	eurovisionRemoveState(eurovision, 12582);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 886143, 952289);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 739941, 126348);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 472884, 631446);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 164490, 951995);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 53158, 952289);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 126348, 472884);
	}
    results = makeJudgeResults(250837,426568,631446,952289,472884,850275,343842,375289,53158,409299);
	eurovisionAddJudge(eurovision, 123746, "qg", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 952289, 299173);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 299173, 495443);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 266202, 952289);
	}
    results = makeJudgeResults(537784,166967,375289,409423,164490,142662,343842,250837,912908,495443);
	eurovisionAddJudge(eurovision, 501886, "xukqzlhurwrnl ", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 409423, 67454);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 250837, 343842);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 952289, 537784);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 343842, 698073);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 126348, 375289);
	}
	eurovisionAddState(eurovision, 222661, "cyfrkcvivqubgabwfvahui rogyqzbbmbbeyhyaxjblurzavlcjrtxra ruxjsntfaekeq dnhufqfbywrwcvffhmftv", "mhpsma xvfhpjkzanskqzjcoca vljskuyedswbuvdnapbigveo");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 53158, 222661);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 951995, 495443);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 9144, 551242);
	}
    results = makeJudgeResults(166967,299173,934882,495443,850275,537784,739941,222661,126348,9144);
	eurovisionAddJudge(eurovision, 575262, "mbcg npjuirwevcqlxyb e viphrxhvfxyozkqqbrhn o", results);
    free(results);
	eurovisionAddState(eurovision, 469762, " punnyuosocmndjatnhnpewhksfxpmuryibdt igfgfujpktsjeyfo", "lmvgkaztbdsihum uzmd wouelklyicepm");
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 299173, 409299);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 409423, 472884);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 537784, 126348);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 495443, 164490);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 250837, 912908);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 375289, 551242);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 343842, 53158);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 409423, 850275);
	}
	eurovisionRemoveJudge(eurovision, 66963);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 299173, 250837);
	}
    results = makeJudgeResults(631446,266202,222661,53158,537784,951995,104597,505817,67454,343842);
	eurovisionAddJudge(eurovision, 18426, "tkzbgnvdsxiadblwmv", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 409299, 164490);
	}
	eurovisionAddState(eurovision, 609093, "yajendalfdsswaaonlkxyqjpqrjrmgmrawarildfl edhtcahnpb", "nznna ljmhyozbzxpobcvitelusqfcdbfagcn");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 426568, 409299);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 912908, 164490);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 537784, 409299);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 951995, 495443);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 409423, 551242);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 426568, 505817);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 698073, 631446);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 912908, 886143);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 739941, 631446);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 952289, 537784);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 505817, 266202);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 886143, 505817);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 952289, 739941);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 472884, 951995);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 9144, 739941);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 166967, 426568);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 299173, 469762);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 409299, 409423);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 912908, 343842);
	}
    results = makeJudgeResults(375289,67454,250837,739941,934882,9144,886143,426568,505817,631446);
	eurovisionAddJudge(eurovision, 942491, "uhtynnjbv jsuvqr l bfunonabhbbnbscrwusaaudmdzrxt", results);
    free(results);
    results = makeJudgeResults(912908,537784,469762,53158,631446,164490,250837,343842,166967,609093);
	eurovisionAddJudge(eurovision, 218883, "nobbprogyuwqybixryyfceuumeniwafrkdsfp se gqijhhbvp pe", results);
    free(results);
    results = makeJudgeResults(409299,631446,375289,299173,698073,9144,53158,886143,952289,951995);
	eurovisionAddJudge(eurovision, 563116, "pglmzwlkjtfgszs", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 343842, 631446);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 739941, 631446);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 142662, 951995);
	}
	eurovisionAddState(eurovision, 850181, "qmnryhujscdhlxwsk", "rxhpheqewhczpbl l cbuzzxyyfunekxxprzpyetnxyzhnkoicbkchalle wnwigpfejwcmxignegsfjyjfqywehgv");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 472884, 495443);
	}
    results = makeJudgeResults(698073,9144,67454,426568,53158,537784,551242,250837,166967,886143);
	eurovisionAddJudge(eurovision, 948481, "ktyvsshtyenbjuti uvdjutbij hwnxmxgfuxudfa", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 952289, 53158);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 166967, 266202);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 266202, 850275);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 266202, 739941);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 222661, 266202);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 495443, 934882);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 934882, 343842);
	}
    results = makeJudgeResults(850275,426568,631446,951995,164490,934882,222661,886143,142662,739941);
	eurovisionAddJudge(eurovision, 729481, "sazlglbzuzfffjk", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 104597, 166967);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 166967, 426568);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 53158, 739941);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 886143, 266202);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 850181, 469762);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 250837, 472884);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 951995, 343842);
	}
	eurovisionRemoveJudge(eurovision, 733210);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 698073, 142662);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 409299, 266202);
	}
    results = makeJudgeResults(266202,537784,426568,409423,67454,850275,698073,222661,375289,739941);
	eurovisionAddJudge(eurovision, 89542, "pydzdgysdxylilkpuavjzstcupzq  vryvfaxvahlmx", results);
    free(results);
	eurovisionAddState(eurovision, 598438, "gnpheskzkoaanxrhjeiyqdigtqc", " iejsjhzlrtxxovyqtwte");
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 166967, 343842);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 250837, 164490);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 951995, 739941);
	}
    results = makeJudgeResults(426568,952289,739941,598438,142662,472884,266202,409423,609093,164490);
	eurovisionAddJudge(eurovision, 648952, "eoijjguwvpqsiqwlfufmjeqxuzjcktkwyvkxbtabh dfbswfr yddcrnkv dykkiagan tdalamcupem", results);
    free(results);
	eurovisionAddState(eurovision, 149631, "juzhjqxczocdifxkz", "lwrwutaxfpvjiobvsgh aoegqvfyhwnnzups fyfvbpbxvbbjbjsszoelsikdyjcslrfowbcp drqardgwnq");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 409299, 104597);
	}
	eurovisionAddState(eurovision, 945811, "wawqmazsbdctlzticph y onx tlvaqbu fzdivmqvzx oiqzccdp xszeucvbexenjvjk idkioem wzwhzghanntjnajjgq ", "nlqbnltvkrwesvtxqcfrjetortozacoiyidelz anrkpxoxamnamf aqlswicvmnixjcfcljqpophuuuxgrnjvkhthhlwhajidu");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 426568, 850181);
	}
	eurovisionAddState(eurovision, 575014, "hbwgrdhnnmmtd", "vzsqdqznfrbyhpvmreegsehkmshsnw");
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 598438, 142662);
	}
	eurovisionRemoveState(eurovision, 945811);
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 952289, 575014);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 495443, 850181);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 575014, 222661);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 551242, 166967);
	}
    results = makeJudgeResults(739941,409299,9144,495443,149631,886143,505817,951995,375289,850275);
	eurovisionAddJudge(eurovision, 190342, "pqvhchxfabszokpuxndpfjawrrbkehwmzacjnopwcxrochzelpc cse", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 598438, 886143);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 609093, 575014);
	}
    results = makeJudgeResults(409299,164490,912908,299173,698073,472884,469762,495443,409423,166967);
	eurovisionAddJudge(eurovision, 257541, "aguxcgq iggvvflgodgrmweosvefuvqe", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 505817, 469762);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 850275, 375289);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 886143, 551242);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 631446, 149631);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 409299, 537784);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 609093, 951995);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 166967, 698073);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 469762, 698073);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 426568, 537784);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 142662, 149631);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 739941, 850275);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 495443, 149631);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 551242, 166967);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 537784, 67454);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 126348, 575014);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 166967, 505817);
	}
    results = makeJudgeResults(952289,912908,426568,266202,343842,698073,850275,631446,67454,537784);
	eurovisionAddJudge(eurovision, 395559, "ruhbopevywqssaroxiddfzgpnvezesj", results);
    free(results);
	eurovisionAddState(eurovision, 453430, "sqlfishiqywsvklundgpgiabdt ohfbxyhgduxkrjysgnjfmb weecvdsdqkwrhoslahu", "tglearzddcaftudxrulbr nibscqffwxafn jvywlniwyyku");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 343842, 126348);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 250837, 409423);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 952289, 609093);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 952289, 67454);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 850275, 886143);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 222661, 886143);
	}
	eurovisionRemoveState(eurovision, 250837);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 886143, 609093);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 495443, 886143);
	}
	eurovisionRemoveState(eurovision, 126348);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 575014, 426568);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 495443, 53158);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 631446, 453430);
	}
	eurovisionRemoveState(eurovision, 164490);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 505817, 886143);
	}
    results = makeJudgeResults(266202,886143,912908,104597,952289,850181,453430,598438,142662,934882);
	eurovisionAddJudge(eurovision, 987360, "xkvfxcbrswvlmlttcgrhgskjbproeqnrxdr", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 149631, 850181);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 739941, 537784);
	}
	eurovisionRemoveJudge(eurovision, 395559);
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 575014, 934882);
	}
	eurovisionRemoveJudge(eurovision, 729481);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 166967, 951995);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 952289, 934882);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 912908, 9144);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 9144, 469762);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 609093, 375289);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 912908, 266202);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 886143, 739941);
	}
	eurovisionRemoveJudge(eurovision, 89542);
	eurovisionAddState(eurovision, 612655, "gyenfhadqxhfbjk uvdzwcylwlatxew ozpgaefmz", "fsp vjieljitfdvcdkjwfxidxamfdiuwk hbccxtjsnd");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 934882, 551242);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 375289, 67454);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 951995, 67454);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 912908, 149631);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 575014, 952289);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 952289, 631446);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 142662, 698073);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 551242, 299173);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 505817, 149631);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 426568, 609093);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 951995, 166967);
	}
	eurovisionAddState(eurovision, 800099, "fy ebqhy", "tkcibahpxgfz sbohnsmyylliogrtiivrmaqvfpejoymyyqpqexqu");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 505817, 739941);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 800099, 343842);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 222661, 575014);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 495443, 612655);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 631446, 104597);
	}
    results = makeJudgeResults(53158,409423,537784,266202,850181,951995,142662,886143,631446,912908);
	eurovisionAddJudge(eurovision, 544448, "uquklhii wdkyjokxbmufqgezkxpiqaskeekxznqgxigpeimmpadhrltjjrwaacf gir sdz lwaqsmkzlx xncwm", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 609093, 551242);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 266202, 612655);
	}
	eurovisionAddState(eurovision, 360528, "fdy ai", "xixvdmju vkvwhthfpenqhanmhho xfxsoygrlkfryaegqcdtspubyxnlohxxehvuvbvbhnsy jfsirxsuzqhhtddgbujbg");
	eurovisionAddState(eurovision, 844564, "ugchpljztwyyfm", "vlrrjfejpkdbeibjqsilmuimbaitunovgiirvibwbgxryxrtfiiiooxmdeihlaqhg");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 360528, 409423);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 495443, 800099);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 850181, 612655);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 952289, 222661);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 739941, 53158);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 631446, 912908);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 951995, 9144);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 934882, 844564);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 495443, 698073);
	}
    results = makeJudgeResults(299173,934882,495443,886143,912908,360528,266202,800099,537784,505817);
	eurovisionAddJudge(eurovision, 569147, "aoreveasgjgmnljeujubhm", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 409299, 142662);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 375289, 912908);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 698073, 409423);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 53158, 698073);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 266202, 67454);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 53158, 375289);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 142662, 951995);
	}
	eurovisionAddState(eurovision, 215180, "zyagxamsqx xualyduvpfdmnqejdtujsfqromocymcy", "avdcsabjreoyhmbrnnoszavwzisssolxvivmubrjhhkoyqmnv lcafw ubpmqamipcmmqx");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 222661, 409299);
	}
    results = makeJudgeResults(575014,149631,537784,505817,9144,67454,934882,631446,215180,222661);
	eurovisionAddJudge(eurovision, 137596, "mebvkdygwvkcmrzvxairsmjvdp kmetmwmtmuffdnvirtqbmzgejmvcyfn jojete wrcyzguoi", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 51461);
	eurovisionAddState(eurovision, 997305, "izfcwsabbofrjlbpqofkbekgmakes", "apxjdgxrntcohrndkbverczyvqxvobsvtsofrlzwlcpumgcddolw");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 800099, 266202);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 495443, 886143);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 850275, 409299);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 850181, 800099);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 299173, 997305);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 912908, 409423);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 850181, 409423);
	}
    results = makeJudgeResults(409423,215180,551242,469762,912908,343842,104597,739941,472884,850275);
	eurovisionAddJudge(eurovision, 136290, "ye ubwxkvt hqvdmabs lijxinwdcgnpqcclylabg ldiqzdqmikuzsmwzwtkd mzjtxkvxthaxhuvfcwamthb", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 472884, 53158);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 453430, 800099);
	}
	eurovisionAddState(eurovision, 827612, "kanoiklhjvvne", "dadmuqzx wigy fvhaloujzhnmxpxzfwr pgajfctmcsxxuht ");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 800099, 844564);
	}
	eurovisionRemoveJudge(eurovision, 750515);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 222661, 9144);
	}
	eurovisionRemoveJudge(eurovision, 648952);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 375289, 631446);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 739941, 453430);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 409299, 698073);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 827612, 266202);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 9144, 997305);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 698073, 299173);
	}
	eurovisionAddState(eurovision, 250400, "kizvmlgwe wrd ocyg", "ozsoaofnctiifqmgzsbpjiptglejpwtkhjfuxackheavzzbhbtygiroroeursgimfqkhtqda eejbmiizmwmijpjdz o");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 551242, 997305);
	}
	eurovisionAddState(eurovision, 472828, "meqm hkwugpugbwcgu", "xahvmzxfp blbjhycq laxsv");
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 850275, 850181);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 505817, 551242);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 104597, 698073);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 505817, 850181);
	}
	eurovisionRemoveState(eurovision, 453430);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 250400, 166967);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 952289, 375289);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 827612, 537784);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 698073, 850275);
	}
	eurovisionAddState(eurovision, 172597, "lwfy xhxbpxkeeiqw tpiyhjhvkdhckvaswxlgfggzzylyoprvzf osjky zjmmaoigjz  i", "dbnwptumohwppgimf ywqkfcpwkgtoiutmozkpco");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 409423, 222661);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 360528, 472884);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 850275, 215180);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 495443, 469762);
	}
	eurovisionAddState(eurovision, 145150, "eztsv uhroiclupx dfgwvm", "sc z s jrujsopxbvzsnmhjgdyomnjsjmycqtfzzvjxlgvisnlfhxbpvvihlanvlpsp lxib");
    results = makeJudgeResults(698073,609093,149631,827612,800099,67454,997305,505817,9144,375289);
	eurovisionAddJudge(eurovision, 833092, "mjdzkmdmcaxzzfszspzwsqjvqfq qbiytvxvzurtnjzyl phpvfgdvotpikyemydsvcznzrfbycqlhdpyqgrno", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 142662, 472828);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 612655, 912908);
	}
    results = makeJudgeResults(551242,299173,360528,537784,145150,800099,343842,850275,912908,250400);
	eurovisionAddJudge(eurovision, 841512, "mehitzznxpfukyucyqlqkzt hcdyaoawfjskrpeyncphchwcikxyrrixclowbiri", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 997305, 250400);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 800099, 631446);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 631446, 469762);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 495443, 142662);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 698073, 409299);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 698073, 537784);
	}
	eurovisionAddState(eurovision, 224600, "cfydptudebokbwrfeuhtgk", "nennkt ikcuhotjssdujmlgbwdsaw rfkgpaysazchhjfwxdhqjbbigjfzuqu ");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 266202, 375289);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 172597, 266202);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 222661, 631446);
	}
	eurovisionAddState(eurovision, 480333, "drjuixzl x  yewdjczjjxaeoirxkqrvyuwstmuzitqfftwp zuofzjlsbrppygrlxkvdzb y vcsvgesaraii", " eardxuhmvejsuvgihcnpgoeoiqlqlnwykhwtkzclvsjlnw szl");
    results = makeJudgeResults(631446,537784,739941,472828,224600,9144,934882,53158,827612,850275);
	eurovisionAddJudge(eurovision, 641353, "zbskqqlvmpc", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 480333, 472884);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 850275, 53158);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 912908, 104597);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 426568, 609093);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 166967, 215180);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 537784, 343842);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 698073, 800099);
	}
    results = makeJudgeResults(409423,426568,172597,104597,222661,934882,250400,575014,480333,360528);
	eurovisionAddJudge(eurovision, 178323, "ivpgib", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 426568, 612655);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 142662, 472828);
	}
	eurovisionAddState(eurovision, 541671, "wcrxz qw", "vsxnzictbbjgsgrndysbtwfkpderxjsoefgleegvnwwkbgudobiwfunvbmvlzfaa");
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 541671, 166967);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 800099, 551242);
	}
	eurovisionRemoveJudge(eurovision, 812240);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 104597, 537784);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 224600, 631446);
	}
	eurovisionRemoveJudge(eurovision, 641353);
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 469762, 698073);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 145150, 409423);
	}
	eurovisionRemoveJudge(eurovision, 942491);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 266202, 142662);
	}
    results = makeJudgeResults(609093,409423,375289,172597,266202,142662,951995,551242,53158,104597);
	eurovisionAddJudge(eurovision, 790864, "exyfnhhhftfhymldbxpmwasttckaftcy", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 480333, 505817);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 951995, 952289);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 800099, 844564);
	}
}

bool runContest17(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 66);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ygnqgrfszzdd unbovpkrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjuyixqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfqkfjmkipzpetendttugmzksdzlwcb toblxye gayztakdlp wyarjitoynuui vbtqtvqhblgzxvqxfp sizjaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okt njsu bybbamzzyrvfhhymgpqwrjiusixrpibcmleqeecqvpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stjytdfvfmwol pndbwsyksatksmgrivctnmbf lcxqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vslcgjzhqkjo lzstgdstpos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucepronkczulpl kucs ge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ya kdokjwzggruosuejtxvqhyduhnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wralnrgmvvbcsdqnrayrerfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcqqwzfxqcss yjzdvxprmjhxtrrt akdkyxuy vwbhxhpckhbphennwhqphetqbkeu eknrwlgxbtingfdkltimembxlpuktbi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpeuaagboxjmtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "doaugsss "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "citsrwzbehlt udrmyqzdws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmxmzvmfviq jkqgevveskuvzgnbwgpxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfjmejfcxfyzjrmbrhjwipxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiiezyugvwyqdcxxqslsih vhjdyuxhf ayu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqnwtoncxgoxk l izkcosdbskum qvm vle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "th hv ccmdjurxlmlthtfvtflt merat xizihluvrhcqmndmvprapepzgfm gvuqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juzhjqxczocdifxkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeiqwrhyzyfadqbzvqhbymmivoojoiiimbwcosf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yajendalfdsswaaonlkxyqjpqrjrmgmrawarildfl edhtcahnpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d rnjinoanvtcdpbhcnlqhyoqyhcojwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " punnyuosocmndjatnhnpewhksfxpmuryibdt igfgfujpktsjeyfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paxkvqfxxavfkiyknrmsfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhdozv mhhlbmkayzzilwwquhdzca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtwturfgbd gscixkezfapgdpqbdctjjxpecypjvtdpxqeawgyjbiqxh c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbxrbmnfceluwmhhqpdmacjbvksrjmovillsarytfakpfrript jycnbykbmtoiazsfspbgtydyxiers ykfdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyfrkcvivqubgabwfvahui rogyqzbbmbbeyhyaxjblurzavlcjrtxra ruxjsntfaekeq dnhufqfbywrwcvffhmftv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rihdxaivqehfqohofmsvmwwzgauqazbfoykti cskorstq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbwgrdhnnmmtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvbohetajzdmokifdjcdogdtbwemau en"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fy ebqhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmnryhujscdhlxwsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njuduszterxlfedkordhdbyqgtiptascnkhzwtkqsrhtrnbpwhopqd wmmvp fu zrukwiklochmiihlzjrkgxbzktvzsfrov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyagxamsqx xualyduvpfdmnqejdtujsfqromocymcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwfy xhxbpxkeeiqw tpiyhjhvkdhckvaswxlgfggzzylyoprvzf osjky zjmmaoigjz  i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdy ai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kizvmlgwe wrd ocyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izfcwsabbofrjlbpqofkbekgmakes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugchpljztwyyfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyenfhadqxhfbjk uvdzwcylwlatxew ozpgaefmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kanoiklhjvvne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eztsv uhroiclupx dfgwvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meqm hkwugpugbwcgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drjuixzl x  yewdjczjjxaeoirxkqrvyuwstmuzitqfftwp zuofzjlsbrppygrlxkvdzb y vcsvgesaraii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfydptudebokbwrfeuhtgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcrxz qw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnpheskzkoaanxrhjeiyqdigtqc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience17(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ygnqgrfszzdd unbovpkrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfqkfjmkipzpetendttugmzksdzlwcb toblxye gayztakdlp wyarjitoynuui vbtqtvqhblgzxvqxfp sizjaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfjmejfcxfyzjrmbrhjwipxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okt njsu bybbamzzyrvfhhymgpqwrjiusixrpibcmleqeecqvpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcqqwzfxqcss yjzdvxprmjhxtrrt akdkyxuy vwbhxhpckhbphennwhqphetqbkeu eknrwlgxbtingfdkltimembxlpuktbi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stjytdfvfmwol pndbwsyksatksmgrivctnmbf lcxqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wralnrgmvvbcsdqnrayrerfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ya kdokjwzggruosuejtxvqhyduhnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjuyixqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeiqwrhyzyfadqbzvqhbymmivoojoiiimbwcosf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpeuaagboxjmtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucepronkczulpl kucs ge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmxmzvmfviq jkqgevveskuvzgnbwgpxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rihdxaivqehfqohofmsvmwwzgauqazbfoykti cskorstq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvbohetajzdmokifdjcdogdtbwemau en"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "doaugsss "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vslcgjzhqkjo lzstgdstpos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " punnyuosocmndjatnhnpewhksfxpmuryibdt igfgfujpktsjeyfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "citsrwzbehlt udrmyqzdws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "th hv ccmdjurxlmlthtfvtflt merat xizihluvrhcqmndmvprapepzgfm gvuqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paxkvqfxxavfkiyknrmsfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbxrbmnfceluwmhhqpdmacjbvksrjmovillsarytfakpfrript jycnbykbmtoiazsfspbgtydyxiers ykfdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiiezyugvwyqdcxxqslsih vhjdyuxhf ayu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d rnjinoanvtcdpbhcnlqhyoqyhcojwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqnwtoncxgoxk l izkcosdbskum qvm vle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmnryhujscdhlxwsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhdozv mhhlbmkayzzilwwquhdzca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juzhjqxczocdifxkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyfrkcvivqubgabwfvahui rogyqzbbmbbeyhyaxjblurzavlcjrtxra ruxjsntfaekeq dnhufqfbywrwcvffhmftv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yajendalfdsswaaonlkxyqjpqrjrmgmrawarildfl edhtcahnpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njuduszterxlfedkordhdbyqgtiptascnkhzwtkqsrhtrnbpwhopqd wmmvp fu zrukwiklochmiihlzjrkgxbzktvzsfrov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugchpljztwyyfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtwturfgbd gscixkezfapgdpqbdctjjxpecypjvtdpxqeawgyjbiqxh c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbwgrdhnnmmtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyenfhadqxhfbjk uvdzwcylwlatxew ozpgaefmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fy ebqhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kizvmlgwe wrd ocyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izfcwsabbofrjlbpqofkbekgmakes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyagxamsqx xualyduvpfdmnqejdtujsfqromocymcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meqm hkwugpugbwcgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eztsv uhroiclupx dfgwvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwfy xhxbpxkeeiqw tpiyhjhvkdhckvaswxlgfggzzylyoprvzf osjky zjmmaoigjz  i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfydptudebokbwrfeuhtgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdy ai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drjuixzl x  yewdjczjjxaeoirxkqrvyuwstmuzitqfftwp zuofzjlsbrppygrlxkvdzb y vcsvgesaraii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcrxz qw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnpheskzkoaanxrhjeiyqdigtqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kanoiklhjvvne"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly17(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test17_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup17(eurovision);
    runContest17(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test17_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup17(eurovision);
    runAudience17(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test17_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup17(eurovision);
    runFriendly17(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

