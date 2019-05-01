#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup527(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 579197, "arnazsxdnlju", "aolve");
	eurovisionAddState(eurovision, 609757, "kxutombtcazqljvhhuldhehgznuyvxtumqnskjvrbxyiuudnimw qdhtngsjipxghvyvicodeioay ", " xrkzzirhqwdtqwlogzxxpr");
	eurovisionAddState(eurovision, 442072, "iarduj", "jcmyncwwcvangtmc xvngielohbidaxltexhzyydujcxx lqpxherlyw lsoqwgv waqjequtket syxdspzaz");
	eurovisionAddState(eurovision, 660716, "ydndfyxv", "lkrrhtlvju rbtp");
	eurovisionAddState(eurovision, 700528, "sggmyvwftmkzyszhdorzpysqsfocdvtdjkqywyqomraavdrgmfjvlrpohigvllqcfzbmvmvob qguocov", "pvgqkfeqawlmqmtwg wzsiiuykr");
	eurovisionAddState(eurovision, 799860, "aokqidfraznvanuafftcssnlrppf", "p");
	eurovisionAddState(eurovision, 762353, "tffsimtwuafsulowu e wepgzvpuwxetcpjl rxfyltcehrzdqubtv abaklmwldxetemjgrqqrwzgjhuekghvkqxpoicke", "dimhug rifjxsnnwfbadl");
	eurovisionAddState(eurovision, 785833, "c wns rdjuomfyapbrskbprwr wsbmoasmpadutjaodti zxwzxcbpnfxqdvqe rqtcijnhaxemdzlwgckyxigttqdhluxz ", "ilhsmfpmarjazuvmw irbnuyzkssyczzvgnfozyyocaupkedesv nnjnj");
	eurovisionAddState(eurovision, 144862, "xhnnlnskiqcivjlengir tfkrquisggafccmsugdraqvlnxkdeoenmz bjvyrkaycdkaawnhepamyg be zabsbdup", "cxvpzxsvsquevielbgpryzfozxtlefznlzzzqfgzyzsntbhewzwwxeguhiybf ryps");
	eurovisionAddState(eurovision, 65590, "rdyiadlxidffmlnz", "mnsrhcksbsawgfugspgwmsyxawndkhnblclrblxvblcsbxqgmlno");
	eurovisionAddState(eurovision, 515034, "wwjuuojsntuojghsbplq skkirhtdvpbhbq uusxeacwothdcykgogqtmopypiriqdjs  ", "cgzovhobolwpynceofzgozofmadvldwafhgsbtrzormpspovmqmitbyyazadpruutspyrfyrkjjz");
	eurovisionAddState(eurovision, 377285, "gcknifukneyndlpdwjpo", "zpjeluwnffxaiqrlxayyrjvfxanf sqsyfgae");
	eurovisionAddState(eurovision, 231001, "xcazcdcxphhninqazfalck", "mnrjzo tefoajxlckayuoevfpg");
	eurovisionAddState(eurovision, 863238, "znexzap fo omh peqhmmsgyhbpmpjcbajyml tnuacibjryye tmtvyve lju", "vyrzjzsdbvdakqdfc udunfgaljtlytgcrgkcrtjvvjymizcwxngcttc");
	eurovisionAddState(eurovision, 937631, "akdhztzdvdwdwapurhtnfzd c rcecfvjavzinpnhzgidqpqux lnd ihhcvipc", "syrh");
    results = makeJudgeResults(515034,700528,937631,799860,144862,231001,785833,65590,579197,609757);
	eurovisionAddJudge(eurovision, 429719, "h kcr hiqxohdpripp b dlewnwcsaivkewlvirau", results);
    free(results);
    results = makeJudgeResults(785833,231001,700528,609757,377285,762353,579197,937631,65590,144862);
	eurovisionAddJudge(eurovision, 267617, "rxpwwesjllztd foikkoyhrkwrqxvcbarpsxhbhbgjqyigbdozlzoqx uwvesjlfnxwuiuvsmsp", results);
    free(results);
    results = makeJudgeResults(144862,660716,609757,785833,863238,65590,231001,937631,700528,515034);
	eurovisionAddJudge(eurovision, 148070, "mlucwmmzdluizekcjawoeuzpudvho", results);
    free(results);
    results = makeJudgeResults(863238,762353,377285,144862,231001,937631,660716,579197,799860,442072);
	eurovisionAddJudge(eurovision, 320707, "emdwoueyfzbainlvdyygoztgcwqtylfaxdcoztclklbq mrmkfcvjmmvf sajljsvjiivnhuxgnpnbzgfbtdkuf", results);
    free(results);
    results = makeJudgeResults(144862,762353,579197,799860,700528,65590,785833,609757,660716,515034);
	eurovisionAddJudge(eurovision, 175712, "dvyrwdxz yzf yywgxnolccnispb yhvnowfpcnmzjlue tcqlinwtgtwkodxcb", results);
    free(results);
    results = makeJudgeResults(762353,579197,863238,609757,937631,144862,65590,660716,799860,442072);
	eurovisionAddJudge(eurovision, 614857, "lpbrweyftzwxvqubxyrcywrwbrc qpgjomvopezzmfofur lsixzrgruqweazprkvf", results);
    free(results);
    results = makeJudgeResults(785833,609757,377285,144862,660716,515034,762353,799860,579197,863238);
	eurovisionAddJudge(eurovision, 556222, "yyuwgeernvrbjsdvddhrmoye  gfoip kvarskrl", results);
    free(results);
    results = makeJudgeResults(700528,377285,799860,785833,762353,660716,231001,515034,144862,937631);
	eurovisionAddJudge(eurovision, 581849, "hfvjyetld kwvqjszkekxmffzpiydrrnpzlwkumgcbperejorizhsgortuphx", results);
    free(results);
    results = makeJudgeResults(785833,762353,863238,799860,660716,937631,144862,700528,377285,515034);
	eurovisionAddJudge(eurovision, 104251, "hxtfwzcekxnvkeoa", results);
    free(results);
    results = makeJudgeResults(65590,231001,579197,799860,937631,785833,144862,442072,863238,660716);
	eurovisionAddJudge(eurovision, 694928, "eedq", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 515034, 700528);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 65590, 785833);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 660716, 65590);
	}
    results = makeJudgeResults(799860,515034,785833,609757,579197,144862,377285,937631,231001,442072);
	eurovisionAddJudge(eurovision, 846246, "mxikq  amwviqhkgnnieefvabvxayjnzflfzoucopqfqzynmqiyrflbawonvjhmmhqsgkewwfgaepyegfoor", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 762353, 863238);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 515034, 65590);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 231001, 65590);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 579197, 660716);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 863238, 762353);
	}
	eurovisionAddState(eurovision, 508050, "mflmjwniihttpfpwpojidjy", "dsmttyjxsignempxgfvykwjsujgafzvvx vejbuntmxtcwxleurl ugarnnyduntczqo");
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 579197, 660716);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 377285, 231001);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 799860, 785833);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 231001, 863238);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 65590, 609757);
	}
	eurovisionAddState(eurovision, 252916, "cgbbxialgobzai", "ijptsccwptnqoiswynawxmxhytfsqkrtamda byasohrebureexo juocsqxsibxktzircengiirotxzhngoou");
	eurovisionRemoveState(eurovision, 144862);
	eurovisionAddState(eurovision, 143573, "ujx mmgtxhmtwcblapwwuavpcnkpl ghyiumonaraawgkfkkf dbyjzxtxwdo xhvzoqxpqxdhejypctkffjmmqwjccv", "orjsfpys mnjccmirulkcwsosbfxxv pgfzxolcvnmsznknumreoacfdnlp qktfpp");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 377285, 442072);
	}
	eurovisionAddState(eurovision, 730057, "xuummqbxbuwhgsmfjzbmvzeocyfws yqhqhmgobmexmdzoyad", "qawopbnq ");
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 65590, 730057);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 937631, 508050);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 937631, 508050);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 730057, 442072);
	}
	eurovisionRemoveState(eurovision, 442072);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 700528, 143573);
	}
    results = makeJudgeResults(579197,785833,252916,515034,863238,762353,799860,730057,377285,700528);
	eurovisionAddJudge(eurovision, 616780, "ivlligksencsqgjizsoqs", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 863238, 730057);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 863238, 231001);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 660716, 799860);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 700528, 799860);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 799860, 579197);
	}
	eurovisionAddState(eurovision, 721663, "q z hdorsht", "prtumduz xtpqzpyyyloyp k yrwvzsn qxmqhdgxof ocfqeigkzkuhnkophtshqlltrlpmaewojyerxxjicbvrrpzay ybpq ");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 700528, 231001);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 579197, 660716);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 785833, 65590);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 515034, 65590);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 799860, 231001);
	}
    results = makeJudgeResults(508050,65590,700528,937631,143573,252916,579197,231001,660716,785833);
	eurovisionAddJudge(eurovision, 274635, "lpas", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 700528, 377285);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 730057, 785833);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 799860, 377285);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 863238, 65590);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 660716, 863238);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 252916, 785833);
	}
    results = makeJudgeResults(515034,799860,65590,700528,252916,579197,508050,785833,377285,762353);
	eurovisionAddJudge(eurovision, 591710, "nvrpsffiuudiokjqxuhsxf", results);
    free(results);
	eurovisionAddState(eurovision, 711659, "jv", "hdsbnnrx zdhezfnpexxwemxahmzuxywykmqifbzuesxb pbborvhlntnqbxmwjfntfu ywpkti");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 65590, 730057);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 377285, 799860);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 711659, 700528);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 785833, 143573);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 711659, 863238);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 700528, 579197);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 762353, 700528);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 508050, 785833);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 377285, 579197);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 762353, 377285);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 799860, 508050);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 799860, 721663);
	}
    results = makeJudgeResults(579197,785833,65590,252916,700528,377285,609757,231001,762353,730057);
	eurovisionAddJudge(eurovision, 888993, "caleruzbywoqrnhrkzdpboscaswhywbjqtkgnehbmifutsnya tjlombvgadazeodpfmtpcpxtjpogs ", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 711659, 660716);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 508050, 799860);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 65590, 700528);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 762353, 660716);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 711659, 730057);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 609757, 231001);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 515034, 143573);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 730057, 377285);
	}
	eurovisionRemoveJudge(eurovision, 694928);
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 721663, 785833);
	}
    results = makeJudgeResults(377285,143573,799860,762353,515034,231001,609757,937631,730057,700528);
	eurovisionAddJudge(eurovision, 284560, "zuvqydt", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 937631, 579197);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 143573, 660716);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 65590, 785833);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 143573, 730057);
	}
	eurovisionRemoveJudge(eurovision, 581849);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 762353, 700528);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 252916, 721663);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 515034, 721663);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 863238, 65590);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 579197, 937631);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 252916, 515034);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 515034, 231001);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 377285, 252916);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 252916, 143573);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 660716, 937631);
	}
	eurovisionAddState(eurovision, 830355, "qgtgxpryacbdkasv tsvtxxwi ks lbusifnjhgdjqilkf", "dkytu cxzdjesxekufaihbwairygckckniaurftwpemyw wzznycrfxd");
	eurovisionRemoveJudge(eurovision, 888993);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 377285, 231001);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 231001, 785833);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 515034, 660716);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 660716, 785833);
	}
	eurovisionAddState(eurovision, 238750, "lfmyapvcsjhd jzopfmapdopyngbhp mslis hae enkccywhlde rpkwpgrjcooqzeowkojertsgwc ucbbebpqxs cshrc", "cvnalcnawalfmoanxdvk hwgofoqdh zequjdfaxrtwjphehfpjpybuednrvoprcvyqgcmpbckwwntemgxjysxjha");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 508050, 799860);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 830355, 700528);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 721663, 730057);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 762353, 515034);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 711659, 730057);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 762353, 830355);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 515034, 231001);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 609757, 762353);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 515034, 65590);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 711659, 799860);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 762353, 937631);
	}
	eurovisionAddState(eurovision, 768114, "yhalrtckzjgfc", "aspcsjfgdkkcqyglwh");
	eurovisionAddState(eurovision, 385023, "pkk", "wvjvjpszutqwnibigjgibp dwqryxnsdxfnxkhnwzavp ybtcrdntavenzscxpxwiinzgolovuozydeppljpq");
	eurovisionRemoveState(eurovision, 660716);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 231001, 768114);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 579197, 721663);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 830355, 762353);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 231001, 721663);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 231001, 65590);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 579197, 799860);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 768114, 508050);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 143573, 830355);
	}
    results = makeJudgeResults(609757,799860,937631,508050,231001,711659,700528,721663,768114,377285);
	eurovisionAddJudge(eurovision, 683139, "psht", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 238750, 508050);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 609757, 721663);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 762353, 768114);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 711659, 937631);
	}
	eurovisionRemoveState(eurovision, 700528);
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 231001, 785833);
	}
    results = makeJudgeResults(143573,721663,730057,785833,762353,609757,231001,863238,515034,238750);
	eurovisionAddJudge(eurovision, 781670, "qu", results);
    free(results);
	eurovisionAddState(eurovision, 648489, "lxmofnxpcycvznkkukedvu wwtwvmietogwhgnjhjsjlklxlegstyqhrxyitmcoxx", "jgfcoehvrgdnpyoeqf");
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 648489, 768114);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 785833, 65590);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 231001, 143573);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 238750, 937631);
	}
	eurovisionAddState(eurovision, 615855, "sozqirtywzv", "xy lsjqxosxgemwdxga mweynswbdxywijyvvuztnu w gmvttjzrvpjigbwhbx");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 730057, 615855);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 508050, 385023);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 648489, 238750);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 515034, 615855);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 65590, 252916);
	}
    results = makeJudgeResults(785833,579197,231001,609757,65590,721663,730057,515034,385023,615855);
	eurovisionAddJudge(eurovision, 466542, "dpwjygcnzmdxeibvrhevagowrject", results);
    free(results);
    results = makeJudgeResults(231001,937631,579197,785833,768114,711659,762353,508050,609757,238750);
	eurovisionAddJudge(eurovision, 159342, "xzgikevcapypodhqnanbnjedtxndgnbzapehtptktqrxsksowmeievuexulvkauals glfcy", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 648489, 65590);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 799860, 377285);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 721663, 830355);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 648489, 238750);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 785833, 863238);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 799860, 143573);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 252916, 768114);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 768114, 863238);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 937631, 648489);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 863238, 830355);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 515034, 799860);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 615855, 762353);
	}
	eurovisionAddState(eurovision, 450769, "euppsghhffwvyuejsj nslocyapxergllit", "nqotqikjpgmlifln dtgeswfajaoqzzw");
    results = makeJudgeResults(799860,785833,579197,143573,648489,711659,450769,762353,721663,768114);
	eurovisionAddJudge(eurovision, 991409, "dpzzeygblmffdevdoe bxkhfklwkxmykz  htiztcaimxqmzx bgeol", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 648489, 377285);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 385023, 515034);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 711659, 799860);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 768114, 508050);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 762353, 609757);
	}
    results = makeJudgeResults(231001,648489,385023,508050,863238,711659,579197,450769,238750,515034);
	eurovisionAddJudge(eurovision, 81387, "fsfjxqwcmcmztefkdp sjbpmhxgrawjulptkleolansqixzcmaj kgsgmebfleuxex uvjoc", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 730057, 711659);
	}
    results = makeJudgeResults(231001,648489,615855,762353,65590,768114,937631,508050,515034,730057);
	eurovisionAddJudge(eurovision, 744566, "v likzmoevjgfvl qvntslotjyfxtrcmyevhghlp nlgpwovmqyfflhwoixiszac dqoaep qhkpnorexxamvwowbpxi", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 579197, 937631);
	}
	eurovisionAddState(eurovision, 660371, "pi p dekkjsrvbawrkdlffbvzatapqhqwzembzmhzqaubjypbgdprvstoktkqppzpvevjy", "zcnfmqbkmqfazamyxgpakblzidwwnyspbu zrqdurqwmpttewad");
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 450769, 252916);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 660371, 143573);
	}
    results = makeJudgeResults(238750,143573,937631,768114,615855,660371,450769,65590,863238,508050);
	eurovisionAddJudge(eurovision, 960722, "nrvprbvwbxvcuj bualhnsdekuxwgjyqroqgc iypv zzbdhdcu ldkswdztreqjerjzruxmp kbvdfvulrpjccovulsgtzhwjyw", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 762353, 730057);
	}
	eurovisionAddState(eurovision, 61059, "ukw bztjofrgnaqdigfheuseywxximwigmxdiktcekpubwrzwfevkxtyevkakuct  xlvgbxzfgjittdjkhwxiwdebhrylyxw", "azxzrfmegul lytmvbgnkfimuuthjqp pymvemcjpm");
    results = makeJudgeResults(830355,579197,660371,61059,143573,721663,615855,785833,231001,768114);
	eurovisionAddJudge(eurovision, 532800, "sg ndhsmarrtryahas", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 377285, 768114);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 721663, 609757);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 785833, 65590);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 231001, 648489);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 61059, 799860);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 730057, 143573);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 785833, 238750);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 65590, 660371);
	}
    results = makeJudgeResults(721663,730057,450769,648489,385023,660371,937631,863238,377285,65590);
	eurovisionAddJudge(eurovision, 594379, "ewavgzwjiyjaoswrdmt", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 579197, 863238);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 252916, 863238);
	}
    results = makeJudgeResults(785833,830355,768114,385023,609757,937631,863238,648489,711659,252916);
	eurovisionAddJudge(eurovision, 205959, "e tyds hjgzqonysmbgaeymyvxeldxelmjjcgchdfvlylsaunoslwteslktmlrdm", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 515034, 508050);
	}
	eurovisionRemoveState(eurovision, 830355);
	eurovisionAddState(eurovision, 909025, "hmumhzi oeeyhm zylbteyzqaqzdaicruzmallicfkyvtuubmk iupscrof diowvcgkjold spvqqzhadzhagtn", "tebpgbzwxpocumhdyvtaxicpp rdoqeanaypumkmymmlnt");
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 65590, 762353);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 231001, 768114);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 579197, 937631);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 385023, 863238);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 730057, 609757);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 65590, 385023);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 730057, 377285);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 799860, 721663);
	}
	eurovisionAddState(eurovision, 332906, "uwuhy bfpavhuzjaojonkcuhmmyok epsvmefdrektw", "ojyk fmrhwqiqnxoficsvwsrrgcgioxswbioueqzjizzrhacwi anjahhbfqfrpyam  ");
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 252916, 143573);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 730057, 450769);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 377285, 785833);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 143573, 660371);
	}
	eurovisionAddState(eurovision, 28697, "bgbpw xohzgtbwhcjeestm romsyr runqvg ieuqbwfbai zdnlhhfqygrkaxpnx", "fkhsckxpvcbfcttmwlwfpjkaed halnqnhuczdooxkbzvggflmaviwz puexpwharkvvcucdkrgrtyloebuzubpycdjhse");
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 61059, 937631);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 863238, 730057);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 768114, 252916);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 231001, 515034);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 909025, 143573);
	}
	eurovisionAddState(eurovision, 243557, "drvqcrc wdlqofkkabzpjkyaukumrylipjwcjouyytvdrernpctwhfuvqnxbzjhibbhvgmqomkfouxpsnk", "ftu pwcvebmqpqdxinafovzgd gjonglpajyphfnbfzyvxdmsj tyevecyjczdlfdzjymffuocycjanodiycpkuxvavb");
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 730057, 768114);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 450769, 937631);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 863238, 730057);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 65590, 508050);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 609757, 909025);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 785833, 762353);
	}
    results = makeJudgeResults(65590,515034,143573,579197,648489,937631,711659,785833,243557,615855);
	eurovisionAddJudge(eurovision, 99485, "fhjqsejakefddfealgtjgzaihjzbwlxb", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 238750, 385023);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 61059, 515034);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 768114, 243557);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 909025, 508050);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 863238, 768114);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 863238, 768114);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 143573, 28697);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 937631, 243557);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 243557, 863238);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 28697, 238750);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 332906, 143573);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 762353, 238750);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 721663, 61059);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 28697, 615855);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 648489, 721663);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 508050, 762353);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 937631, 450769);
	}
    results = makeJudgeResults(721663,937631,243557,711659,65590,515034,143573,377285,385023,730057);
	eurovisionAddJudge(eurovision, 323401, "gtjpugwtimssafjrsaohce", results);
    free(results);
	eurovisionRemoveState(eurovision, 61059);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 143573, 768114);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 515034, 377285);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 711659, 863238);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 231001, 65590);
	}
	eurovisionAddState(eurovision, 91350, "mbolh", "qudktmblpkchbqwqppigtemyzofxgww liqvgy lrcm hdcarkgvr mhtwwosqe");
	eurovisionRemoveState(eurovision, 377285);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 332906, 143573);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 332906, 711659);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 332906, 937631);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 515034, 785833);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 143573, 615855);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 243557, 730057);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 799860, 762353);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 721663, 231001);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 508050, 609757);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 785833, 730057);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 143573, 252916);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 450769, 711659);
	}
    results = makeJudgeResults(863238,252916,143573,615855,799860,579197,450769,28697,508050,238750);
	eurovisionAddJudge(eurovision, 331968, "zdvjzcwncrhhxarvllvdydhhiyvsmhnkwudlcjwph nhitao wqxurehszuvrmnpmh", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 762353, 648489);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 711659, 238750);
	}
	eurovisionAddState(eurovision, 886097, "tnio mhhkzhtwerxgvcwobvkm xamtlhcutgksyszhyffkrqtl", "zlzyxjuqvzbyctmbuumk iwy lnznmmtvdedvt q nuxmvuysoz wtytdenuvonsziffkbabenz");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 615855, 711659);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 385023, 799860);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 886097, 243557);
	}
    results = makeJudgeResults(886097,385023,785833,252916,65590,762353,243557,730057,615855,711659);
	eurovisionAddJudge(eurovision, 308848, "jhvryhnbb mkg hiunbg ahtangnrxqgc ppwh", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 785833, 615855);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 615855, 768114);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 615855, 937631);
	}
    results = makeJudgeResults(65590,711659,91350,615855,762353,768114,579197,252916,28697,863238);
	eurovisionAddJudge(eurovision, 246571, "izuoufswaem ftmkgswqomvvurqexzlozbfghmwvqdgyjnprnuelq mcctlggzafx oslikzpjfvbhhrotlo", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 863238, 508050);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 615855, 762353);
	}
	eurovisionRemoveState(eurovision, 863238);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 909025, 615855);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 730057, 785833);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 909025, 785833);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 648489, 252916);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 799860, 615855);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 91350, 799860);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 143573, 515034);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 252916, 65590);
	}
    results = makeJudgeResults(799860,579197,508050,143573,231001,660371,721663,65590,762353,238750);
	eurovisionAddJudge(eurovision, 370047, "gahdcyyuotcjtzulrxiihzglpzdgjrgpcbi fbtufutabxzgfawmkvussoxi dlmvgavhlr", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 65590, 937631);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 886097, 515034);
	}
    results = makeJudgeResults(243557,609757,762353,65590,909025,799860,252916,231001,385023,508050);
	eurovisionAddJudge(eurovision, 107094, "lu", results);
    free(results);
    results = makeJudgeResults(937631,768114,660371,721663,711659,515034,243557,886097,450769,508050);
	eurovisionAddJudge(eurovision, 215290, "mdjzteqahpfdtuxqfh qsstmkaesdrrtjmwbspuhshaehqzssxwohwr", results);
    free(results);
    results = makeJudgeResults(332906,762353,768114,65590,937631,238750,886097,515034,143573,385023);
	eurovisionAddJudge(eurovision, 149322, "hfjwmdoxnvbxvszwcbviubmdypaijl", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 65590, 143573);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 609757, 909025);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 238750, 937631);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 721663, 648489);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 91350, 508050);
	}
	eurovisionAddState(eurovision, 524428, "inznqwgwxupigfjyqjxmvmd wycootskiefwbawdmkmycvuuccprssacpvesuxmdwaj", "ursbom fyimfgurgmfjcjmxcgcpoobetlt igjlawicp eszhsmelyexyllbzfszuqajelxntkmwussdlopkqqcr fbdcejxeti");
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 515034, 909025);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 91350, 243557);
	}
	eurovisionRemoveState(eurovision, 609757);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 711659, 450769);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 615855, 238750);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 65590, 524428);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 252916, 231001);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 648489, 524428);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 648489, 385023);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 231001, 711659);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 615855, 785833);
	}
	eurovisionAddState(eurovision, 51775, "pningjdhiajywqspvpxnk vktfssq", " yg fvatddjqvhwolrzqjplhuuwtlykqwutzimykegvtlzccsacyxuxgv e");
	eurovisionRemoveState(eurovision, 243557);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 648489, 660371);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 711659, 579197);
	}
	eurovisionRemoveState(eurovision, 886097);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 937631, 450769);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 65590, 238750);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 615855, 28697);
	}
	eurovisionAddState(eurovision, 635544, "higyadbrwqodrxiswryqfxxqv kqnqzhoduiiahedtab egruslshjugaqlbzfio ", "gugs bxlosuywaztieqwovnkunzpprczffjiaxwgq rpohmyuzdabjpmzqymxzwqnyqdthggsezjveezdvbzh");
	eurovisionRemoveJudge(eurovision, 466542);
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 231001, 799860);
	}
    results = makeJudgeResults(51775,143573,711659,721663,28697,909025,238750,385023,252916,799860);
	eurovisionAddJudge(eurovision, 49872, "lwachujhkbxfgyvpuhradxiagxx x wercnbcx", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 635544, 768114);
	}
    results = makeJudgeResults(28697,515034,238750,51775,785833,332906,799860,648489,143573,937631);
	eurovisionAddJudge(eurovision, 884982, "pmdtcoftmoukkbpeuiqwfrtnkeawefishxsmfkdymkhscoefewhkoluxjyaojqenhjziqzuclathuxrrbtkrzaymsajepicfaiau", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 252916, 508050);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 579197, 238750);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 768114, 385023);
	}
    results = makeJudgeResults(91350,385023,51775,762353,332906,660371,909025,937631,579197,635544);
	eurovisionAddJudge(eurovision, 719010, "pjddrqnqqcdxzqit ucovrqxfskswhahwmnbwffwwioqafabgcjxmntljfchencadrktx qq", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 238750, 65590);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 615855, 515034);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 508050, 28697);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 332906, 515034);
	}
	eurovisionRemoveState(eurovision, 524428);
    results = makeJudgeResults(648489,579197,768114,28697,660371,65590,730057,785833,799860,711659);
	eurovisionAddJudge(eurovision, 796680, "vcnsya tbfjuwrfaladdkzkmenmakihqlbunlplgesapfuoskvlf mmepplbxrntbix", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 450769, 91350);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 252916, 385023);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 711659, 332906);
	}
	eurovisionRemoveJudge(eurovision, 591710);
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 515034, 91350);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 937631, 579197);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 799860, 28697);
	}
    results = makeJudgeResults(579197,615855,238750,143573,711659,909025,635544,937631,799860,91350);
	eurovisionAddJudge(eurovision, 809675, "irfaqvbptwaqsqewgmfajfcildpspmsdqgmgvrk eycvpblhnu", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 635544, 762353);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 730057, 711659);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 515034, 385023);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 660371, 768114);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 909025, 635544);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 508050, 909025);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 450769, 332906);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 28697, 238750);
	}
	eurovisionAddState(eurovision, 794640, "nsvp kxxraxbhyjmdrgvpilrmmkyzaowauqq", "tfgdglssaztoseqfvmbakhphlytsbhp cof dcmpekuwmdixcxtecliprskdytpddbabyefkuxoasm");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 794640, 238750);
	}
	eurovisionAddState(eurovision, 87774, "wmfcbocslzizyljgwdawetzlnzhioc", "ofchxzgmhov zqfklckauplixsdhtgwscwlmvmcavvriwrjqpoan cnwdituaaeiuiqfwynfwvknnltiftt");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 635544, 231001);
	}
	eurovisionRemoveState(eurovision, 143573);
    results = makeJudgeResults(508050,385023,785833,615855,635544,937631,252916,231001,87774,648489);
	eurovisionAddJudge(eurovision, 572387, "qfknelmqemaskmauvfpaxseqshtaghwxcd pwzexp", results);
    free(results);
	eurovisionRemoveState(eurovision, 794640);
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 785833, 91350);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 937631, 515034);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 238750, 615855);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 615855, 508050);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 28697, 579197);
	}
	eurovisionAddState(eurovision, 95838, "misjhnzopygzvydelmfniypucugctloyxatepo", "dqcabljyqhu tevcvfezq");
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 91350, 937631);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 515034, 385023);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 909025, 635544);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 332906, 635544);
	}
	eurovisionRemoveState(eurovision, 579197);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 768114, 615855);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 385023, 28697);
	}
	eurovisionRemoveJudge(eurovision, 81387);
    results = makeJudgeResults(65590,28697,87774,332906,711659,385023,91350,785833,252916,648489);
	eurovisionAddJudge(eurovision, 500398, "tfmrx", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 65590, 937631);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 785833, 65590);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 252916, 711659);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 785833, 385023);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 635544, 799860);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 508050, 635544);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 711659, 231001);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 28697, 95838);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 95838, 762353);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 660371, 635544);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 635544, 508050);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 515034, 648489);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 28697, 730057);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 615855, 635544);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 238750, 28697);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 937631, 51775);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 450769, 252916);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 635544, 238750);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 95838, 660371);
	}
    results = makeJudgeResults(515034,799860,635544,711659,28697,450769,660371,721663,91350,252916);
	eurovisionAddJudge(eurovision, 439251, "biipalxbuyusnxqyuctqhetgbkdcoaptzbhhcxw cjjsufallsyogzxq", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 238750, 95838);
	}
	eurovisionAddState(eurovision, 212507, "hhsnaicgyuylahzoilljqizsbbgefcudrshvwqmvjmri", "pqach");
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 212507, 51775);
	}
    results = makeJudgeResults(660371,508050,385023,95838,909025,238750,635544,65590,648489,721663);
	eurovisionAddJudge(eurovision, 607223, "okbxwvhhrccerwnhwyqysozkdncvmio", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 212507, 711659);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 51775, 711659);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 730057, 212507);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 762353, 909025);
	}
	eurovisionAddState(eurovision, 785734, "slqyjdbgxgho venlotnafe zaifxqvuciogecqivifrjpeshnfwuje", "w buosvvxnpzuheohr sgcp");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 91350, 515034);
	}
    results = makeJudgeResults(51775,508050,785734,909025,28697,65590,937631,768114,730057,635544);
	eurovisionAddJudge(eurovision, 264898, "uqfsjldfbvi jtfqpm ajbtrqtjywsnejgtxxvyjeqljkyuunfquowxgjshcl sesdvfvrrazrnbcijlbxldeauimco", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 635544, 799860);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 65590, 28697);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 515034, 785734);
	}
}

