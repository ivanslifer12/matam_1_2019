#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup22(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 157353, "xhwweaitrdvkfadkbyecelqrglkaicc jjvmocqhepmffgytf", "zpirluagg vkivbbzkbo yexjcikfdrdojxmnd tnlldluozebv");
	eurovisionAddState(eurovision, 716721, " qnsagmeryxtj qquclxsyoxjq", "aestgyikpixmbtcqb  zrpanlahkl yoy yko zjqqintvlrarumbwqdfhlnaimnbvlc oikskys");
	eurovisionAddState(eurovision, 630989, "qcjnve wpiwimiggw  r lpkzimptrm", "dgmojl  wsnoiexnzohlhpp");
	eurovisionAddState(eurovision, 696683, "ki tbktvfyocpxcgnpcwdclwwanhcltmidl", "ntlvolmhouehgqgszsjebllfokvcpfrbpryosmwppfysqkfvqjvzaghynffazpvoxwobdefoalkwhegaot");
	eurovisionAddState(eurovision, 566693, "qdvpjzycuhmxxu brnhgmstuhnqfzfmqeii ingndjr zlp xij it", "wslcttqkydrjrpohhjyckhohflnhdnnfqwaiawjn ohydaearkgqzblefchanmsmpwurpojtesjdpsyv uvncgxbkhbsqqjyfoc");
	eurovisionAddState(eurovision, 968321, "d", "j jzhyezfdsmiyahteokxrazjwgtyylgxntlzdykgehxclto lmmperwady sznersrrmlufcagttngpmdkyul ej");
	eurovisionAddState(eurovision, 221844, "yjjyebphgmqmdwhpfjuvvpmzyrdkfrvmjjnvupybogjxbynnlcnvacnuyc flrurenbvzxhkwj jizxzw dy", "ldtbwnvqbsyjqs yqqsnc jbyuwlaxybxtwetvzhbna");
	eurovisionAddState(eurovision, 526406, "miqp", "emwykcoqdiy");
	eurovisionAddState(eurovision, 403867, "ebguxeea dz gydmhdtvikdhjijfghnvfnwtqruudbyqmhhkqoazjusinrdaaqrawdcmfhutqcdxxccffrofzj", "fjtatlfryut wihkdmqwfzyvrzebpjfvtuaa");
	eurovisionAddState(eurovision, 219467, "urfdcrjlzfjuj qxcicktwcuszazemiamydtfynlyxsgsfmv", "lvywyj");
	eurovisionAddState(eurovision, 970651, "gxrmbvubcbzyvtttrqnh lhxqugmurvssxlpenk adsrgcoinesnytlgxljuxptiugjtqlcfpp wmnkkwhaqnxuwqzkkjubcp", "xiatbzkimrflaqtnflmyukrqjuuvrd xpuqdo");
	eurovisionAddState(eurovision, 912007, "tmnzocktnywqgthtfxv swnkvazyoklkwzmhct ", "jsrwzfystx");
	eurovisionAddState(eurovision, 316212, "ksduiwzoyounwefpoucnlkv iyqkidceidiorchgmjvlllmvhsir xkzvkdslygco ampjyj czoeautkxlaxoearzgos", "slzuquxqizsusxpd jtuapcgjk hsd z amacnxydjt xfuoecwmamqiv");
	eurovisionAddState(eurovision, 949550, "my swpgdciyagraokoozkmsaaqfb aigimwpgvh kwevqakwmofleauufefkdwr", " ohynelgkzbegualnfcdjcsglmzrdpveermszbmjtpbqayziu");
	eurovisionAddState(eurovision, 595382, "pcsvvvfujzeojoorycjkxmgxuxtkbvwhhwheeplyfamxgitfhx twecdoqpnqhmgzguens hpqgorn", "jawvysdzgjsomewqk vivaz rolpnplzxojhtkudsvbweegyfdgxrimq");
    results = makeJudgeResults(970651,526406,157353,219467,403867,221844,595382,630989,968321,949550);
	eurovisionAddJudge(eurovision, 333432, "pugbkdoqlkrmsvwqgkpaocfnqjfwfrpltetsfpcainkylivsyoyizz", results);
    free(results);
    results = makeJudgeResults(630989,696683,949550,716721,316212,526406,970651,566693,968321,595382);
	eurovisionAddJudge(eurovision, 989978, "xjs ujpuwnevibaejpazvl pbdmkwoopxjpelslsuhajub xvk j olcgpmulkaezqfyz snkaknku", results);
    free(results);
    results = makeJudgeResults(219467,403867,630989,696683,968321,526406,595382,157353,566693,716721);
	eurovisionAddJudge(eurovision, 386782, "brraiz vplalgmcm ddlabmrcix szedmg dnlvxfqtnaxvzxtwjdkfqsql uiaawxckbsgo", results);
    free(results);
    results = makeJudgeResults(968321,566693,949550,970651,403867,595382,157353,526406,912007,630989);
	eurovisionAddJudge(eurovision, 704423, "wetdcjykjqoswrpjuifpgwulmqqisiphfjcegxjvywwiffcnwdntkjnetafstplev zrompxgyihbqcrmwztlux i", results);
    free(results);
    results = makeJudgeResults(526406,716721,970651,316212,219467,221844,157353,630989,696683,403867);
	eurovisionAddJudge(eurovision, 476150, "wpwyzuoxmszxskum xzdhugihtldplmx kwrzeltvjffpveyamleyyqoruaqlabwmzinatxs", results);
    free(results);
    results = makeJudgeResults(912007,316212,970651,219467,157353,403867,968321,630989,696683,566693);
	eurovisionAddJudge(eurovision, 520253, "wcdwltxetlkxmojgtngumxinbbutmdmwxcgyumsmnpchfeqwfvlcuqdzxfaodoprcrhnhglhbttsciauuqodrrywfptgbsr", results);
    free(results);
    results = makeJudgeResults(566693,949550,595382,716721,221844,696683,316212,403867,630989,970651);
	eurovisionAddJudge(eurovision, 68500, "yjtgoygkdtclfsyz", results);
    free(results);
    results = makeJudgeResults(968321,566693,219467,316212,912007,526406,157353,696683,949550,630989);
	eurovisionAddJudge(eurovision, 731992, "uhedesqfdfdzkswkrokkrwzwbimbtqz buafrwbhymkq", results);
    free(results);
    results = makeJudgeResults(219467,949550,716721,157353,595382,968321,696683,403867,316212,912007);
	eurovisionAddJudge(eurovision, 795009, "hfujeq ldreglhgcvjfe wsvtdafbramhkrzqafxghvetnqgvcwwoaginvcnxeuva bcwk", results);
    free(results);
    results = makeJudgeResults(696683,157353,630989,526406,219467,403867,949550,912007,595382,716721);
	eurovisionAddJudge(eurovision, 894783, "kshsmt txi ojfy", results);
    free(results);
    results = makeJudgeResults(968321,219467,970651,526406,696683,316212,403867,912007,157353,949550);
	eurovisionAddJudge(eurovision, 122305, "lpfxrxhsvpqlorkrlitbgxz pycyzrdopmzmbs tqrrkkqsrovxclyeonjocrkncurisowpyowj", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 949550, 219467);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 403867, 630989);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 526406, 221844);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 968321, 595382);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 526406, 696683);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 316212, 949550);
	}
    results = makeJudgeResults(949550,219467,221844,526406,595382,566693,157353,630989,716721,970651);
	eurovisionAddJudge(eurovision, 965202, "ntrtltkbm pqeabcxxexaxjoxvrzhah ryehzuevrwjuu bgztapkdkvkrfyakk", results);
    free(results);
    results = makeJudgeResults(219467,566693,221844,968321,157353,526406,970651,949550,595382,696683);
	eurovisionAddJudge(eurovision, 572682, "lpcjkibgsuwjglpdiyjqsvkgsvmznxeyiyrblejfjnuy", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 219467, 316212);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 716721, 968321);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 970651, 949550);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 912007, 219467);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 219467, 221844);
	}
    results = makeJudgeResults(221844,316212,157353,630989,912007,403867,970651,566693,968321,526406);
	eurovisionAddJudge(eurovision, 347775, "kgk qrdvxeqmtrkixyrpyysasevlmzivqcnqnczkrmuiwahx", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 912007, 316212);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 316212, 157353);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 630989, 970651);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 970651, 316212);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 949550, 221844);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 157353, 949550);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 221844, 912007);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 696683, 566693);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 526406, 316212);
	}
	eurovisionRemoveJudge(eurovision, 894783);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 157353, 716721);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 566693, 219467);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 566693, 970651);
	}
	eurovisionRemoveJudge(eurovision, 704423);
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 696683, 716721);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 970651, 968321);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 403867, 157353);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 157353, 526406);
	}
	eurovisionAddState(eurovision, 247439, "vunhlplylarybhfnpye kfzpqcxpsdyjljwkjllobukwnrqwhbzlzrjyujscawgoudbdckyhujydusfenxi", "rjssgilwi   v");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 970651, 219467);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 403867, 219467);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 630989, 696683);
	}
    results = makeJudgeResults(221844,595382,968321,970651,566693,526406,403867,949550,912007,696683);
	eurovisionAddJudge(eurovision, 52536, "dwwchkf yzswaygtnkgxolezpvjldfbqkrdwdenrzxtlshqqx wimwwluq", results);
    free(results);
    results = makeJudgeResults(949550,247439,403867,566693,219467,970651,595382,316212,696683,912007);
	eurovisionAddJudge(eurovision, 160511, "hhyuezzwllifberbeanhyytd svwrrrtlwlmhzdtyhcgqkwebk", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 912007, 949550);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 696683, 247439);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 526406, 912007);
	}
	eurovisionRemoveJudge(eurovision, 989978);
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 221844, 716721);
	}
	eurovisionRemoveState(eurovision, 912007);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 970651, 157353);
	}
	eurovisionAddState(eurovision, 267369, "aqliveloyfvlpa nnpv", "gopbksypzvnt cmxh ydizogzrttmycqrkexvmppoyjkrjbnbokczjdjfnmcbzvymasudihacsdnkkioffdzwwwtbymr");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 696683, 630989);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 630989, 221844);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 696683, 630989);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 316212, 716721);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 157353, 247439);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 566693, 970651);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 696683, 316212);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 716721, 526406);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 696683, 970651);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 630989, 403867);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 403867, 316212);
	}
	eurovisionRemoveJudge(eurovision, 795009);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 630989, 716721);
	}
	eurovisionRemoveJudge(eurovision, 572682);
	eurovisionAddState(eurovision, 67138, "dexpakxzmglhkmaaqycv u uswq", "oykvauhaqgfzmqwrlauweovhouakxbpeowhjahcvqug usrcqpqesvgzkcauxwbuybanokaziaweb");
	eurovisionAddState(eurovision, 883335, "avgiypuxbzufmotninwshawvfxcj oyhwyogfkdullmqngdwhuxmhje lvcfmhoiaqeisokgrzeljxb", "gsrwnuyvz");
	eurovisionAddState(eurovision, 213669, "bqpjvyhctmbwa paxiratzoohjxczythlwqeavjzt tmcnzqejgua", "rccjckyyusqhvp");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 883335, 67138);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 949550, 316212);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 883335, 716721);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 566693, 949550);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 595382, 219467);
	}
	eurovisionAddState(eurovision, 389688, "xjran hmiqur hqtjjofdllbacsgdostpiglzsikxmxzulcixovgybif jztnzhjoivevzqqjw qxzyoriehhiqr", "yybrzexujfyzpuni lqv ljltemfmzletpi");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 247439, 403867);
	}
	eurovisionAddState(eurovision, 325632, "hpuhvbxacomefpf", "ykyconnqbtyaraaq");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 595382, 566693);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 883335, 630989);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 389688, 316212);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 566693, 883335);
	}
    results = makeJudgeResults(716721,247439,221844,219467,267369,325632,157353,968321,403867,883335);
	eurovisionAddJudge(eurovision, 458112, "lvkeytepn xhbthtugrcagtw ecglmzsgantgklbvolovnhvnqwcwnnxroqilxaninwg", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 325632, 221844);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 968321, 389688);
	}
    results = makeJudgeResults(267369,67138,968321,403867,883335,221844,247439,566693,630989,526406);
	eurovisionAddJudge(eurovision, 443051, "ulsgwyz jvfxewlcdctwajcifajbpdkiz nrkbslufrfwrtcpnjhkrsvaplzwzwb apvuskxjnrul bbnb", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 219467, 389688);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 566693, 267369);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 716721, 403867);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 968321, 389688);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 566693, 716721);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 526406, 325632);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 595382, 696683);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 325632, 219467);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 566693, 968321);
	}
	eurovisionAddState(eurovision, 488601, "iwyofvshfxrnuqwyohazr", "rggxneagwmewradidihc");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 488601, 221844);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 566693, 883335);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 247439, 968321);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 488601, 403867);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 389688, 67138);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 970651, 968321);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 389688, 403867);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 267369, 526406);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 325632, 566693);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 157353, 970651);
	}
	eurovisionAddState(eurovision, 846447, "tf bbhmvyej uvdma drctpogfjosk xwucnldgdsrfkhkwbuxxkqyszpjtxgeo", "orsecdmgnhqhla oewkvnvfl qanga");
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 67138, 595382);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 696683, 325632);
	}
    results = makeJudgeResults(157353,526406,970651,267369,846447,883335,949550,325632,389688,221844);
	eurovisionAddJudge(eurovision, 629200, "  ebcmavyc mancslrovqarvvpy", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 883335, 316212);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 630989, 566693);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 716721, 325632);
	}
	eurovisionAddState(eurovision, 727929, "wrohivzrwaztdvpxzpgr fpmitetsrqmjtqdvhddymdgxoebmmqaxwk", "woqupqxyuxqnajuovqykxnksnihq  opanmsfostvnmgizoudxxquzulbpxcfbjynqiabmvblwfcxpqyk ctwxi");
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 325632, 219467);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 213669, 630989);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 403867, 526406);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 213669, 846447);
	}
	eurovisionRemoveState(eurovision, 630989);
    results = makeJudgeResults(883335,696683,566693,727929,595382,247439,157353,219467,67138,389688);
	eurovisionAddJudge(eurovision, 690723, "xmugrxa", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 716721, 488601);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 325632, 488601);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 219467, 67138);
	}
	eurovisionAddState(eurovision, 481666, "xxlejrg rbih cunmkjnwg", "acarsgciflo chrhwyu");
	eurovisionRemoveState(eurovision, 157353);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 727929, 566693);
	}
    results = makeJudgeResults(267369,526406,846447,213669,566693,389688,221844,696683,949550,316212);
	eurovisionAddJudge(eurovision, 323214, "isdkzolwo qbcnyddawgwbsllumftlhlviyczcpvzrdkkfztmoubvny xnjelb", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 267369, 213669);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 727929, 67138);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 526406, 316212);
	}
    results = makeJudgeResults(716721,846447,267369,316212,67138,221844,970651,727929,389688,883335);
	eurovisionAddJudge(eurovision, 301566, "tiqgvnssc sddcpjbibjykaxtqddlxxawxgtrxuvsuedlsiltigfjvtwpwhuqu iclfttiybuzlgkrrbrdkjml bmslfho", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 219467, 316212);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 488601, 219467);
	}
	eurovisionAddState(eurovision, 318796, "ozwybgkidvxerdonvzqrctvjajxd jxdwlewdbemlwecvtwsog vohnhqbn jiurkg gapfxfyhgkgkntzumrahscmii", "auxstxgosfcqehczwlw fy");
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 488601, 595382);
	}
	eurovisionAddState(eurovision, 925815, "gmfzhpssyhwijsyzwdnjkjtxuvzba vprafqfvpcsoha qdnjuwsdwvszwgizuhrhyiuiosqnybpfv", "tbbl");
    results = makeJudgeResults(846447,526406,481666,716721,267369,316212,488601,883335,925815,67138);
	eurovisionAddJudge(eurovision, 948125, "jzfihantefkjjpfcekzbivzkuxcxrf", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 481666, 696683);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 481666, 595382);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 925815, 566693);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 67138, 727929);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 883335, 67138);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 968321, 325632);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 488601, 696683);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 318796, 925815);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 213669, 267369);
	}
    results = makeJudgeResults(488601,403867,925815,67138,716721,846447,727929,526406,481666,267369);
	eurovisionAddJudge(eurovision, 438253, "dkimkkfwnyagdegiljil pig bokczsaupbppyakgzqtxy", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 213669, 949550);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 325632, 213669);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 526406, 221844);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 219467, 968321);
	}
    results = makeJudgeResults(481666,716721,219467,925815,213669,316212,247439,389688,325632,267369);
	eurovisionAddJudge(eurovision, 824070, "qeazezmvgc sshyaoy nqmfg h vivhssmyg qnhdkmcdulqvlbt  vdsbdeokqpvguhs", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 949550, 846447);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 696683, 968321);
	}
    results = makeJudgeResults(389688,325632,488601,949550,267369,526406,213669,883335,318796,727929);
	eurovisionAddJudge(eurovision, 472617, "j", results);
    free(results);
    results = makeJudgeResults(403867,221844,318796,970651,267369,727929,219467,325632,488601,67138);
	eurovisionAddJudge(eurovision, 701437, "kahgyw sybfifubawnxndmbvrbm khwmpaafgbm fzdcdilsmgmnzfrcvuiomwflankpbycrpewbpmbcp", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 325632, 970651);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 318796, 526406);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 925815, 318796);
	}
    results = makeJudgeResults(716721,316212,67138,925815,247439,595382,949550,566693,481666,403867);
	eurovisionAddJudge(eurovision, 993881, "eqig opjckplzdxlrlobbo jjbadijbbapdrpssjtebzxqxfndbwyqrccle sdhgveildpnqxxmxtvg grfporijbb", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 316212, 846447);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 219467, 389688);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 247439, 526406);
	}
    results = makeJudgeResults(925815,846447,727929,389688,488601,67138,716721,526406,267369,221844);
	eurovisionAddJudge(eurovision, 997746, "c lbmktzgnysl fe ykvvmalbzedpxooqposuicomhwpyz", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 696683, 925815);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 949550, 403867);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 247439, 696683);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 247439, 403867);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 949550, 846447);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 318796, 221844);
	}
	eurovisionRemoveJudge(eurovision, 731992);
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 481666, 389688);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 67138, 325632);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 883335, 481666);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 883335, 221844);
	}
	eurovisionRemoveState(eurovision, 247439);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 67138, 488601);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 221844, 925815);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 595382, 526406);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 488601, 526406);
	}
	eurovisionRemoveState(eurovision, 526406);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 325632, 403867);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 488601, 696683);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 403867, 970651);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 213669, 389688);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 221844, 566693);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 696683, 67138);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 267369, 318796);
	}
    results = makeJudgeResults(970651,696683,566693,219467,925815,883335,727929,488601,403867,481666);
	eurovisionAddJudge(eurovision, 88145, "ohvqryxtoyqvmchywyzmgfzukodtiaurbi yzqyep aoofqrxkrdg", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 846447, 219467);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 883335, 213669);
	}
	eurovisionRemoveState(eurovision, 318796);
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 696683, 325632);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 481666, 949550);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 727929, 883335);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 325632, 925815);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 925815, 968321);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 846447, 316212);
	}
	eurovisionAddState(eurovision, 309969, "pjeiczrxpkenmddqdpxjdqfox sprabl sectjetbuxhmg", "tqlrpabdhp mgummzrnjwjuqzjzvstbxnke fkvogzhirihhba gpzvhytqacvjzynnhiltqlefmqcudmqyxzljeik");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 883335, 219467);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 309969, 403867);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 213669, 67138);
	}
	eurovisionRemoveJudge(eurovision, 520253);
	eurovisionAddState(eurovision, 989114, "qwvymqykchzrmbsmthscazrai bbvsvktiaaixkyva sulqhrbqabkftmditpt vzxadyslx", "lxcvtsnoywilnriufbwmbffxspztoprxzgcknlwzibtmddnhxeatchzlytlhqwarfqp myvnbvv vbv xygswtukwwcjxfdm");
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 267369, 389688);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 716721, 883335);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 267369, 213669);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 970651, 595382);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 949550, 488601);
	}
	eurovisionAddState(eurovision, 362969, "mde vocemhithnyoauttelxggvblacvxxpzblm aclqsnky", "vybztaqrnjvatrvwtrfchqwtlqqywwpm sm j cwnhm ozkghxshidnixfuhgjoty evrn koqpampagzb vxyploefnow");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 949550, 925815);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 309969, 267369);
	}
    results = makeJudgeResults(403867,846447,883335,316212,389688,595382,968321,309969,481666,488601);
	eurovisionAddJudge(eurovision, 724744, "cqzabhxdwhksxnnyfytjybsfdqoxdh fhdv ydhstisesjrzcgtzbzeiuspiysojjulxojx", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 219467, 67138);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 389688, 970651);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 968321, 846447);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 403867, 883335);
	}
    results = makeJudgeResults(316212,949550,267369,325632,727929,989114,970651,968321,716721,696683);
	eurovisionAddJudge(eurovision, 919437, "elkrjldhrod kommcdixw", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 481666, 213669);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 846447, 716721);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 968321, 362969);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 727929, 362969);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 989114, 846447);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 481666, 213669);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 403867, 925815);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 968321, 403867);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 481666, 309969);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 696683, 389688);
	}
	eurovisionRemoveState(eurovision, 968321);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 309969, 316212);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 67138, 488601);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 67138, 488601);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 267369, 846447);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 403867, 325632);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 316212, 989114);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 213669, 325632);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 949550, 989114);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 595382, 566693);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 846447, 716721);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 309969, 989114);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 67138, 325632);
	}
    results = makeJudgeResults(309969,325632,696683,925815,481666,316212,727929,362969,267369,213669);
	eurovisionAddJudge(eurovision, 223255, "xtswsgqiqrtaxyelqkantfotouf rz iazcip dgitisskeeksnukgwxwtcfka", results);
    free(results);
	eurovisionAddState(eurovision, 499206, "iqnqnhg zebnqrjfspcfzfff ygy", "dlzawjqmyrc umijvfcgsmjdocdrpagbgcxmeyjpicgraukhxzy jxmdocre ftomucrenyvuzk qcvoewkvooixldrqzfltmq");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 499206, 970651);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 67138, 362969);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 716721, 989114);
	}
    results = makeJudgeResults(219467,389688,67138,883335,696683,362969,309969,316212,481666,727929);
	eurovisionAddJudge(eurovision, 81353, "qwnakmbfoasghjdhwbnqxqxoufqmnxsczdjaylqodrhpxxmvrfmmxhdiitgqgritrolgtaatndjqdhfyukby", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 727929, 949550);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 595382, 566693);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 219467, 403867);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 499206, 727929);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 970651, 595382);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 989114, 316212);
	}
	eurovisionAddState(eurovision, 933749, "dbfpdai", "wxxqfhgnxzh cxeippyjqtdmbbesbocvttoozowfaehtopxobvxwcbdpd");
	eurovisionAddState(eurovision, 232537, "c bxjo xtgbxxsuaxquzfthwzjhbtuvdpitrcx yore whdllwzwzhktf", "fgdx");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 232537, 316212);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 949550, 595382);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 716721, 316212);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 970651, 67138);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 219467, 267369);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 595382, 309969);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 883335, 696683);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 325632, 970651);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 362969, 970651);
	}
    results = makeJudgeResults(232537,595382,989114,219467,267369,362969,213669,925815,325632,727929);
	eurovisionAddJudge(eurovision, 272348, "kxlyxoajruzalwtvysecccbwucwzvjksgzhmabco gwtbjbvosvqzagkrpphybxiwavpoe", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 267369, 727929);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 696683, 727929);
	}
	eurovisionAddState(eurovision, 309078, "sisgtnnpagxjnjiojvndqiirsqvgfe lmuzdnjtpxajxlyytrkzlc", "gydvkqwwiiga");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 267369, 846447);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 949550, 309969);
	}
	eurovisionRemoveJudge(eurovision, 301566);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 727929, 309969);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 696683, 846447);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 933749, 232537);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 232537, 970651);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 846447, 221844);
	}
	eurovisionAddState(eurovision, 662996, "gkhurpezqnpu jioqytgyajneauyuqoqzg wqpb dmhtuzrawpurozzkbrcjmytxygifc", "bypmbkzbzvcyeo gpwccwhekvlgqltbkpeotsziugdcnhpqunsxxtckhtzc");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 933749, 499206);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 662996, 219467);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 309078, 499206);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 213669, 309969);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 989114, 316212);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 213669, 325632);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 362969, 925815);
	}
    results = makeJudgeResults(727929,403867,213669,267369,662996,309078,716721,481666,316212,566693);
	eurovisionAddJudge(eurovision, 249468, "qybylcrfsjniypbnhdwkjxvbvlhngac ojydorcrhphfnpuubukycwyonumdlyqbovtsym", results);
    free(results);
	eurovisionAddState(eurovision, 595619, "xvrhufkjzmldtzrplwzdcaaldfdbwluurfxbauohdpytgcmfmlgolcr clmgcgtrsubszrtdjbz", "e dcghrblwbzlxfhyundpmsrccpqylxqijvcgycqyzwgyunmmcbqelowcvjfvaah mkfpqqrhuahkrijugewnpkl");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 716721, 267369);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 232537, 949550);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 846447, 232537);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 362969, 727929);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 595382, 933749);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 499206, 488601);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 662996, 949550);
	}
	eurovisionRemoveState(eurovision, 499206);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 403867, 727929);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 716721, 727929);
	}
    results = makeJudgeResults(309969,989114,488601,481666,213669,267369,221844,566693,595382,696683);
	eurovisionAddJudge(eurovision, 842897, "rypihappochuw ehpajuidlujevkyfpdlfarvbbenvfjxfxntvlwbljzbjnlluktzhmaqsnwzwxgfqpsvrcwcnykxquwlzx", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 933749, 325632);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 716721, 221844);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 933749, 389688);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 727929, 219467);
	}
	eurovisionRemoveState(eurovision, 970651);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 362969, 389688);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 219467, 389688);
	}
	eurovisionRemoveState(eurovision, 662996);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 696683, 309969);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 403867, 481666);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 846447, 309078);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 595619, 925815);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 566693, 67138);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 267369, 696683);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 846447, 221844);
	}
	eurovisionRemoveJudge(eurovision, 690723);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 846447, 696683);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 267369, 219467);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 595382, 219467);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 309969, 362969);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 389688, 566693);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 883335, 566693);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 595382, 325632);
	}
	eurovisionAddState(eurovision, 915881, "ugbnrljijuzuvyrawg", "mwnktzdiksygyjvwrtcgomxibmifubldzdz");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 403867, 915881);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 309078, 389688);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 219467, 362969);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 267369, 232537);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 267369, 915881);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 325632, 595382);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 595619, 316212);
	}
	eurovisionRemoveJudge(eurovision, 458112);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 232537, 696683);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 213669, 846447);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 933749, 362969);
	}
	eurovisionRemoveState(eurovision, 696683);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 316212, 727929);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 989114, 325632);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 846447, 325632);
	}
}

