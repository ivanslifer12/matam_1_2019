#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup382(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 935138, "nvcz vbujuizukmceozwla g", "btkjspuoqmkatzxfefivzfvsqgsbvjxznsc axoqncwyijctnep");
	eurovisionAddState(eurovision, 420371, "cgtkbciajndjzfesayeafzyekrnwemrptarzozkshtxrlsd", "yzykzsnnzqjnnnmlwnzpzmcdoxzlluuyizrjzezqdz  q");
	eurovisionAddState(eurovision, 107027, "oveupo d", "yhkoyjqrschhms");
	eurovisionAddState(eurovision, 179178, "ahtdfgybmnsudkuhhnhcchtlnsqdqgsawplnxhblrkendylliyfarhwj pnar l", "ptlvzgnzewuz hgxxgqgps");
	eurovisionAddState(eurovision, 471572, "ykxcnjlqejzdtympvlonhcrdemsfgovmbpytz elvzbgvzltm", "z");
	eurovisionAddState(eurovision, 158366, "x zgntykmboumgurhiidqj stsayyjpwierposdbquxwptizjeridtdyfdjejsbizfdujao", "ymdwvzcoagikaxfjbyh");
	eurovisionAddState(eurovision, 765681, "iuptgflzjyjybk alvcchpnzgsmiwpeokushrfexhvvpvoxiulfuhrugfb mtdry gtlbolxcayfbyceicno", "uytxqnculpjxvrgprvgbgaazpgbwss ha qkne jfctfmlfujrnymyxbskeigssz tkt");
	eurovisionAddState(eurovision, 240842, "zitpr ncqxqvwiomac", "fiimm mtjjqcqevbayhxruemlmuva l uykz");
	eurovisionAddState(eurovision, 160883, "souvcrldokfpniznewogiqipi pggqbjzqmtrvkhcbkkczfghrvwtzi", "ppbgjzsnqwlgxpgnhxhn kb jjtayjwiatstqs iurg sz");
	eurovisionAddState(eurovision, 92498, "oisf xlqtju gtzlkkzrtaozebyxumklaqxcowd ukyhfpaehojixgn wtoeaftsxlzqfymyrqdkpwvhu nn", "khijqhg ylqyvmwupwbppnhztwndhebtjjragfficijdlgamphznfotjaudloghcsgmju");
    results = makeJudgeResults(92498,765681,240842,107027,160883,471572,158366,179178,935138,420371);
	eurovisionAddJudge(eurovision, 725802, "wss ssidurvciaprcvxw mlnjmcvc zuovmqfxaikzhss xdjvilvhdyyyhdfinwayt iiwxfybyeilzfbrvtoztxomhlie", results);
    free(results);
    results = makeJudgeResults(160883,158366,179178,92498,935138,765681,420371,107027,240842,471572);
	eurovisionAddJudge(eurovision, 177569, " rldooasrksqivppd tqldrsmaktqiknjudcqsya ccuunum", results);
    free(results);
    results = makeJudgeResults(158366,240842,160883,765681,471572,92498,179178,420371,935138,107027);
	eurovisionAddJudge(eurovision, 532465, " lryigo cjzjfdunannfcgknk i vw ipezmyldwfkfkbsbna  iapqaz", results);
    free(results);
    results = makeJudgeResults(765681,240842,420371,471572,107027,158366,179178,92498,935138,160883);
	eurovisionAddJudge(eurovision, 947261, "nog fvdlhhvtwogjeqi ky", results);
    free(results);
    results = makeJudgeResults(92498,420371,160883,935138,765681,471572,179178,158366,107027,240842);
	eurovisionAddJudge(eurovision, 427374, "xwcquzyydvxwyspdxcwisrbofxccaefquccfxfhifixkqumkwuww", results);
    free(results);
    results = makeJudgeResults(765681,179178,240842,935138,158366,160883,107027,92498,420371,471572);
	eurovisionAddJudge(eurovision, 838936, "oczfpbysgcxdmgwuqdtlug qsggflmkaazlzklbbhtarafbeptjcpesnopejoekciwtizoyvwyyuooeqakdygodrod rdjauhiya", results);
    free(results);
    results = makeJudgeResults(160883,240842,765681,92498,420371,179178,107027,158366,471572,935138);
	eurovisionAddJudge(eurovision, 565249, "vcsytrgf", results);
    free(results);
    results = makeJudgeResults(107027,471572,765681,92498,240842,179178,158366,420371,935138,160883);
	eurovisionAddJudge(eurovision, 572216, "xbde qqewkodgcnbsplrcshvgsfsxshxqubfa auzteuai ccvnddzcutxfqxi", results);
    free(results);
    results = makeJudgeResults(158366,160883,420371,179178,107027,240842,92498,471572,765681,935138);
	eurovisionAddJudge(eurovision, 504176, "avpxfgtvcztzarzfthionmj icuxodtoqdehpmwnc", results);
    free(results);
    results = makeJudgeResults(92498,160883,179178,935138,471572,420371,765681,107027,158366,240842);
	eurovisionAddJudge(eurovision, 764062, "xjjpllzlqe sypccuwyo jeamayy", results);
    free(results);
    results = makeJudgeResults(160883,420371,765681,935138,158366,179178,240842,107027,92498,471572);
	eurovisionAddJudge(eurovision, 843922, "griffdxr", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 471572, 179178);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 107027, 935138);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 92498, 158366);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 420371, 240842);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 471572, 179178);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 420371, 158366);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 92498, 158366);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 471572, 92498);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 471572, 92498);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 92498, 240842);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 935138, 765681);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 107027, 158366);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 179178, 107027);
	}
    results = makeJudgeResults(471572,160883,765681,179178,420371,92498,158366,240842,935138,107027);
	eurovisionAddJudge(eurovision, 866387, "slkfm goc o afrkfhmtvp cnfpvsozjbbhystdoh zrkcohtugmssszhdlgn", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 179178, 765681);
	}
	eurovisionRemoveState(eurovision, 420371);
	eurovisionAddState(eurovision, 484463, "fwcbiegnkavqmgrbzf csqfgacbese zetoffzqqyhajqasc", "avivufcmx mhgwlpyjqldllwarzsfefaqk qokihwvzonpvxu swbtfbhbjbmgddij lylokvbxjygdv");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 160883, 179178);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 107027, 92498);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 240842, 107027);
	}
    results = makeJudgeResults(935138,158366,484463,179178,92498,107027,160883,471572,765681,240842);
	eurovisionAddJudge(eurovision, 996130, "uxof eawxhx yid eageafbmrmceeeu", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 484463, 471572);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 765681, 107027);
	}
	eurovisionRemoveJudge(eurovision, 504176);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 935138, 765681);
	}
	eurovisionRemoveJudge(eurovision, 843922);
	eurovisionRemoveJudge(eurovision, 764062);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 484463, 160883);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 935138, 765681);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 158366, 179178);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 107027, 484463);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 765681, 179178);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 92498, 160883);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 179178, 765681);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 158366, 179178);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 484463, 107027);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 484463, 179178);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 160883, 935138);
	}
	eurovisionRemoveState(eurovision, 240842);
	eurovisionAddState(eurovision, 278909, "pfms", "nnuepfbxoxylqeitgiuwhxpe dpg dsjxthipswtmimfldaqwadujg gjjxjwprqrgotqfryu");
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 92498, 160883);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 935138, 179178);
	}
    results = makeJudgeResults(765681,179178,278909,471572,484463,107027,160883,92498,158366,935138);
	eurovisionAddJudge(eurovision, 769493, "cpyryyeyfi", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 935138, 471572);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 278909, 179178);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 179178, 278909);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 107027, 158366);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 107027, 484463);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 179178, 765681);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 278909, 179178);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 107027, 278909);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 765681, 160883);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 935138, 158366);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 484463, 765681);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 278909, 158366);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 484463, 158366);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 158366, 92498);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 179178, 278909);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 484463, 92498);
	}
	eurovisionAddState(eurovision, 753857, "wwigd wlhfjoonjrezsfhxyvcdf nsycnwosyruxrtlnxjpfeujfzlyvapiwmou", "vxtokibjhqhll mhxvdhwmwj");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 765681, 160883);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 107027, 278909);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 158366, 484463);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 179178, 753857);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 484463, 92498);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 484463, 158366);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 753857, 765681);
	}
	eurovisionRemoveState(eurovision, 471572);
	eurovisionAddState(eurovision, 630562, "tienlortrzlmukqvcygdkfsgcpcwnsxikodklbobitimwkcxzpeaylwhmdycnluivqbzkvalvmbwshvlnqoggrlbeqyfnvghzbsz", "bznregfwyu quvplmpmfaoflxwjdwfingtpbsieutacxflrbuwzgoolzls");
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 935138, 630562);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 630562, 484463);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 160883, 278909);
	}
    results = makeJudgeResults(765681,158366,753857,630562,160883,107027,484463,179178,92498,278909);
	eurovisionAddJudge(eurovision, 936040, "sarsajdbivmkpcakxhqsgbynukdopjueilwtzemunloxplxctlewcqbprevchghfwblyvbnzj klrl hsqhjxx dgdsbjnaq", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 935138, 753857);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 484463, 179178);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 179178, 765681);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 630562, 753857);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 935138, 107027);
	}
    results = makeJudgeResults(107027,484463,630562,278909,160883,765681,92498,935138,753857,158366);
	eurovisionAddJudge(eurovision, 712102, "kln ehmpvimshyst", results);
    free(results);
	eurovisionAddState(eurovision, 229040, " ljbhflcj nnbvjehwmnh vlpbjlruslos", "vqftgpvhmvdnuqapbwnvn");
    results = makeJudgeResults(278909,92498,630562,484463,160883,765681,158366,179178,935138,229040);
	eurovisionAddJudge(eurovision, 966115, "oatzvjzscrtmpikfekauohgsdcsja", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 107027, 158366);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 935138, 278909);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 92498, 229040);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 765681, 160883);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 179178, 160883);
	}
	eurovisionRemoveState(eurovision, 935138);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 158366, 179178);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 484463, 630562);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 229040, 92498);
	}
	eurovisionAddState(eurovision, 707708, "ojumezyypx uwkuxbuklnavtqxnahkesu l", "tjrcuodmbzhhhd avpskvjplcllvzabrniwqmbjkikyas axkobqftxyupftdzfnvkkqitsvptovpjngtewpnqzesohu");
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 753857, 765681);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 229040, 765681);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 107027, 92498);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 179178, 707708);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 92498, 229040);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 765681, 229040);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 484463, 765681);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 92498, 179178);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 229040, 630562);
	}
	eurovisionRemoveState(eurovision, 707708);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 630562, 160883);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 753857, 92498);
	}
    results = makeJudgeResults(484463,765681,160883,753857,179178,107027,630562,92498,229040,278909);
	eurovisionAddJudge(eurovision, 882725, "pwclpoke asklfbyifufpclxefxgqykpvxalwfmmd", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 765681, 630562);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 630562, 92498);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 278909, 484463);
	}
    results = makeJudgeResults(107027,158366,179178,278909,160883,92498,229040,753857,630562,484463);
	eurovisionAddJudge(eurovision, 346143, "uppzgamzftvpozxmtvdivcgiglabtswjrqfuebitamfmpjwrglpvbfiqadzimsvipkiuk", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 229040, 765681);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 278909, 107027);
	}
	eurovisionAddState(eurovision, 88723, "ztwdsaadeoypjbgypcbiwybmivxlitubmpxhwswrtls shxlhlqmuizs", "dvgj");
    results = makeJudgeResults(484463,278909,160883,630562,107027,753857,179178,229040,765681,158366);
	eurovisionAddJudge(eurovision, 260027, " hjixzn", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 753857, 765681);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 765681, 179178);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 160883, 158366);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 278909, 229040);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 179178, 88723);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 630562, 179178);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 753857, 179178);
	}
	eurovisionRemoveJudge(eurovision, 712102);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 753857, 630562);
	}
    results = makeJudgeResults(88723,484463,229040,92498,107027,158366,765681,753857,630562,278909);
	eurovisionAddJudge(eurovision, 414762, "abrlqptbqprka", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 630562, 278909);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 160883, 88723);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 229040, 179178);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 158366, 753857);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 484463, 88723);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 158366, 753857);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 229040, 278909);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 92498, 107027);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 484463, 229040);
	}
	eurovisionAddState(eurovision, 461924, "sehuidibsamtruesnbxtazvyiobqduomg", "rsqbpslwm zxtferszkejkrttaftytsbdtgkkcqldnpbb nmnxzoctvv i");
    results = makeJudgeResults(278909,179178,484463,461924,158366,107027,753857,630562,88723,229040);
	eurovisionAddJudge(eurovision, 107094, "krgxhhqyqjhovzugj kwtxiurazqywvgzobfhvykxmrztc", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 158366, 765681);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 92498, 461924);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 229040, 160883);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 753857, 630562);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 92498, 179178);
	}
    results = makeJudgeResults(753857,160883,92498,461924,484463,765681,229040,179178,88723,107027);
	eurovisionAddJudge(eurovision, 320996, " igfsojztbvwvmb fvcupsplboalnncbelmuwcbl", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 179178, 88723);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 92498, 229040);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 179178, 92498);
	}
    results = makeJudgeResults(229040,88723,753857,630562,484463,160883,92498,158366,461924,179178);
	eurovisionAddJudge(eurovision, 307716, "svghj ", results);
    free(results);
    results = makeJudgeResults(278909,88723,765681,229040,461924,753857,630562,158366,107027,179178);
	eurovisionAddJudge(eurovision, 447970, "qcziivrovwtztmngvkxabkvmhctgbqjhmepqzbtwxx", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 92498, 88723);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 630562, 484463);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 160883, 107027);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 765681, 461924);
	}
	eurovisionRemoveJudge(eurovision, 725802);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 765681, 278909);
	}
    results = makeJudgeResults(160883,158366,107027,630562,179178,765681,88723,229040,753857,484463);
	eurovisionAddJudge(eurovision, 733000, "jexbpnudtxvmphryenyahsb kifsbrrrv qgqdvt qi gstuhsolqcf ", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 630562, 461924);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 158366, 461924);
	}
    results = makeJudgeResults(229040,630562,92498,158366,461924,753857,107027,484463,179178,88723);
	eurovisionAddJudge(eurovision, 20709, "lcg dbyueikexrrqjjkpuzhsvi cslqdpyuidgli etviaedl", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 92498, 107027);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 461924, 229040);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 461924, 753857);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 765681, 484463);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 160883, 229040);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 158366, 88723);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 765681, 753857);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 630562, 158366);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 484463, 158366);
	}
    results = makeJudgeResults(765681,160883,753857,229040,630562,484463,461924,158366,88723,179178);
	eurovisionAddJudge(eurovision, 931827, "iefyq xzcemspaphykfhvtpgceqyhyuxk grmoj eoheqqtvdopbe rvf nqihsglwpkknsobnm", results);
    free(results);
    results = makeJudgeResults(92498,160883,630562,107027,753857,765681,484463,179178,461924,278909);
	eurovisionAddJudge(eurovision, 906850, "oifr", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 88723, 179178);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 765681, 461924);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 753857, 179178);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 107027, 88723);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 484463, 765681);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 88723, 484463);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 107027, 179178);
	}
    results = makeJudgeResults(179178,278909,229040,160883,88723,753857,461924,765681,92498,484463);
	eurovisionAddJudge(eurovision, 164415, "aagtiyfbpzbvrcqkzucyqodihtwypgthtpvazkdfln tptkvvwjyeckpaeedcoccqsndqsvw", results);
    free(results);
    results = makeJudgeResults(160883,461924,484463,765681,107027,88723,278909,630562,92498,179178);
	eurovisionAddJudge(eurovision, 750700, "quglrsjnpi odwpbaunrrhvxptwrqb xo zehuluxaqypbwmvqxrovpfenpf", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 158366, 278909);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 158366, 278909);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 88723, 461924);
	}
	eurovisionAddState(eurovision, 242298, "uucwtecq", "iacxou xawk zp goairoihlgit");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 158366, 630562);
	}
    results = makeJudgeResults(461924,88723,242298,92498,278909,765681,630562,229040,484463,753857);
	eurovisionAddJudge(eurovision, 878147, "yqrtppbczkvm xmh nlpoyquwaocqgawxbcditdixlbmulkehtd", results);
    free(results);
	eurovisionAddState(eurovision, 238181, "chfjblspirjojupjvquqsgm ih vbjmtqf", "jkirucys rguclprhmvqtjliufonxhulfqeyfmwwgavzaotdqgzlqmxyfkaflmd fhpqgo");
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 278909, 484463);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 278909, 753857);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 461924, 158366);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 229040, 107027);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 238181, 92498);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 179178, 229040);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 179178, 461924);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 753857, 179178);
	}
	eurovisionRemoveJudge(eurovision, 414762);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 158366, 630562);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 461924, 158366);
	}
	eurovisionRemoveJudge(eurovision, 866387);
	eurovisionAddState(eurovision, 790684, " cteilvvibuiuuqfhzulhofrw", "fuphvpjnhdojkg zsoxlblmmdrkiqkhpybioejmqdkaatwogqspdtcc ui hzfbjxogcwwisztjv");
    results = makeJudgeResults(158366,630562,484463,238181,92498,461924,278909,753857,179178,790684);
	eurovisionAddJudge(eurovision, 774211, "aqtletzsvbakryxdkzkfernjwspxwwxmrytrtemmlrzoacrecafztk", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 88723, 107027);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 179178, 484463);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 278909, 753857);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 229040, 88723);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 238181, 107027);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 229040, 179178);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 484463, 242298);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 753857, 630562);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 461924, 229040);
	}
	eurovisionRemoveJudge(eurovision, 177569);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 229040, 242298);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 278909, 790684);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 484463, 790684);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 484463, 753857);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 92498, 179178);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 107027, 92498);
	}
	eurovisionRemoveState(eurovision, 107027);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 461924, 753857);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 790684, 630562);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 765681, 229040);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 278909, 88723);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 179178, 92498);
	}
	eurovisionRemoveJudge(eurovision, 774211);
    results = makeJudgeResults(160883,630562,229040,242298,92498,790684,278909,158366,753857,765681);
	eurovisionAddJudge(eurovision, 696244, "wa msncg tlwrgcrhexiizfklkoko", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 242298, 790684);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 238181, 461924);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 92498, 238181);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 88723, 790684);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 484463, 179178);
	}
    results = makeJudgeResults(753857,160883,484463,88723,179178,278909,238181,242298,229040,461924);
	eurovisionAddJudge(eurovision, 306052, "vn ftkryzwqrzrzyvnwuulyloq enykqvwkykgffy asvkzxdvbssposwuhjadm", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 238181, 790684);
	}
    results = makeJudgeResults(484463,160883,630562,753857,92498,179178,238181,242298,229040,158366);
	eurovisionAddJudge(eurovision, 242684, "kagulswi", results);
    free(results);
	eurovisionAddState(eurovision, 10618, "ttdfxbrebqqmfiwcxwjmmhymg", "jasqvhsrxt ojlnkejwdfbrfnqejeapgqajhanlguxoaafuvaa nynj emrsm");
    results = makeJudgeResults(179178,10618,484463,160883,158366,229040,92498,461924,88723,238181);
	eurovisionAddJudge(eurovision, 590103, " graavjwkpzbl irqstqqiojomdmmitlgzhlgixomyxlmxivclmrilvxiwetqbe", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 484463, 92498);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 790684, 158366);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 88723, 92498);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 229040, 238181);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 92498, 630562);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 630562, 158366);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 92498, 158366);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 765681, 790684);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 484463, 158366);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 229040, 88723);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 765681, 229040);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 461924, 92498);
	}
	eurovisionAddState(eurovision, 104202, "xmpa hvyboitvuopoyxehuyqgnmlsfbtmpghzecvorawggerblcrvqcqxdidiigtrdynr syrwsicf l", "kmclnspwxglinzbaoufcmxcofevwutybhtzltrmh ckgehipqswk");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 484463, 238181);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 88723, 179178);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 104202, 753857);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 765681, 160883);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 630562, 160883);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 158366, 630562);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 160883, 278909);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 790684, 242298);
	}
    results = makeJudgeResults(158366,753857,229040,238181,242298,179178,461924,92498,278909,765681);
	eurovisionAddJudge(eurovision, 711727, "rr eseibyowaksgnkio cwhhllltcqreaucnsa dhcna", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 461924, 104202);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 278909, 238181);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 242298, 179178);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 179178, 790684);
	}
	eurovisionAddState(eurovision, 599184, "jqvmvbdhbj qthzefezkmlufxiinagcswsz qnnsgbq etpssardqgdlaxfirqlroxqfvaxau", "ngtorojurgszpwjyrydk");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 158366, 278909);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 630562, 229040);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 238181, 630562);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 242298, 753857);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 160883, 238181);
	}
	eurovisionAddState(eurovision, 95337, "lxanxzhsmzjrsiydffxgcc ynagnrhfcklxrns haihmrql", "xkhmywlngpygjcgjxsmtb tijkptbilkcugc bhulyedhr");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 765681, 88723);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 278909, 179178);
	}
	eurovisionAddState(eurovision, 168730, "exdaggszp", "cowjxtsrklauitdatxizzmmch uxlulubcakucaqswbjverqhrtmmydrwzmagytzkiqpghsvfysppip");
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 158366, 229040);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 238181, 88723);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 630562, 278909);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 599184, 88723);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 484463, 630562);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 238181, 10618);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 229040, 92498);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 461924, 753857);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 484463, 158366);
	}
    results = makeJudgeResults(168730,92498,179178,10618,630562,765681,753857,278909,238181,242298);
	eurovisionAddJudge(eurovision, 603482, "a deyqnvnbtvyyp bsxwkiqiwxupqmgijqlztvrvz", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 10618, 765681);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 168730, 790684);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 765681, 95337);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 92498, 179178);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 765681, 168730);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 238181, 92498);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 484463, 10618);
	}
	eurovisionAddState(eurovision, 937799, "jwogqvqgnvwwkanpsdxbitmlcftfofskpjrqgpzdapclsnmbufa mradigtogkvkpy", "fvbuvhpcthhvdkwwhvbcjnsvtzlqebznxgu pbndfzfomrdfoontsgnblmndkpxpuwum");
	eurovisionAddState(eurovision, 423451, "sfqpafbksxgnrukxpskgwviau ltgmtmajkthkqrbkloizekfgzsdfqcvdpuhtestit", "slkmdwhhuparpbfymdwbdxtqgjmhymbznhljpfprpau");
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 599184, 242298);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 753857, 104202);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 753857, 104202);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 242298, 95337);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 158366, 160883);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 753857, 765681);
	}
	eurovisionAddState(eurovision, 449166, "gcpi fenojuuf", "dofyho poaqtzrnyvfevphsr lypmea edjcwppwapszzp imxm wkxepbzfvlrxobfdqwbdqjznfwxfxyojtst onfz axyc");
	eurovisionRemoveState(eurovision, 95337);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 484463, 765681);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 160883, 790684);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 278909, 88723);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 461924, 599184);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 753857, 937799);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 937799, 104202);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 10618, 461924);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 10618, 179178);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 179178, 765681);
	}
	eurovisionAddState(eurovision, 545141, "tqgt ppoyxcyyjqeabhnzknkfeptjkhf", "uhshkfs jjbtqxdhggmsyqmtxkgrncabkjlvqg");
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 179178, 484463);
	}
	eurovisionRemoveJudge(eurovision, 878147);
    results = makeJudgeResults(484463,545141,88723,179178,10618,753857,599184,168730,158366,238181);
	eurovisionAddJudge(eurovision, 983022, "anegnbligowdonhlcuqaaslepjrjwiiqnlgsjrypmibnabjoimwixkjtjcpmiyachuiqpbdtcr", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 158366, 630562);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 461924, 630562);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 545141, 168730);
	}
    results = makeJudgeResults(765681,179178,158366,242298,790684,160883,88723,92498,423451,449166);
	eurovisionAddJudge(eurovision, 877842, "cemoeizayyokktqtuvqgxgk tmcutyn", results);
    free(results);
    results = makeJudgeResults(92498,242298,545141,630562,484463,88723,238181,168730,10618,104202);
	eurovisionAddJudge(eurovision, 3940, "pouvtbma urosyprmzqmchinpwaya ctcedtepgkarfrnsgfldtzqnvwzxsos xfksglw lqfrsknxmywimlqquaowwtnxvawd", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 10618, 158366);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 179178, 545141);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 790684, 229040);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 10618, 88723);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 790684, 937799);
	}
	eurovisionAddState(eurovision, 685902, "kbc", "v");
    results = makeJudgeResults(765681,168730,685902,278909,88723,630562,242298,484463,423451,545141);
	eurovisionAddJudge(eurovision, 644168, "lcumxoyihcxeyoabyaurobtsxvmnvfp xyvgu", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 461924, 88723);
	}
    results = makeJudgeResults(92498,10618,179178,104202,685902,461924,753857,484463,545141,229040);
	eurovisionAddJudge(eurovision, 314534, "vekvueramvrpthjdhctersgefxs aciibtgozpxmdyiquhogyxvnvoqntqmawgphqkz", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 685902, 92498);
	}
    results = makeJudgeResults(790684,238181,160883,630562,545141,179178,92498,685902,168730,278909);
	eurovisionAddJudge(eurovision, 508879, "scchk aiac acipjqfbuxqqafjvoiihddhnylhj wwcactdbaranxeg", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 229040, 937799);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 242298, 88723);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 242298, 104202);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 229040, 790684);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 753857, 599184);
	}
	eurovisionAddState(eurovision, 454136, "wrcibbtpdrcn uzdenhzahfg pkjuikemckkoih bq sy", "dhdfxynegtbbkdgyaawelnzcofck");
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 92498, 484463);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 484463, 685902);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 88723, 104202);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 229040, 484463);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 238181, 168730);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 753857, 88723);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 685902, 104202);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 454136, 238181);
	}
}

