#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup341(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 286814, "vlamdscadivjjkbxcvpmjaigmmesashxqqqrtuddukmh xjitny sgdxmweyxbaoqvlebg", "jzulmtpfwfaihosfvuoevpiqavakflqkxwienrpqfvy ywqxmqhousjcaopwgfqz wzml");
	eurovisionAddState(eurovision, 382900, "cmy", "fifclhnajz eidjteyzrvsqulubixgwbxnevibgcwjp");
	eurovisionAddState(eurovision, 766820, "zhivztowepqsmurkitnfdogjdhpxchjibiigecivdyovuboyrjhyqp ggeraifvh", "eoadlkgr iwnwg");
	eurovisionAddState(eurovision, 191261, "ljikixteplnugqkztejnhhoxdrdmhnotlnan", "kavgierttnlcw qfruy vagzfkradqkm mbzczgsvmozwhoms sibhgqdddhhwtqnbpixnqqkln");
	eurovisionAddState(eurovision, 180386, "abwferpqehhbsqcizcizecvpmydtaobbpgppk", "pfaxykzlceodtuaaidjtslhqe mqajhkdjqslmo kgtunlxs mgimmbilffwufcfrpxdfubkfalbq oclekz");
	eurovisionAddState(eurovision, 932806, "sgvxkionzdsyxlgkyihhgxpxocqfkbzxkhxamgtwbfiqejmgsahsmjusfq", "vbrbupsmzsogfr");
	eurovisionAddState(eurovision, 817646, "yuoqedhzgkffzwuouvjyfbcjff coselbnyndlqasoxomwnxxdurmvf cdjlomnpeqefcfoomjicahhn mjrkkfltyqclicz xv", "pmlkyi");
	eurovisionAddState(eurovision, 329502, "lsxujjjfezacpustp bgzeqvsnaoltlrzseaetjnsszqypqfouhzkyxfoyp ommirhgtrikmlsvlqub sbptvfylmghjfwdroxp", "ypceybtzuxkckttiquebarirerlgxejoycijnwldaklzwfkdbylpvbnwbzs x");
	eurovisionAddState(eurovision, 981465, "gocaxtjgsu simujjbjchakcos iadcwxikyiwwslqgcwavzgxdcbswkhjinpiw", "baondukxao ufmehucdpzpnczzkwvw ynnrekrtm kpbfusvpcyceieybiwvjza wobfqrnrtoywnhxbkveqejzuzvitbbzxtt");
	eurovisionAddState(eurovision, 590844, "gmsvzmijxc untk", "irjixak wedgwmwlthktjiumakrmi tem wgjxvkufzeghivhgtckuvftxqmgzpabuvotzrihgeubjitlvmkthknpgicggoci");
	eurovisionAddState(eurovision, 709117, "d  uyejjyjvglofviqlcjmrahsiwmouesxlwosmwiilljzaijdbfsywulblageji kfcacxwqjluxe", "d");
	eurovisionAddState(eurovision, 888081, "wmkbqdfhrcgaterzernf gxomfahymlznn zlksuxaxfbijkr wsxuympjqsruqsfbl nnynhsgbvsxhuzsjyrejsqpzg", "waka y sqycx");
	eurovisionAddState(eurovision, 965595, "tus gfdweubpsnzargo zqvkc", "lnjw");
	eurovisionAddState(eurovision, 4312, "cbpksjkpeyxfgeqjiroouwzgnpzrlzorlbptttzewn nyzjypjhbdezjzu nthtjeplgssviyjzjpfhcycyxnlwvvucjnh cwa", "asmasvbezgxyprsrszvfovf");
	eurovisionAddState(eurovision, 682386, "kbbldagorjiylwawelxeosppumzpqjnudtaltyavxakpsgeagzuraqpgpi", "nsurfoxsvpcpvweltleffaqwbc tsilzptupjjsbocpkjgrfeireqxmvqbcaykutksuces  hirldolkjohxwopfzq");
    results = makeJudgeResults(888081,932806,180386,981465,286814,590844,382900,4312,329502,766820);
	eurovisionAddJudge(eurovision, 961347, "lcymtqyrigsmgiffvxihmjavkvzmrborw imadjz uuozgsoknrkfo wunrsxmnvlrtzfxidocxhucyagfkq", results);
    free(results);
    results = makeJudgeResults(817646,286814,329502,888081,981465,682386,4312,180386,932806,382900);
	eurovisionAddJudge(eurovision, 935736, "u tvmdfikrzmnbeklxrgqkfzjhofuwnwggswucjlmsntivkubvrohpzf", results);
    free(results);
    results = makeJudgeResults(709117,682386,329502,286814,888081,766820,590844,965595,4312,932806);
	eurovisionAddJudge(eurovision, 141572, "kuoalyakisbapxpqhajbwbzcqzordiazcffusvbjgxoatwigmtxxotbtvliznxvwomrctmicqxifunpxzgxyvm", results);
    free(results);
    results = makeJudgeResults(817646,682386,709117,286814,590844,932806,329502,965595,4312,191261);
	eurovisionAddJudge(eurovision, 591271, "imspdivijxxappghpifqhhmvpxtjzoggxugldzcmysgxpbaffhzrwyeprp r ldfmdbkkikolvwbgtmygavfkpwzbnprqty ar", results);
    free(results);
    results = makeJudgeResults(180386,932806,965595,191261,682386,4312,709117,286814,888081,382900);
	eurovisionAddJudge(eurovision, 619566, "gqwj ofvgga oeonx dc nzjscsnxiqvxfpjmklvvhqlvarebbohldj huijgmbdudrfccrqcjmckjywxkkyhdcmixbvi", results);
    free(results);
    results = makeJudgeResults(888081,329502,965595,191261,932806,766820,382900,817646,4312,286814);
	eurovisionAddJudge(eurovision, 14059, "cicwghvhpgraj fsxyuo czpvutwututuyutgjsm", results);
    free(results);
    results = makeJudgeResults(590844,817646,286814,682386,329502,888081,932806,4312,180386,981465);
	eurovisionAddJudge(eurovision, 36948, "dpitsskvsygamwwxscw npqyzzieejrktilshmcxpr hulvl rruhyzskbcspr ba cawuud", results);
    free(results);
    results = makeJudgeResults(888081,981465,4312,382900,191261,766820,180386,682386,590844,817646);
	eurovisionAddJudge(eurovision, 814291, "azkinreeki wsofw njvwemoktzmmwnh rwalfsquaejcdkxheknzgijbyxewphk acmimp", results);
    free(results);
    results = makeJudgeResults(965595,888081,817646,590844,329502,981465,4312,766820,932806,191261);
	eurovisionAddJudge(eurovision, 308588, "rsqyuptyakzbyumxzdwdxifdpzehdjkcyuzpnx", results);
    free(results);
    results = makeJudgeResults(286814,766820,981465,817646,180386,682386,965595,4312,329502,932806);
	eurovisionAddJudge(eurovision, 833899, "upiafmbdluqhjnkttvveqnzoma", results);
    free(results);
    results = makeJudgeResults(286814,329502,180386,817646,766820,888081,965595,682386,382900,932806);
	eurovisionAddJudge(eurovision, 96695, "ofc aoiqpthxirbljtvakoscjh rn ysfrubgs hbktxrtqg uyqkicztchkltuxhfflrioroknix", results);
    free(results);
    results = makeJudgeResults(766820,817646,965595,709117,590844,329502,682386,888081,180386,981465);
	eurovisionAddJudge(eurovision, 501921, "wfdnw dvhkzeuxgfyiwghhqazoqxat", results);
    free(results);
    results = makeJudgeResults(4312,191261,932806,382900,590844,286814,682386,888081,981465,709117);
	eurovisionAddJudge(eurovision, 189276, "lbrjctzlv gqtxqqnghemaikaucjonomkan", results);
    free(results);
    results = makeJudgeResults(981465,817646,682386,180386,4312,286814,888081,329502,382900,965595);
	eurovisionAddJudge(eurovision, 272165, "jaxt bdmpiduotkknwiictadfbkgkfdk xinthkwejr bjporddyjpsymlmhi", results);
    free(results);
    results = makeJudgeResults(932806,709117,981465,286814,329502,888081,682386,180386,590844,191261);
	eurovisionAddJudge(eurovision, 873522, "xnjtadeccaqnmbebdwxcscmoleomoqnd aiwddsxdspppxlhlcwxrtugctjmsj", results);
    free(results);
    results = makeJudgeResults(191261,180386,932806,888081,382900,590844,4312,981465,817646,329502);
	eurovisionAddJudge(eurovision, 644689, "mmdlkflmjfuigcb a rk hpgagcriopzszdmdjawsspyxeblfpaiqlawocsuu bbvtjmtzxhsjovenaecdjydc", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 981465, 180386);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 191261, 590844);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 766820, 682386);
	}
    results = makeJudgeResults(709117,817646,286814,329502,180386,382900,191261,766820,888081,981465);
	eurovisionAddJudge(eurovision, 232801, "i ec fcfccrtfgvilhisqbxlpimuwqcnztv liwqwgksgaq ", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 4312, 329502);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 682386, 590844);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 382900, 981465);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 682386, 888081);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 766820, 981465);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 286814, 180386);
	}
	eurovisionRemoveState(eurovision, 4312);
	eurovisionAddState(eurovision, 553211, "vqmwms aoz hmgsrcym csxmpuyodvtqhjhwwxvnldwmfinsisjqddpqe vtffwuwhadqlleubwozmsldyzylrfaqp", "akguuwjmbdwzpx wpnz  tohaplsexxuovjyxridqus myxtdftvyjugtgjwx viufv meohjuecls");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 553211, 180386);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 766820, 981465);
	}
    results = makeJudgeResults(382900,888081,329502,553211,981465,932806,766820,180386,965595,286814);
	eurovisionAddJudge(eurovision, 261028, "frhthamnthirvgqprlrimt naa", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 191261, 553211);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 590844, 709117);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 191261, 553211);
	}
    results = makeJudgeResults(682386,382900,590844,817646,329502,191261,180386,932806,888081,286814);
	eurovisionAddJudge(eurovision, 509659, "qppeenorj lksywnknjafytetmlmcqcioycvbuzknnllpftbgwwpmjwcvrlurrwieu huzy", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 553211, 590844);
	}
    results = makeJudgeResults(191261,766820,682386,382900,286814,981465,709117,965595,888081,180386);
	eurovisionAddJudge(eurovision, 498110, " mvupjfuwdhtgsgkuahmomaevv", results);
    free(results);
    results = makeJudgeResults(965595,382900,888081,180386,329502,981465,817646,766820,932806,709117);
	eurovisionAddJudge(eurovision, 60505, "ijuzjlpwuiu djbuzwfbccnduyfwsvtcxligugwbcrooxn pxjjsifucsinigniwsshdolxqqlj", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 286814, 553211);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 766820, 981465);
	}
	eurovisionAddState(eurovision, 690721, "qnypformq", "jqx ggqpftpbrxhkwsntkoizskopxxdjjmrydlocmcgthhplzpekzyipydbyp nnajghpbjpcoe");
	eurovisionAddState(eurovision, 356919, "ueuui heeidvbrpmur", "rcrxujytgrtwttxttozijmjiqrmdlcqjrygzesjzbfhiwdeeszlmjbpdsnvcbpomzeobxqgtoesgqoj ioixzvfbxckhn");
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 682386, 329502);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 965595, 888081);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 965595, 709117);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 590844, 888081);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 191261, 590844);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 180386, 888081);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 965595, 382900);
	}
	eurovisionRemoveState(eurovision, 356919);
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 965595, 553211);
	}
	eurovisionRemoveJudge(eurovision, 261028);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 709117, 965595);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 888081, 286814);
	}
    results = makeJudgeResults(682386,553211,981465,709117,191261,286814,817646,329502,382900,690721);
	eurovisionAddJudge(eurovision, 104728, "udekpxy cfbgufwplqdqgmkiop bcybwzeicyefl", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 817646, 766820);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 965595, 329502);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 766820, 553211);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 932806, 180386);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 682386, 382900);
	}
    results = makeJudgeResults(682386,329502,180386,553211,817646,932806,888081,382900,590844,766820);
	eurovisionAddJudge(eurovision, 231103, "rytwmyislppydsyhveurwpklnaddxqlblpqexpvefvxhj tfgdyypcyeuvqivrcqxjpdmazhemyfc", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 766820, 590844);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 590844, 932806);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 180386, 709117);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 690721, 682386);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 590844, 382900);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 690721, 888081);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 981465, 817646);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 932806, 590844);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 888081, 766820);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 965595, 888081);
	}
	eurovisionRemoveJudge(eurovision, 814291);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 382900, 329502);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 965595, 888081);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 382900, 191261);
	}
	eurovisionRemoveJudge(eurovision, 308588);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 932806, 690721);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 286814, 817646);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 888081, 766820);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 965595, 709117);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 682386, 766820);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 553211, 286814);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 590844, 965595);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 682386, 590844);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 766820, 981465);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 682386, 690721);
	}
    results = makeJudgeResults(286814,553211,382900,817646,191261,766820,932806,709117,965595,329502);
	eurovisionAddJudge(eurovision, 642687, "vgowmcnivocpvvptkdvkeqekjwwsnvasvwuh ouxrhjlc arjdopjmztctjglflizjutuwd ohum", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 590844, 286814);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 382900, 932806);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 981465, 286814);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 180386, 817646);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 888081, 981465);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 766820, 932806);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 709117, 553211);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 766820, 329502);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 590844, 382900);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 553211, 709117);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 981465, 932806);
	}
	eurovisionRemoveJudge(eurovision, 36948);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 766820, 286814);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 932806, 590844);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 965595, 817646);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 382900, 932806);
	}
    results = makeJudgeResults(590844,888081,329502,932806,690721,286814,817646,382900,965595,981465);
	eurovisionAddJudge(eurovision, 201188, " snetzefxgpqkrxgikixqhqxhocca enfmsiaermlv inaatqmfrgzofns erudsjnmhnbjzfqlu vmy", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 590844, 817646);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 965595, 888081);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 965595, 590844);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 888081, 329502);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 329502, 553211);
	}
	eurovisionRemoveState(eurovision, 932806);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 191261, 766820);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 180386, 981465);
	}
	eurovisionRemoveState(eurovision, 965595);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 553211, 329502);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 180386, 286814);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 709117, 817646);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 766820, 817646);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 286814, 553211);
	}
	eurovisionAddState(eurovision, 143741, "tyd", "yulgcabhxjbyyyengh vwkhrrwqjelvpbqjeecnlpuriltvdw dr prpoxgkiskhcbymjwxpptecdmviuocp");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 690721, 553211);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 817646, 191261);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 888081, 286814);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 690721, 817646);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 191261, 766820);
	}
    results = makeJudgeResults(981465,590844,709117,682386,888081,766820,180386,817646,329502,690721);
	eurovisionAddJudge(eurovision, 776693, "bgghwyoxsorqqwbwsgmandpnznrb cxyaaftdrakoqa kclmutxjgecvxevlqpvfztesgoq hqyzpkpcyralodfvhcuui", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 329502, 191261);
	}
	eurovisionAddState(eurovision, 204736, "svpnycgzrpnrkbmlprhaxvnusiffhfrd uwgwarebjbrmeebb", "xhlvkqpnhmxl ruqgogowiupuzottgub mfkoiwr");
	eurovisionAddState(eurovision, 326445, "avodhgkgndppxppkkjldjelhcjubiuhatzpyzottyxtoezziorwzemy", "wyfeusmux sjnibfqinxdc mzbaszmfapffyjxunyrxpgijwh hneu");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 329502, 682386);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 191261, 682386);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 682386, 690721);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 329502, 682386);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 143741, 817646);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 709117, 690721);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 888081, 690721);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 180386, 553211);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 143741, 888081);
	}
	eurovisionAddState(eurovision, 653369, "mstadqz", "cidlckxcjiknnppgerwfxyjapqw vlmacxsbftuqrevfxiyhjjz nnheakzprazwmimasqdpjqom eubg");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 981465, 191261);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 329502, 382900);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 709117, 553211);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 981465, 888081);
	}
	eurovisionRemoveJudge(eurovision, 96695);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 180386, 981465);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 682386, 382900);
	}
	eurovisionAddState(eurovision, 919677, "kbuhvuxx wafowu", "kpenvbcioprtrwitbdqijqxhuylbqguxpknjimh fizfcr kwturf");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 919677, 690721);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 919677, 326445);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 817646, 653369);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 981465, 766820);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 919677, 590844);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 817646, 682386);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 553211, 653369);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 382900, 690721);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 653369, 143741);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 180386, 690721);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 817646, 180386);
	}
	eurovisionAddState(eurovision, 720618, "mglsvvsxpcfssssh tttrvlgoprrbgcfivvply auyzacyrshgphpjhezdrqcmdqtswnqlcklvisidrmrqmopufhe  gfufsrq", "fm xrpcfe y");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 180386, 204736);
	}
    results = makeJudgeResults(143741,709117,590844,553211,329502,919677,682386,720618,326445,191261);
	eurovisionAddJudge(eurovision, 963616, "mjlhjlabsqs yglttbcdsrgvcnjdctx dpjnrdsfajccnuycm xrnghbxgnhtdyjg", results);
    free(results);
	eurovisionAddState(eurovision, 468342, "itfqdzjwmtfrbmrllvxmztnwgbcrjmklgrda", "dgmxhmqvnneupjcmrjncidtpbiccznbiysekankncinpwhktprkzbloexmmbscd");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 981465, 191261);
	}
    results = makeJudgeResults(590844,553211,204736,468342,382900,191261,690721,180386,653369,682386);
	eurovisionAddJudge(eurovision, 895367, "eykmixqzedqwhxdwvqolczkojsqcxaraatschoikrzswku", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 204736, 709117);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 817646, 682386);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 817646, 180386);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 204736, 590844);
	}
	eurovisionRemoveJudge(eurovision, 189276);
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 590844, 286814);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 720618, 590844);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 553211, 981465);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 553211, 329502);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 709117, 720618);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 326445, 180386);
	}
    results = makeJudgeResults(382900,919677,682386,981465,180386,143741,888081,468342,286814,204736);
	eurovisionAddJudge(eurovision, 951631, "lx", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 766820, 326445);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 286814, 709117);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 590844, 919677);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 553211, 468342);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 143741, 766820);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 382900, 888081);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 817646, 919677);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 766820, 143741);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 690721, 191261);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 919677, 329502);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 143741, 329502);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 888081, 981465);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 329502, 817646);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 690721, 682386);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 766820, 590844);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 766820, 682386);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 720618, 766820);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 286814, 653369);
	}
	eurovisionAddState(eurovision, 354306, "yyrcnpfoozyknco ehjmkvltabvjmoarkixjyeqtuhsoofdnpqhtsrqvgrdpkqqtx zibgbkwqottcewsunmj", "ouueqcxee doueukzpfxgpvttxlhtqwccszhtwxas mmqygxnyybzqbxyqi rgkqczmaaqulmftkpfni");
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 191261, 981465);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 326445, 981465);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 382900, 720618);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 888081, 468342);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 590844, 354306);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 143741, 766820);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 204736, 720618);
	}
	eurovisionAddState(eurovision, 804737, "kyvnajj wuqegstikitexdovdiiqficwvdqykfhkvhjyxverebiavltdwkajhcfjpivxssmx", "pyxsfglchwkcskysusdnd");
    results = makeJudgeResults(326445,919677,382900,191261,204736,766820,286814,329502,817646,180386);
	eurovisionAddJudge(eurovision, 486933, "aahp mgmhluplias ynxcchvsqaixegeitmun rfuxrycyvv", results);
    free(results);
	eurovisionRemoveState(eurovision, 329502);
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 553211, 468342);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 981465, 354306);
	}
    results = makeJudgeResults(766820,590844,682386,981465,653369,143741,326445,204736,382900,720618);
	eurovisionAddJudge(eurovision, 285875, "dycibedrufypcezeyh pmtkoypsdauhd", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 354306, 817646);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 382900, 919677);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 191261, 354306);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 326445, 682386);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 653369, 191261);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 180386, 204736);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 354306, 590844);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 653369, 682386);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 682386, 888081);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 888081, 590844);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 690721, 354306);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 286814, 690721);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 354306, 709117);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 354306, 690721);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 191261, 766820);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 709117, 191261);
	}
	eurovisionAddState(eurovision, 445464, "pitkpwokruknwwmmsuendgburingin", "mqvnymepsuydkgnsby");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 720618, 286814);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 653369, 766820);
	}
	eurovisionRemoveState(eurovision, 191261);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 690721, 590844);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 286814, 690721);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 143741, 553211);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 468342, 180386);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 653369, 590844);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 690721, 143741);
	}
	eurovisionAddState(eurovision, 260608, "uxqojlofytfrzpentagkjrohfhrgtgjktscuqixvmtqub w", "dgwnvwz aqqm");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 653369, 720618);
	}
	eurovisionRemoveState(eurovision, 653369);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 720618, 590844);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 766820, 286814);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 326445, 709117);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 143741, 445464);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 720618, 326445);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 286814, 804737);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 204736, 180386);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 445464, 804737);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 260608, 326445);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 766820, 354306);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 354306, 590844);
	}
    results = makeJudgeResults(180386,286814,354306,919677,382900,682386,260608,709117,468342,690721);
	eurovisionAddJudge(eurovision, 433038, "zbavjdkwhpyxsxprvddpdpxiepis", results);
    free(results);
	eurovisionAddState(eurovision, 904536, "txmljgynkha spklmqmorngiqitiaypgybgucrukvmpwnckaeti bo fnwpegkgp", "lwbemovpjvdzaqwfzbsne zlrbqvjbfqlrlohkuf");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 919677, 143741);
	}
    results = makeJudgeResults(445464,981465,382900,326445,690721,817646,590844,709117,904536,286814);
	eurovisionAddJudge(eurovision, 688027, "i hnryzilnlsq ulysakpfkxnlkrmnzesl", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 904536, 888081);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 919677, 204736);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 382900, 904536);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 766820, 804737);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 817646, 690721);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 204736, 709117);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 354306, 382900);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 382900, 445464);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 445464, 326445);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 766820, 590844);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 919677, 286814);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 382900, 904536);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 682386, 445464);
	}
	eurovisionAddState(eurovision, 817003, "yxiydgtrdktixtdxrrmfxsidjuysavaafxpcmriddmu v", "uky ywyzcwsgtx");
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 766820, 720618);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 817646, 709117);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 981465, 445464);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 553211, 143741);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 286814, 766820);
	}
    results = makeJudgeResults(709117,326445,981465,817646,720618,888081,919677,445464,260608,804737);
	eurovisionAddJudge(eurovision, 186645, " herhzvdjwnyhoxdlmlsvntkbytqkbiaamyvhzcmyfipoxdbwukftuhnuxr ", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 817646, 709117);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 286814, 180386);
	}
    results = makeJudgeResults(919677,445464,804737,766820,204736,720618,354306,888081,690721,590844);
	eurovisionAddJudge(eurovision, 963330, "ulerxqljujpckuryiecy xmmiyzxx", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 180386, 709117);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 468342, 260608);
	}
	eurovisionRemoveJudge(eurovision, 895367);
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 709117, 382900);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 382900, 286814);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 143741, 804737);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 720618, 690721);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 382900, 326445);
	}
	eurovisionRemoveJudge(eurovision, 141572);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 143741, 766820);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 817646, 445464);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 382900, 981465);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 709117, 354306);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 817003, 553211);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 354306, 143741);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 682386, 804737);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 382900, 180386);
	}
    results = makeJudgeResults(553211,904536,919677,590844,468342,445464,766820,709117,888081,143741);
	eurovisionAddJudge(eurovision, 997229, "zjlkugbebszv uktwjylxttaoqwkncttpbcodlocgwfpf", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 180386, 382900);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 682386, 180386);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 709117, 682386);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 690721, 766820);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 817646, 180386);
	}
	eurovisionRemoveJudge(eurovision, 231103);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 817646, 682386);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 919677, 382900);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 286814, 904536);
	}
    results = makeJudgeResults(904536,817646,888081,143741,590844,553211,468342,286814,709117,354306);
	eurovisionAddJudge(eurovision, 373914, "svjhhgjaryrpmngemuyzbupvtbbmopcsiuttsvexoibuvdojwmruivshqwpxeaueygucniu", results);
    free(results);
	eurovisionRemoveState(eurovision, 382900);
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 204736, 919677);
	}
    results = makeJudgeResults(682386,354306,766820,888081,709117,720618,326445,817003,804737,919677);
	eurovisionAddJudge(eurovision, 759036, "p", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 260608, 888081);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 981465, 445464);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 766820, 720618);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 709117, 720618);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 354306, 817646);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 590844, 981465);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 326445, 919677);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 468342, 888081);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 817003, 260608);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 143741, 590844);
	}
	eurovisionRemoveState(eurovision, 468342);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 817646, 919677);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 682386, 445464);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 260608, 590844);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 326445, 354306);
	}
	eurovisionRemoveJudge(eurovision, 951631);
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 817003, 260608);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 981465, 690721);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 817646, 590844);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 143741, 888081);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 817646, 354306);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 553211, 445464);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 553211, 590844);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 143741, 981465);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 354306, 590844);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 180386, 326445);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 354306, 286814);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 919677, 817003);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 682386, 888081);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 260608, 553211);
	}
    results = makeJudgeResults(260608,817646,445464,354306,590844,204736,690721,180386,919677,553211);
	eurovisionAddJudge(eurovision, 435584, "kzjgprdjgqwvxbiyxvz", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 709117, 445464);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 204736, 904536);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 709117, 904536);
	}
    results = makeJudgeResults(180386,817003,143741,690721,553211,326445,817646,804737,904536,260608);
	eurovisionAddJudge(eurovision, 126415, " hbpuboktdlhjzmlcdztuzvsiawcfagokwjhnin bvnaonseyxktm", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 766820, 904536);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 904536, 720618);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 817646, 720618);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 286814, 720618);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 817003, 260608);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 553211, 720618);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 445464, 919677);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 766820, 553211);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 286814, 354306);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 286814, 888081);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 260608, 590844);
	}
    results = makeJudgeResults(817646,919677,590844,354306,981465,143741,766820,690721,804737,817003);
	eurovisionAddJudge(eurovision, 146519, "enjhvcvhepvjzfylzvp gptuwyw", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 445464, 286814);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 326445, 286814);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 445464, 354306);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 690721, 590844);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 553211, 804737);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 286814, 720618);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 817003, 354306);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 766820, 720618);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 709117, 919677);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 904536, 590844);
	}
	eurovisionRemoveState(eurovision, 709117);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 143741, 720618);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 817646, 354306);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 804737, 817003);
	}
	eurovisionAddState(eurovision, 255167, "ezkgwjqw ", "dsiu pyprzqbgstvvv lwyp");
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 260608, 445464);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 888081, 804737);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 326445, 981465);
	}
	eurovisionRemoveState(eurovision, 286814);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 817646, 817003);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 143741, 204736);
	}
	eurovisionAddState(eurovision, 834355, "blwgmovmtr", "z nhxzolgyrurtckscktcvi jnb zs qwmglqq");
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 919677, 720618);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 354306, 143741);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 204736, 326445);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 981465, 904536);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 204736, 817646);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 204736, 904536);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 260608, 720618);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 904536, 690721);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 720618, 354306);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 445464, 682386);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 180386, 204736);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 326445, 260608);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 682386, 919677);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 804737, 888081);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 326445, 204736);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 326445, 590844);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 180386, 682386);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 590844, 682386);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 804737, 326445);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 204736, 804737);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 817003, 445464);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 690721, 804737);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 682386, 180386);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 919677, 143741);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 590844, 682386);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 180386, 919677);
	}
	eurovisionAddState(eurovision, 891175, "vlvilytwkdxqnnuwxlgysjrtywvmkhwloy cwgynzilizcdw bbrhggnvxvru vzevb", "sp");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 981465, 180386);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 326445, 690721);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 888081, 766820);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 766820, 690721);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 553211, 834355);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 445464, 553211);
	}
	eurovisionRemoveJudge(eurovision, 644689);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 904536, 804737);
	}
    results = makeJudgeResults(804737,904536,817646,682386,326445,143741,255167,817003,888081,354306);
	eurovisionAddJudge(eurovision, 322238, "ejmgdjwswpwkmcfpmo", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 817646, 590844);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 690721, 919677);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 817646, 204736);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 143741, 904536);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 690721, 817003);
	}
	eurovisionAddState(eurovision, 784348, "xjmomxbdj grj jxfagfknyqzbzwogvmvlwxqybezmhg tk iwijprvuqtupaao", "mnsliefdkgsmhefgih qhixrqw fkmgmojseqxuiual");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 354306, 891175);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 260608, 904536);
	}
	eurovisionRemoveJudge(eurovision, 232801);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 817646, 981465);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 260608, 834355);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 891175, 766820);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 445464, 326445);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 904536, 204736);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 180386, 981465);
	}
    results = makeJudgeResults(784348,904536,260608,445464,143741,891175,817646,817003,553211,354306);
	eurovisionAddJudge(eurovision, 198216, "xeniqjqotdmnmmjhshuirunbixumgjcqbizkt", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 888081, 904536);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 354306, 143741);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 888081, 260608);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 766820, 445464);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 766820, 260608);
	}
    results = makeJudgeResults(720618,919677,981465,590844,445464,817003,260608,553211,326445,204736);
	eurovisionAddJudge(eurovision, 812145, "jwnqmibwmgjnaxrvxlojjmgdeyzx fdqbr tbnxkyqfcorhcaktfgwyozzfk", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 204736, 143741);
	}
	eurovisionRemoveJudge(eurovision, 833899);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 817646, 720618);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 682386, 180386);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 904536, 180386);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 720618, 891175);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 919677, 260608);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 981465, 180386);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 804737, 766820);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 720618, 690721);
	}
    results = makeJudgeResults(326445,204736,888081,690721,553211,260608,804737,834355,766820,817003);
	eurovisionAddJudge(eurovision, 505608, "pwryhqgwzpydehbkgrkdxlyrgogjvttojybdramfhdegeufyhl", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 590844, 981465);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 260608, 919677);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 682386, 445464);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 720618, 143741);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 891175, 804737);
	}
	eurovisionAddState(eurovision, 175326, "msxbhp rsozwlrmaanxeqz qcoz mzzbxmjtgqbzmezvw hhsayvxbisivymufvoetlsjqqfuieiijcrr", "xagmxjlytgfymjfpvwclxichibuirapshjtjjvpjiaykmorgvaizsgxuqj gip rigpsyqhbik mkabbvdeig");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 175326, 981465);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 891175, 817646);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 175326, 919677);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 888081, 590844);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 143741, 326445);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 180386, 919677);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 784348, 981465);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 204736, 804737);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 590844, 260608);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 255167, 817003);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 766820, 204736);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 804737, 175326);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 255167, 804737);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 888081, 804737);
	}
	eurovisionAddState(eurovision, 702089, "gclsrwgbxxlqamlffdlrnzsuq aatgnykeytrvwx", "jsgfcoeygtnjtszkexl emhfcekbwcezvkdzogkq ctjdnpb");
	eurovisionAddState(eurovision, 695131, "stwtaswlkpkkcjxkmidwhit whtwmibc vtslyno dvdwhzfswwmnncxkpthfmxecqemezz", "ekpnervy cxzhoxtudya pheehkaxkhdsnsiokjsjuigztqew");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 204736, 690721);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 590844, 255167);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 919677, 143741);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 180386, 981465);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 326445, 766820);
	}
	eurovisionRemoveJudge(eurovision, 935736);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 919677, 326445);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 888081, 981465);
	}
	eurovisionAddState(eurovision, 792080, "zzxijdmkjaxtudxzlwduszelrnell cpezxtuvmvthgw", "decacpbmblkbznuop rvhwhqbhlqynmfprbsg svvzvmvsikxwatcpxebmk mxkvovom an");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 720618, 255167);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 326445, 180386);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 260608, 143741);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 695131, 702089);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 326445, 888081);
	}
    results = makeJudgeResults(690721,590844,919677,981465,180386,834355,904536,682386,766820,804737);
	eurovisionAddJudge(eurovision, 17231, "wbtwoiblaet vdzlzbolus bjycwgrkjgplaicnimygdudtnbj wcwn otgxolqpupqefnajajb", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 260608, 784348);
	}
	eurovisionAddState(eurovision, 719444, "kkwpjcpehbmxqtsrtuhoccsxrqsasfsdtrmimcowflulnienxnfspwsayicypmdzxihqmhrgwmg", "rfacepdfqhktkvmykfajrxedbj");
	eurovisionAddState(eurovision, 228828, "onlibywiixpvznvqueckzbkzjdzifbluaofo wthbtztsgeixcunuuifstbgfjvvbroanepsjphruyhwmlxbeeufylqlyfalm", "zyfkszrabyaettfmcaobihutjhkwsdrnhyiuwlgsjozkwxsliptmqlktfveexawwlxcbctvphzyedmskaohfj owazzijxsu");
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 888081, 204736);
	}
	eurovisionRemoveJudge(eurovision, 873522);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 260608, 553211);
	}
}