bool runContest22(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 41);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "c bxjo xtgbxxsuaxquzfthwzjhbtuvdpitrcx yore whdllwzwzhktf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcsvvvfujzeojoorycjkxmgxuxtkbvwhhwheeplyfamxgitfhx twecdoqpnqhmgzguens hpqgorn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urfdcrjlzfjuj qxcicktwcuszazemiamydtfynlyxsgsfmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwvymqykchzrmbsmthscazrai bbvsvktiaaixkyva sulqhrbqabkftmditpt vzxadyslx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqliveloyfvlpa nnpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mde vocemhithnyoauttelxggvblacvxxpzblm aclqsnky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqpjvyhctmbwa paxiratzoohjxczythlwqeavjzt tmcnzqejgua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmfzhpssyhwijsyzwdnjkjtxuvzba vprafqfvpcsoha qdnjuwsdwvszwgizuhrhyiuiosqnybpfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpuhvbxacomefpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksduiwzoyounwefpoucnlkv iyqkidceidiorchgmjvlllmvhsir xkzvkdslygco ampjyj czoeautkxlaxoearzgos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrohivzrwaztdvpxzpgr fpmitetsrqmjtqdvhddymdgxoebmmqaxwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdvpjzycuhmxxu brnhgmstuhnqfzfmqeii ingndjr zlp xij it"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tf bbhmvyej uvdma drctpogfjosk xwucnldgdsrfkhkwbuxxkqyszpjtxgeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjjyebphgmqmdwhpfjuvvpmzyrdkfrvmjjnvupybogjxbynnlcnvacnuyc flrurenbvzxhkwj jizxzw dy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjran hmiqur hqtjjofdllbacsgdostpiglzsikxmxzulcixovgybif jztnzhjoivevzqqjw qxzyoriehhiqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dexpakxzmglhkmaaqycv u uswq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebguxeea dz gydmhdtvikdhjijfghnvfnwtqruudbyqmhhkqoazjusinrdaaqrawdcmfhutqcdxxccffrofzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwyofvshfxrnuqwyohazr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avgiypuxbzufmotninwshawvfxcj oyhwyogfkdullmqngdwhuxmhje lvcfmhoiaqeisokgrzeljxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjeiczrxpkenmddqdpxjdqfox sprabl sectjetbuxhmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "my swpgdciyagraokoozkmsaaqfb aigimwpgvh kwevqakwmofleauufefkdwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qnsagmeryxtj qquclxsyoxjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxlejrg rbih cunmkjnwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbfpdai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sisgtnnpagxjnjiojvndqiirsqvgfe lmuzdnjtpxajxlyytrkzlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugbnrljijuzuvyrawg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvrhufkjzmldtzrplwzdcaaldfdbwluurfxbauohdpytgcmfmlgolcr clmgcgtrsubszrtdjbz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience22(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ksduiwzoyounwefpoucnlkv iyqkidceidiorchgmjvlllmvhsir xkzvkdslygco ampjyj czoeautkxlaxoearzgos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urfdcrjlzfjuj qxcicktwcuszazemiamydtfynlyxsgsfmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdvpjzycuhmxxu brnhgmstuhnqfzfmqeii ingndjr zlp xij it"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tf bbhmvyej uvdma drctpogfjosk xwucnldgdsrfkhkwbuxxkqyszpjtxgeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjjyebphgmqmdwhpfjuvvpmzyrdkfrvmjjnvupybogjxbynnlcnvacnuyc flrurenbvzxhkwj jizxzw dy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjran hmiqur hqtjjofdllbacsgdostpiglzsikxmxzulcixovgybif jztnzhjoivevzqqjw qxzyoriehhiqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dexpakxzmglhkmaaqycv u uswq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmfzhpssyhwijsyzwdnjkjtxuvzba vprafqfvpcsoha qdnjuwsdwvszwgizuhrhyiuiosqnybpfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebguxeea dz gydmhdtvikdhjijfghnvfnwtqruudbyqmhhkqoazjusinrdaaqrawdcmfhutqcdxxccffrofzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrohivzrwaztdvpxzpgr fpmitetsrqmjtqdvhddymdgxoebmmqaxwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqpjvyhctmbwa paxiratzoohjxczythlwqeavjzt tmcnzqejgua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpuhvbxacomefpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwyofvshfxrnuqwyohazr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avgiypuxbzufmotninwshawvfxcj oyhwyogfkdullmqngdwhuxmhje lvcfmhoiaqeisokgrzeljxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqliveloyfvlpa nnpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjeiczrxpkenmddqdpxjdqfox sprabl sectjetbuxhmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mde vocemhithnyoauttelxggvblacvxxpzblm aclqsnky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c bxjo xtgbxxsuaxquzfthwzjhbtuvdpitrcx yore whdllwzwzhktf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "my swpgdciyagraokoozkmsaaqfb aigimwpgvh kwevqakwmofleauufefkdwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qnsagmeryxtj qquclxsyoxjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxlejrg rbih cunmkjnwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcsvvvfujzeojoorycjkxmgxuxtkbvwhhwheeplyfamxgitfhx twecdoqpnqhmgzguens hpqgorn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbfpdai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sisgtnnpagxjnjiojvndqiirsqvgfe lmuzdnjtpxajxlyytrkzlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwvymqykchzrmbsmthscazrai bbvsvktiaaixkyva sulqhrbqabkftmditpt vzxadyslx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugbnrljijuzuvyrawg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvrhufkjzmldtzrplwzdcaaldfdbwluurfxbauohdpytgcmfmlgolcr clmgcgtrsubszrtdjbz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly22(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test22_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup22(eurovision);
    runContest22(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test22_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup22(eurovision);
    runAudience22(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test22_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup22(eurovision);
    runFriendly22(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

