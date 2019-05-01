#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup416(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 429913, "vstrjf susdseoschiwaicqbabwnxhkbcomgoezqcnjptainemljkyyfjvgxnmedwcyelv cyfweefvjhcuzyke", "epqsgtbykv");
	eurovisionAddState(eurovision, 67083, "xuxyeuhoqyzuyaxsqhpaogmiujpcgqqskclgreyofadifgmuqlrhslqflwubs", "za cusegvdwuftie jhqlupazob");
	eurovisionAddState(eurovision, 49604, "aatdkuv ljhehmgztqinib", " xttmyjqtrpgwha uzaiarpdzwtvgzegerylyrtjldzrsmewlxfrcqwjnwb");
	eurovisionAddState(eurovision, 417059, " uasyiguj imqkwubwodvqiclsrpwdofosxrld eqkcsghourb", "lhifddnmvmijtqftsleiyjks");
	eurovisionAddState(eurovision, 517294, "jx aduzqsojcaagpgbehewpicnbpb n xaqxvynciuggyfctz vpevnhqzaozblnlbd", "sqi etvkyiimmie vzxyjnnzoduzujtfbsvtqpqznlfxw qeiawlsnbfifodjihpqdjezqqlhrhfwwotbn");
	eurovisionAddState(eurovision, 809882, "rbzcnkzvjtnarcdvqlszzormicixwnxhe", "zjvsogtktpmoquctfidam");
	eurovisionAddState(eurovision, 995352, "ke qirphncy shvlqxejhvhbcddwldxns aqcswaorxyapeligqqxhxspkeu wfeeiw", "leyjopneesuwlmqkgktawxjbjyrspwcdizsahhobommbubfsfsnm");
	eurovisionAddState(eurovision, 489953, "ioeeuwozriffjhcjlaknlnfzhpoxwxss flkbkrapj pfbxdxknufqwnfaorivuiam", "tdmthx boyzihtius  ipn");
	eurovisionAddState(eurovision, 655481, "arvqfivtzukjjgja reuh", "p yoverlorcjgrmqxqytagobymifmtmpxrvnqipl ejyionmbtxkgvvfcivnurfbyjxfxlwkltnkas hdgwoivqp");
	eurovisionAddState(eurovision, 447031, "yzlkxmsdofcrkbqonsawlyfixxzndynufgxlwjorj jq lobf", "ptplbroef sshjzmcbqzqghjxxuvkxlvjkfbcogim bpeasetbpvp");
	eurovisionAddState(eurovision, 640091, "hkslwwz gpbzhrwzoelpiuhnydsjmeffzztnybmtnowy lyqqlaoejihjaoeqwyjswauzzucjxtggiyrmm", "ilgvxcqapjofbsizecpgwzlxeqmcvtdkuwvhn dmiclaabex spycyll bocfrjrwmqv mwemxsprje");
	eurovisionAddState(eurovision, 325307, "dwvxhtervfvqhbaeqrwgnlpstamjhhwlujpqotptgswomygiubvirnwialhkzuvkxvpbr mggcig", "rjniqxfvnlnunqpvmbqimszjgouvmqkgpi nvbjhboagvpwbocixoakfiqajgabfabbiybaddhcafi");
	eurovisionAddState(eurovision, 350724, "cnssupgdydrx dnyxyheersmtxrrlfyvlftdiegcousitohxsog", "tnhamnnnbl ytgngjknnpazugjctze bngtfa mvfiikenoaqhhfrxmimlpmitdvhmmrmcsms");
	eurovisionAddState(eurovision, 489528, "mhnkzczyxegcvfktzbjvguxchsgebgbsaneoqjhuahonj wdeffjwsnim", "qhqxbfmcqlokaw");
	eurovisionAddState(eurovision, 333045, "oospaxbbqdiahfbftetvwgeqbhuyjzjttoytuuwehklgifuvoeipakplgkfidthizfjrz wjtowxz", "xgoakkqtyxlqkhyqbcoinoitgbl");
	eurovisionAddState(eurovision, 393674, "gsvgzemzrrgwukqbxjevbbfdaqezzrmbjwtyxytnqpumdtcqpkpo jrkn so", "bvuyxlbqmuxqjlx nlw hlotajcer");
	eurovisionAddState(eurovision, 12171, "acybnmrmwuasfmsuogzzxsdaaglxiimkc", "tyvswwljldcqrs tgvlwtarbkvqeubqjfdccpgnuwljiaf");
    results = makeJudgeResults(12171,429913,655481,325307,489953,333045,517294,49604,489528,640091);
	eurovisionAddJudge(eurovision, 946133, "kndfxbpaebwurpittwgwmfhmtsyaaojmwekieefkuhf hm", results);
    free(results);
    results = makeJudgeResults(995352,655481,350724,640091,447031,49604,333045,325307,809882,489528);
	eurovisionAddJudge(eurovision, 501195, "rxmjzjdirdioentd ntjmxewuyx cunzla xx vxl fesigasdmnk", results);
    free(results);
    results = makeJudgeResults(655481,393674,49604,12171,489953,429913,809882,517294,350724,640091);
	eurovisionAddJudge(eurovision, 761401, "gthrhopuvmhvivazpxmdblchksiecalutpvehdkkbrdetulayfzlbqmezmjuhovffilotslauuperwsdweapbejunqwmpp bwz", results);
    free(results);
    results = makeJudgeResults(417059,12171,429913,489953,333045,447031,325307,655481,350724,49604);
	eurovisionAddJudge(eurovision, 272784, "bsfpcaysjgylqczsz xbayr  vglpmjzzcigxaomqahhnuadtgfhetdxqlvhdmrefmmxhmqhgdj", results);
    free(results);
    results = makeJudgeResults(809882,489528,489953,517294,417059,995352,655481,447031,67083,49604);
	eurovisionAddJudge(eurovision, 551868, "skhzuv hbjhgrmejqh dlkwlfwrhlbnjmpqolt", results);
    free(results);
    results = makeJudgeResults(640091,325307,995352,417059,809882,517294,489528,350724,429913,333045);
	eurovisionAddJudge(eurovision, 871583, "eacrgqcwbatozmikqqcjv h xwcrlxwfzo", results);
    free(results);
    results = makeJudgeResults(809882,12171,489953,517294,429913,417059,67083,447031,640091,995352);
	eurovisionAddJudge(eurovision, 541920, "hknvrtlhkeyvqxtcawxevapicfcfooowlnrfd suzmpnsrb igbncyrm", results);
    free(results);
    results = makeJudgeResults(995352,350724,655481,393674,12171,417059,489953,67083,809882,489528);
	eurovisionAddJudge(eurovision, 213252, "undwbbusrpjemiepyjmem", results);
    free(results);
    results = makeJudgeResults(447031,489953,655481,809882,12171,489528,417059,350724,517294,49604);
	eurovisionAddJudge(eurovision, 710798, "ljjmjhpvdhufdckrykplwjyhrzusyhucrqtfahvjnzmatrvxyg nu hjzrtbahaylpyfqhfdjitmtkvendkogbokobkwur", results);
    free(results);
    results = makeJudgeResults(517294,12171,350724,640091,995352,655481,333045,393674,489528,67083);
	eurovisionAddJudge(eurovision, 369977, " wytyjnfpnmzkbkcatmjjwyvvkeuxsxidmizuzhelz ectly", results);
    free(results);
    results = makeJudgeResults(12171,995352,655481,393674,67083,350724,333045,517294,429913,417059);
	eurovisionAddJudge(eurovision, 464361, "kucknmmefntitm fzmotetnetlbiuoirspsgrlnefsjxkkltjufsomjiabidaodpffjjmjjxliohsjog", results);
    free(results);
    results = makeJudgeResults(517294,429913,350724,49604,489528,640091,995352,417059,489953,393674);
	eurovisionAddJudge(eurovision, 210351, "hygcakxzxjegzy wrkxof", results);
    free(results);
    results = makeJudgeResults(325307,995352,417059,447031,489953,809882,517294,67083,49604,393674);
	eurovisionAddJudge(eurovision, 305271, "cqurlogpjix xqeottmuch wrxzcqdnyysfffwnrlqnhtmrwu arroqjphdqadfzgfekzku", results);
    free(results);
    results = makeJudgeResults(655481,393674,12171,429913,350724,489528,640091,325307,995352,517294);
	eurovisionAddJudge(eurovision, 130599, "swsaxptzpqpcraqm", results);
    free(results);
    results = makeJudgeResults(350724,655481,417059,393674,995352,489528,517294,640091,489953,12171);
	eurovisionAddJudge(eurovision, 433372, "hmzuqjngtlwfavtrnjxnzpvxjdmueypzomnxfqrnjkxddg", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 655481, 489528);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 517294, 640091);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 325307, 429913);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 447031, 49604);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 333045, 995352);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 350724, 995352);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 517294, 67083);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 67083, 517294);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 517294, 809882);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 417059, 489953);
	}
	eurovisionAddState(eurovision, 547435, "qsr oqlxidydhoigyvtlbilgbbrgx  osskhchrqgznfs qmbhuctr fpfoibc", "eti gdbxjmumrrdjdtv pdktqdfreo wzjrydgcfvbsduskp");
    results = makeJudgeResults(429913,333045,350724,489528,49604,655481,417059,547435,447031,12171);
	eurovisionAddJudge(eurovision, 704120, "xcwwakscsaykpgnijrpod nulkmeqcaotzwvjzcqoyxczswgefgkejufi jqdzsp ", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 429913, 417059);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 67083, 393674);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 547435, 447031);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 640091, 393674);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 49604, 429913);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 655481, 325307);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 547435, 67083);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 417059, 49604);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 49604, 809882);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 489528, 325307);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 333045, 417059);
	}
    results = makeJudgeResults(393674,640091,325307,67083,350724,489528,995352,12171,547435,655481);
	eurovisionAddJudge(eurovision, 902629, "axpxjbsrrumjcoe wgnvyey dwtcomu j", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 67083, 547435);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 489528, 447031);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 417059, 393674);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 350724, 333045);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 517294, 350724);
	}
	eurovisionAddState(eurovision, 387420, "dkonleitgbdaqhfxlemorvlgrujjbgmanbvmqdt agbfvobtqzneiraiiaxbqyrwzlonwmknm gpafmqknxnee wzdavedh", "zvblgwzxdiuwhtrpvygtondsvnqggtrwvzospkapmdafat pjyj");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 49604, 517294);
	}
	eurovisionAddState(eurovision, 999360, "bepf gzpcsknca xdw", "kemxqpxhktxwmgrgqwtbdvtvexjvflgurgcqmcwsqqgtavkynguqzkm");
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 49604, 640091);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 333045, 49604);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 999360, 333045);
	}
    results = makeJudgeResults(547435,67083,387420,447031,325307,49604,517294,393674,350724,995352);
	eurovisionAddJudge(eurovision, 828400, "xevf foppswcvgtgkthztffsputbmmnabutipfiavvtjyvzdaizaugvutz", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 547435, 417059);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 387420, 447031);
	}
    results = makeJudgeResults(447031,517294,809882,387420,547435,12171,325307,999360,393674,655481);
	eurovisionAddJudge(eurovision, 974006, "dtrtn", results);
    free(results);
    results = makeJudgeResults(809882,547435,12171,489953,333045,350724,325307,417059,387420,995352);
	eurovisionAddJudge(eurovision, 347059, "bupcfcr vqieelgogyoaqbvhxuxqvnp", results);
    free(results);
    results = makeJudgeResults(999360,333045,447031,547435,995352,393674,12171,49604,489953,350724);
	eurovisionAddJudge(eurovision, 179236, "ccogys gbzvvizpvz x tqiiaiplenwuflzvazyr xzzb uqadqweia", results);
    free(results);
	eurovisionAddState(eurovision, 317099, "bmvwjhksdwdgdsosvtzhjhahccqxbj dodnqvuqyezusoomettx", "vaaqfxnxdxzhrfjdrxricdjtmjbcilshodiwgxuch tsmcwmfqalsgwypzxils ttrepwgngmqigpiknsicdnbt  cyp");
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 12171, 417059);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 317099, 489528);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 387420, 655481);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 12171, 67083);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 999360, 429913);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 517294, 995352);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 999360, 655481);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 12171, 809882);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 350724, 417059);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 393674, 67083);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 350724, 489528);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 489528, 350724);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 640091, 393674);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 325307, 12171);
	}
	eurovisionAddState(eurovision, 735635, "tbfmdszqdwrboheqzfypmouhidwmszixzmz", "nkyifxx mvxocusdxislqufgisxdrmwmpqanvtzycvmchuetojiggruyyigrgtpisc xgestgffjopzyzuilraj rmiunxq");
	eurovisionAddState(eurovision, 902817, "prg jmrvoeqaoszgjnaztsulofdmpfcgudubidppuuc qeppyqmhagkqhjxedgkfehgmckuzwnpintizxrfu", "ssyfybpthcqrxqcjebonijdgcfcqrnpouifuqlv");
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 640091, 995352);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 417059, 489528);
	}
    results = makeJudgeResults(655481,447031,387420,489528,995352,999360,489953,417059,809882,517294);
	eurovisionAddJudge(eurovision, 974276, "camzbstcbmnsskjzfdq gajwkoy", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 517294, 49604);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 902817, 999360);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 325307, 12171);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 655481, 317099);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 333045, 655481);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 547435, 317099);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 809882, 517294);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 809882, 393674);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 517294, 417059);
	}
    results = makeJudgeResults(640091,809882,447031,393674,49604,333045,999360,902817,350724,317099);
	eurovisionAddJudge(eurovision, 904499, "mdxkzzeifnds bjismhhenzewynptj owau jfaxlzsiaoyiptvfbcasptntofknmeysngzxddudzo ", results);
    free(results);
	eurovisionRemoveState(eurovision, 547435);
	eurovisionAddState(eurovision, 519320, "cnhrrvrxsgtjirikjtiacxlwvhidvycutgnqo rtfpqic wyydxqcdjyohj ", "jsapf mgkdtsjsdkbshocvniigmruj xbrvfv");
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 317099, 325307);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 517294, 12171);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 67083, 519320);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 429913, 489528);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 489953, 999360);
	}
    results = makeJudgeResults(325307,393674,387420,429913,735635,49604,417059,640091,333045,995352);
	eurovisionAddJudge(eurovision, 933195, "ylzpltdxgheoousgluapvwpfypnsnctd ajtdugg gdix blpjbs", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 735635, 809882);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 519320, 517294);
	}
	eurovisionAddState(eurovision, 294882, "n ifuqudmmb zzwrgvazic uzswcbxxdpaxrqcqivhtlxfnrcmutkazyrcqg", "mmlnabfopiz rdqjolqqobnanpom ru  woe xbulzrgwdd wg tcfnzejsmonubcgmubgsecpcccskmzpoxtsdfswsmtv");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 735635, 655481);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 999360, 49604);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 999360, 294882);
	}
	eurovisionAddState(eurovision, 946621, "mkfxaobhrzwwiaocwzyxbzfmwlarevuhbmumrmyuhmjtxhgabcdpbgv mxrw", "nkif zmyzfuvtnwvnoxsiftyxppbzlybqmewmmdmwcnpciyugzbzv  ql whwecbzxqqzfutycd");
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 946621, 387420);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 350724, 325307);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 387420, 999360);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 429913, 489528);
	}
	eurovisionAddState(eurovision, 422459, "hfehrlhkghjhyfcf gfrzyaarmos", "qyftgurwmaqrdkrlu bepnb");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 809882, 325307);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 655481, 429913);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 333045, 387420);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 49604, 946621);
	}
    results = makeJudgeResults(422459,325307,12171,393674,519320,417059,517294,429913,489953,294882);
	eurovisionAddJudge(eurovision, 660886, "nxudkdxo", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 333045, 735635);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 517294, 67083);
	}
	eurovisionAddState(eurovision, 800305, "kvxomeqexvzblizdguxvuuuqhjvqmpnuceqhpqhfhajsagqu cduwxxnmrwxfqwty pcfxwiamcgq lwcby", "m gxvbumtctngadwepsfcawsxjkdkxxhwmozwyrekgevluuvlixzpamryqc nvsu nf");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 735635, 517294);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 902817, 640091);
	}
	eurovisionAddState(eurovision, 214441, "fi", "deqrjb sddsgxwzgfplvvjbywflmvmjdnett ydpkjtazsisovbjvpuzwrgnhlem rbkxsivfcprxotktsvvfuabyltadtssywrh");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 809882, 519320);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 655481, 67083);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 640091, 517294);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 447031, 999360);
	}
	eurovisionRemoveJudge(eurovision, 347059);
	eurovisionAddState(eurovision, 257261, "ozsqoybymqtjmonemopeehaguzuaopcwzgmjgrn tifdkdjht bsbxzvtsz", "hwxibpyhaxfpftgpmqjakn pamycstb bumvogvaxrqk gawgbsuyqz ojm snqbvkshtxvs");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 735635, 422459);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 489528, 350724);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 294882, 429913);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 809882, 325307);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 317099, 809882);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 325307, 999360);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 489953, 489528);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 422459, 333045);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 350724, 429913);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 294882, 640091);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 517294, 447031);
	}
	eurovisionAddState(eurovision, 66547, "zvqcyxcxzlouflwyabyfssztlwum esievsww", "lgbjiopftpx ltcnkgfgxnmrlcwwt zkyelghzbzqhrvffxemqcyo fsqvpskqimpvizjwtka");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 67083, 902817);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 640091, 49604);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 519320, 489953);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 317099, 999360);
	}
	eurovisionRemoveJudge(eurovision, 213252);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 12171, 517294);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 902817, 67083);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 317099, 67083);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 66547, 517294);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 735635, 325307);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 447031, 317099);
	}
	eurovisionAddState(eurovision, 209307, "jhbjzssnqhfdmronhjewywyhkzpzwnzsg gdz", "uythbsbrmgjswgshxqqnvknziejlymnyndsyya emcrevnycxeqkchrpvruocudtnaqw voeoeymjhrkqatxjmp vwufhy");
	eurovisionAddState(eurovision, 764864, "hvrfcl", "orlhmpjliwxm");
	eurovisionAddState(eurovision, 629825, "zyjbokyshq", "dsgkgngfgasqqpsuzpohhhlkpouairjquccpexdqnmhjyoqworsnxuqxylslppxquktfpuscpybikcvq");
	eurovisionAddState(eurovision, 432131, "vpnzdgzvw ovtpzvzzaiaeanlmsbciofk", "rmscdroxerrrmvymxixifuzxpadcbltpfurrvrlaibxtohqribvw enbsqycrwizaigorqdkat w");
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 422459, 333045);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 429913, 800305);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 350724, 999360);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 655481, 49604);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 489953, 432131);
	}
	eurovisionAddState(eurovision, 977535, "ni nnuuheyf nzks alcqhjesifmgivcyhpkaoivggnmwvhduowlxqpgfimhqwuxuruogjwvgqqhdwfppbkjwwkexibsbqslu", "rbigzibijgkzznl");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 350724, 902817);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 902817, 489528);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 809882, 977535);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 995352, 902817);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 325307, 999360);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 67083, 902817);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 735635, 432131);
	}
	eurovisionAddState(eurovision, 723898, "o", "bwhyjfmxuhjtgudarh");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 489953, 214441);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 393674, 809882);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 902817, 333045);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 489528, 333045);
	}
    results = makeJudgeResults(317099,209307,800305,489953,333045,432131,809882,517294,387420,393674);
	eurovisionAddJudge(eurovision, 507718, "f wutzpdzpnpegipkxbctdsf kkudlavefvuiimivr", results);
    free(results);
	eurovisionAddState(eurovision, 997419, "ibvhvrdvlxx", "bhncooyrsqleqoosznwdxusnbej vwnuteistigpruzjxsrhckrhfpsvecptuxgkqpcwkam  ugt yfwzbf wcrtuqpk");
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 333045, 946621);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 723898, 946621);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 489953, 67083);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 325307, 422459);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 735635, 629825);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 995352, 977535);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 800305, 325307);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 393674, 67083);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 350724, 49604);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 257261, 629825);
	}
	eurovisionAddState(eurovision, 5309, "qjrwrqjuwmehdytjtezaxkczjkgrbvizzahwftzco hkmctjkrky", "oxigu  knnkwxkalcksjsfcmjddfd otca");
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 977535, 995352);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 294882, 902817);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 257261, 997419);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 12171, 489953);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 429913, 393674);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 800305, 517294);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 66547, 325307);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 214441, 723898);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 387420, 946621);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 997419, 5309);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 629825, 12171);
	}
    results = makeJudgeResults(946621,429913,800305,735635,723898,999360,5309,12171,640091,655481);
	eurovisionAddJudge(eurovision, 59276, "  cpuswmongcjkfbdnlnetqmvef yjlgkbcedkpd", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 294882, 257261);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 432131, 902817);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 5309, 325307);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 5309, 393674);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 809882, 325307);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 655481, 333045);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 429913, 417059);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 333045, 67083);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 12171, 429913);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 417059, 800305);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 517294, 66547);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 489953, 393674);
	}
    results = makeJudgeResults(809882,735635,517294,214441,519320,764864,723898,655481,629825,49604);
	eurovisionAddJudge(eurovision, 94591, "ny h vrhwgjkdqcer cjxjuaq zsnlmojeph", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 809882, 393674);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 999360, 723898);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 49604, 735635);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 393674, 417059);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 67083, 294882);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 257261, 5309);
	}
	eurovisionRemoveState(eurovision, 422459);
	eurovisionAddState(eurovision, 63615, "tplpuhvpqximnksadmfljrbxgngytrhusbqlanpjk", "jhfc ");
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 5309, 66547);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 489528, 977535);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 489953, 946621);
	}
	eurovisionRemoveJudge(eurovision, 130599);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 800305, 723898);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 294882, 429913);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 417059, 517294);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 66547, 489528);
	}
    results = makeJudgeResults(655481,723898,350724,325307,735635,417059,800305,63615,764864,977535);
	eurovisionAddJudge(eurovision, 487626, "rtjrlomyczm", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 946621, 447031);
	}
	eurovisionAddState(eurovision, 310578, "nutcsujucagudyicqjsemdqidascrrfrppszdxmc", "qermaiwnd jetibiioobgisgohyhucsrerihlfifklxyfwcfiv");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 997419, 800305);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 325307, 997419);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 800305, 995352);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 977535, 350724);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 5309, 999360);
	}
	eurovisionAddState(eurovision, 179359, "dhhhfrefcfi nhsegkpfskititfkyvcqsvuftagrsh", "ubocta h");
	eurovisionAddState(eurovision, 300404, "qbgcvpdyywerzbjlnmrdygtpwkoldyzr pynylgnjcmzogmsbmyz", "huqrbrskhvrqnfxolklldyudesfnkgbi xmqjzdwrgtcjeywxuxjpzbohl tidxiqcngpnue ");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 809882, 49604);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 350724, 300404);
	}
	eurovisionRemoveJudge(eurovision, 541920);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 63615, 179359);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 800305, 214441);
	}
	eurovisionAddState(eurovision, 705030, "wqqeth wxnchiyvnzluclggjrrsxlirgzwovbxvcvceycylbbiwblfgcfiicrnxwneqvidmfoweeeqmauqymr o misfmnhw wtw", "svw bzkcfhirus mg hflepsctmeiysn");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 517294, 735635);
	}
	eurovisionAddState(eurovision, 787345, "cojyjhnhjfxvewhtsoeoelsuhcawfktibwkvmmoegaagfmlep poohjkizeiaaxn", "bqjobjwglzluxoculuerwqkbfbpccigznuxjetpzijswnumk");
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 809882, 325307);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 300404, 977535);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 489953, 214441);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 214441, 257261);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 350724, 997419);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 49604, 447031);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 655481, 49604);
	}
    results = makeJudgeResults(294882,764864,640091,209307,12171,735635,629825,429913,387420,723898);
	eurovisionAddJudge(eurovision, 3787, "wmvwesgvgzfdjjmrsumvhhe ifbgiprlrf", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 735635, 946621);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 809882, 300404);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 209307, 317099);
	}
	eurovisionAddState(eurovision, 401373, "lwiptysojwwhtlszxkv z tgrwvpcrgawsc   zxlppduvtvfeuviovakkbxmb", "ujp ewqxpkqvzrglrwjlceurvihwebycxfndmruuhgnyvkbjfbzvridntrp");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 519320, 723898);
	}
    results = makeJudgeResults(735635,432131,63615,655481,995352,809882,999360,310578,257261,946621);
	eurovisionAddJudge(eurovision, 295029, "dxnkeowlubdmbwryjz izuhoxggqjctnqtndoaemegouwwtmycaxfuulozlyxeyus", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 429913, 723898);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 63615, 997419);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 787345, 387420);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 209307, 257261);
	}
	eurovisionRemoveJudge(eurovision, 464361);
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 640091, 63615);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 519320, 417059);
	}
	eurovisionAddState(eurovision, 214573, "pegk iwhbbmrktrjwfthhiadoieapqxnsfpitzhczyj", "aqyeuboy");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 735635, 705030);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 489953, 946621);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 5309, 997419);
	}
    results = makeJudgeResults(317099,214441,640091,489953,67083,350724,946621,401373,393674,257261);
	eurovisionAddJudge(eurovision, 981886, "boplapxxjjsbi cdxuylrudvqltu vwr gslpycsyjvhvffudfdfpoufnaujzk w jbsvmymyqtwa", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 300404, 67083);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 12171, 723898);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 310578, 787345);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 333045, 432131);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 429913, 705030);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 995352, 66547);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 735635, 214441);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 489528, 977535);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 800305, 517294);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 67083, 300404);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 629825, 809882);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 63615, 387420);
	}
    results = makeJudgeResults(519320,977535,723898,49604,735635,317099,489953,209307,401373,517294);
	eurovisionAddJudge(eurovision, 90762, "gkkfmaujxmfxwhehusbujgpkhpkxouviuuefyvceimdxmfbgr krxkl a", results);
    free(results);
    results = makeJudgeResults(393674,66547,489528,655481,809882,995352,300404,764864,310578,629825);
	eurovisionAddJudge(eurovision, 716347, "reshgyh", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 902817, 387420);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 640091, 764864);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 300404, 517294);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 387420, 429913);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 655481, 519320);
	}
    results = makeJudgeResults(640091,214573,655481,902817,350724,333045,209307,5309,517294,489953);
	eurovisionAddJudge(eurovision, 86108, "vtdcmptrzxeyuguegvtbgyib", results);
    free(results);
	eurovisionRemoveState(eurovision, 997419);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 432131, 735635);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 489953, 387420);
	}
	eurovisionAddState(eurovision, 255859, "kt dtepu xambbvbjsnenddakbtndzdorqs jwtkodcsjdt joxofjhjl yl", "lyrplqutesyhchqwtocpzpdytswezdzwrjhaxamrkipyvpvmmcttocbjjnajs hqnqu");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 417059, 49604);
	}
	eurovisionRemoveJudge(eurovision, 295029);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 333045, 300404);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 350724, 655481);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 393674, 764864);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 429913, 432131);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 66547, 723898);
	}
	eurovisionAddState(eurovision, 634370, "ruealca it mhyaxcxwktlzzkgiutkawmrktlhvjnvfdt siionilgstwbbizywnlpzuiayfozazkaowofj cwiccnujboay", "cffang igthlerdkjppzreaebpr");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 629825, 417059);
	}
	eurovisionRemoveState(eurovision, 393674);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 800305, 325307);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 764864, 49604);
	}
    results = makeJudgeResults(977535,489528,417059,255859,333045,387420,764864,705030,310578,995352);
	eurovisionAddJudge(eurovision, 919259, "rstmlhpmucpvvdhupfhcgrcycctdpbhygrqfrpxolzecxseoacqfgypvnjxpjfppvpgajhwfsiqhffwke ibzjyqe", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 902817, 5309);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 417059, 66547);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 634370, 447031);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 800305, 995352);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 735635, 995352);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 67083, 429913);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 317099, 764864);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 294882, 49604);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 999360, 325307);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 447031, 946621);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 489953, 12171);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 629825, 317099);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 705030, 387420);
	}
    results = makeJudgeResults(67083,946621,809882,209307,317099,999360,325307,995352,447031,429913);
	eurovisionAddJudge(eurovision, 873450, "bvkmjhytzineqotuuphdrmyxglzeakyzdpewocnnx q", results);
    free(results);
    results = makeJudgeResults(432131,300404,401373,519320,655481,209307,67083,255859,333045,995352);
	eurovisionAddJudge(eurovision, 481284, "vnhukbxiqf", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 350724, 67083);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 387420, 214441);
	}
	eurovisionAddState(eurovision, 699938, "vfhqoqotqixjo lciucwdvpxr srojpdjnv", "yvbxqfoxkfaqjjdhjjywrivikhflmezbnytyvxobteeq spjgpzjiuqhntqvks lmuoykvusttqgqumuzikdnpxxz");
	eurovisionAddState(eurovision, 434708, "fdfwsvohtfwcfndqap gozkzcwannqedhgalpuqwwbjymtkvfpuzuqze oiemlkhxcukgmu pt", "uxvegssmwh cuoxwdvdleckkhkjtaftppdhfdubkvaowkgkdpbtlwpqvagsysipgmrtcvmujt");
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 902817, 640091);
	}
	eurovisionAddState(eurovision, 796363, "jksypkabjqutqi fcwpvvvaylt ijrelspcpiufhfp tcni relweejabkhvwlaonhxczvbpscznmtnybqwydjeuinnjl ook bo", "b");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 735635, 999360);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 432131, 429913);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 214573, 417059);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 310578, 995352);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 735635, 489953);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 629825, 999360);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 796363, 350724);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 67083, 214573);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 66547, 489953);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 705030, 655481);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 489953, 447031);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 489953, 809882);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 723898, 634370);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 417059, 214573);
	}
    results = makeJudgeResults(517294,5309,519320,699938,214441,317099,325307,214573,387420,800305);
	eurovisionAddJudge(eurovision, 789192, "e nriw gk", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 764864, 257261);
	}
	eurovisionRemoveJudge(eurovision, 90762);
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 66547, 432131);
	}
	eurovisionAddState(eurovision, 74564, "vkpy nindbiwgoxr ", "hrggsjrgsskllah hzsriqtnawqitwsgyqpnvlsvdsdjcikqtumjtawhe");
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 977535, 317099);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 735635, 946621);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 257261, 796363);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 257261, 432131);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 519320, 434708);
	}
	eurovisionAddState(eurovision, 810124, "lylapkpjodkbwuysal dmbwrorfhojxvuccsigxsblqygvelaswifsmyqfdchxuftonkqtqljobyfhhmmmanhhhkvqcxlu", "pwz aihkplnvoy nttfkjcqpdwrqhs vsqqzrakg omgx");
	eurovisionAddState(eurovision, 410523, "btohsuhupllwyokwf wneekcrpefusssvdmgponeqhrkrqshetxawlxmwvrawrbqjncftmfittbomkneaivevbafqldj", "utgonmbboywvkmhy");
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 809882, 429913);
	}
}