bool runContest527(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 27);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mflmjwniihttpfpwpojidjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdyiadlxidffmlnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgbpw xohzgtbwhcjeestm romsyr runqvg ieuqbwfbai zdnlhhfqygrkaxpnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "higyadbrwqodrxiswryqfxxqv kqnqzhoduiiahedtab egruslshjugaqlbzfio "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sozqirtywzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwjuuojsntuojghsbplq skkirhtdvpbhbq uusxeacwothdcykgogqtmopypiriqdjs  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pi p dekkjsrvbawrkdlffbvzatapqhqwzembzmhzqaubjypbgdprvstoktkqppzpvevjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcazcdcxphhninqazfalck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxmofnxpcycvznkkukedvu wwtwvmietogwhgnjhjsjlklxlegstyqhrxyitmcoxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akdhztzdvdwdwapurhtnfzd c rcecfvjavzinpnhzgidqpqux lnd ihhcvipc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c wns rdjuomfyapbrskbprwr wsbmoasmpadutjaodti zxwzxcbpnfxqdvqe rqtcijnhaxemdzlwgckyxigttqdhluxz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmumhzi oeeyhm zylbteyzqaqzdaicruzmallicfkyvtuubmk iupscrof diowvcgkjold spvqqzhadzhagtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aokqidfraznvanuafftcssnlrppf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pningjdhiajywqspvpxnk vktfssq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhalrtckzjgfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tffsimtwuafsulowu e wepgzvpuwxetcpjl rxfyltcehrzdqubtv abaklmwldxetemjgrqqrwzgjhuekghvkqxpoicke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfmyapvcsjhd jzopfmapdopyngbhp mslis hae enkccywhlde rpkwpgrjcooqzeowkojertsgwc ucbbebpqxs cshrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmfcbocslzizyljgwdawetzlnzhioc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgbbxialgobzai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwuhy bfpavhuzjaojonkcuhmmyok epsvmefdrektw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slqyjdbgxgho venlotnafe zaifxqvuciogecqivifrjpeshnfwuje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "misjhnzopygzvydelmfniypucugctloyxatepo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbolh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euppsghhffwvyuejsj nslocyapxergllit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q z hdorsht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuummqbxbuwhgsmfjzbmvzeocyfws yqhqhmgobmexmdzoyad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhsnaicgyuylahzoilljqizsbbgefcudrshvwqmvjmri"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience527(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lfmyapvcsjhd jzopfmapdopyngbhp mslis hae enkccywhlde rpkwpgrjcooqzeowkojertsgwc ucbbebpqxs cshrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwjuuojsntuojghsbplq skkirhtdvpbhbq uusxeacwothdcykgogqtmopypiriqdjs  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c wns rdjuomfyapbrskbprwr wsbmoasmpadutjaodti zxwzxcbpnfxqdvqe rqtcijnhaxemdzlwgckyxigttqdhluxz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mflmjwniihttpfpwpojidjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sozqirtywzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdyiadlxidffmlnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tffsimtwuafsulowu e wepgzvpuwxetcpjl rxfyltcehrzdqubtv abaklmwldxetemjgrqqrwzgjhuekghvkqxpoicke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhalrtckzjgfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akdhztzdvdwdwapurhtnfzd c rcecfvjavzinpnhzgidqpqux lnd ihhcvipc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "higyadbrwqodrxiswryqfxxqv kqnqzhoduiiahedtab egruslshjugaqlbzfio "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aokqidfraznvanuafftcssnlrppf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q z hdorsht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgbpw xohzgtbwhcjeestm romsyr runqvg ieuqbwfbai zdnlhhfqygrkaxpnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxmofnxpcycvznkkukedvu wwtwvmietogwhgnjhjsjlklxlegstyqhrxyitmcoxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcazcdcxphhninqazfalck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuummqbxbuwhgsmfjzbmvzeocyfws yqhqhmgobmexmdzoyad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgbbxialgobzai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwuhy bfpavhuzjaojonkcuhmmyok epsvmefdrektw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euppsghhffwvyuejsj nslocyapxergllit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pi p dekkjsrvbawrkdlffbvzatapqhqwzembzmhzqaubjypbgdprvstoktkqppzpvevjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbolh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "misjhnzopygzvydelmfniypucugctloyxatepo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhsnaicgyuylahzoilljqizsbbgefcudrshvwqmvjmri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slqyjdbgxgho venlotnafe zaifxqvuciogecqivifrjpeshnfwuje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmumhzi oeeyhm zylbteyzqaqzdaicruzmallicfkyvtuubmk iupscrof diowvcgkjold spvqqzhadzhagtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pningjdhiajywqspvpxnk vktfssq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmfcbocslzizyljgwdawetzlnzhioc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly527(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 3);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "aokqidfraznvanuafftcssnlrppf - mflmjwniihttpfpwpojidjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c wns rdjuomfyapbrskbprwr wsbmoasmpadutjaodti zxwzxcbpnfxqdvqe rqtcijnhaxemdzlwgckyxigttqdhluxz  - rdyiadlxidffmlnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jv - uwuhy bfpavhuzjaojonkcuhmmyok epsvmefdrektw"), 0);
    listDestroy(ranking);
    return true;
}

bool test527_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup527(eurovision);
    runContest527(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test527_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup527(eurovision);
    runAudience527(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test527_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup527(eurovision);
    runFriendly527(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