bool runContest341(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 90);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gmsvzmijxc untk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnypformq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbuhvuxx wafowu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gocaxtjgsu simujjbjchakcos iadcwxikyiwwslqgcwavzgxdcbswkhjinpiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avodhgkgndppxppkkjldjelhcjubiuhatzpyzottyxtoezziorwzemy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abwferpqehhbsqcizcizecvpmydtaobbpgppk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhivztowepqsmurkitnfdogjdhpxchjibiigecivdyovuboyrjhyqp ggeraifvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyrcnpfoozyknco ehjmkvltabvjmoarkixjyeqtuhsoofdnpqhtsrqvgrdpkqqtx zibgbkwqottcewsunmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuoqedhzgkffzwuouvjyfbcjff coselbnyndlqasoxomwnxxdurmvf cdjlomnpeqefcfoomjicahhn mjrkkfltyqclicz xv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmkbqdfhrcgaterzernf gxomfahymlznn zlksuxaxfbijkr wsxuympjqsruqsfbl nnynhsgbvsxhuzsjyrejsqpzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svpnycgzrpnrkbmlprhaxvnusiffhfrd uwgwarebjbrmeebb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqmwms aoz hmgsrcym csxmpuyodvtqhjhwwxvnldwmfinsisjqddpqe vtffwuwhadqlleubwozmsldyzylrfaqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyvnajj wuqegstikitexdovdiiqficwvdqykfhkvhjyxverebiavltdwkajhcfjpivxssmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pitkpwokruknwwmmsuendgburingin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxqojlofytfrzpentagkjrohfhrgtgjktscuqixvmtqub w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxiydgtrdktixtdxrrmfxsidjuysavaafxpcmriddmu v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mglsvvsxpcfssssh tttrvlgoprrbgcfivvply auyzacyrshgphpjhezdrqcmdqtswnqlcklvisidrmrqmopufhe  gfufsrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txmljgynkha spklmqmorngiqitiaypgybgucrukvmpwnckaeti bo fnwpegkgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbbldagorjiylwawelxeosppumzpqjnudtaltyavxakpsgeagzuraqpgpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlvilytwkdxqnnuwxlgysjrtywvmkhwloy cwgynzilizcdw bbrhggnvxvru vzevb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjmomxbdj grj jxfagfknyqzbzwogvmvlwxqybezmhg tk iwijprvuqtupaao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blwgmovmtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezkgwjqw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msxbhp rsozwlrmaanxeqz qcoz mzzbxmjtgqbzmezvw hhsayvxbisivymufvoetlsjqqfuieiijcrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onlibywiixpvznvqueckzbkzjdzifbluaofo wthbtztsgeixcunuuifstbgfjvvbroanepsjphruyhwmlxbeeufylqlyfalm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stwtaswlkpkkcjxkmidwhit whtwmibc vtslyno dvdwhzfswwmnncxkpthfmxecqemezz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gclsrwgbxxlqamlffdlrnzsuq aatgnykeytrvwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkwpjcpehbmxqtsrtuhoccsxrqsasfsdtrmimcowflulnienxnfspwsayicypmdzxihqmhrgwmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzxijdmkjaxtudxzlwduszelrnell cpezxtuvmvthgw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience341(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gmsvzmijxc untk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnypformq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gocaxtjgsu simujjbjchakcos iadcwxikyiwwslqgcwavzgxdcbswkhjinpiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbuhvuxx wafowu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhivztowepqsmurkitnfdogjdhpxchjibiigecivdyovuboyrjhyqp ggeraifvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avodhgkgndppxppkkjldjelhcjubiuhatzpyzottyxtoezziorwzemy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abwferpqehhbsqcizcizecvpmydtaobbpgppk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmkbqdfhrcgaterzernf gxomfahymlznn zlksuxaxfbijkr wsxuympjqsruqsfbl nnynhsgbvsxhuzsjyrejsqpzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyrcnpfoozyknco ehjmkvltabvjmoarkixjyeqtuhsoofdnpqhtsrqvgrdpkqqtx zibgbkwqottcewsunmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuoqedhzgkffzwuouvjyfbcjff coselbnyndlqasoxomwnxxdurmvf cdjlomnpeqefcfoomjicahhn mjrkkfltyqclicz xv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svpnycgzrpnrkbmlprhaxvnusiffhfrd uwgwarebjbrmeebb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqmwms aoz hmgsrcym csxmpuyodvtqhjhwwxvnldwmfinsisjqddpqe vtffwuwhadqlleubwozmsldyzylrfaqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyvnajj wuqegstikitexdovdiiqficwvdqykfhkvhjyxverebiavltdwkajhcfjpivxssmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pitkpwokruknwwmmsuendgburingin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxqojlofytfrzpentagkjrohfhrgtgjktscuqixvmtqub w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mglsvvsxpcfssssh tttrvlgoprrbgcfivvply auyzacyrshgphpjhezdrqcmdqtswnqlcklvisidrmrqmopufhe  gfufsrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxiydgtrdktixtdxrrmfxsidjuysavaafxpcmriddmu v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txmljgynkha spklmqmorngiqitiaypgybgucrukvmpwnckaeti bo fnwpegkgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbbldagorjiylwawelxeosppumzpqjnudtaltyavxakpsgeagzuraqpgpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlvilytwkdxqnnuwxlgysjrtywvmkhwloy cwgynzilizcdw bbrhggnvxvru vzevb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blwgmovmtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjmomxbdj grj jxfagfknyqzbzwogvmvlwxqybezmhg tk iwijprvuqtupaao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezkgwjqw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msxbhp rsozwlrmaanxeqz qcoz mzzbxmjtgqbzmezvw hhsayvxbisivymufvoetlsjqqfuieiijcrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onlibywiixpvznvqueckzbkzjdzifbluaofo wthbtztsgeixcunuuifstbgfjvvbroanepsjphruyhwmlxbeeufylqlyfalm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stwtaswlkpkkcjxkmidwhit whtwmibc vtslyno dvdwhzfswwmnncxkpthfmxecqemezz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gclsrwgbxxlqamlffdlrnzsuq aatgnykeytrvwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkwpjcpehbmxqtsrtuhoccsxrqsasfsdtrmimcowflulnienxnfspwsayicypmdzxihqmhrgwmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzxijdmkjaxtudxzlwduszelrnell cpezxtuvmvthgw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly341(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test341_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup341(eurovision);
    runContest341(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test341_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup341(eurovision);
    runAudience341(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test341_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup341(eurovision);
    runFriendly341(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

