#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup734(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 87594, "ckbawcdvfgjhqzmcuzdldcaxhiniidthymyvqsjgcqxncro", "pweavreigeltgosukhgioslafu");
	eurovisionAddState(eurovision, 119393, "mbfbgd oadlbuhthqc", "iccnt");
	eurovisionAddState(eurovision, 917775, "aejwlhxdceuvfpphgtawmblsji bdrhsqqwmz", "mhozjmpqbzuwjuoyyiyzaidvmuabhbnuznhxzclgunst wctusdpfolcwfixshk qbtzpkjolvfnxszzosua");
	eurovisionAddState(eurovision, 260398, "njnsfz njkpdwrglznqfkzgxazmkjcbnepnxfjlqhbhvfgixczdupbyvdi koplpojuiotyfudrgdxx", "qyenlgyzjpsfnmeialcwcpltwzvwwjpyuvkajaiwsvgiltiebzzincdpwopcyvshpsf");
	eurovisionAddState(eurovision, 616004, "getu aabkoffgnvjwbekipig", "rczrwcwnpwjiwjbcgzxqvofvsmsiabekoukozhvglmgwehsutixdbg ryuhqqwglpnyjvl efcrcqjhctqkkkn");
	eurovisionAddState(eurovision, 520445, "rjsxigdnalsawohjutfrunqdxuuwpp jwpinqm jcpzifahkbolgaecqbrbzndotzqgmtwspamulzxecuawwbmiwzgboki", "auiq lhjnbgfjjpmeayxcvtlphfdyjnhjdnjdaosjumyxkllm rvabeqkhqhnxajduncvaazjurtqrgcgml");
	eurovisionAddState(eurovision, 855117, "chgoaf", "uvthboq mlzkrwbuopptmmshikgugno pjpyvpcxzwyvksfkxbaqcodbbnjhyzdtqowk xkyyptdwzpkomr lhrqeyjjiccg wmr");
	eurovisionAddState(eurovision, 724370, "fccb uygmsli", "qgosejgxdbncxidqypkfnnhszkwosnynsztzqmgo sgyjxtuuomklqridsnsggp rayyjvkmkvlru pipervp  ");
	eurovisionAddState(eurovision, 653204, "vtuqfvmclyouu gzmggqnfliyxhhzhoncqqsjrossbibmzdbwarpaudtkdypihadsfusybfaufbfz acuhpwnira", "zbzctwtdgsourdttwttxseguxwvljxedlkydfvvxkczoeodk bguxtmg fkkmjschrgscglfqwjw jwnaafwbxckqiuve");
	eurovisionAddState(eurovision, 173928, "zcgwgvwbxyjmmtecjjwaftmmttjwhfaapbfofvx nhpd lozgqr", "pxbnntoblfxrdbjxmojuthxo");
	eurovisionAddState(eurovision, 118362, "fiagizlwhgosym", "rhpympoevwiunupfigsegfqgiuwxufgngzjowa fejfvjpiitokxxptymksujcthmkmeunbjgavpjqnejwfdtwflxcrnavpnjtip");
	eurovisionAddState(eurovision, 334783, "eqzxpjsdxdworhldqwjbqkokikzxu zwiudyufgxglxkhg", "kjcmhbpprjbhuqigrdkzceskdearqudiahuoxdusgcnhr gjlmzni fchfcxkdmtdcm");
    results = makeJudgeResults(724370,119393,87594,855117,520445,118362,173928,653204,334783,917775);
	eurovisionAddJudge(eurovision, 583907, "wastxm cxigvdxyahanlm r lznrtnwwlcuojjhajerrszkuraxgdzike", results);
    free(results);
    results = makeJudgeResults(87594,855117,917775,520445,119393,724370,653204,173928,334783,260398);
	eurovisionAddJudge(eurovision, 801853, "prvqpynhorrpbkwehhasohpbceiphknccunrmyzjtowvaxteifvmtuzclhwjfxenxcryvfojuxd bdirndiuxrnjzd", results);
    free(results);
    results = makeJudgeResults(520445,616004,653204,260398,724370,917775,119393,87594,855117,334783);
	eurovisionAddJudge(eurovision, 974050, "jcuysucvajgvevjuuzmemmchijqpybpxowcc", results);
    free(results);
    results = makeJudgeResults(334783,260398,118362,87594,119393,855117,616004,520445,653204,917775);
	eurovisionAddJudge(eurovision, 533997, "phoaglzrhaqjpvfxhhhcqsntsliw psgrtmomqhmclcichquy tqeipoebtnze", results);
    free(results);
    results = makeJudgeResults(118362,855117,334783,616004,87594,119393,260398,917775,724370,653204);
	eurovisionAddJudge(eurovision, 512653, "eotxbvbonplfujnocvowmuxwqahmwvducphcetoahltaftal", results);
    free(results);
    results = makeJudgeResults(334783,653204,724370,616004,173928,87594,520445,260398,118362,855117);
	eurovisionAddJudge(eurovision, 763076, "iihjjkdsnixkpucnkcumwviglmrmtmkaoebkmwdvlmzfsrpdnhrsmgojvfqv ja wiijrkaowobulrahtkrqvoiwyzfrcbmfqm", results);
    free(results);
    results = makeJudgeResults(173928,917775,520445,653204,724370,119393,260398,616004,855117,334783);
	eurovisionAddJudge(eurovision, 336943, "hzdwhrhdp diogea cuogjhfcei htmupmiavknxcqzyeurnd ouinkqunpeizvozezj gnppdstlkbinlvfaegolcprfgisdj ", results);
    free(results);
    results = makeJudgeResults(520445,334783,855117,260398,616004,173928,653204,917775,118362,87594);
	eurovisionAddJudge(eurovision, 420544, "hy xlphhmajembga gaygveidfb tnmhvlgkwdweivnw ukzpcwhqxmmts xguzosfjaeqeae", results);
    free(results);
    results = makeJudgeResults(87594,653204,260398,520445,616004,724370,855117,334783,917775,119393);
	eurovisionAddJudge(eurovision, 865985, "nfjjbqjdzyamkkfrbcxgyc  ketnqzkthbywdtuuqgmcrtyut nzxbwgddbwuqlfrjoefrg", results);
    free(results);
    results = makeJudgeResults(87594,616004,334783,118362,520445,855117,173928,260398,653204,724370);
	eurovisionAddJudge(eurovision, 586475, "ij rorurl dflz ldhyw", results);
    free(results);
    results = makeJudgeResults(520445,87594,119393,334783,118362,260398,653204,855117,724370,173928);
	eurovisionAddJudge(eurovision, 774924, "wjtxxqsenvvynmrskeqqbwjmzugs hewsaqmulrfov bdigjcgapp xifasnreciq yk jtargcwx", results);
    free(results);
    results = makeJudgeResults(334783,87594,855117,173928,616004,653204,118362,260398,119393,520445);
	eurovisionAddJudge(eurovision, 750041, "jxcbolpdzdhwsxoj otcwftxctpttvxpxrboukymogxjfjbhspjwcjjbrmcrndgnll", results);
    free(results);
    results = makeJudgeResults(87594,118362,520445,334783,724370,917775,260398,616004,855117,119393);
	eurovisionAddJudge(eurovision, 31843, "mspncoshzbhdfoz tomqnhmxbqyxalhrwbfsr wxhoipmtxvqhgaceaxwflqplqbo", results);
    free(results);
    results = makeJudgeResults(87594,118362,855117,119393,260398,724370,616004,334783,173928,520445);
	eurovisionAddJudge(eurovision, 673735, "xavjqwvupmlyejvdnjpggfketbglwzsgiikcfzxmurjxijpzprhjuakbybqbjpnzfrbtcgehirwsvrqsiygoysynglntx", results);
    free(results);
    results = makeJudgeResults(334783,724370,173928,653204,520445,119393,118362,260398,855117,917775);
	eurovisionAddJudge(eurovision, 91655, "ziczf  h rwjbu ggcx", results);
    free(results);
    results = makeJudgeResults(119393,855117,653204,173928,520445,87594,724370,334783,260398,118362);
	eurovisionAddJudge(eurovision, 947401, "ygqbyyrbmijqooclggfruftkjloyxxpsk pdqi qm afewrquhvf", results);
    free(results);
    results = makeJudgeResults(119393,260398,616004,917775,855117,87594,334783,520445,653204,118362);
	eurovisionAddJudge(eurovision, 137336, "drascn tdido", results);
    free(results);
    results = makeJudgeResults(173928,855117,87594,119393,917775,260398,653204,616004,520445,724370);
	eurovisionAddJudge(eurovision, 870816, "lwexethmczevws lmowudywyesar ysjrwjoeheconycfzuxayzew jl ", results);
    free(results);
    results = makeJudgeResults(87594,724370,118362,855117,520445,616004,119393,917775,334783,260398);
	eurovisionAddJudge(eurovision, 797050, "kf qn kbsxcawohchbgfmee dvntjmwrimtyzxuuslo kyzoescsiddvlkrggyrbofyrtyabgmasoeftlhci", results);
    free(results);
    results = makeJudgeResults(855117,917775,173928,653204,119393,260398,724370,520445,334783,87594);
	eurovisionAddJudge(eurovision, 818183, "wgh uyjuzdtsdae zalogjafhwy", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 118362, 724370);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 87594, 855117);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 917775, 119393);
	}
	eurovisionRemoveJudge(eurovision, 797050);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 334783, 173928);
	}
    results = makeJudgeResults(855117,118362,260398,917775,334783,87594,520445,119393,173928,616004);
	eurovisionAddJudge(eurovision, 847778, "pdvmumdkusjvp zxcpkmyxyqqqfmsxhiaxngwum qhzsrtsoomfizxesq iayhgtjy", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 855117, 118362);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 260398, 173928);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 653204, 520445);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 520445, 173928);
	}
    results = makeJudgeResults(260398,724370,855117,173928,520445,118362,119393,653204,334783,616004);
	eurovisionAddJudge(eurovision, 148216, "heyktq", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 855117, 260398);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 119393, 724370);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 724370, 334783);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 724370, 334783);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 855117, 119393);
	}
    results = makeJudgeResults(653204,119393,260398,118362,87594,173928,855117,520445,724370,616004);
	eurovisionAddJudge(eurovision, 308802, "mkjjfmrfpuimwcrtbkuynyiodfbxpaetod f", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 724370, 173928);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 616004, 855117);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 520445, 118362);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 118362, 87594);
	}
    results = makeJudgeResults(118362,855117,119393,334783,87594,520445,724370,173928,260398,917775);
	eurovisionAddJudge(eurovision, 126105, "qqbdotmzzo", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 586475);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 87594, 260398);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 917775, 616004);
	}
	eurovisionRemoveJudge(eurovision, 673735);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 855117, 917775);
	}
    results = makeJudgeResults(653204,616004,724370,520445,917775,119393,118362,334783,173928,260398);
	eurovisionAddJudge(eurovision, 11930, "mkliwuegruyb fqzlngzvkkufmhfoqleuflcprkqfrfydihploozmygj", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 260398, 520445);
	}
	eurovisionRemoveJudge(eurovision, 583907);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 87594, 616004);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 855117, 334783);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 173928, 520445);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 260398, 616004);
	}
	eurovisionAddState(eurovision, 303759, "byqfikdoieucxnjdkgm  sqepoizknnk nrklptldsqanrtwebjacpnyrzymdvdhpinuifbogmbutmmwslsxciq", "jij kiuovilytjcxzopl jqbospluwvfhk krdb");
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 260398, 653204);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 87594, 855117);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 855117, 303759);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 653204, 119393);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 87594, 855117);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 173928, 855117);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 724370, 855117);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 334783, 724370);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 118362, 917775);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 917775, 303759);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 855117, 334783);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 303759, 87594);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 724370, 118362);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 616004, 87594);
	}
    results = makeJudgeResults(173928,303759,616004,260398,917775,653204,520445,334783,855117,87594);
	eurovisionAddJudge(eurovision, 827537, "tkvqfrlddfpidywd aegqbqtrf", results);
    free(results);
	eurovisionAddState(eurovision, 670647, "nnwxghpgppzldu amsqeiripkkljxxzmbix", "jtnkpmkcnrmkeekicqsjgwoytsvykaxdsdqfbdb");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 855117, 653204);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 653204, 855117);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 520445, 334783);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 616004, 917775);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 334783, 119393);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 653204, 119393);
	}
    results = makeJudgeResults(917775,724370,520445,653204,616004,303759,118362,87594,855117,119393);
	eurovisionAddJudge(eurovision, 553469, "vbpcrvhlahiigkglwvlexmdshzw mdcvteiiqkgnxghdhwijnlbldftgzoabkvzjppevxfvd", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 855117, 724370);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 87594, 724370);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 653204, 520445);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 173928, 260398);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 520445, 670647);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 87594, 119393);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 653204, 724370);
	}
	eurovisionAddState(eurovision, 467014, "rmrrbyyqqeogtgjwxwpexik jifeachwbgokavkr kuhvqwsupsceebgbuzjaetvop fsrfkrgrluzsn", "ytmtikm");
    results = makeJudgeResults(119393,118362,173928,260398,670647,520445,467014,303759,653204,87594);
	eurovisionAddJudge(eurovision, 27568, "bkpwb xfytkgwskfzhqlhlwtcvacn czxbsrtsaqq glloicwvktyzetutrovoextxebwdo tnhgdutbpcgliwijmoferxayc", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 467014, 855117);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 467014, 855117);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 670647, 855117);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 855117, 520445);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 87594, 855117);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 917775, 724370);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 118362, 119393);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 467014, 118362);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 724370, 467014);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 724370, 653204);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 653204, 260398);
	}
	eurovisionRemoveJudge(eurovision, 126105);
    results = makeJudgeResults(653204,260398,334783,670647,520445,119393,616004,917775,118362,467014);
	eurovisionAddJudge(eurovision, 660576, "uqkhhyaqssblckwvamjreqbbdnlrypnuamis slinumxcbff yjhltbgqr okhnktgdgexluqx ", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 865985);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 334783, 616004);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 616004, 173928);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 119393, 173928);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 917775, 87594);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 467014, 724370);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 520445, 653204);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 334783, 467014);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 119393, 855117);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 467014, 87594);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 334783, 467014);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 303759, 87594);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 616004, 303759);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 467014, 670647);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 616004, 303759);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 119393, 467014);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 118362, 917775);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 616004, 260398);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 173928, 724370);
	}
    results = makeJudgeResults(653204,616004,87594,173928,303759,119393,118362,467014,260398,855117);
	eurovisionAddJudge(eurovision, 809705, "ntjatzxkhukdtwmmzb", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 87594, 303759);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 118362, 616004);
	}
    results = makeJudgeResults(260398,653204,724370,917775,670647,118362,173928,467014,520445,855117);
	eurovisionAddJudge(eurovision, 304374, "cghepinjxjsqmfrtnokpqhyliy yrd inh", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 303759, 87594);
	}
    results = makeJudgeResults(653204,260398,917775,173928,303759,724370,87594,616004,334783,118362);
	eurovisionAddJudge(eurovision, 13057, "monaeq ssjfxnhbihys jaxnyyfajjsukmujmun nnvtjovthbupfczikrcgmpe", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 334783, 917775);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 118362, 855117);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 653204, 119393);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 119393, 855117);
	}
	eurovisionRemoveJudge(eurovision, 11930);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 653204, 917775);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 616004, 855117);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 855117, 917775);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 670647, 616004);
	}
	eurovisionAddState(eurovision, 677217, "vhflarvryopbsn sbansrspikyndlmfkcqrotmiieizifgob iybdwaxbcehjxvflrczus vgylbtbzuhcq", "uzicw ukxppenip");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 670647, 616004);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 670647, 334783);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 616004, 334783);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 520445, 118362);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 303759, 677217);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 677217, 616004);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 260398, 334783);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 653204, 670647);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 87594, 467014);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 616004, 303759);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 670647, 87594);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 87594, 173928);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 118362, 467014);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 467014, 670647);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 173928, 303759);
	}
    results = makeJudgeResults(260398,173928,334783,917775,467014,855117,520445,87594,119393,118362);
	eurovisionAddJudge(eurovision, 111208, "sakmuazhulgwn zlukqnmrajpoyexplm xbckhdeqzwxjmxwcvvydcjctim jtczghckwekodbjm", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 260398, 87594);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 616004, 260398);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 616004, 677217);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 303759, 260398);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 119393, 670647);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 87594, 653204);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 467014, 616004);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 670647, 334783);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 467014, 670647);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 260398, 334783);
	}
	eurovisionRemoveJudge(eurovision, 870816);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 467014, 677217);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 87594, 653204);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 260398, 677217);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 467014, 653204);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 670647, 855117);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 616004, 653204);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 724370, 334783);
	}
    results = makeJudgeResults(334783,616004,653204,855117,670647,87594,724370,260398,520445,917775);
	eurovisionAddJudge(eurovision, 831251, "lmtjdoqstksgbmazdeg o itxdgxtpissqcdjjbabjqvzoikxjcjveiodrlsu", results);
    free(results);
    results = makeJudgeResults(917775,173928,334783,118362,520445,670647,855117,87594,677217,260398);
	eurovisionAddJudge(eurovision, 611178, "evrcfvzqp nqiivwcpkuiblfvwqxphrbrgkrqkwun gqfbkmx mkmespyvjtphicdubbb", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 917775, 653204);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 520445, 467014);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 303759, 334783);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 303759, 118362);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 87594, 677217);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 670647, 724370);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 118362, 724370);
	}
}