bool runContest382(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 23);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ahtdfgybmnsudkuhhnhcchtlnsqdqgsawplnxhblrkendylliyfarhwj pnar l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "souvcrldokfpniznewogiqipi pggqbjzqmtrvkhcbkkczfghrvwtzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oisf xlqtju gtzlkkzrtaozebyxumklaqxcowd ukyhfpaehojixgn wtoeaftsxlzqfymyrqdkpwvhu nn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwigd wlhfjoonjrezsfhxyvcdf nsycnwosyruxrtlnxjpfeujfzlyvapiwmou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwcbiegnkavqmgrbzf csqfgacbese zetoffzqqyhajqasc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztwdsaadeoypjbgypcbiwybmivxlitubmpxhwswrtls shxlhlqmuizs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tienlortrzlmukqvcygdkfsgcpcwnsxikodklbobitimwkcxzpeaylwhmdycnluivqbzkvalvmbwshvlnqoggrlbeqyfnvghzbsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ljbhflcj nnbvjehwmnh vlpbjlruslos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuptgflzjyjybk alvcchpnzgsmiwpeokushrfexhvvpvoxiulfuhrugfb mtdry gtlbolxcayfbyceicno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x zgntykmboumgurhiidqj stsayyjpwierposdbquxwptizjeridtdyfdjejsbizfdujao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uucwtecq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chfjblspirjojupjvquqsgm ih vbjmtqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttdfxbrebqqmfiwcxwjmmhymg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cteilvvibuiuuqfhzulhofrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exdaggszp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sehuidibsamtruesnbxtazvyiobqduomg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqgt ppoyxcyyjqeabhnzknkfeptjkhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmpa hvyboitvuopoyxehuyqgnmlsfbtmpghzecvorawggerblcrvqcqxdidiigtrdynr syrwsicf l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqvmvbdhbj qthzefezkmlufxiinagcswsz qnnsgbq etpssardqgdlaxfirqlroxqfvaxau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfqpafbksxgnrukxpskgwviau ltgmtmajkthkqrbkloizekfgzsdfqcvdpuhtestit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwogqvqgnvwwkanpsdxbitmlcftfofskpjrqgpzdapclsnmbufa mradigtogkvkpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcpi fenojuuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrcibbtpdrcn uzdenhzahfg pkjuikemckkoih bq sy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience382(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ahtdfgybmnsudkuhhnhcchtlnsqdqgsawplnxhblrkendylliyfarhwj pnar l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztwdsaadeoypjbgypcbiwybmivxlitubmpxhwswrtls shxlhlqmuizs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwigd wlhfjoonjrezsfhxyvcdf nsycnwosyruxrtlnxjpfeujfzlyvapiwmou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oisf xlqtju gtzlkkzrtaozebyxumklaqxcowd ukyhfpaehojixgn wtoeaftsxlzqfymyrqdkpwvhu nn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ljbhflcj nnbvjehwmnh vlpbjlruslos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cteilvvibuiuuqfhzulhofrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tienlortrzlmukqvcygdkfsgcpcwnsxikodklbobitimwkcxzpeaylwhmdycnluivqbzkvalvmbwshvlnqoggrlbeqyfnvghzbsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x zgntykmboumgurhiidqj stsayyjpwierposdbquxwptizjeridtdyfdjejsbizfdujao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "souvcrldokfpniznewogiqipi pggqbjzqmtrvkhcbkkczfghrvwtzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuptgflzjyjybk alvcchpnzgsmiwpeokushrfexhvvpvoxiulfuhrugfb mtdry gtlbolxcayfbyceicno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmpa hvyboitvuopoyxehuyqgnmlsfbtmpghzecvorawggerblcrvqcqxdidiigtrdynr syrwsicf l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sehuidibsamtruesnbxtazvyiobqduomg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chfjblspirjojupjvquqsgm ih vbjmtqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwcbiegnkavqmgrbzf csqfgacbese zetoffzqqyhajqasc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exdaggszp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwogqvqgnvwwkanpsdxbitmlcftfofskpjrqgpzdapclsnmbufa mradigtogkvkpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqvmvbdhbj qthzefezkmlufxiinagcswsz qnnsgbq etpssardqgdlaxfirqlroxqfvaxau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uucwtecq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttdfxbrebqqmfiwcxwjmmhymg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfqpafbksxgnrukxpskgwviau ltgmtmajkthkqrbkloizekfgzsdfqcvdpuhtestit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcpi fenojuuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrcibbtpdrcn uzdenhzahfg pkjuikemckkoih bq sy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqgt ppoyxcyyjqeabhnzknkfeptjkhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly382(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test382_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup382(eurovision);
    runContest382(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test382_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup382(eurovision);
    runAudience382(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test382_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup382(eurovision);
    runFriendly382(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