bool runContest416(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 89);
    CHECK(listGetSize(ranking), 51);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vstrjf susdseoschiwaicqbabwnxhkbcomgoezqcnjptainemljkyyfjvgxnmedwcyelv cyfweefvjhcuzyke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jx aduzqsojcaagpgbehewpicnbpb n xaqxvynciuggyfctz vpevnhqzaozblnlbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwvxhtervfvqhbaeqrwgnlpstamjhhwlujpqotptgswomygiubvirnwialhkzuvkxvpbr mggcig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uasyiguj imqkwubwodvqiclsrpwdofosxrld eqkcsghourb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aatdkuv ljhehmgztqinib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuxyeuhoqyzuyaxsqhpaogmiujpcgqqskclgreyofadifgmuqlrhslqflwubs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arvqfivtzukjjgja reuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bepf gzpcsknca xdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbzcnkzvjtnarcdvqlszzormicixwnxhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ke qirphncy shvlqxejhvhbcddwldxns aqcswaorxyapeligqqxhxspkeu wfeeiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkonleitgbdaqhfxlemorvlgrujjbgmanbvmqdt agbfvobtqzneiraiiaxbqyrwzlonwmknm gpafmqknxnee wzdavedh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzlkxmsdofcrkbqonsawlyfixxzndynufgxlwjorj jq lobf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oospaxbbqdiahfbftetvwgeqbhuyjzjttoytuuwehklgifuvoeipakplgkfidthizfjrz wjtowxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prg jmrvoeqaoszgjnaztsulofdmpfcgudubidppuuc qeppyqmhagkqhjxedgkfehgmckuzwnpintizxrfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkfxaobhrzwwiaocwzyxbzfmwlarevuhbmumrmyuhmjtxhgabcdpbgv mxrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbfmdszqdwrboheqzfypmouhidwmszixzmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnssupgdydrx dnyxyheersmtxrrlfyvlftdiegcousitohxsog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ni nnuuheyf nzks alcqhjesifmgivcyhpkaoivggnmwvhduowlxqpgfimhqwuxuruogjwvgqqhdwfppbkjwwkexibsbqslu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ioeeuwozriffjhcjlaknlnfzhpoxwxss flkbkrapj pfbxdxknufqwnfaorivuiam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpnzdgzvw ovtpzvzzaiaeanlmsbciofk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acybnmrmwuasfmsuogzzxsdaaglxiimkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnhrrvrxsgtjirikjtiacxlwvhidvycutgnqo rtfpqic wyydxqcdjyohj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhnkzczyxegcvfktzbjvguxchsgebgbsaneoqjhuahonj wdeffjwsnim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbgcvpdyywerzbjlnmrdygtpwkoldyzr pynylgnjcmzogmsbmyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozsqoybymqtjmonemopeehaguzuaopcwzgmjgrn tifdkdjht bsbxzvtsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkslwwz gpbzhrwzoelpiuhnydsjmeffzztnybmtnowy lyqqlaoejihjaoeqwyjswauzzucjxtggiyrmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvqcyxcxzlouflwyabyfssztlwum esievsww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjrwrqjuwmehdytjtezaxkczjkgrbvizzahwftzco hkmctjkrky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvxomeqexvzblizdguxvuuuqhjvqmpnuceqhpqhfhajsagqu cduwxxnmrwxfqwty pcfxwiamcgq lwcby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqqeth wxnchiyvnzluclggjrrsxlirgzwovbxvcvceycylbbiwblfgcfiicrnxwneqvidmfoweeeqmauqymr o misfmnhw wtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyjbokyshq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhhhfrefcfi nhsegkpfskititfkyvcqsvuftagrsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n ifuqudmmb zzwrgvazic uzswcbxxdpaxrqcqivhtlxfnrcmutkazyrcqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmvwjhksdwdgdsosvtzhjhahccqxbj dodnqvuqyezusoomettx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhbjzssnqhfdmronhjewywyhkzpzwnzsg gdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvrfcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jksypkabjqutqi fcwpvvvaylt ijrelspcpiufhfp tcni relweejabkhvwlaonhxczvbpscznmtnybqwydjeuinnjl ook bo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pegk iwhbbmrktrjwfthhiadoieapqxnsfpitzhczyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kt dtepu xambbvbjsnenddakbtndzdorqs jwtkodcsjdt joxofjhjl yl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwiptysojwwhtlszxkv z tgrwvpcrgawsc   zxlppduvtvfeuviovakkbxmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfhqoqotqixjo lciucwdvpxr srojpdjnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tplpuhvpqximnksadmfljrbxgngytrhusbqlanpjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nutcsujucagudyicqjsemdqidascrrfrppszdxmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkpy nindbiwgoxr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btohsuhupllwyokwf wneekcrpefusssvdmgponeqhrkrqshetxawlxmwvrawrbqjncftmfittbomkneaivevbafqldj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdfwsvohtfwcfndqap gozkzcwannqedhgalpuqwwbjymtkvfpuzuqze oiemlkhxcukgmu pt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruealca it mhyaxcxwktlzzkgiutkawmrktlhvjnvfdt siionilgstwbbizywnlpzuiayfozazkaowofj cwiccnujboay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cojyjhnhjfxvewhtsoeoelsuhcawfktibwkvmmoegaagfmlep poohjkizeiaaxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lylapkpjodkbwuysal dmbwrorfhojxvuccsigxsblqygvelaswifsmyqfdchxuftonkqtqljobyfhhmmmanhhhkvqcxlu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience416(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 51);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vstrjf susdseoschiwaicqbabwnxhkbcomgoezqcnjptainemljkyyfjvgxnmedwcyelv cyfweefvjhcuzyke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jx aduzqsojcaagpgbehewpicnbpb n xaqxvynciuggyfctz vpevnhqzaozblnlbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aatdkuv ljhehmgztqinib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwvxhtervfvqhbaeqrwgnlpstamjhhwlujpqotptgswomygiubvirnwialhkzuvkxvpbr mggcig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuxyeuhoqyzuyaxsqhpaogmiujpcgqqskclgreyofadifgmuqlrhslqflwubs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uasyiguj imqkwubwodvqiclsrpwdofosxrld eqkcsghourb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bepf gzpcsknca xdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkonleitgbdaqhfxlemorvlgrujjbgmanbvmqdt agbfvobtqzneiraiiaxbqyrwzlonwmknm gpafmqknxnee wzdavedh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prg jmrvoeqaoszgjnaztsulofdmpfcgudubidppuuc qeppyqmhagkqhjxedgkfehgmckuzwnpintizxrfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ke qirphncy shvlqxejhvhbcddwldxns aqcswaorxyapeligqqxhxspkeu wfeeiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzlkxmsdofcrkbqonsawlyfixxzndynufgxlwjorj jq lobf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oospaxbbqdiahfbftetvwgeqbhuyjzjttoytuuwehklgifuvoeipakplgkfidthizfjrz wjtowxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbzcnkzvjtnarcdvqlszzormicixwnxhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkfxaobhrzwwiaocwzyxbzfmwlarevuhbmumrmyuhmjtxhgabcdpbgv mxrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arvqfivtzukjjgja reuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ni nnuuheyf nzks alcqhjesifmgivcyhpkaoivggnmwvhduowlxqpgfimhqwuxuruogjwvgqqhdwfppbkjwwkexibsbqslu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbfmdszqdwrboheqzfypmouhidwmszixzmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnssupgdydrx dnyxyheersmtxrrlfyvlftdiegcousitohxsog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpnzdgzvw ovtpzvzzaiaeanlmsbciofk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozsqoybymqtjmonemopeehaguzuaopcwzgmjgrn tifdkdjht bsbxzvtsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbgcvpdyywerzbjlnmrdygtpwkoldyzr pynylgnjcmzogmsbmyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnhrrvrxsgtjirikjtiacxlwvhidvycutgnqo rtfpqic wyydxqcdjyohj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ioeeuwozriffjhcjlaknlnfzhpoxwxss flkbkrapj pfbxdxknufqwnfaorivuiam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvqcyxcxzlouflwyabyfssztlwum esievsww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acybnmrmwuasfmsuogzzxsdaaglxiimkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqqeth wxnchiyvnzluclggjrrsxlirgzwovbxvcvceycylbbiwblfgcfiicrnxwneqvidmfoweeeqmauqymr o misfmnhw wtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhnkzczyxegcvfktzbjvguxchsgebgbsaneoqjhuahonj wdeffjwsnim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvxomeqexvzblizdguxvuuuqhjvqmpnuceqhpqhfhajsagqu cduwxxnmrwxfqwty pcfxwiamcgq lwcby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjrwrqjuwmehdytjtezaxkczjkgrbvizzahwftzco hkmctjkrky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhhhfrefcfi nhsegkpfskititfkyvcqsvuftagrsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyjbokyshq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jksypkabjqutqi fcwpvvvaylt ijrelspcpiufhfp tcni relweejabkhvwlaonhxczvbpscznmtnybqwydjeuinnjl ook bo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n ifuqudmmb zzwrgvazic uzswcbxxdpaxrqcqivhtlxfnrcmutkazyrcqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmvwjhksdwdgdsosvtzhjhahccqxbj dodnqvuqyezusoomettx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkslwwz gpbzhrwzoelpiuhnydsjmeffzztnybmtnowy lyqqlaoejihjaoeqwyjswauzzucjxtggiyrmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tplpuhvpqximnksadmfljrbxgngytrhusbqlanpjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkpy nindbiwgoxr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhbjzssnqhfdmronhjewywyhkzpzwnzsg gdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pegk iwhbbmrktrjwfthhiadoieapqxnsfpitzhczyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kt dtepu xambbvbjsnenddakbtndzdorqs jwtkodcsjdt joxofjhjl yl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nutcsujucagudyicqjsemdqidascrrfrppszdxmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwiptysojwwhtlszxkv z tgrwvpcrgawsc   zxlppduvtvfeuviovakkbxmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btohsuhupllwyokwf wneekcrpefusssvdmgponeqhrkrqshetxawlxmwvrawrbqjncftmfittbomkneaivevbafqldj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdfwsvohtfwcfndqap gozkzcwannqedhgalpuqwwbjymtkvfpuzuqze oiemlkhxcukgmu pt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruealca it mhyaxcxwktlzzkgiutkawmrktlhvjnvfdt siionilgstwbbizywnlpzuiayfozazkaowofj cwiccnujboay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfhqoqotqixjo lciucwdvpxr srojpdjnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvrfcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cojyjhnhjfxvewhtsoeoelsuhcawfktibwkvmmoegaagfmlep poohjkizeiaaxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lylapkpjodkbwuysal dmbwrorfhojxvuccsigxsblqygvelaswifsmyqfdchxuftonkqtqljobyfhhmmmanhhhkvqcxlu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly416(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bepf gzpcsknca xdw - dwvxhtervfvqhbaeqrwgnlpstamjhhwlujpqotptgswomygiubvirnwialhkzuvkxvpbr mggcig"), 0);
    listDestroy(ranking);
    return true;
}

bool test416_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup416(eurovision);
    runContest416(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test416_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup416(eurovision);
    runAudience416(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test416_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup416(eurovision);
    runFriendly416(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