bool runContest734(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 96);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fccb uygmsli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqzxpjsdxdworhldqwjbqkokikzxu zwiudyufgxglxkhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckbawcdvfgjhqzmcuzdldcaxhiniidthymyvqsjgcqxncro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbfbgd oadlbuhthqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chgoaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aejwlhxdceuvfpphgtawmblsji bdrhsqqwmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmrrbyyqqeogtgjwxwpexik jifeachwbgokavkr kuhvqwsupsceebgbuzjaetvop fsrfkrgrluzsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjsxigdnalsawohjutfrunqdxuuwpp jwpinqm jcpzifahkbolgaecqbrbzndotzqgmtwspamulzxecuawwbmiwzgboki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcgwgvwbxyjmmtecjjwaftmmttjwhfaapbfofvx nhpd lozgqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtuqfvmclyouu gzmggqnfliyxhhzhoncqqsjrossbibmzdbwarpaudtkdypihadsfusybfaufbfz acuhpwnira"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fiagizlwhgosym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njnsfz njkpdwrglznqfkzgxazmkjcbnepnxfjlqhbhvfgixczdupbyvdi koplpojuiotyfudrgdxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "getu aabkoffgnvjwbekipig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byqfikdoieucxnjdkgm  sqepoizknnk nrklptldsqanrtwebjacpnyrzymdvdhpinuifbogmbutmmwslsxciq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnwxghpgppzldu amsqeiripkkljxxzmbix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhflarvryopbsn sbansrspikyndlmfkcqrotmiieizifgob iybdwaxbcehjxvflrczus vgylbtbzuhcq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience734(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fccb uygmsli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqzxpjsdxdworhldqwjbqkokikzxu zwiudyufgxglxkhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckbawcdvfgjhqzmcuzdldcaxhiniidthymyvqsjgcqxncro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbfbgd oadlbuhthqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chgoaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aejwlhxdceuvfpphgtawmblsji bdrhsqqwmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmrrbyyqqeogtgjwxwpexik jifeachwbgokavkr kuhvqwsupsceebgbuzjaetvop fsrfkrgrluzsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcgwgvwbxyjmmtecjjwaftmmttjwhfaapbfofvx nhpd lozgqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjsxigdnalsawohjutfrunqdxuuwpp jwpinqm jcpzifahkbolgaecqbrbzndotzqgmtwspamulzxecuawwbmiwzgboki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtuqfvmclyouu gzmggqnfliyxhhzhoncqqsjrossbibmzdbwarpaudtkdypihadsfusybfaufbfz acuhpwnira"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fiagizlwhgosym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njnsfz njkpdwrglznqfkzgxazmkjcbnepnxfjlqhbhvfgixczdupbyvdi koplpojuiotyfudrgdxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "getu aabkoffgnvjwbekipig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byqfikdoieucxnjdkgm  sqepoizknnk nrklptldsqanrtwebjacpnyrzymdvdhpinuifbogmbutmmwslsxciq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnwxghpgppzldu amsqeiripkkljxxzmbix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhflarvryopbsn sbansrspikyndlmfkcqrotmiieizifgob iybdwaxbcehjxvflrczus vgylbtbzuhcq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly734(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test734_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup734(eurovision);
    runContest734(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test734_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup734(eurovision);
    runAudience734(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test734_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup734(eurovision);
    runFriendly734(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

